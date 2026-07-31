@ -----------------------------------------------------------------------------
@ Poke Ball sprite constants
@ -----------------------------------------------------------------------------

@ Number and serialized record sizes.
.set BALL_SPRITE_COUNT,                    12
.set BALL_SPRITE_GFX_SIZE,                 0x180 @ 12 tiles = three 16x16 4bpp frames
.set COMPRESSED_SPRITE_SHEET_ENTRY_SIZE,   8
.set COMPRESSED_SPRITE_PALETTE_ENTRY_SIZE, 8
.set BALL_SPRITE_OAM_AND_ANIM_DATA_SIZE,   0xC8
.set BALL_SPRITE_ANIM_SEQUENCE_COUNT,      7
.set BALL_SPRITE_AFFINE_SEQUENCE_COUNT,    5
.set SPRITE_ANIM_SEQUENCE_POINTER_SIZE,    4

@ Tile/palette tags used by the sprite resource manager.
.set GFX_TAG_POKE_BALL,    0xD6D8
.set GFX_TAG_GREAT_BALL,   0xD6D9
.set GFX_TAG_SAFARI_BALL,  0xD6DA
.set GFX_TAG_ULTRA_BALL,   0xD6DB
.set GFX_TAG_MASTER_BALL,  0xD6DC
.set GFX_TAG_NET_BALL,     0xD6DD
.set GFX_TAG_DIVE_BALL,    0xD6DE
.set GFX_TAG_NEST_BALL,    0xD6DF
.set GFX_TAG_REPEAT_BALL,  0xD6E0
.set GFX_TAG_TIMER_BALL,   0xD6E1
.set GFX_TAG_LUXURY_BALL,  0xD6E2
.set GFX_TAG_PREMIER_BALL, 0xD6E3

@ -----------------------------------------------------------------------------
@ GBA OBJ attribute values used by struct OamData.
@
@ attr0: y[7:0], affineMode[9:8], objMode[11:10], mosaic[12], bpp[13], shape[15:14]
@ attr1: x[8:0], matrixNum[13:9], size[15:14]
@ attr2: tileNum[9:0], priority[11:10], paletteNum[15:12]
@ attr3: affineParam[15:0]
@ -----------------------------------------------------------------------------
.set SPRITE_OAM_AFFINE_OFF,         0
.set SPRITE_OAM_AFFINE_NORMAL,      1
.set SPRITE_OAM_AFFINE_DOUBLE_SIZE, 3

.set SPRITE_OAM_OBJ_NORMAL, 0
.set SPRITE_OAM_OBJ_BLEND,  1
.set SPRITE_OAM_OBJ_WINDOW, 2

.set SPRITE_OAM_MOSAIC_OFF, 0
.set SPRITE_OAM_MOSAIC_ON,  1
.set SPRITE_OAM_4BPP,       0
.set SPRITE_OAM_8BPP,       1

.set SPRITE_OAM_SHAPE_SQUARE,     0
.set SPRITE_OAM_SHAPE_HORIZONTAL, 1
.set SPRITE_OAM_SHAPE_VERTICAL,   2

@ For a square OBJ, size value 1 means 16x16 pixels.
.set SPRITE_OAM_SIZE_16X16, 1

@ Ball sprite OAM settings.
.set BALL_SPRITE_OAM_Y,            0
.set BALL_SPRITE_OAM_X,            0
.set BALL_SPRITE_OAM_AFFINE_MODE,  SPRITE_OAM_AFFINE_DOUBLE_SIZE
.set BALL_SPRITE_OAM_OBJ_MODE,     SPRITE_OAM_OBJ_NORMAL
.set BALL_SPRITE_OAM_MOSAIC,       SPRITE_OAM_MOSAIC_OFF
.set BALL_SPRITE_OAM_BPP,          SPRITE_OAM_4BPP
.set BALL_SPRITE_OAM_SHAPE,        SPRITE_OAM_SHAPE_SQUARE
.set BALL_SPRITE_OAM_MATRIX_NUM,   0
.set BALL_SPRITE_OAM_SIZE,         SPRITE_OAM_SIZE_16X16
.set BALL_SPRITE_OAM_TILE_NUM,     0
.set BALL_SPRITE_OAM_PRIORITY,     2
.set BALL_SPRITE_OAM_PALETTE_NUM,  0
.set BALL_SPRITE_OAM_AFFINE_PARAM, 0

@ -----------------------------------------------------------------------------
@ Sprite AnimCmd constants.
@
@ A 16x16 4bpp frame occupies four 8x8 tiles. This sheet stores 12 tiles,
@ so offsets 0, 4 and 8 select its three complete frames. Offset 12 is retained
@ because it exists in the original, apparently unused animation sequence.
@ -----------------------------------------------------------------------------
.set SPRITE_ANIM_TILE_INDEX_MASK, 0x03FF
.set SPRITE_ANIM_HFLIP_SHIFT,     10
.set SPRITE_ANIM_VFLIP_SHIFT,     11
.set SPRITE_ANIMCMD_JUMP,         0xFFFE
.set SPRITE_ANIMCMD_END,          0xFFFF

.set BALL_SPRITE_TILE_OFFSET_FRAME_0, 0
.set BALL_SPRITE_TILE_OFFSET_FRAME_1, 4
.set BALL_SPRITE_TILE_OFFSET_FRAME_2, 8
.set BALL_SPRITE_TILE_OFFSET_UNUSED_12, 12

.set BALL_ANIM_DURATION_SINGLE,     1
.set BALL_ANIM_DURATION_TRANSITION, 5

@ -----------------------------------------------------------------------------
@ Sprite AffineAnimCmd constants.
@
@ A frame command stores rotation as signed 8-bit in the low byte and duration
@ in the high byte. Scale values are signed 16-bit. A scale of 0 means no scale
@ delta; 0x100 is the 1.0 identity scale value used by the reset command.
@ -----------------------------------------------------------------------------
.set SPRITE_AFFINEANIMCMD_JUMP, 0x7FFE
.set SPRITE_AFFINEANIMCMD_END,  0x7FFF
.set SPRITE_AFFINE_SCALE_NO_CHANGE, 0
.set SPRITE_AFFINE_SCALE_IDENTITY,  0x100

.set BALL_AFFINE_ROTATION_NONE,     0
.set BALL_AFFINE_ROTATION_RIGHT,   -3
.set BALL_AFFINE_ROTATION_LEFT,     3
.set BALL_AFFINE_ROTATION_PLUS_25, 25
.set BALL_AFFINE_DURATION_ONE,      1
.set BALL_AFFINE_DURATION_IMMEDIATE, 0
