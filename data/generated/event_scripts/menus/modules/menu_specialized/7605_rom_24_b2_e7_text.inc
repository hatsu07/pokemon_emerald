	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2E7
gText_Rom_24B2E7: @ 0x0824B2E7
	.string "ねむる$"
	.if (. - gText_Rom_24B2E7) > 0x4
	.error "gText_Rom_24B2E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2E7) < 0x4
	.space 0x4 - (. - gText_Rom_24B2E7)
	.endif
