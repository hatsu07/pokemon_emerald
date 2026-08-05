	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2BF
gText_Rom_24B2BF: @ 0x0824B2BF
	.string "さいみんじゅつ$"
	.if (. - gText_Rom_24B2BF) > 0x8
	.error "gText_Rom_24B2BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2BF) < 0x8
	.space 0x8 - (. - gText_Rom_24B2BF)
	.endif
