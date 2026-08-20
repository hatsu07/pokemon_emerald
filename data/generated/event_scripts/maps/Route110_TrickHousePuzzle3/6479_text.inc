	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:325 Route110_TrickHousePuzzle3_Text_AlanIntro (+1 aliases)
	.globl gText_Rom_23EAD8
gText_Rom_23EAD8: @ 0x0823EAD8
	.string "いったい なんの ために\nこんな やしきが あるんだろう……?{EOS}"
	.if (. - gText_Rom_23EAD8) > 0x20
	.error "gText_Rom_23EAD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EAD8) < 0x20
	.space 0x20 - (. - gText_Rom_23EAD8)
	.endif
