	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B484
gText_Rom_24B484: @ 0x0824B484
	.string "{0xFD}{0x02}は\nあんまり　めだたなかった…{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_24B484) > 0x14
	.error "gText_Rom_24B484 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B484) < 0x14
	.space 0x14 - (. - gText_Rom_24B484)
	.endif
