	@ pret/pokeemerald-jp direct xref for 0x08526DE8: cable_car.s: CableCarMainCallback_Setup, CleanupCableCar, sub_081503C0, sub_08150640; field_weather_effect.s: Ash_Finish, Ash_InitAll, Ash_InitVars, Ash_Main, Bubbles_InitAll (+69 more)
	.globl gMenuU8Table_Rom_526DE8
gMenuU8Table_Rom_526DE8: @ 0x08526DE8
	@ analyzed canonical ROM range 0x08526DE8-0x08526DEB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0xF4, 0x80, 0x03, 0x02
	.globl gMenuU32Table_Rom_526DEC
gMenuU32Table_Rom_526DEC: @ 0x08526DEC
	.4byte None_Init
	.4byte SetWeatherScreenFadeOut
	.4byte None_Init
	.4byte None_Finish
	.4byte Clouds_InitVars
	.4byte Clouds_Main
	.4byte Clouds_InitAll
	.4byte Clouds_Finish
	.4byte Sunny_InitVars
	.4byte Sunny_Main
	.4byte Sunny_InitAll
	.4byte Shade_Finish
	.4byte LightRain_InitVars
	.4byte LightRain_Main
	.4byte LightRain_InitAll
	.4byte LightRain_Finish
	.4byte Snow_InitVars
	.4byte Snow_Main
	.4byte Snow_InitAll
	.4byte Snow_Finish
	.4byte MedRain_InitVars
	.4byte Rain_Main
	.4byte MedRain_InitAll
	.4byte Rain_Finish
	.4byte Fog1_InitVars
	.4byte Fog1_Main
	.4byte Fog1_InitAll
	.4byte Fog1_Finish
	.4byte Ash_InitVars
	.4byte Ash_Main
	.4byte Ash_InitAll
	.4byte Ash_Finish
	.4byte Sandstorm_InitVars
	.4byte Sandstorm_Main
	.4byte Sandstorm_InitAll
	.4byte Sandstorm_Finish
	.4byte Fog2_InitVars
	.4byte Fog2_Main
	.4byte Fog2_InitAll
	.4byte Fog2_Finish
	.4byte Fog1_InitVars
	.4byte Fog1_Main
	.4byte Fog1_InitAll
	.4byte Fog1_Finish
	.4byte Shade_InitVars
	.4byte Shade_Main
	.4byte Shade_InitAll
	.4byte Drought_Finish
	.4byte Drought_InitVars
	.4byte Drought_Main
	.4byte Drought_InitAll
	.4byte Sunny_Finish
	.4byte HeavyRain_InitVars
	.4byte Rain_Main
	.4byte HeavyRain_InitAll
	.4byte Rain_Finish
	.4byte Bubbles_InitVars
	.4byte Bubbles_Main
	.4byte Bubbles_InitAll
	.4byte Bubbles_Finish
	.globl gMenuU32Table_Rom_526EDC
gMenuU32Table_Rom_526EDC: @ 0x08526EDC
	.4byte UpdateWeatherGammaShift
	.4byte FadeInScreenWithWeather
	.4byte DoNothing
	.4byte DoNothing
	@ pret/pokeemerald-jp direct xref for 0x08526EEC: field_weather.s: BuildGammaShiftTables, PreservePaletteInWeather, ResetPreservedPalettesInWeather
	.globl gFieldWeatherData_08526EEC
gFieldWeatherData_08526EEC: @ 0x08526EEC
	@ analyzed canonical ROM range 0x08526EEC-0x08526F0B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x20 entries=16
	.2byte 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0000
	.2byte 0x0102, 0x0202, 0x0202, 0x0101, 0x0101, 0x0102, 0x0101, 0x0101
	@ pret/pokeemerald-jp direct xref for 0x08526F0C: field_weather.s: StartWeather; ice.s: AnimTask_Haze1, AnimTask_LoadMistTiles
	.globl gFogPalette
gFogPalette: @ 0x08526F0C
	@ 16-color fog palette used by field weather and battle animation fog backgrounds
	.2byte 0x0000, 0x7F95, 0x7F2E, 0x7EC9, 0x4A52, 0x6318, 0x6B5A, 0x6F7B
	.2byte 0x5294, 0x7C1F, 0x7C1F, 0x7C1F, 0x5AD6, 0x739C, 0x7BDE, 0x7FFF

	.globl gCloudsWeatherPalette
gCloudsWeatherPalette: @ 0x08526F2C
	@ 16-color palette used by weather cloud sprites
	.2byte 0x7E48, 0x7F76, 0x7B2E, 0x7F10, 0x7AEA, 0x7BB5, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000

	.globl gSandstormWeatherPalette
gSandstormWeatherPalette: @ 0x08526F4C
	@ 16-color palette used by weather sandstorm sprites
	.2byte 0x0000, 0x479F, 0x2617, 0x3F1D, 0x329A, 0x19B4, 0x53DF, 0x533B
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000

	.globl gWeatherFogDiagonalTiles
gWeatherFogDiagonalTiles: @ 0x08526F6C
	@ 64x64 4bpp BG tiles used by diagonal fog weather
	.incbin "build/graphics/weather/fog_diagonal.4bpp"

	.globl gWeatherFogHorizontalTiles
gWeatherFogHorizontalTiles: @ 0x0852776C
	@ 64x64 4bpp BG tiles used by horizontal fog weather, Haze, and Mist Ball
	.incbin "build/graphics/weather/fog_horizontal.4bpp"

	.globl gWeatherCloudTiles
gWeatherCloudTiles: @ 0x08527F6C
	@ 64x64 4bpp weather cloud sprite tiles
	.incbin "build/graphics/weather/cloud.4bpp"

	.globl gWeatherSnow1Tiles
gWeatherSnow1Tiles: @ 0x0852876C
	@ 8x8 4bpp snow sprite tiles, frame 1
	.incbin "build/graphics/weather/snow0.4bpp"

	.globl gWeatherSnow2Tiles
gWeatherSnow2Tiles: @ 0x0852878C
	@ 8x8 4bpp snow sprite tiles, frame 2
	.incbin "build/graphics/weather/snow1.4bpp"

	.globl gWeatherBubbleTiles
gWeatherBubbleTiles: @ 0x085287AC
	@ 8x16 4bpp weather bubble sprite tiles
	.incbin "build/graphics/weather/bubble.4bpp"

	.globl gWeatherAshTiles
gWeatherAshTiles: @ 0x085287EC
	@ 64x128 4bpp volcanic ash sprite tiles
	.incbin "build/graphics/weather/ash.4bpp"

	.globl gWeatherRainTiles
gWeatherRainTiles: @ 0x085297EC
	@ 16x192 4bpp rain sprite tiles
	.incbin "build/graphics/weather/rain.4bpp"

	.globl gWeatherSandstormTiles
gWeatherSandstormTiles: @ 0x08529DEC
	@ 64x80 4bpp sandstorm sprite tiles
	.incbin "build/graphics/weather/sandstorm.4bpp"

	@ pret/pokeemerald-jp direct xref for 0x0852A7EC: field_weather_effect.s: CreateCloudSprites
	.globl gFieldWeatherEffectData_0852A7EC
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
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852A8F0 size=0x4 source=v54_multi_pointer
	.4byte gWeatherRainTiles
	@ ANALYSIS: RAW_BLOCK size=0xC addr=0x0852A8F4 parent=gFieldWeatherEffectData_0852A8F0 offset=0x4 entropy=1.418 head=000606120000000000040000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852A8F4 size=0xC
	.byte 0x00, 0x06, 0x06, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852A900 size=0x4 source=v54_multi_pointer
	.4byte gWeatherSnow1Tiles
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852A904 parent=gFieldWeatherEffectData_0852A8F0 offset=0x14 entropy=0.811 head=20000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852A904 size=0x4
	.byte 0x20, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852A908 size=0x4 source=v54_multi_pointer
	.4byte gWeatherSnow2Tiles
	@ ANALYSIS: RAW_BLOCK size=0x1C addr=0x0852A90C parent=gFieldWeatherEffectData_0852A8F0 offset=0x1C entropy=2.601 head=2000000000001000FFFF000001001000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852A90C size=0x1C
	.byte 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x10, 0x00
	.byte 0xFF, 0xFF, 0x00, 0x00, 0x10, 0xA9, 0x52, 0x08, 0x18, 0xA9, 0x52, 0x08
	@ pret/pokeemerald-jp direct xref for 0x0852A928: field_weather_effect.s: CreateSnowflakeSprite
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
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852A9D0 parent=gFieldWeatherEffectData_0852A9CC offset=0x4 entropy=2.0 head=00080112
	@ ANALYSIS: SOURCE_RANGE addr=0x0852A9D0 size=0x4
	.byte 0x00, 0x08, 0x01, 0x12
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
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AA7C parent=gFieldWeatherEffectData_0852AA78 offset=0x4 entropy=2.0 head=000A0412
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AA7C size=0x4
	.byte 0x00, 0x0A, 0x04, 0x12
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
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AA98 parent=gFieldWeatherEffectData_0852AA94 offset=0x4 entropy=2.0 head=40000512
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AA98 size=0x4
	.byte 0x40, 0x00, 0x05, 0x12
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
	.globl gFieldScreenEffectData_0852AB00
gFieldScreenEffectData_0852AB00: @ 0x0852AB00
	@ analyzed canonical ROM range 0x0852AB00-0x0852AB13
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x14 entries=10
	.2byte 0x00C8, 0x0048, 0x0040, 0x0038, 0x0030, 0x0028, 0x0020, 0x0018
	.2byte 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x0852AB14: overworld.s: Overworld_SetFlashLevel, SetDefaultFlashLevel
	.globl gOverworldData_0852AB14
gOverworldData_0852AB14: @ 0x0852AB14
	@ analyzed canonical ROM range 0x0852AB14-0x0852AB17
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x08, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0852AB18: field_screen_effect.s: sub_080AFC14
	.globl gFieldScreenEffectData_0852AB18
gFieldScreenEffectData_0852AB18: @ 0x0852AB18
	@ analyzed canonical ROM range 0x0852AB18-0x0852AB23
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x0040, 0x0400, 0x0001, 0xA260, 0x0001, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x0852AB24: battle_setup.s: GetWildBattleTransition
	.globl gBattleSetupData_0852AB24
gBattleSetupData_0852AB24: @ 0x0852AB24
	@ analyzed canonical ROM range 0x0852AB24-0x0852AB2B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0908, 0x0A05, 0x0A00, 0x0607
	@ pret/pokeemerald-jp direct xref for 0x0852AB2C: battle_setup.s: GetTrainerBattleTransition
	.globl gBattleSetupData_0852AB2C
gBattleSetupData_0852AB2C: @ 0x0852AB2C
	@ analyzed canonical ROM range 0x0852AB2C-0x0852AB33
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0B04, 0x0302, 0x0A00, 0x0601
	@ pret/pokeemerald-jp direct xref for 0x0852AB34: battle_setup.s: sub_080B08F8
	.globl gBattleSetupData_0852AB34
gBattleSetupData_0852AB34: @ 0x0852AB34
	@ analyzed canonical ROM range 0x0852AB34-0x0852AB3F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x1E1D, 0x201F, 0x2322, 0x2524, 0x2726, 0x2928
	@ pret/pokeemerald-jp direct xref for 0x0852AB40: battle_setup.s: sub_080B08F8
	.globl gBattleSetupData_0852AB40
gBattleSetupData_0852AB40: @ 0x0852AB40
	@ analyzed canonical ROM range 0x0852AB40-0x0852AB42
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0x1F, 0x20, 0x21
	@ pret/pokeemerald-jp direct xref for 0x0852AB43: battle_setup.s: sub_080B08F8
	.globl gBattleSetupData_0852AB43
gBattleSetupData_0852AB43: @ 0x0852AB43
	@ analyzed canonical ROM range 0x0852AB43-0x0852AB47
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0x1D, 0x1F, 0x20, 0x21, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0852AB48: battle_setup.s: BattleSetup_ConfigureTrainerBattle
	.globl gBattleSetupData_0852AB48
gBattleSetupData_0852AB48: @ 0x0852AB48
	@ analyzed canonical ROM range 0x0852AB48-0x0852AB8F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AB48 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038868
	@ ANALYSIS: ZERO_BYTES size=0x4 addr=0x0852AB4C parent=gBattleSetupData_0852AB48 offset=0x4
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AB4C size=0x4
	.byte 0x00, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AB50 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203886A
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AB54 parent=gBattleSetupData_0852AB48 offset=0xC entropy=0.811 head=01000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AB54 size=0x4
	.byte 0x01, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AB58 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038870
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AB5C parent=gBattleSetupData_0852AB48 offset=0x14 entropy=0.811 head=01000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AB5C size=0x4
	.byte 0x01, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AB60 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038874
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AB64 parent=gBattleSetupData_0852AB48 offset=0x1C entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AB64 size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AB68 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203887C
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AB6C parent=gBattleSetupData_0852AB48 offset=0x24 entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AB6C size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AB70 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038884
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AB74 parent=gBattleSetupData_0852AB48 offset=0x2C entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AB74 size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AB78 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038888
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AB7C parent=gBattleSetupData_0852AB48 offset=0x34 entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AB7C size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AB80 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038890
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AB84 parent=gBattleSetupData_0852AB48 offset=0x3C entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AB84 size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AB88 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203888C
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AB8C parent=gBattleSetupData_0852AB48 offset=0x44 entropy=0.811 head=06000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AB8C size=0x4
	.byte 0x06, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0852AB90: battle_setup.s: BattleSetup_ConfigureTrainerBattle
	.globl gBattleSetupData_0852AB90
gBattleSetupData_0852AB90: @ 0x0852AB90
	@ analyzed canonical ROM range 0x0852AB90-0x0852ABD7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AB90 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038868
	@ ANALYSIS: ZERO_BYTES size=0x4 addr=0x0852AB94 parent=gBattleSetupData_0852AB90 offset=0x4
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AB94 size=0x4
	.byte 0x00, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AB98 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203886A
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AB9C parent=gBattleSetupData_0852AB90 offset=0xC entropy=0.811 head=01000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AB9C size=0x4
	.byte 0x01, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ABA0 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038870
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ABA4 parent=gBattleSetupData_0852AB90 offset=0x14 entropy=0.811 head=01000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ABA4 size=0x4
	.byte 0x01, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ABA8 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038874
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ABAC parent=gBattleSetupData_0852AB90 offset=0x1C entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ABAC size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ABB0 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203887C
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ABB4 parent=gBattleSetupData_0852AB90 offset=0x24 entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ABB4 size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ABB8 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038884
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ABBC parent=gBattleSetupData_0852AB90 offset=0x2C entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ABBC size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ABC0 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038888
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ABC4 parent=gBattleSetupData_0852AB90 offset=0x34 entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ABC4 size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ABC8 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038890
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ABCC parent=gBattleSetupData_0852AB90 offset=0x3C entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ABCC size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ABD0 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203888C
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ABD4 parent=gBattleSetupData_0852AB90 offset=0x44 entropy=0.811 head=06000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ABD4 size=0x4
	.byte 0x06, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0852ABD8: battle_setup.s: BattleSetup_ConfigureTrainerBattle
	.globl gBattleSetupData_0852ABD8
gBattleSetupData_0852ABD8: @ 0x0852ABD8
	@ analyzed canonical ROM range 0x0852ABD8-0x0852AC1F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ABD8 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038868
	@ ANALYSIS: ZERO_BYTES size=0x4 addr=0x0852ABDC parent=gBattleSetupData_0852ABD8 offset=0x4
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ABDC size=0x4
	.byte 0x00, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ABE0 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203886A
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ABE4 parent=gBattleSetupData_0852ABD8 offset=0xC entropy=0.811 head=01000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ABE4 size=0x4
	.byte 0x01, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ABE8 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038870
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ABEC parent=gBattleSetupData_0852ABD8 offset=0x14 entropy=0.811 head=01000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ABEC size=0x4
	.byte 0x01, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ABF0 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038874
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ABF4 parent=gBattleSetupData_0852ABD8 offset=0x1C entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ABF4 size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ABF8 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203887C
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ABFC parent=gBattleSetupData_0852ABD8 offset=0x24 entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ABFC size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC00 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038884
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC04 parent=gBattleSetupData_0852ABD8 offset=0x2C entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC04 size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC08 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038888
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC0C parent=gBattleSetupData_0852ABD8 offset=0x34 entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC0C size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC10 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038890
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC14 parent=gBattleSetupData_0852ABD8 offset=0x3C entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC14 size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC18 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203888C
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC1C parent=gBattleSetupData_0852ABD8 offset=0x44 entropy=0.811 head=06000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC1C size=0x4
	.byte 0x06, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0852AC20: battle_setup.s: BattleSetup_ConfigureTrainerBattle
	.globl gBattleSetupData_0852AC20
gBattleSetupData_0852AC20: @ 0x0852AC20
	@ analyzed canonical ROM range 0x0852AC20-0x0852AC67
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC20 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038868
	@ ANALYSIS: ZERO_BYTES size=0x4 addr=0x0852AC24 parent=gBattleSetupData_0852AC20 offset=0x4
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC24 size=0x4
	.byte 0x00, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC28 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203886A
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC2C parent=gBattleSetupData_0852AC20 offset=0xC entropy=0.811 head=01000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC2C size=0x4
	.byte 0x01, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC30 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038870
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC34 parent=gBattleSetupData_0852AC20 offset=0x14 entropy=0.811 head=01000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC34 size=0x4
	.byte 0x01, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC38 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038874
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC3C parent=gBattleSetupData_0852AC20 offset=0x1C entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC3C size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC40 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203887C
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC44 parent=gBattleSetupData_0852AC20 offset=0x24 entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC44 size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC48 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038884
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC4C parent=gBattleSetupData_0852AC20 offset=0x2C entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC4C size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC50 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038888
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC54 parent=gBattleSetupData_0852AC20 offset=0x34 entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC54 size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC58 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038890
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC5C parent=gBattleSetupData_0852AC20 offset=0x3C entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC5C size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC60 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203888C
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC64 parent=gBattleSetupData_0852AC20 offset=0x44 entropy=0.811 head=06000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC64 size=0x4
	.byte 0x06, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0852AC68: battle_setup.s: BattleSetup_ConfigureTrainerBattle
	.globl gBattleSetupData_0852AC68
gBattleSetupData_0852AC68: @ 0x0852AC68
	@ analyzed canonical ROM range 0x0852AC68-0x0852ACAF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC68 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038868
	@ ANALYSIS: ZERO_BYTES size=0x4 addr=0x0852AC6C parent=gBattleSetupData_0852AC68 offset=0x4
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC6C size=0x4
	.byte 0x00, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC70 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203886A
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC74 parent=gBattleSetupData_0852AC68 offset=0xC entropy=0.811 head=01000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC74 size=0x4
	.byte 0x01, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC78 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038870
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC7C parent=gBattleSetupData_0852AC68 offset=0x14 entropy=0.811 head=01000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC7C size=0x4
	.byte 0x01, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC80 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038874
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC84 parent=gBattleSetupData_0852AC68 offset=0x1C entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC84 size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC88 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203887C
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC8C parent=gBattleSetupData_0852AC68 offset=0x24 entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC8C size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC90 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038884
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC94 parent=gBattleSetupData_0852AC68 offset=0x2C entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC94 size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AC98 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038888
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AC9C parent=gBattleSetupData_0852AC68 offset=0x34 entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AC9C size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ACA0 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038890
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ACA4 parent=gBattleSetupData_0852AC68 offset=0x3C entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ACA4 size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ACA8 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203888C
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ACAC parent=gBattleSetupData_0852AC68 offset=0x44 entropy=0.811 head=06000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ACAC size=0x4
	.byte 0x06, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0852ACB0: battle_setup.s: BattleSetup_ConfigureTrainerBattle
	.globl gBattleSetupData_0852ACB0
gBattleSetupData_0852ACB0: @ 0x0852ACB0
	@ analyzed canonical ROM range 0x0852ACB0-0x0852ACF7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ACB0 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038868
	@ ANALYSIS: ZERO_BYTES size=0x4 addr=0x0852ACB4 parent=gBattleSetupData_0852ACB0 offset=0x4
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ACB4 size=0x4
	.byte 0x00, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ACB8 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203886C
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ACBC parent=gBattleSetupData_0852ACB0 offset=0xC entropy=0.811 head=01000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ACBC size=0x4
	.byte 0x01, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ACC0 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038870
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ACC4 parent=gBattleSetupData_0852ACB0 offset=0x14 entropy=0.811 head=01000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ACC4 size=0x4
	.byte 0x01, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ACC8 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038878
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ACCC parent=gBattleSetupData_0852ACB0 offset=0x1C entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ACCC size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ACD0 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038880
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ACD4 parent=gBattleSetupData_0852ACB0 offset=0x24 entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ACD4 size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ACD8 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038884
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ACDC parent=gBattleSetupData_0852ACB0 offset=0x2C entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ACDC size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ACE0 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038888
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ACE4 parent=gBattleSetupData_0852ACB0 offset=0x34 entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ACE4 size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ACE8 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038894
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ACEC parent=gBattleSetupData_0852ACB0 offset=0x3C entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ACEC size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ACF0 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203888C
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852ACF4 parent=gBattleSetupData_0852ACB0 offset=0x44 entropy=0.811 head=06000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ACF4 size=0x4
	.byte 0x06, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0852ACF8: battle_setup.s: BattleSetup_ConfigureTrainerBattle
	.globl gBattleSetupData_0852ACF8
gBattleSetupData_0852ACF8: @ 0x0852ACF8
	@ analyzed canonical ROM range 0x0852ACF8-0x0852AD3F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852ACF8 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038868
	@ ANALYSIS: ZERO_BYTES size=0x4 addr=0x0852ACFC parent=gBattleSetupData_0852ACF8 offset=0x4
	@ ANALYSIS: SOURCE_RANGE addr=0x0852ACFC size=0x4
	.byte 0x00, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AD00 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203886C
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AD04 parent=gBattleSetupData_0852ACF8 offset=0xC entropy=0.811 head=01000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AD04 size=0x4
	.byte 0x01, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AD08 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038870
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AD0C parent=gBattleSetupData_0852ACF8 offset=0x14 entropy=0.811 head=01000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AD0C size=0x4
	.byte 0x01, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AD10 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038878
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AD14 parent=gBattleSetupData_0852ACF8 offset=0x1C entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AD14 size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AD18 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038880
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AD1C parent=gBattleSetupData_0852ACF8 offset=0x24 entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AD1C size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AD20 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038884
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AD24 parent=gBattleSetupData_0852ACF8 offset=0x2C entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AD24 size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AD28 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038888
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AD2C parent=gBattleSetupData_0852ACF8 offset=0x34 entropy=0.811 head=05000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AD2C size=0x4
	.byte 0x05, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AD30 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_02038894
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AD34 parent=gBattleSetupData_0852ACF8 offset=0x3C entropy=0.811 head=02000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AD34 size=0x4
	.byte 0x02, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x0852AD38 size=0x4 source=v54_multi_pointer
	.4byte gEwram_JP_0203888C
	@ ANALYSIS: RAW_BLOCK size=0x4 addr=0x0852AD3C parent=gBattleSetupData_0852ACF8 offset=0x44 entropy=0.811 head=06000000
	@ ANALYSIS: SOURCE_RANGE addr=0x0852AD3C size=0x4
	.byte 0x06, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0852AD40: battle_setup.s: CountBattledRematchTeams, DoesSomeoneWantRematchIn, GetLastBeatenRematchTrainerId, GetRematchTrainerId, GetTrainerMatchCallFlag (+6 more); gym_leader_rematch.s: GetRematchIndex; match_call.s: GetActiveMatchCallTrainerId, ...
	.globl gRematchTable
gRematchTable: @ 0x0852AD40
	@ analyzed canonical ROM range 0x0852AD40-0x0852B21F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ Semanticized trainer rematch / Match Call table.
	@ Record layout: 5 trainer ids, map group, map num, reserved zero.
	.macro rematch_entry trainer, rematch1, rematch2, rematch3, rematch4, map_group, map_num
	.2byte \trainer, \rematch1, \rematch2, \rematch3, \rematch4
	.2byte \map_group, \map_num, 0
	.endm

	@ ANALYSIS: SEMANTIC_REMATCH_TABLE addr=0x0852AD40 size=0x4E0 record_size=0x10 count=78
	rematch_entry TRAINER_ROSE_1, TRAINER_ROSE_2, TRAINER_ROSE_3, TRAINER_ROSE_4, TRAINER_ROSE_5, MAP_GROUP_ROUTE118, MAP_NUM_ROUTE118
	rematch_entry TRAINER_ANDRES_1, TRAINER_ANDRES_2, TRAINER_ANDRES_3, TRAINER_ANDRES_4, TRAINER_ANDRES_5, MAP_GROUP_ROUTE105, MAP_NUM_ROUTE105
	rematch_entry TRAINER_DUSTY_1, TRAINER_DUSTY_2, TRAINER_DUSTY_3, TRAINER_DUSTY_4, TRAINER_DUSTY_5, MAP_GROUP_ROUTE111, MAP_NUM_ROUTE111
	rematch_entry TRAINER_LOLA_1, TRAINER_LOLA_2, TRAINER_LOLA_3, TRAINER_LOLA_4, TRAINER_LOLA_5, MAP_GROUP_ROUTE109, MAP_NUM_ROUTE109
	rematch_entry TRAINER_RICKY_1, TRAINER_RICKY_2, TRAINER_RICKY_3, TRAINER_RICKY_4, TRAINER_RICKY_5, MAP_GROUP_ROUTE109, MAP_NUM_ROUTE109
	rematch_entry TRAINER_LILA_AND_ROY_1, TRAINER_LILA_AND_ROY_2, TRAINER_LILA_AND_ROY_3, TRAINER_LILA_AND_ROY_4, TRAINER_LILA_AND_ROY_5, MAP_GROUP_ROUTE124, MAP_NUM_ROUTE124
	rematch_entry TRAINER_CRISTIN_1, TRAINER_CRISTIN_2, TRAINER_CRISTIN_3, TRAINER_CRISTIN_4, TRAINER_CRISTIN_5, MAP_GROUP_ROUTE121, MAP_NUM_ROUTE121
	rematch_entry TRAINER_BROOKE_1, TRAINER_BROOKE_2, TRAINER_BROOKE_3, TRAINER_BROOKE_4, TRAINER_BROOKE_5, MAP_GROUP_ROUTE111, MAP_NUM_ROUTE111
	rematch_entry TRAINER_WILTON_1, TRAINER_WILTON_2, TRAINER_WILTON_3, TRAINER_WILTON_4, TRAINER_WILTON_5, MAP_GROUP_ROUTE111, MAP_NUM_ROUTE111
	rematch_entry TRAINER_VALERIE_1, TRAINER_VALERIE_2, TRAINER_VALERIE_3, TRAINER_VALERIE_4, TRAINER_VALERIE_5, MAP_GROUP_MT_PYRE_6_F, MAP_NUM_MT_PYRE_6_F
	rematch_entry TRAINER_CINDY_1, TRAINER_CINDY_3, TRAINER_CINDY_4, TRAINER_CINDY_5, TRAINER_CINDY_6, MAP_GROUP_ROUTE104, MAP_NUM_ROUTE104
	rematch_entry TRAINER_THALIA_1, TRAINER_THALIA_2, TRAINER_THALIA_3, TRAINER_THALIA_4, TRAINER_THALIA_5, MAP_GROUP_ABANDONED_SHIP_ROOMS_1F, MAP_NUM_ABANDONED_SHIP_ROOMS_1F
	rematch_entry TRAINER_JESSICA_1, TRAINER_JESSICA_2, TRAINER_JESSICA_3, TRAINER_JESSICA_4, TRAINER_JESSICA_5, MAP_GROUP_ROUTE121, MAP_NUM_ROUTE121
	rematch_entry TRAINER_WINSTON_1, TRAINER_WINSTON_2, TRAINER_WINSTON_3, TRAINER_WINSTON_4, TRAINER_WINSTON_5, MAP_GROUP_ROUTE104, MAP_NUM_ROUTE104
	rematch_entry TRAINER_STEVE_1, TRAINER_STEVE_2, TRAINER_STEVE_3, TRAINER_STEVE_4, TRAINER_STEVE_5, MAP_GROUP_ROUTE114, MAP_NUM_ROUTE114
	rematch_entry TRAINER_TONY_1, TRAINER_TONY_2, TRAINER_TONY_3, TRAINER_TONY_4, TRAINER_TONY_5, MAP_GROUP_ROUTE107, MAP_NUM_ROUTE107
	rematch_entry TRAINER_NOB_1, TRAINER_NOB_2, TRAINER_NOB_3, TRAINER_NOB_4, TRAINER_NOB_5, MAP_GROUP_ROUTE115, MAP_NUM_ROUTE115
	rematch_entry TRAINER_KOJI_1, TRAINER_KOJI_2, TRAINER_KOJI_3, TRAINER_KOJI_4, TRAINER_KOJI_5, MAP_GROUP_ROUTE127, MAP_NUM_ROUTE127
	rematch_entry TRAINER_FERNANDO_1, TRAINER_FERNANDO_2, TRAINER_FERNANDO_3, TRAINER_FERNANDO_4, TRAINER_FERNANDO_5, MAP_GROUP_ROUTE123, MAP_NUM_ROUTE123
	rematch_entry TRAINER_DALTON_1, TRAINER_DALTON_2, TRAINER_DALTON_3, TRAINER_DALTON_4, TRAINER_DALTON_5, MAP_GROUP_ROUTE118, MAP_NUM_ROUTE118
	rematch_entry TRAINER_BERNIE_1, TRAINER_BERNIE_2, TRAINER_BERNIE_3, TRAINER_BERNIE_4, TRAINER_BERNIE_5, MAP_GROUP_ROUTE114, MAP_NUM_ROUTE114
	rematch_entry TRAINER_ETHAN_1, TRAINER_ETHAN_2, TRAINER_ETHAN_3, TRAINER_ETHAN_4, TRAINER_ETHAN_5, MAP_GROUP_JAGGED_PASS, MAP_NUM_JAGGED_PASS
	rematch_entry TRAINER_JOHN_AND_JAY_1, TRAINER_JOHN_AND_JAY_2, TRAINER_JOHN_AND_JAY_3, TRAINER_JOHN_AND_JAY_4, TRAINER_JOHN_AND_JAY_5, MAP_GROUP_METEOR_FALLS_1_F_2_R, MAP_NUM_METEOR_FALLS_1_F_2_R
	rematch_entry TRAINER_JEFFREY_1, TRAINER_JEFFREY_2, TRAINER_JEFFREY_3, TRAINER_JEFFREY_4, TRAINER_JEFFREY_5, MAP_GROUP_ROUTE120, MAP_NUM_ROUTE120
	rematch_entry TRAINER_CAMERON_1, TRAINER_CAMERON_2, TRAINER_CAMERON_3, TRAINER_CAMERON_4, TRAINER_CAMERON_5, MAP_GROUP_ROUTE123, MAP_NUM_ROUTE123
	rematch_entry TRAINER_JACKI_1, TRAINER_JACKI_2, TRAINER_JACKI_3, TRAINER_JACKI_4, TRAINER_JACKI_5, MAP_GROUP_ROUTE123, MAP_NUM_ROUTE123
	rematch_entry TRAINER_WALTER_1, TRAINER_WALTER_2, TRAINER_WALTER_3, TRAINER_WALTER_4, TRAINER_WALTER_5, MAP_GROUP_ROUTE121, MAP_NUM_ROUTE121
	rematch_entry TRAINER_KAREN_1, TRAINER_KAREN_2, TRAINER_KAREN_3, TRAINER_KAREN_4, TRAINER_KAREN_5, MAP_GROUP_ROUTE116, MAP_NUM_ROUTE116
	rematch_entry TRAINER_JERRY_1, TRAINER_JERRY_2, TRAINER_JERRY_3, TRAINER_JERRY_4, TRAINER_JERRY_5, MAP_GROUP_ROUTE116, MAP_NUM_ROUTE116
	rematch_entry TRAINER_ANNA_AND_MEG_1, TRAINER_ANNA_AND_MEG_2, TRAINER_ANNA_AND_MEG_3, TRAINER_ANNA_AND_MEG_4, TRAINER_ANNA_AND_MEG_5, MAP_GROUP_ROUTE117, MAP_NUM_ROUTE117
	rematch_entry TRAINER_ISABEL_1, TRAINER_ISABEL_2, TRAINER_ISABEL_3, TRAINER_ISABEL_4, TRAINER_ISABEL_5, MAP_GROUP_ROUTE110, MAP_NUM_ROUTE110
	rematch_entry TRAINER_MIGUEL_1, TRAINER_MIGUEL_2, TRAINER_MIGUEL_3, TRAINER_MIGUEL_4, TRAINER_MIGUEL_5, MAP_GROUP_ROUTE103, MAP_NUM_ROUTE103
	rematch_entry TRAINER_TIMOTHY_1, TRAINER_TIMOTHY_2, TRAINER_TIMOTHY_3, TRAINER_TIMOTHY_4, TRAINER_TIMOTHY_5, MAP_GROUP_ROUTE115, MAP_NUM_ROUTE115
	rematch_entry TRAINER_SHELBY_1, TRAINER_SHELBY_2, TRAINER_SHELBY_3, TRAINER_SHELBY_4, TRAINER_SHELBY_5, MAP_GROUP_MT_CHIMNEY, MAP_NUM_MT_CHIMNEY
	rematch_entry TRAINER_CALVIN_1, TRAINER_CALVIN_2, TRAINER_CALVIN_3, TRAINER_CALVIN_4, TRAINER_CALVIN_5, MAP_GROUP_ROUTE102, MAP_NUM_ROUTE102
	rematch_entry TRAINER_ELLIOT_1, TRAINER_ELLIOT_2, TRAINER_ELLIOT_3, TRAINER_ELLIOT_4, TRAINER_ELLIOT_5, MAP_GROUP_ROUTE106, MAP_NUM_ROUTE106
	rematch_entry TRAINER_ISAIAH_1, TRAINER_ISAIAH_2, TRAINER_ISAIAH_3, TRAINER_ISAIAH_4, TRAINER_ISAIAH_5, MAP_GROUP_ROUTE128, MAP_NUM_ROUTE128
	rematch_entry TRAINER_MARIA_1, TRAINER_MARIA_2, TRAINER_MARIA_3, TRAINER_MARIA_4, TRAINER_MARIA_5, MAP_GROUP_ROUTE117, MAP_NUM_ROUTE117
	rematch_entry TRAINER_ABIGAIL_1, TRAINER_ABIGAIL_2, TRAINER_ABIGAIL_3, TRAINER_ABIGAIL_4, TRAINER_ABIGAIL_5, MAP_GROUP_ROUTE110, MAP_NUM_ROUTE110
	rematch_entry TRAINER_DYLAN_1, TRAINER_DYLAN_2, TRAINER_DYLAN_3, TRAINER_DYLAN_4, TRAINER_DYLAN_5, MAP_GROUP_ROUTE117, MAP_NUM_ROUTE117
	rematch_entry TRAINER_KATELYN_1, TRAINER_KATELYN_2, TRAINER_KATELYN_3, TRAINER_KATELYN_4, TRAINER_KATELYN_5, MAP_GROUP_ROUTE128, MAP_NUM_ROUTE128
	rematch_entry TRAINER_BENJAMIN_1, TRAINER_BENJAMIN_2, TRAINER_BENJAMIN_3, TRAINER_BENJAMIN_4, TRAINER_BENJAMIN_5, MAP_GROUP_ROUTE110, MAP_NUM_ROUTE110
	rematch_entry TRAINER_PABLO_1, TRAINER_PABLO_2, TRAINER_PABLO_3, TRAINER_PABLO_4, TRAINER_PABLO_5, MAP_GROUP_ROUTE126, MAP_NUM_ROUTE126
	rematch_entry TRAINER_NICOLAS_1, TRAINER_NICOLAS_2, TRAINER_NICOLAS_3, TRAINER_NICOLAS_4, TRAINER_NICOLAS_5, MAP_GROUP_METEOR_FALLS_1_F_2_R, MAP_NUM_METEOR_FALLS_1_F_2_R
	rematch_entry TRAINER_ROBERT_1, TRAINER_ROBERT_2, TRAINER_ROBERT_3, TRAINER_ROBERT_4, TRAINER_ROBERT_5, MAP_GROUP_ROUTE120, MAP_NUM_ROUTE120
	rematch_entry TRAINER_LAO_1, TRAINER_LAO_2, TRAINER_LAO_3, TRAINER_LAO_4, TRAINER_LAO_5, MAP_GROUP_ROUTE113, MAP_NUM_ROUTE113
	rematch_entry TRAINER_CYNDY_1, TRAINER_CYNDY_2, TRAINER_CYNDY_3, TRAINER_CYNDY_4, TRAINER_CYNDY_5, MAP_GROUP_ROUTE115, MAP_NUM_ROUTE115
	rematch_entry TRAINER_MADELINE_1, TRAINER_MADELINE_2, TRAINER_MADELINE_3, TRAINER_MADELINE_4, TRAINER_MADELINE_5, MAP_GROUP_ROUTE113, MAP_NUM_ROUTE113
	rematch_entry TRAINER_JENNY_1, TRAINER_JENNY_2, TRAINER_JENNY_3, TRAINER_JENNY_4, TRAINER_JENNY_5, MAP_GROUP_ROUTE124, MAP_NUM_ROUTE124
	rematch_entry TRAINER_DIANA_1, TRAINER_DIANA_2, TRAINER_DIANA_3, TRAINER_DIANA_4, TRAINER_DIANA_5, MAP_GROUP_JAGGED_PASS, MAP_NUM_JAGGED_PASS
	rematch_entry TRAINER_AMY_AND_LIV_1, TRAINER_AMY_AND_LIV_2, TRAINER_AMY_AND_LIV_4, TRAINER_AMY_AND_LIV_5, TRAINER_AMY_AND_LIV_6, MAP_GROUP_ROUTE103, MAP_NUM_ROUTE103
	rematch_entry TRAINER_ERNEST_1, TRAINER_ERNEST_2, TRAINER_ERNEST_3, TRAINER_ERNEST_4, TRAINER_ERNEST_5, MAP_GROUP_ROUTE125, MAP_NUM_ROUTE125
	rematch_entry TRAINER_CORY_1, TRAINER_CORY_2, TRAINER_CORY_3, TRAINER_CORY_4, TRAINER_CORY_5, MAP_GROUP_ROUTE108, MAP_NUM_ROUTE108
	rematch_entry TRAINER_EDWIN_1, TRAINER_EDWIN_2, TRAINER_EDWIN_3, TRAINER_EDWIN_4, TRAINER_EDWIN_5, MAP_GROUP_ROUTE110, MAP_NUM_ROUTE110
	rematch_entry TRAINER_LYDIA_1, TRAINER_LYDIA_2, TRAINER_LYDIA_3, TRAINER_LYDIA_4, TRAINER_LYDIA_5, MAP_GROUP_ROUTE117, MAP_NUM_ROUTE117
	rematch_entry TRAINER_ISAAC_1, TRAINER_ISAAC_2, TRAINER_ISAAC_3, TRAINER_ISAAC_4, TRAINER_ISAAC_5, MAP_GROUP_ROUTE117, MAP_NUM_ROUTE117
	rematch_entry TRAINER_GABRIELLE_1, TRAINER_GABRIELLE_2, TRAINER_GABRIELLE_3, TRAINER_GABRIELLE_4, TRAINER_GABRIELLE_5, MAP_GROUP_MT_PYRE_3_F, MAP_NUM_MT_PYRE_3_F
	rematch_entry TRAINER_CATHERINE_1, TRAINER_CATHERINE_2, TRAINER_CATHERINE_3, TRAINER_CATHERINE_4, TRAINER_CATHERINE_5, MAP_GROUP_ROUTE119, MAP_NUM_ROUTE119
	rematch_entry TRAINER_JACKSON_1, TRAINER_JACKSON_2, TRAINER_JACKSON_3, TRAINER_JACKSON_4, TRAINER_JACKSON_5, MAP_GROUP_ROUTE119, MAP_NUM_ROUTE119
	rematch_entry TRAINER_HALEY_1, TRAINER_HALEY_2, TRAINER_HALEY_3, TRAINER_HALEY_4, TRAINER_HALEY_5, MAP_GROUP_ROUTE104, MAP_NUM_ROUTE104
	rematch_entry TRAINER_JAMES_1, TRAINER_JAMES_2, TRAINER_JAMES_3, TRAINER_JAMES_4, TRAINER_JAMES_5, MAP_GROUP_PETALBURG_WOODS, MAP_NUM_PETALBURG_WOODS
	rematch_entry TRAINER_TRENT_1, TRAINER_TRENT_2, TRAINER_TRENT_3, TRAINER_TRENT_4, TRAINER_TRENT_5, MAP_GROUP_ROUTE112, MAP_NUM_ROUTE112
	rematch_entry TRAINER_SAWYER_1, TRAINER_SAWYER_2, TRAINER_SAWYER_3, TRAINER_SAWYER_4, TRAINER_SAWYER_5, MAP_GROUP_MT_CHIMNEY, MAP_NUM_MT_CHIMNEY
	rematch_entry TRAINER_KIRA_AND_DAN_1, TRAINER_KIRA_AND_DAN_2, TRAINER_KIRA_AND_DAN_3, TRAINER_KIRA_AND_DAN_4, TRAINER_KIRA_AND_DAN_5, MAP_GROUP_ABANDONED_SHIP_ROOMS2_1F, MAP_NUM_ABANDONED_SHIP_ROOMS2_1F
	rematch_entry TRAINER_WALLY_VR_2, TRAINER_WALLY_VR_3, TRAINER_WALLY_VR_4, TRAINER_WALLY_VR_5, TRAINER_WALLY_VR_5, MAP_GROUP_VICTORY_ROAD_1_F, MAP_NUM_VICTORY_ROAD_1_F
	rematch_entry TRAINER_ROXANNE_1, TRAINER_ROXANNE_2, TRAINER_ROXANNE_3, TRAINER_ROXANNE_4, TRAINER_ROXANNE_5, MAP_GROUP_RUSTBORO_CITY, MAP_NUM_RUSTBORO_CITY
	rematch_entry TRAINER_BRAWLY_1, TRAINER_BRAWLY_2, TRAINER_BRAWLY_3, TRAINER_BRAWLY_4, TRAINER_BRAWLY_5, MAP_GROUP_DEWFORD_TOWN, MAP_NUM_DEWFORD_TOWN
	rematch_entry TRAINER_WATTSON_1, TRAINER_WATTSON_2, TRAINER_WATTSON_3, TRAINER_WATTSON_4, TRAINER_WATTSON_5, MAP_GROUP_MAUVILLE_CITY, MAP_NUM_MAUVILLE_CITY
	rematch_entry TRAINER_FLANNERY_1, TRAINER_FLANNERY_2, TRAINER_FLANNERY_3, TRAINER_FLANNERY_4, TRAINER_FLANNERY_5, MAP_GROUP_LAVARIDGE_TOWN, MAP_NUM_LAVARIDGE_TOWN
	rematch_entry TRAINER_NORMAN_1, TRAINER_NORMAN_2, TRAINER_NORMAN_3, TRAINER_NORMAN_4, TRAINER_NORMAN_5, MAP_GROUP_PETALBURG_CITY, MAP_NUM_PETALBURG_CITY
	rematch_entry TRAINER_WINONA_1, TRAINER_WINONA_2, TRAINER_WINONA_3, TRAINER_WINONA_4, TRAINER_WINONA_5, MAP_GROUP_FORTREE_CITY, MAP_NUM_FORTREE_CITY
	rematch_entry TRAINER_TATE_AND_LIZA_1, TRAINER_TATE_AND_LIZA_2, TRAINER_TATE_AND_LIZA_3, TRAINER_TATE_AND_LIZA_4, TRAINER_TATE_AND_LIZA_5, MAP_GROUP_MOSSDEEP_CITY, MAP_NUM_MOSSDEEP_CITY
	rematch_entry TRAINER_JUAN_1, TRAINER_JUAN_2, TRAINER_JUAN_3, TRAINER_JUAN_4, TRAINER_JUAN_5, MAP_GROUP_SOOTOPOLIS_CITY, MAP_NUM_SOOTOPOLIS_CITY
	rematch_entry TRAINER_SIDNEY, TRAINER_SIDNEY, TRAINER_SIDNEY, TRAINER_SIDNEY, TRAINER_SIDNEY, MAP_GROUP_EVER_GRANDE_CITY, MAP_NUM_EVER_GRANDE_CITY
	rematch_entry TRAINER_PHOEBE, TRAINER_PHOEBE, TRAINER_PHOEBE, TRAINER_PHOEBE, TRAINER_PHOEBE, MAP_GROUP_EVER_GRANDE_CITY, MAP_NUM_EVER_GRANDE_CITY
	rematch_entry TRAINER_GLACIA, TRAINER_GLACIA, TRAINER_GLACIA, TRAINER_GLACIA, TRAINER_GLACIA, MAP_GROUP_EVER_GRANDE_CITY, MAP_NUM_EVER_GRANDE_CITY
	rematch_entry TRAINER_DRAKE, TRAINER_DRAKE, TRAINER_DRAKE, TRAINER_DRAKE, TRAINER_DRAKE, MAP_GROUP_EVER_GRANDE_CITY, MAP_NUM_EVER_GRANDE_CITY
	rematch_entry TRAINER_WALLACE, TRAINER_WALLACE, TRAINER_WALLACE, TRAINER_WALLACE, TRAINER_WALLACE, MAP_GROUP_EVER_GRANDE_CITY, MAP_NUM_EVER_GRANDE_CITY

	.purgem rematch_entry
	@ pret/pokeemerald-jp direct xref for 0x0852B220: battle_setup.s: HasAtLeastFiveBadges
	.globl gBattleSetupData_0852B220
gBattleSetupData_0852B220: @ 0x0852B220
	@ confirmed contiguous ROM pointer table: 4 entries from this address
sPointerTable_0852B220:
	@ analyzed canonical ROM range 0x0852B220-0x0852B22F
	@ pointer/nullable table
	.4byte gText_Rom_680867 @ +0x0
	.4byte 0x086A0869 @ +0x4
	.4byte 0x086C086B @ +0x8
	.4byte 0x086E086D @ +0xC
	.globl gText_Rom_52B230
