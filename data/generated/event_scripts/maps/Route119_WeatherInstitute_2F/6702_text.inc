	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:211 Route119_WeatherInstitute_2F_Text_Grunt2Defeat (+1 aliases)
	.globl gText_Rom_24179D
gText_Rom_24179D: @ 0x0824179D
	.string "こんな こどもに じゃま されるのか!?$"
	.if (. - gText_Rom_24179D) > 0x15
	.error "gText_Rom_24179D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24179D) < 0x15
	.space 0x15 - (. - gText_Rom_24179D)
	.endif
