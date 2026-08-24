	.globl gCloudsWeatherPalette
gCloudsWeatherPalette: @ 0x08526F2C
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ 16-color palette used by weather cloud sprites
	@ Editable palette PNG: 1 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/weather/gCloudsWeatherPalette.gbapal"

	.globl gSandstormWeatherPalette
gSandstormWeatherPalette: @ 0x08526F4C
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ 16-color palette used by weather sandstorm sprites
	@ Editable palette PNG: 1 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/weather/gSandstormWeatherPalette.gbapal"

	.globl gWeatherFogDiagonalTiles
gWeatherFogDiagonalTiles: @ 0x08526F6C
	@ 64x64 4bpp BG tiles used by diagonal fog weather
	.incbin "build/graphics/weather/fog_diagonal.4bpp"

	.globl gWeatherFogHorizontalTiles
gWeatherFogHorizontalTiles: @ 0x0852776C
	@ 64x64 4bpp BG tiles used by horizontal fog weather, Haze, and Mist Ball
	.incbin "build/graphics/weather/fog_horizontal.4bpp"

