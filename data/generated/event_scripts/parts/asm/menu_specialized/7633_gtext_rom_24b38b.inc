	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B38B
gText_Rom_24B38B: @ 0x0824B38B
	.string "しかし　じゃまを　された！$"
	.if (. - gText_Rom_24B38B) > 0xe
	.error "gText_Rom_24B38B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B38B) < 0xe
	.space 0xe - (. - gText_Rom_24B38B)
	.endif
