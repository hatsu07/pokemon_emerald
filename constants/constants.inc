	.include "constants/gba_constants.inc"
	.include "constants/global.inc"
	.include "constants/contest_constants.inc"
	.include "constants/pokemon_data.inc"
	.include "constants/berry.inc"
	.include "constants/contest_move_effects.inc"
	.include "constants/species.inc"
	.include "constants/gf_rom_header.inc"

@ LGF ROM header save metadata
.set SAVE_BLOCK1_FLAGS_OFFSET,       0x1270
.set SAVE_BLOCK1_VARS_OFFSET,        0x139C
.set SAVE_BLOCK2_POKEDEX_OFFSET,     0x0018
.set SAVE_BLOCK1_SEEN1_OFFSET,       0x0988
.set SAVE_BLOCK1_SEEN2_OFFSET,       0x3B24

.set VARS_START,                         0x4000
.set VAR_NATIONAL_DEX,                   0x4046
.set FLAG_RECEIVED_POKEDEX_FROM_BIRCH,   0x08E4
.set FLAG_SYS_MYSTERY_EVENT_ENABLE,      0x08AC
.set NATIONAL_DEX_COUNT,                 386

@ Name lengths
.set PLAYER_NAME_LENGTH,              7
.set TRAINER_NAME_LENGTH,             5
.set POKEMON_NAME_LENGTH,            10
.set POKEMON_NAME_LENGTH_SHORT,       5

@ SaveBlock sizes
.set SAVE_BLOCK2_SIZE,                0x0F2C
.set SAVE_BLOCK1_SIZE,                0x3D88

@ struct SaveBlock1 offsets
.set SAVE_BLOCK1_PLAYER_PARTY_COUNT_OFFSET,    0x0234
.set SAVE_BLOCK1_PLAYER_PARTY_OFFSET,          0x0238
.set SAVE_BLOCK1_EXTERNAL_EVENT_FLAGS_OFFSET,  0x31C7
.set SAVE_BLOCK1_EXTERNAL_EVENT_DATA_OFFSET,   0x31B3

@ struct SaveBlock2 offsets
.set SAVE_BLOCK2_SPECIAL_SAVE_WARP_FLAGS_OFFSET, 0x0009
.set SAVE_BLOCK2_PLAYER_TRAINER_ID_OFFSET,        0x000A
.set SAVE_BLOCK2_PLAYER_NAME_OFFSET,              0x0000
.set SAVE_BLOCK2_PLAYER_GENDER_OFFSET,            0x0008
.set SAVE_BLOCK2_FRONTIER_CHALLENGE_STATUS_OFFSET, 0x0CA8
