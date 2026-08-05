	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B3BA
gText_Rom_24B3BA: @ 0x0824B3BA
	.string "いつもより　うまく　いった！$"
	.if (. - gText_Rom_24B3BA) > 0xf
	.error "gText_Rom_24B3BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B3BA) < 0xf
	.space 0xf - (. - gText_Rom_24B3BA)
	.endif
