	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B3A9
gText_Rom_24B3A9: @ 0x0824B3A9
	.string "しかし　しっぱいして\nしまった！{EOS}"
	.if (. - gText_Rom_24B3A9) > 0x11
	.error "gText_Rom_24B3A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B3A9) < 0x11
	.space 0x11 - (. - gText_Rom_24B3A9)
	.endif
