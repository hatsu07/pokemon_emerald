	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:323 Route110_TrickHousePuzzle7_Text_JoshuaDefeat (+1 aliases)
	.globl gText_Rom_2402A9
gText_Rom_2402A9: @ 0x082402A9
	.string "ひえー\nなんで そんなに つよいの?$"
	.if (. - gText_Rom_2402A9) > 0x13
	.error "gText_Rom_2402A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2402A9) < 0x13
	.space 0x13 - (. - gText_Rom_2402A9)
	.endif
