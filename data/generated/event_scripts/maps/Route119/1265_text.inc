	@ data/maps/Route119/scripts.inc:600 Route119_Text_WeatherInstitute
	.globl gText_Rom_1ED801
gText_Rom_1ED801: @ 0x081ED801
	.string "「てんき けんきゅうじょ」$"
	.if (. - gText_Rom_1ED801) > 0xe
	.error "gText_Rom_1ED801 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ED801) < 0xe
	.space 0xe - (. - gText_Rom_1ED801)
	.endif
