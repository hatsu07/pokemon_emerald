	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B0EE
gText_Rom_24B0EE: @ 0x0824B0EE
	.string "だすときに　よって　アピールの\nできぐあいが　いろいろと　かわる$"
	.if (. - gText_Rom_24B0EE) > 0x21
	.error "gText_Rom_24B0EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B0EE) < 0x21
	.space 0x21 - (. - gText_Rom_24B0EE)
	.endif
