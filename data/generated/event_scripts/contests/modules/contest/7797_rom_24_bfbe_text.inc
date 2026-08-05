	@ asm/contest.s:4091 sub_080D8334
	.globl gText_Rom_24BFBE
gText_Rom_24BFBE: @ 0x0824BFBE
	.string "{0xFD}{0x02}は　おなじアピールを\nつづけて　がっかり　された！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BFBE) > 0x28
	.error "gText_Rom_24BFBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BFBE) < 0x28
	.space 0x28 - (. - gText_Rom_24BFBE)
	.endif
