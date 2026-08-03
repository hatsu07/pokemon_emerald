sSpriteTileCounts: @ 0x082BF281
	sprite_tile_counts 1, 4, 16, 64, 2, 4, 8, 32, 2, 4, 8, 32

sUnusedSpriteTileCounts: @ 0x082BF28D
	sprite_tile_counts 1, 4, 16, 64, 2, 4, 8, 32, 2, 4, 8, 32

	.globl sCenterToCornerVecTable
sCenterToCornerVecTable: @ 0x082BF299
	@ Square sprites: 8x8, 16x16, 32x32, 64x64.
	center_to_corner_vector  -4,  -4
	center_to_corner_vector  -8,  -8
	center_to_corner_vector -16, -16
	center_to_corner_vector -32, -32
	@ Horizontal sprites: 16x8, 32x8, 32x16, 64x32.
	center_to_corner_vector  -8,  -4
	center_to_corner_vector -16,  -4
	center_to_corner_vector -16,  -8
	center_to_corner_vector -32, -16
	@ Vertical sprites: 8x16, 8x32, 16x32, 32x64.
	center_to_corner_vector  -4,  -8
	center_to_corner_vector  -4, -16
	center_to_corner_vector  -8, -16
	center_to_corner_vector -16, -32
	.balign 4, 0

	.globl sDummySprite
sDummySprite: @ 0x082BF2B4
	dummy_sprite gDummySpriteAnimTable, gDummySpriteAffineAnimTable, gDummySpriteTemplate, SpriteCallbackDummy

	.globl gDummyOamData
gDummyOamData: @ 0x082BF2F8
	dummy_sprite_oam_data

sDummyAnim: @ 0x082BF300
	dummy_sprite_anim_end

	.globl gDummySpriteAnimTable
gDummySpriteAnimTable: @ 0x082BF304
	.4byte sDummyAnim

sDummyAffineAnim: @ 0x082BF308
	dummy_sprite_affine_anim_end

	.globl gDummySpriteAffineAnimTable
gDummySpriteAffineAnimTable: @ 0x082BF310
	.4byte sDummyAffineAnim

	.globl gDummySpriteTemplate
gDummySpriteTemplate: @ 0x082BF314
	rodata_sprite_template 0, TAG_NONE, gDummyOamData, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy

	.globl sAnimFuncs
sAnimFuncs: @ 0x082BF32C
	.4byte ContinueAnim
	.4byte BeginAnim

	.globl sAffineAnimFuncs
sAffineAnimFuncs: @ 0x082BF334
	.4byte ContinueAffineAnim
	.4byte BeginAffineAnim

	.globl sAnimCmdFuncs
sAnimCmdFuncs: @ 0x082BF33C
	.4byte AnimCmd_loop
	.4byte AnimCmd_jump
	.4byte AnimCmd_end
	.4byte AnimCmd_frame

	.globl sAffineAnimCmdFuncs
sAffineAnimCmdFuncs: @ 0x082BF34C
	.4byte AffineAnimCmd_loop
	.4byte AffineAnimCmd_jump
	.4byte AffineAnimCmd_end
	.4byte AffineAnimCmd_frame

	.globl sOamDimensions32
sOamDimensions32: @ 0x082BF35C
	oam_dimensions32  8,  8
	oam_dimensions32 16, 16
	oam_dimensions32 32, 32
	oam_dimensions32 64, 64
	oam_dimensions32 16,  8
	oam_dimensions32 32,  8
	oam_dimensions32 32, 16
	oam_dimensions32 64, 32
	oam_dimensions32  8, 16
	oam_dimensions32  8, 32
	oam_dimensions32 16, 32
	oam_dimensions32 32, 64

	.globl sOamDimensions
sOamDimensions: @ 0x082BF3BC
	oam_dimensions  8,  8
	oam_dimensions 16, 16
	oam_dimensions 32, 32
	oam_dimensions 64, 64
	oam_dimensions 16,  8
	oam_dimensions 32,  8
	oam_dimensions 32, 16
	oam_dimensions 64, 32
	oam_dimensions  8, 16
	oam_dimensions  8, 32
	oam_dimensions 16, 32
	oam_dimensions 32, 64

sUnusedNullPointers: @ 0x082BF3EC
	.4byte NULL
	.4byte NULL

sBgControlRegisters: @ 0x082BF3F4
	.4byte REG_BG0CNT
	.4byte REG_BG1CNT
	.4byte REG_BG2CNT
	.4byte REG_BG3CNT

sBgHorizontalOffsetRegisters: @ 0x082BF404
	.4byte REG_BG0HOFS
	.4byte REG_BG1HOFS
	.4byte REG_BG2HOFS
	.4byte REG_BG3HOFS

sBgVerticalOffsetRegisters: @ 0x082BF414
	.4byte REG_BG0VOFS
	.4byte REG_BG1VOFS
	.4byte REG_BG2VOFS
	.4byte REG_BG3VOFS

sUnusedBgRegisters: @ 0x082BF424
	.4byte UNUSED_BG_REGISTER_EWRAM
	.4byte UNUSED_BG_REGISTER_ROM
