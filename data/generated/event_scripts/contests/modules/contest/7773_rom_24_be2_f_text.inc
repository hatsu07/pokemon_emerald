	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BE2F
gText_Rom_24BE2F: @ 0x0824BE2F
	.string "{0xFD}{0x02}は　きを　とられて\nふりかえって　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BE2F) > 0x25
	.error "gText_Rom_24BE2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BE2F) < 0x25
	.space 0x25 - (. - gText_Rom_24BE2F)
	.endif
