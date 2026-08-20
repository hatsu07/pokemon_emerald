	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:238 Route119_WeatherInstitute_2F_Text_Grunt5Defeat (+1 aliases)
	.globl gText_Rom_241883
gText_Rom_241883: @ 0x08241883
	.string "んもー ポケモンがー{EOS}"
	.if (. - gText_Rom_241883) > 0xb
	.error "gText_Rom_241883 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241883) < 0xb
	.space 0xb - (. - gText_Rom_241883)
	.endif
