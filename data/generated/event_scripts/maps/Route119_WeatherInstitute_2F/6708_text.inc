	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:224 Route119_WeatherInstitute_2F_Text_Grunt3Defeat (+1 aliases)
	.globl gText_Rom_241819
gText_Rom_241819: @ 0x08241819
	.string "こいつは まいった!{EOS}"
	.if (. - gText_Rom_241819) > 0xb
	.error "gText_Rom_241819 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241819) < 0xb
	.space 0xb - (. - gText_Rom_241819)
	.endif
