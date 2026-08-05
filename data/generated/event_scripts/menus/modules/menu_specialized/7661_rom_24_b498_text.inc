	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B498
gText_Rom_24B498: @ 0x0824B498
	.string "{0xFD}{0x02}は\nまあまあ　めだった！{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_24B498) > 0x11
	.error "gText_Rom_24B498 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B498) < 0x11
	.space 0x11 - (. - gText_Rom_24B498)
	.endif
