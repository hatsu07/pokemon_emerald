sRecordMixLights_Gfx: @ 0x0856A290
	.incbin "build/graphics/field_effects/pics/record_mix_lights.4bpp"
sRecordMixLights_Pal: @ 0x0856A410
	.incbin "build/graphics/field_effects/palettes/record_mix_lights.gbapal"

sPicTable_RecordMixLights: @ 0x0856A430
	.4byte sRecordMixLights_Gfx
	.2byte 0x80, 0
	.4byte sRecordMixLights_Gfx + 0x80
	.2byte 0x80, 0
	.4byte sRecordMixLights_Gfx + 0x100
	.2byte 0x80, 0

	.globl sSpritePalette_RecordMixLights
sSpritePalette_RecordMixLights: @ 0x0856A448
	.4byte sRecordMixLights_Pal
	.2byte 0x1000, 0

sAnim_RecordMixLights: @ 0x0856A450
	.2byte 0x0000, 0x001E @ ANIMCMD_FRAME(0, 30)
	.2byte 0x0001, 0x001E @ ANIMCMD_FRAME(1, 30)
	.2byte 0x0002, 0x001E @ ANIMCMD_FRAME(2, 30)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnimTable_RecordMixLights: @ 0x0856A460
	semantic_anim_table_entry sAnim_RecordMixLights

	.globl sSpriteTemplate_RecordMixLights
sSpriteTemplate_RecordMixLights: @ 0x0856A464
	semantic_sprite_template 0xFFFF, 0x1000, gObjectEventBaseOam_32x8, sAnimTable_RecordMixLights, sPicTable_RecordMixLights, gDummySpriteAffineAnimTable, SpriteCallbackDummy

