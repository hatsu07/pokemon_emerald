	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	.globl gText_Rom_24B2F5
gText_Rom_24B2F5: @ 0x0824B2F5
	.string "ロックオン$"
	.if (. - gText_Rom_24B2F5) > 0x6
	.error "gText_Rom_24B2F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2F5) < 0x6
	.space 0x6 - (. - gText_Rom_24B2F5)
	.endif
