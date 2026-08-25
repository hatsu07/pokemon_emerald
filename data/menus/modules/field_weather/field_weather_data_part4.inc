	.globl gWeatherRainSpriteSheet
gWeatherRainSpriteSheet: @ 0x0852A8F0
	.4byte gWeatherRainTiles @ data
	.2byte 0x0600, 0x1206 @ SpriteSheet size, tag
	.globl gWeatherSnowflakeSpriteOam
gWeatherSnowflakeSpriteOam: @ 0x0852A8F8
	.2byte 0x0000, 0x0000, 0x0400, 0x0000 @ 8x8, priority 1 OamData
	.globl gWeatherSnowflakeSpriteImages
gWeatherSnowflakeSpriteImages: @ 0x0852A900
	.4byte gWeatherSnow1Tiles
	.2byte 0x0020, 0x0000 @ image size, padding
	.4byte gWeatherSnow2Tiles
	.2byte 0x0020, 0x0000 @ image size, padding

	.globl gWeatherSnowflakeAnimCmd0
gWeatherSnowflakeAnimCmd0: @ 0x0852A910
	.2byte 0, 16
	.2byte 0xFFFF, 0 @ ANIMCMD_END

	.globl gWeatherSnowflakeAnimCmd1
gWeatherSnowflakeAnimCmd1: @ 0x0852A918
	.2byte 1, 16
	.2byte 0xFFFF, 0 @ ANIMCMD_END

	.globl gWeatherSnowflakeAnimTable
gWeatherSnowflakeAnimTable: @ 0x0852A920
	.4byte gWeatherSnowflakeAnimCmd0
	.4byte gWeatherSnowflakeAnimCmd1
	@ pret/pokeemerald-jp direct xref for 0x0852A928: field_weather_effect.s: CreateSnowflakeSprite
