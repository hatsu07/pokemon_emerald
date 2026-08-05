	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:33 Route110_TrickHousePuzzle8_Text_VincentIntro (+1 aliases)
	.globl gText_Rom_240502
gText_Rom_240502: @ 0x08240502
	.string "ここまで こられる トレーナーは\nそうは いないよな!$"
	.if (. - gText_Rom_240502) > 0x1c
	.error "gText_Rom_240502 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240502) < 0x1c
	.space 0x1c - (. - gText_Rom_240502)
	.endif
