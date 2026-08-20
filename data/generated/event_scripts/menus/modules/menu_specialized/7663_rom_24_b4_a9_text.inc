	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B4A9
gText_Rom_24B4A9: @ 0x0824B4A9
	.string "{0xFD}{0x02}は\nかなり　めだった！{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_24B4A9) > 0x10
	.error "gText_Rom_24B4A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B4A9) < 0x10
	.space 0x10 - (. - gText_Rom_24B4A9)
	.endif
