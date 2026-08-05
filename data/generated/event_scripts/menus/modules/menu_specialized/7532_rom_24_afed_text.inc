	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24AFED
gText_Rom_24AFED: @ 0x0824AFED
	.string "このあと　アピールする　ポケモン\nみんなを　きんちょう　させる$"
	.if (. - gText_Rom_24AFED) > 0x20
	.error "gText_Rom_24AFED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AFED) < 0x20
	.space 0x20 - (. - gText_Rom_24AFED)
	.endif
