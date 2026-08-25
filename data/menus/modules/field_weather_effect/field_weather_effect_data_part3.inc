	.globl gFieldWeatherEffectData_0852A928
gFieldWeatherEffectData_0852A928: @ 0x0852A928
	@ analyzed canonical ROM range 0x0852A928-0x0852A9B3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8C entries=70
	.2byte 0xFFFF, 0x1200, 0xA8F8, 0x0852, 0xA920, 0x0852, 0xA900, 0x0852
	.2byte 0xF310, 0x082B, 0xCC09, 0x080A, 0x0000, 0x0006, 0x0006, 0x000C
	.2byte 0x0012, 0x002A, 0x012C, 0x012C, 0x0400, 0xC000, 0x0800, 0x0000
	.2byte 0x0000, 0x0010, 0xFFFF, 0x0000, 0x0020, 0x0010, 0xFFFF, 0x0000
	.2byte 0x0040, 0x0010, 0xFFFF, 0x0000, 0x0060, 0x0010, 0xFFFF, 0x0000
	.2byte 0x0080, 0x0010, 0xFFFF, 0x0000, 0x00A0, 0x0010, 0xFFFF, 0x0000
	.2byte 0xA958, 0x0852, 0xA960, 0x0852, 0xA968, 0x0852, 0xA970, 0x0852
	.2byte 0xA978, 0x0852, 0xA980, 0x0852, 0x0200, 0x0200, 0x0000, 0x0000
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000, 0xA9A0, 0x0852
	@ pret/pokeemerald-jp direct xref for 0x0852A9B4: field_weather_effect.s: CreateFog1Sprites
	.globl gFieldWeatherEffectData_0852A9B4
gFieldWeatherEffectData_0852A9B4: @ 0x0852A9B4
	@ analyzed canonical ROM range 0x0852A9B4-0x0852A9CB
sSpriteTemplate_0852A9B4: @ 0x0852A9B4
	rodata_sprite_template 0x1201, 0x1200, 0x0852A950, 0x0852A988, 0, 0x0852A9B0, Fog1SpriteCallback
	@ pret/pokeemerald-jp direct xref for 0x0852A9CC: field_weather_effect.s: CreateFog1Sprites
	.globl gFieldWeatherEffectData_0852A9CC
gFieldWeatherEffectData_0852A9CC: @ 0x0852A9CC
	@ analyzed canonical ROM range 0x0852A9CC-0x0852A9D3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x0852A9CC size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gWeatherFogHorizontalTiles
	@ ANALYSIS: SPRITE_SHEET_META size=0x4 addr=0x0852A9D0 parent=gFieldWeatherEffectData_0852A9CC sheetSize=0x800 tag=0x1201
	@ ANALYSIS: SOURCE_RANGE addr=0x0852A9D0 size=0x4
	.2byte 0x800, 0x1201 @ size, tag
	@ pret/pokeemerald-jp direct xref for 0x0852A9D4: field_weather_effect.s: LoadAshSpriteSheet
	.globl gFieldWeatherEffectData_0852A9D4
gFieldWeatherEffectData_0852A9D4: @ 0x0852A9D4
	@ analyzed canonical ROM range 0x0852A9D4-0x0852A9F3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x20 bytes=32
	.byte 0xEC, 0x87, 0x52, 0x08, 0x00, 0x10, 0x02, 0x12, 0x00, 0x04, 0x00, 0xC0, 0x00, 0xF4, 0x00, 0x00
	.byte 0x00, 0x00, 0x3C, 0x00, 0x40, 0x00, 0x3C, 0x00, 0xFE, 0xFF, 0x00, 0x00, 0xE4, 0xA9, 0x52, 0x08
	@ pret/pokeemerald-jp direct xref for 0x0852A9F4: field_weather_effect.s: CreateAshSprites
	.globl gFieldWeatherEffectData_0852A9F4
gFieldWeatherEffectData_0852A9F4: @ 0x0852A9F4
	@ analyzed canonical ROM range 0x0852A9F4-0x0852AA0B
sSpriteTemplate_0852A9F4: @ 0x0852A9F4
	rodata_sprite_template 0x1202, 0x1200, 0x0852A9DC, 0x0852A9F0, 0, gDummySpriteAffineAnimTable, UpdateAshSprite
	@ pret/pokeemerald-jp direct xref for 0x0852AA0C: field_weather_effect.s: CreateFog2Sprites
	.globl gFieldWeatherEffectData_0852AA0C
gFieldWeatherEffectData_0852AA0C: @ 0x0852AA0C
	@ analyzed canonical ROM range 0x0852AA0C-0x0852AA27
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x1C bytes=28
	.byte 0x6C, 0x6F, 0x52, 0x08, 0x00, 0x08, 0x03, 0x12, 0x00, 0x04, 0x00, 0xC0, 0x00, 0x08, 0x00, 0x00
	.byte 0x00, 0x00, 0x10, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x1C, 0xAA, 0x52, 0x08
	@ pret/pokeemerald-jp direct xref for 0x0852AA28: field_weather_effect.s: CreateFog2Sprites
	.globl gFieldWeatherEffectData_0852AA28
gFieldWeatherEffectData_0852AA28: @ 0x0852AA28
	@ analyzed canonical ROM range 0x0852AA28-0x0852AA5F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x38 bytes=56
	.byte 0x03, 0x12, 0x00, 0x12, 0x14, 0xAA, 0x52, 0x08, 0x24, 0xAA, 0x52, 0x08, 0x00, 0x00, 0x00, 0x00
	.byte 0x10, 0xF3, 0x2B, 0x08, 0xF9, 0xDC, 0x0A, 0x08, 0x00, 0x04, 0x00, 0xC0, 0x00, 0x04, 0x00, 0x00
	.byte 0x00, 0x00, 0x03, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x40, 0x00, 0x03, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x48, 0xAA, 0x52, 0x08, 0x50, 0xAA, 0x52, 0x08
	@ pret/pokeemerald-jp direct xref for 0x0852AA60: field_weather_effect.s: CreateSandstormSprites, CreateSwirlSandstormSprites
	.globl gFieldWeatherEffectData_0852AA60
gFieldWeatherEffectData_0852AA60: @ 0x0852AA60
	@ analyzed canonical ROM range 0x0852AA60-0x0852AA77
sSpriteTemplate_0852AA60: @ 0x0852AA60
	rodata_sprite_template 0x1204, 0x1201, 0x0852AA40, 0x0852AA58, 0, gDummySpriteAffineAnimTable, UpdateSandstormSprite
	@ pret/pokeemerald-jp direct xref for 0x0852AA78: field_weather_effect.s: CreateSandstormSprites
	.globl gFieldWeatherEffectData_0852AA78
gFieldWeatherEffectData_0852AA78: @ 0x0852AA78
	@ analyzed canonical ROM range 0x0852AA78-0x0852AA7F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x0852AA78 size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gWeatherSandstormTiles
	@ ANALYSIS: SPRITE_SHEET_META size=0x4 addr=0x0852AA7C parent=gFieldWeatherEffectData_0852AA78 sheetSize=0xA00 tag=0x1204
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AA7C size=0x4
	.2byte 0xA00, 0x1204 @ size, tag
	@ pret/pokeemerald-jp direct xref for 0x0852AA80: field_weather_effect.s: CreateSwirlSandstormSprites
	.globl gFieldWeatherEffectData_0852AA80
gFieldWeatherEffectData_0852AA80: @ 0x0852AA80
	@ analyzed canonical ROM range 0x0852AA80-0x0852AA8B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x0000, 0x0078, 0x0050, 0x00A0, 0x0028, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x0852AA8C: field_weather_effect.s: Bubbles_InitVars, Bubbles_Main
	.globl gFieldWeatherEffectData_0852AA8C
gFieldWeatherEffectData_0852AA8C: @ 0x0852AA8C
	@ analyzed canonical ROM range 0x0852AA8C-0x0852AA93
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x8 bytes=8
	.byte 0x28, 0x5A, 0x3C, 0x5A, 0x02, 0x3C, 0x28, 0x1E
	@ pret/pokeemerald-jp direct xref for 0x0852AA94: field_weather_effect.s: Bubbles_InitVars
	.globl gFieldWeatherEffectData_0852AA94
gFieldWeatherEffectData_0852AA94: @ 0x0852AA94
	@ analyzed canonical ROM range 0x0852AA94-0x0852AA9B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x0852AA94 size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gWeatherBubbleTiles
	@ ANALYSIS: SPRITE_SHEET_META size=0x4 addr=0x0852AA98 parent=gFieldWeatherEffectData_0852AA94 sheetSize=0x40 tag=0x1205
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AA98 size=0x4
	.2byte 0x40, 0x1205 @ size, tag
	@ pret/pokeemerald-jp direct xref for 0x0852AA9C: field_weather_effect.s: CreateBubbleSprite
	.globl gFieldWeatherEffectData_0852AA9C
gFieldWeatherEffectData_0852AA9C: @ 0x0852AA9C
	@ analyzed canonical ROM range 0x0852AA9C-0x0852AADF
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x44 entries=34
	.2byte 0x0078, 0x00A0, 0x0178, 0x00A0, 0x0028, 0x008C, 0x0128, 0x008C
	.2byte 0x00B4, 0x0082, 0x01B4, 0x0082, 0x003C, 0x00A0, 0x01B4, 0x00A0
	.2byte 0x00DC, 0x00B4, 0x01DC, 0x00B4, 0x000A, 0x005A, 0x010A, 0x005A
	.2byte 0x0100, 0x00A0, 0x0000, 0x0010, 0x0001, 0x0010, 0xFFFF, 0x0000
	.2byte 0xAAD0, 0x0852
	@ pret/pokeemerald-jp direct xref for 0x0852AAE0: field_weather_effect.s: CreateBubbleSprite, DestroyBubbleSprites
	.globl gFieldWeatherEffectData_0852AAE0
gFieldWeatherEffectData_0852AAE0: @ 0x0852AAE0
	@ analyzed canonical ROM range 0x0852AAE0-0x0852AAF7
sSpriteTemplate_0852AAE0: @ 0x0852AAE0
	rodata_sprite_template 0x1205, 0x1200, gOamData_AffineOff_ObjNormal_8x8, 0x0852AADC, 0, gDummySpriteAffineAnimTable, UpdateBubbleSprite
	@ pret/pokeemerald-jp direct xref for 0x0852AAF8: field_weather_effect.s: TranslateWeatherNum
	.globl gFieldWeatherEffectData_0852AAF8
gFieldWeatherEffectData_0852AAF8: @ 0x0852AAF8
	@ analyzed canonical ROM range 0x0852AAF8-0x0852AAFB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x02, 0x03, 0x05, 0x03
	@ pret/pokeemerald-jp direct xref for 0x0852AAFC: field_weather_effect.s: TranslateWeatherNum
	.globl gFieldWeatherEffectData_0852AAFC
gFieldWeatherEffectData_0852AAFC: @ 0x0852AAFC
	@ analyzed canonical ROM range 0x0852AAFC-0x0852AAFF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x02, 0x02, 0x03, 0x02
	@ pret/pokeemerald-jp direct xref for 0x0852AB00: field_screen_effect.s: WriteFlashScanlineEffectBuffer, sub_080AF998
