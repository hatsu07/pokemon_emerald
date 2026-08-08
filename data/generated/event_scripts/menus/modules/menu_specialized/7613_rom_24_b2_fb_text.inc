	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2FB
gText_Rom_24B2FB: @ 0x0824B2FB
	.string "かっこいい$"
	.if (. - gText_Rom_24B2FB) > 0x6
	.error "gText_Rom_24B2FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2FB) < 0x6
	.space 0x6 - (. - gText_Rom_24B2FB)
	.endif
