	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B3F7
gText_Rom_24B3F7: @ 0x0824B3F7
	.string "これいじょう　わざを\nだせなくなった！{EOS}"
	.if (. - gText_Rom_24B3F7) > 0x14
	.error "gText_Rom_24B3F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B3F7) < 0x14
	.space 0x14 - (. - gText_Rom_24B3F7)
	.endif
