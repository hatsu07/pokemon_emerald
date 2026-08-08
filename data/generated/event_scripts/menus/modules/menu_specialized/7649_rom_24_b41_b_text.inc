	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B41B
gText_Rom_24B41B: @ 0x0824B41B
	.string "めだっている　ポケモンと\nおなじくらい　がんばった！$"
	.if (. - gText_Rom_24B41B) > 0x1b
	.error "gText_Rom_24B41B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B41B) < 0x1b
	.space 0x1b - (. - gText_Rom_24B41B)
	.endif
