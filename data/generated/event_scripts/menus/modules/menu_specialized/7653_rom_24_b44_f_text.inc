	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B44F
gText_Rom_24B44F: @ 0x0824B44F
	.string "かなり　うまく　いった！{EOS}"
	.if (. - gText_Rom_24B44F) > 0xd
	.error "gText_Rom_24B44F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B44F) < 0xd
	.space 0xd - (. - gText_Rom_24B44F)
	.endif
