	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BE99
gText_Rom_24BE99: @ 0x0824BE99
	.string "{0xFD}{0x02}は　きを　とられて\nひっくり　かえって　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BE99) > 0x28
	.error "gText_Rom_24BE99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BE99) < 0x28
	.space 0x28 - (. - gText_Rom_24BE99)
	.endif
