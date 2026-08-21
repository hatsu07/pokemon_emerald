gFieldWeatherEffectData_0852A7EC: @ 0x0852A7EC
	@ analyzed canonical ROM range 0x0852A7EC-0x0852A7F7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x0000, 0x0042, 0x0005, 0x0049, 0x000A, 0x004E
	@ pret/pokeemerald-jp direct xref for 0x0852A7F8: field_weather_effect.s: CreateCloudSprites
	.globl gFieldWeatherEffectData_0852A7F8
gFieldWeatherEffectData_0852A7F8: @ 0x0852A7F8
	@ analyzed canonical ROM range 0x0852A7F8-0x0852A813
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x1C bytes=28
	.byte 0x6C, 0x7F, 0x52, 0x08, 0x00, 0x08, 0x00, 0x12, 0x00, 0x04, 0x00, 0xC0, 0x00, 0x0C, 0x00, 0x00
	.byte 0x00, 0x00, 0x10, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x08, 0xA8, 0x52, 0x08
	@ pret/pokeemerald-jp direct xref for 0x0852A814: field_weather_effect.s: CreateCloudSprites
	.globl gFieldWeatherEffectData_0852A814
gFieldWeatherEffectData_0852A814: @ 0x0852A814
	@ analyzed canonical ROM range 0x0852A814-0x0852A82B
sSpriteTemplate_0852A814: @ 0x0852A814
	rodata_sprite_template 0x1200, 0x1201, 0x0852A800, 0x0852A810, 0, gDummySpriteAffineAnimTable, UpdateCloudSprite
	@ pret/pokeemerald-jp direct xref for 0x0852A82C: field_weather_effect.s: CreateRainSprite
	.globl gFieldWeatherEffectData_0852A82C
gFieldWeatherEffectData_0852A82C: @ 0x0852A82C
	@ analyzed canonical ROM range 0x0852A82C-0x0852A8C7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x9C entries=78
	.2byte 0x0000, 0x0000, 0x0000, 0x00A0, 0x0000, 0x0040, 0x0090, 0x00E0
	.2byte 0x0090, 0x0080, 0x0020, 0x0020, 0x0020, 0x00C0, 0x0020, 0x0060
	.2byte 0x0048, 0x0080, 0x0048, 0x0020, 0x0048, 0x00C0, 0x00D8, 0x0060
	.2byte 0x00D8, 0x0000, 0x0068, 0x00A0, 0x0068, 0x0040, 0x0068, 0x00E0
	.2byte 0x0090, 0x0000, 0x0090, 0x00A0, 0x0090, 0x0040, 0x0020, 0x00E0
	.2byte 0x0020, 0x0080, 0x0048, 0x0020, 0x0048, 0x00C0, 0x0030, 0x0060
	.2byte 0x8000, 0x8000, 0x2400, 0x0000, 0x0000, 0x0010, 0xFFFE, 0x0000
	.2byte 0x0008, 0x0003, 0x0020, 0x0002, 0x0028, 0x0002, 0xFFFF, 0x0000
	.2byte 0x0008, 0x0003, 0x0010, 0x0003, 0x0018, 0x0004, 0xFFFF, 0x0000
	.2byte 0xA894, 0x0852, 0xA89C, 0x0852, 0xA8AC, 0x0852
	@ pret/pokeemerald-jp direct xref for 0x0852A8C8: field_weather_effect.s: CreateRainSprite
	.globl gFieldWeatherEffectData_0852A8C8
gFieldWeatherEffectData_0852A8C8: @ 0x0852A8C8
	@ analyzed canonical ROM range 0x0852A8C8-0x0852A8DF
sSpriteTemplate_0852A8C8: @ 0x0852A8C8
	rodata_sprite_template 0x1206, 0x1200, 0x0852A88C, 0x0852A8BC, 0, gDummySpriteAffineAnimTable, UpdateRainSprite
	@ pret/pokeemerald-jp direct xref for 0x0852A8E0: field_weather_effect.s: StartRainSpriteFall, UpdateRainSprite
	.globl gFieldWeatherEffectData_0852A8E0
gFieldWeatherEffectData_0852A8E0: @ 0x0852A8E0
	@ analyzed canonical ROM range 0x0852A8E0-0x0852A8E7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x8 bytes=8
	.byte 0x98, 0xFF, 0xD0, 0x00, 0x60, 0xFF, 0x40, 0x01
	@ pret/pokeemerald-jp direct xref for 0x0852A8E8: field_weather_effect.s: InitRainSpriteMovement, StartRainSpriteFall
	.globl gFieldWeatherEffectData_0852A8E8
gFieldWeatherEffectData_0852A8E8: @ 0x0852A8E8
	@ analyzed canonical ROM range 0x0852A8E8-0x0852A8EF
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0012, 0x0007, 0x000C, 0x000A
	@ pret/pokeemerald-jp direct xref for 0x0852A8F0: field_weather_effect.s: LoadRainSpriteSheet
	.globl gFieldWeatherEffectData_0852A8F0
gFieldWeatherEffectData_0852A8F0: @ 0x0852A8F0
	@ analyzed canonical ROM range 0x0852A8F0-0x0852A927
	@ structured u16 table (semantic role inferred only to scalar width)
	.globl gWeatherRainSpriteSheet
