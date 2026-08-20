	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:287 Route119_WeatherInstitute_2F_Text_NoRoomForPokemon
	.globl gText_Rom_241A3C
gText_Rom_241A3C: @ 0x08241A3C
	.string "あら? それいじょう\nポケモンを もてないようだよ{EOS}"
	.if (. - gText_Rom_241A3C) > 0x1a
	.error "gText_Rom_241A3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241A3C) < 0x1a
	.space 0x1a - (. - gText_Rom_241A3C)
	.endif
