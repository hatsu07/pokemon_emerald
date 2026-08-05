	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2E1
gText_Rom_24B2E1: @ 0x0824B2E1
	.string "にほんばれ$"
	.if (. - gText_Rom_24B2E1) > 0x6
	.error "gText_Rom_24B2E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2E1) < 0x6
	.space 0x6 - (. - gText_Rom_24B2E1)
	.endif
