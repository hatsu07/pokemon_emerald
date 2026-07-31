@ ---------------------------------------------------------------------------
@ GF ROM-header serialization macros
@
@ These macros emit the exact field order expected by external link software.
@ Keep them as data-only macros: labels and size assertions belong at the call
@ site so the resulting ROM layout remains easy to inspect.
@ ---------------------------------------------------------------------------

.ifndef GUARD_ASM_MACROS_GF_ROM_HEADER_INC
.set GUARD_ASM_MACROS_GF_ROM_HEADER_INC, 1

@ Emit the three 32-bit values describing link-related save flags.
@
@ u32 SaveBlock2::gcnLinkFlags offset
@ u32 game-clear system flag ID
@ u32 ribbon-obtained system flag ID
.macro gf_rom_header_game_flags
	.4byte SAVE_BLOCK2_GCN_LINK_FLAGS_OFFSET
	.4byte FLAG_SYS_GAME_CLEAR
	.4byte FLAG_SYS_RIBBON_GET
.endm

@ Emit the six 8-bit inventory capacities followed by two reserved zero bytes.
@
@ u8 items pocket capacity
@ u8 key-items pocket capacity
@ u8 Poké Balls pocket capacity
@ u8 TM/HM pocket capacity
@ u8 berries pocket capacity
@ u8 PC item storage capacity
@ u8 reserved[2]
.macro gf_rom_header_bag_capacities
	.byte BAG_ITEMS_COUNT
	.byte BAG_KEYITEMS_COUNT
	.byte BAG_POKEBALLS_COUNT
	.byte BAG_TMHM_COUNT
	.byte BAG_BERRIES_COUNT
	.byte PC_ITEMS_COUNT
	.space GF_ROM_HEADER_BAG_CAPACITIES_RESERVED_SIZE, 0
.endm

@ Emit the remaining save-layout metadata.
@
@ u32 SaveBlock1::pcItems offset
@ u32 SaveBlock1::giftRibbons offset
@ u32 SaveBlock1::enigmaBerry offset
@ u32 sizeof(struct EnigmaBerry)
@ u32 move-description table pointer, or NULL
@ s32 unknown field / format sentinel
.macro gf_rom_header_remaining_save_layout
	.4byte SAVE_BLOCK1_PC_ITEMS_OFFSET
	.4byte SAVE_BLOCK1_GIFT_RIBBONS_OFFSET
	.4byte SAVE_BLOCK1_ENIGMA_BERRY_OFFSET
	.4byte ENIGMA_BERRY_SIZE
	.4byte GF_ROM_HEADER_MOVE_DESCRIPTIONS_NONE
	.4byte GF_ROM_HEADER_UNKNOWN_FIELD_SENTINEL
.endm

.endif @ GUARD_ASM_MACROS_GF_ROM_HEADER_INC
