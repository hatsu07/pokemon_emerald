@ ---------------------------------------------------------------------------
@ GF ROM header save/link metadata
@ Included from asm/crt0.s to preserve the original ROM position.
@ ---------------------------------------------------------------------------

@ u32 offsetof(struct SaveBlock2, gcnLinkFlags)
@ u32 game-clear system flag ID
@ u32 ribbon-obtained system flag ID
.LgfRomHeaderGameFlags:
	.4byte SAVE_BLOCK2_GCN_LINK_FLAGS_OFFSET
	.4byte FLAG_SYS_GAME_CLEAR
	.4byte FLAG_SYS_RIBBON_GET
.LgfRomHeaderGameFlagsEnd:
.if (.LgfRomHeaderGameFlagsEnd - .LgfRomHeaderGameFlags) != GF_ROM_HEADER_GAME_FLAGS_SIZE
	.error "GF ROM-header game-flags block must be 0x0C bytes"
.endif

@ Inventory capacities: items, key items, Poké Balls, TM/HM, berries, PC.
@ Followed by two reserved zero bytes.
.LgfRomHeaderBagCapacities:
	.byte BAG_ITEMS_COUNT
	.byte BAG_KEYITEMS_COUNT
	.byte BAG_POKEBALLS_COUNT
	.byte BAG_TMHM_COUNT
	.byte BAG_BERRIES_COUNT
	.byte PC_ITEMS_COUNT
	.space GF_ROM_HEADER_BAG_RESERVED_SIZE, 0
.LgfRomHeaderBagCapacitiesEnd:
.if (.LgfRomHeaderBagCapacitiesEnd - .LgfRomHeaderBagCapacities) != GF_ROM_HEADER_BAG_CAPACITIES_SIZE
	.error "GF ROM-header bag-capacities block must be 0x08 bytes"
.endif

@ SaveBlock1 offsets: pcItems, giftRibbons, enigmaBerry.
@ Followed by EnigmaBerry size, NULL moveDescriptions, and -1 sentinel.
.LgfRomHeaderRemainingSaveLayout:
	.4byte SAVE_BLOCK1_PC_ITEMS_OFFSET
	.4byte SAVE_BLOCK1_GIFT_RIBBONS_OFFSET
	.4byte SAVE_BLOCK1_ENIGMA_BERRY_OFFSET
	.4byte ENIGMA_BERRY_SIZE
	.4byte GF_ROM_HEADER_MOVE_DESCRIPTIONS_NONE
	.4byte GF_ROM_HEADER_UNKNOWN_SENTINEL
.LgfRomHeaderRemainingSaveLayoutEnd:
.if (.LgfRomHeaderRemainingSaveLayoutEnd - .LgfRomHeaderRemainingSaveLayout) != GF_ROM_HEADER_REMAINING_SAVE_LAYOUT_SIZE
	.error "GF ROM-header remaining-save-layout block must be 0x18 bytes"
.endif
