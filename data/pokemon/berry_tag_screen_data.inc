	@ pret/pokeemerald-jp direct xref for 0x0855A91C: berry_tag_screen.s: LoadBerryTagGfx
	.globl gBerryCheckCircleSpriteSheet
gBerryCheckCircleSpriteSheet: @ 0x0855A91C
	@ Local JP Berry Check Circle gfx pointer.
	.4byte gBerryCheckCircle_Gfx
	.2byte 0x0800
	.2byte 0x2710

	.globl gBerryCheckCirclePaletteTable
gBerryCheckCirclePaletteTable: @ 0x0855A924
	@ Local JP Berry Check Circle palette pointer.
	.4byte gBerryCheck_Pal
	.2byte 0x2710
	.2byte 0

	.globl sBerryCheckCircleOamData
sBerryCheckCircleOamData: @ 0x0855A92C
	@ Berry check-circle OAM data plus alignment.
	.2byte 0x0000, 0x8000, 0x0400, 0x0000

	.globl sSpriteAnim_BerryCheckCircle
sSpriteAnim_BerryCheckCircle: @ 0x0855A934
	@ Berry check-circle stationary animation.
	.2byte 0x0000, 0x0000, 0xFFFF, 0x0000

	.globl sBerryCheckCircleSpriteAnimTable
sBerryCheckCircleSpriteAnimTable: @ 0x0855A93C
	.4byte sSpriteAnim_BerryCheckCircle

	.globl sBerryCheckCircleSpriteTemplate
sBerryCheckCircleSpriteTemplate: @ 0x0855A940
	rodata_sprite_template 0x2710, 0x2710, sBerryCheckCircleOamData, sBerryCheckCircleSpriteAnimTable, 0, gDummySpriteAffineAnimTable, 0x08007141

	.globl gHorizontalLungeSpriteTemplate
gHorizontalLungeSpriteTemplate: @ 0x0855A958
	@ Horizontal lunge callback pointer preserved from local JP ROM.
	rodata_sprite_template 0, 0, gDummyOamData, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, 0x080D50E5

	.globl gVerticalDipSpriteTemplate
gVerticalDipSpriteTemplate: @ 0x0855A970
	@ Vertical dip callback pointer preserved from local JP ROM.
	rodata_sprite_template 0, 0, gDummyOamData, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, 0x080D517D

	.globl gSlideMonToOriginalPosSpriteTemplate
gSlideMonToOriginalPosSpriteTemplate: @ 0x0855A988
	@ Slide-to-original callback pointer preserved from local JP ROM.
	rodata_sprite_template 0, 0, gDummyOamData, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, 0x080D51ED

	.globl gSlideMonToOffsetSpriteTemplate
gSlideMonToOffsetSpriteTemplate: @ 0x0855A9A0
	@ Slide-to-offset callback pointer preserved from local JP ROM.
	rodata_sprite_template 0, 0, gDummyOamData, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, 0x080D5319

	.globl gSlideMonToOffsetAndBackSpriteTemplate
gSlideMonToOffsetAndBackSpriteTemplate: @ 0x0855A9B8
	@ Slide-to-offset-and-back callback pointer preserved from local JP ROM.
	rodata_sprite_template 0, 0, gDummyOamData, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, 0x080D53CD
