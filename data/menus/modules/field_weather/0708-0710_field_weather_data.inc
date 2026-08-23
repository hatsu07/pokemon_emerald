	@ pret/pokeemerald-jp direct xref for 0x08526DE8: cable_car.s: CableCarMainCallback_Setup, CleanupCableCar, sub_081503C0, sub_08150640; field_weather_effect.s: Ash_Finish, Ash_InitAll, Ash_InitVars, Ash_Main, Bubbles_InitAll (+69 more)
	.globl gWeatherPtr
gWeatherPtr: @ 0x08526DE8
	@ const pointer used by field weather/effects and cable car code.
	@ Canonical target is gWeather; this JP tree has no exported gWeather ELF symbol.
	.set sWeatherStateEwram, 0x020380F4
	.4byte sWeatherStateEwram
	.globl sWeatherFuncs
sWeatherFuncs: @ 0x08526DEC
	@ struct WeatherCallbacks[15], 4 function pointers per weather.
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
	.if (. - sWeatherFuncs) != 0xF0
	.error "sWeatherFuncs size mismatch"
	.endif
	.globl gWeatherPalStateFuncs
gWeatherPalStateFuncs: @ 0x08526EDC
	.4byte UpdateWeatherGammaShift
	.4byte FadeInScreenWithWeather
	.4byte DoNothing
	.4byte DoNothing
	.if (. - gWeatherPalStateFuncs) != 0x10
	.error "gWeatherPalStateFuncs size mismatch"
	.endif
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
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ 16-color fog palette used by field weather and battle animation fog backgrounds
	@ Editable palette PNG: 1 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/weather/gFogPalette.gbapal"

	.globl gCloudsWeatherPalette
