	@ pret/pokeemerald-jp direct xref for 0x08557166: fldeff_cut.s: SetUpFieldMove_Cut
	.globl sHyperCutStruct
sHyperCutStruct: @ 0x08557166
	@ 16 Hyper Cutter perimeter entries (4 bytes each).
	.2byte 0x0001, 0xFEFF, 0x0001, 0xFE00, 0x0002, 0xFE01, 0x0003, 0xFE02
	.2byte 0x0003, 0xFFFE, 0x0001, 0xFF02, 0x0003, 0x00FE, 0x0004, 0x0002
	.2byte 0x0006, 0x01FE, 0x0007, 0x0102, 0x0009, 0x02FE, 0x0007, 0x02FF
	.2byte 0x0007, 0x0200, 0x0008, 0x0201, 0x0009, 0x0202, 0x0009, 0x0000

	.globl sOamData_CutGrass
sOamData_CutGrass: @ 0x085571A6
	@ Cut-grass OamData.
	.2byte 0x0000, 0x1401, 0x0000

	.globl sSpriteAnim_CutGrass
sSpriteAnim_CutGrass: @ 0x085571AC
	@ Cut-grass looping sprite animation.
	.2byte 0x0000, 0x001E, 0xFFFE

	.align 2, 0

	.globl sSpriteAnimTable_CutGrass
sSpriteAnimTable_CutGrass: @ 0x085571B4
	.4byte sSpriteAnim_CutGrass

	.globl sSpriteImageTable_CutGrass
sSpriteImageTable_CutGrass: @ 0x085571B8
	@ Local JP Cut Grass gfx pointer.
	.4byte gObjectEventPal_JP_084CEC8C + 0x620
	.4byte 0x20

	.globl gSpritePalette_CutGrass
gSpritePalette_CutGrass: @ 0x085571C0
	@ Local JP Cut Grass palette pointer.
	.4byte gObjectEventPal_JP_084CEC8C + 0x660
	.2byte 0x1000
	.2byte 0

	.globl gFldeffCutData_085571C8
gFldeffCutData_085571C8: @ 0x085571C8
	@ analyzed canonical ROM range 0x085571C8-0x085571DF
sSpriteTemplate_085571C8: @ 0x085571C8
	rodata_sprite_template 0xFFFF, 0x1000, 0x085571A4, sSpriteAnimTable_CutGrass, sSpriteImageTable_CutGrass, gDummySpriteAffineAnimTable, CutGrassSpriteCallback1
