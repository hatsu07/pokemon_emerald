	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:45 Route110_TrickHousePuzzle4_Text_YujiDefeat (+1 aliases)
	.globl gText_Rom_23EC73
gText_Rom_23EC73: @ 0x0823EC73
	.string "いわが おせても\nパズルが とけない……$"
	.if (. - gText_Rom_23EC73) > 0x15
	.error "gText_Rom_23EC73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EC73) < 0x15
	.space 0x15 - (. - gText_Rom_23EC73)
	.endif
