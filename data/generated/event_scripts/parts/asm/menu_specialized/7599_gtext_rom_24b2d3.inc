	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2D3
gText_Rom_24B2D3: @ 0x0824B2D3
	.string "つるぎのまい$"
	.if (. - gText_Rom_24B2D3) > 0x7
	.error "gText_Rom_24B2D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2D3) < 0x7
	.space 0x7 - (. - gText_Rom_24B2D3)
	.endif
