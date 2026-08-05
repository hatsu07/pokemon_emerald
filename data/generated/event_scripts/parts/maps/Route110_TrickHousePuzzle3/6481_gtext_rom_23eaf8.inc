	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:328 Route110_TrickHousePuzzle3_Text_AlanDefeat (+1 aliases)
	.globl gText_Rom_23EAF8
gText_Rom_23EAF8: @ 0x0823EAF8
	.string "いったい なぜ\nわしは まけて しまったんだろう……?$"
	.if (. - gText_Rom_23EAF8) > 0x1c
	.error "gText_Rom_23EAF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EAF8) < 0x1c
	.space 0x1c - (. - gText_Rom_23EAF8)
	.endif
