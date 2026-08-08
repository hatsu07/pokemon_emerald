	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2C7
gText_Rom_24B2C7: @ 0x0824B2C7
	.string "タマゴうみ$"
	.if (. - gText_Rom_24B2C7) > 0x6
	.error "gText_Rom_24B2C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2C7) < 0x6
	.space 0x6 - (. - gText_Rom_24B2C7)
	.endif
