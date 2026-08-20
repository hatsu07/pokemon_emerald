	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BE77
gText_Rom_24BE77: @ 0x0824BE77
	.string "{0xFD}{0x02}は　おもわず\nとびあがって　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BE77) > 0x22
	.error "gText_Rom_24BE77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BE77) < 0x22
	.space 0x22 - (. - gText_Rom_24BE77)
	.endif
