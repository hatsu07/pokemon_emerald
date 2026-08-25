sOam_SandPillar: @ 0x0856A23C
	@ packed struct OamData: 16x32, 4bpp, priority 2
	.2byte 0x8000, 0x8000, 0x0800, 0x0000

sAnim_SandPillar: @ 0x0856A244
	.2byte 0x0000, 0x0006 @ ANIMCMD_FRAME(0, 6)
	.2byte 0x0001, 0x0006 @ ANIMCMD_FRAME(1, 6)
	.2byte 0x0002, 0x0006 @ ANIMCMD_FRAME(2, 6)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnimTable_SandPillar: @ 0x0856A254
	semantic_anim_table_entry sAnim_SandPillar

sPicTable_SandPillar: @ 0x0856A258
	.4byte sSandPillar0_Gfx
	.2byte 0x100, 0
	.4byte sSandPillar1_Gfx
	.2byte 0x100, 0
	.4byte sSandPillar2_Gfx
	.2byte 0x100, 0

	.globl sSpriteTemplate_SandPillar
sSpriteTemplate_SandPillar: @ 0x0856A270
	semantic_sprite_template 0xFFFF, 0x100E, sOam_SandPillar, sAnimTable_SandPillar, sPicTable_SandPillar, gDummySpriteAffineAnimTable, SpriteCB_SandPillar_0
	.globl gSpritePalette_SandPillar
gSpritePalette_SandPillar: @ 0x0856A288
	.4byte gTilesetPalettes_SecretBase + 0xA0 @ gTilesetPalettes_SecretBase[5]
	.2byte 0x100E, 0

