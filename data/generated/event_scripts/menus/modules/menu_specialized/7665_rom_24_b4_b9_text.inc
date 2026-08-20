	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B4B9
gText_Rom_24B4B9: @ 0x0824B4B9
	.string "{0xFD}{0x02}は\nものすごく　めだった！{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_24B4B9) > 0x12
	.error "gText_Rom_24B4B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B4B9) < 0x12
	.space 0x12 - (. - gText_Rom_24B4B9)
	.endif
