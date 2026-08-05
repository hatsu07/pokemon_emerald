	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:319 Route110_TrickHousePuzzle3_Text_MarthaDefeat (+1 aliases)
	.globl gText_Rom_23EAB5
gText_Rom_23EAB5: @ 0x0823EAB5
	.string "ひっ ひどいわ……$"
	.if (. - gText_Rom_23EAB5) > 0xa
	.error "gText_Rom_23EAB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EAB5) < 0xa
	.space 0xa - (. - gText_Rom_23EAB5)
	.endif
