	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:365 Route110_TrickHousePuzzle7_Text_EverettIntro (+1 aliases)
	.globl gText_Rom_240422
gText_Rom_240422: @ 0x08240422
	.string "せ せまいな……\nここは……$"
	.if (. - gText_Rom_240422) > 0xf
	.error "gText_Rom_240422 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240422) < 0xf
	.space 0xf - (. - gText_Rom_240422)
	.endif
