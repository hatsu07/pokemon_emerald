	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B30C
gText_Rom_24B30C: @ 0x0824B30C
	.string "かしこい$"
	.if (. - gText_Rom_24B30C) > 0x5
	.error "gText_Rom_24B30C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B30C) < 0x5
	.space 0x5 - (. - gText_Rom_24B30C)
	.endif
