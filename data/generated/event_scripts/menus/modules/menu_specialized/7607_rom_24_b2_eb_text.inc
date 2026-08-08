	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2EB
gText_Rom_24B2EB: @ 0x0824B2EB
	.string "はさむ$"
	.if (. - gText_Rom_24B2EB) > 0x4
	.error "gText_Rom_24B2EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2EB) < 0x4
	.space 0x4 - (. - gText_Rom_24B2EB)
	.endif
