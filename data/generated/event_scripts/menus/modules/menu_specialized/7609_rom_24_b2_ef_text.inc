	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	.globl gText_Rom_24B2EF
gText_Rom_24B2EF: @ 0x0824B2EF
	.string "まるくなる{EOS}"
	.if (. - gText_Rom_24B2EF) > 0x6
	.error "gText_Rom_24B2EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2EF) < 0x6
	.space 0x6 - (. - gText_Rom_24B2EF)
	.endif
