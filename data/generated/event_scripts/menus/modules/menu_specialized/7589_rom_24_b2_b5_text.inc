	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	.globl gText_Rom_24B2B5
gText_Rom_24B2B5: @ 0x0824B2B5
	.string "いかり$"
	.if (. - gText_Rom_24B2B5) > 0x4
	.error "gText_Rom_24B2B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2B5) < 0x4
	.space 0x4 - (. - gText_Rom_24B2B5)
	.endif
