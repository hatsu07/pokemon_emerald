	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:322 Route110_TrickHousePuzzle3_Text_MarthaPostBattle
	.globl gText_Rom_23EABF
gText_Rom_23EABF: @ 0x0823EABF
	.string "どうせ あたしは よわいし\nほうこうおんちよー!$"
	.if (. - gText_Rom_23EABF) > 0x19
	.error "gText_Rom_23EABF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EABF) < 0x19
	.space 0x19 - (. - gText_Rom_23EABF)
	.endif
