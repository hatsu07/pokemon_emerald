	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BE54
gText_Rom_24BE54: @ 0x0824BE54
	.string "{0xFD}{0x02}は　おもわず\nこえを　あげて　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BE54) > 0x23
	.error "gText_Rom_24BE54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BE54) < 0x23
	.space 0x23 - (. - gText_Rom_24BE54)
	.endif
