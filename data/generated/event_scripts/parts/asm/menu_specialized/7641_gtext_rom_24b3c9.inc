	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B3C9
gText_Rom_24B3C9: @ 0x0824B3C9
	.string "しんさいんが　なぜか\nめを　そらした！$"
	.if (. - gText_Rom_24B3C9) > 0x14
	.error "gText_Rom_24B3C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B3C9) < 0x14
	.space 0x14 - (. - gText_Rom_24B3C9)
	.endif
