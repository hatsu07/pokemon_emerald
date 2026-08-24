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
