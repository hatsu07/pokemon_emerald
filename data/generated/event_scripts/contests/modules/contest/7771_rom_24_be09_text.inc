	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BE09
gText_Rom_24BE09: @ 0x0824BE09
	.string "{0xFD}{0x02}は　きを　とられて\nしたを　むいて　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BE09) > 0x26
	.error "gText_Rom_24BE09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BE09) < 0x26
	.space 0x26 - (. - gText_Rom_24BE09)
	.endif
