	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:294 Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather
	.globl gText_Rom_241A66
gText_Rom_241A66: @ 0x08241A66
	.string "そいつは そのときの てんきに よって\nすがたを かえる ポケモン なんだよ\pけんきゅうじょ には たくさん いるから\nえんりょせずに もらって おくれよ$"
	.if (. - gText_Rom_241A66) > 0x4e
	.error "gText_Rom_241A66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241A66) < 0x4e
	.space 0x4e - (. - gText_Rom_241A66)
	.endif
