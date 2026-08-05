	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24AD95
gText_Rom_24AD95: @ 0x0824AD95
	.string "この　わざを　だした　あとは\nあまり　びっくり　しなくなる$"
	.if (. - gText_Rom_24AD95) > 0x1e
	.error "gText_Rom_24AD95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AD95) < 0x1e
	.space 0x1e - (. - gText_Rom_24AD95)
	.endif
