	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:108 Route119_WeatherInstitute_1F_Text_ProfStudyingRain
	.globl gText_Rom_2413CC
gText_Rom_2413CC: @ 0x082413CC
	.string "はかせは あめが だいすき なのです\pですが あめが ふりつづくと\nこまってしまう ひとも いるわけです\pそこで はかせは\nこの あめを なにかに つかえないか\lけんきゅう なさっているのです$"
	.if (. - gText_Rom_2413CC) > 0x61
	.error "gText_Rom_2413CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2413CC) < 0x61
	.space 0x61 - (. - gText_Rom_2413CC)
	.endif
