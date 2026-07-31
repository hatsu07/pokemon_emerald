@ ---------------------------------------------------------------------------
@ Japanese Pokémon Emerald GF ROM-header constants
@
@ These values describe the binary save-layout contract exposed to external
@ GameCube/GBA link software. They are not arbitrary data values: changing the
@ corresponding C structures requires updating these constants as well.
@ ---------------------------------------------------------------------------

.ifndef GUARD_CONSTANTS_GF_ROM_HEADER_INC
.set GUARD_CONSTANTS_GF_ROM_HEADER_INC, 1

@ .LgfRomHeaderGameFlags block size.
.set GF_ROM_HEADER_GAME_FLAGS_SIZE, 0x0C

@ SaveBlock2 offsets.
.ifndef SAVE_BLOCK2_GCN_LINK_FLAGS_OFFSET
.set SAVE_BLOCK2_GCN_LINK_FLAGS_OFFSET, 0x00A8
.endif

@ System-event flag IDs.
@ Keep the existing project definitions when they are already available.
.ifndef FLAG_SYS_GAME_CLEAR
.set FLAG_SYS_GAME_CLEAR, 0x0864
.endif

.ifndef FLAG_SYS_RIBBON_GET
.set FLAG_SYS_RIBBON_GET, 0x089B
.endif

@ .LgfRomHeaderBagCapacities block size, including two reserved bytes.
.set GF_ROM_HEADER_BAG_CAPACITIES_SIZE, 0x08
.set GF_ROM_HEADER_BAG_CAPACITIES_RESERVED_SIZE, 2

@ Bag and PC pocket capacities.
.ifndef BAG_ITEMS_COUNT
.set BAG_ITEMS_COUNT, 30
.endif

.ifndef BAG_KEYITEMS_COUNT
.set BAG_KEYITEMS_COUNT, 30
.endif

.ifndef BAG_POKEBALLS_COUNT
.set BAG_POKEBALLS_COUNT, 16
.endif

.ifndef BAG_TMHM_COUNT
.set BAG_TMHM_COUNT, 64
.endif

.ifndef BAG_BERRIES_COUNT
.set BAG_BERRIES_COUNT, 46
.endif

.ifndef PC_ITEMS_COUNT
.set PC_ITEMS_COUNT, 50
.endif

@ .LgfRomHeaderRemainingSaveLayout block size.
.set GF_ROM_HEADER_REMAINING_SAVE_LAYOUT_SIZE, 0x18

@ SaveBlock1 offsets.
.ifndef SAVE_BLOCK1_PC_ITEMS_OFFSET
.set SAVE_BLOCK1_PC_ITEMS_OFFSET, 0x0498
.endif

.ifndef SAVE_BLOCK1_GIFT_RIBBONS_OFFSET
.set SAVE_BLOCK1_GIFT_RIBBONS_OFFSET, 0x31A8
.endif

.ifndef SAVE_BLOCK1_ENIGMA_BERRY_OFFSET
.set SAVE_BLOCK1_ENIGMA_BERRY_OFFSET, 0x31F8
.endif

@ Serialized size of struct EnigmaBerry in this ROM.
.ifndef ENIGMA_BERRY_SIZE
.set ENIGMA_BERRY_SIZE, 0x0034
.endif

@ This Japanese ROM does not expose a move-description pointer here.
.set GF_ROM_HEADER_MOVE_DESCRIPTIONS_NONE, 0

@ Unknown final field. Preserve the original all-bits-set sentinel.
.set GF_ROM_HEADER_UNKNOWN_FIELD_SENTINEL, -1

.endif @ GUARD_CONSTANTS_GF_ROM_HEADER_INC
