	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	.globl gText_Rom_24B2B9
gText_Rom_24B2B9: @ 0x0824B2B9
	.string "きあいだめ$"
	.if (. - gText_Rom_24B2B9) > 0x6
	.error "gText_Rom_24B2B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2B9) < 0x6
	.space 0x6 - (. - gText_Rom_24B2B9)
	.endif
