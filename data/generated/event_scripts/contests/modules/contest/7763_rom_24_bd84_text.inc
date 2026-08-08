	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BD84
gText_Rom_24BD84: @ 0x0824BD84
	.string "{0xFD}{0x02}は\nそっちを　みずに　すんだ！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BD84) > 0x1e
	.error "gText_Rom_24BD84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BD84) < 0x1e
	.space 0x1e - (. - gText_Rom_24BD84)
	.endif
