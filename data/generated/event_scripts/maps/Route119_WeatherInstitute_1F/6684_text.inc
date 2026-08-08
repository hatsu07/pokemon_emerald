	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:90 Route119_WeatherInstitute_1F_Text_Grunt4Defeat (+1 aliases)
	.globl gText_Rom_24134A
gText_Rom_24134A: @ 0x0824134A
	.string "あらー\nまけちゃったー!?$"
	.if (. - gText_Rom_24134A) > 0xe
	.error "gText_Rom_24134A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24134A) < 0xe
	.space 0xe - (. - gText_Rom_24134A)
	.endif
