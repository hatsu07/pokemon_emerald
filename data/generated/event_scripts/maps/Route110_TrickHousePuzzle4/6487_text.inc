	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:33 Route110_TrickHousePuzzle4_Text_CoraIntro (+1 aliases)
	.globl gText_Rom_23EBE9
gText_Rom_23EBE9: @ 0x0823EBE9
	.string "こういうの かんがえるのって めんどう!\nわたしは しょうぶだけ したいのにー!$"
	.if (. - gText_Rom_23EBE9) > 0x29
	.error "gText_Rom_23EBE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EBE9) < 0x29
	.space 0x29 - (. - gText_Rom_23EBE9)
	.endif
