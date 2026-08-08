	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B40B
gText_Rom_24B40B: @ 0x0824B40B
	.string "こわいくらい　うまく　いった！$"
	.if (. - gText_Rom_24B40B) > 0x10
	.error "gText_Rom_24B40B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B40B) < 0x10
	.space 0x10 - (. - gText_Rom_24B40B)
	.endif
