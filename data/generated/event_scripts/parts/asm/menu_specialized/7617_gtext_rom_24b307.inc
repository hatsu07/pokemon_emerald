	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B307
gText_Rom_24B307: @ 0x0824B307
	.string "かわいい$"
	.if (. - gText_Rom_24B307) > 0x5
	.error "gText_Rom_24B307 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B307) < 0x5
	.space 0x5 - (. - gText_Rom_24B307)
	.endif
