	@ asm/contest.s:11866 sub_080DCBC0 (+1 aliases)
	.globl gText_Rom_24BCCF
gText_Rom_24BCCF: @ 0x0824BCCF
	.string "しんさいんが　きたいして\n{0xFD}{0x02}を　みつめた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BCCF) > 0x23
	.error "gText_Rom_24BCCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BCCF) < 0x23
	.space 0x23 - (. - gText_Rom_24BCCF)
	.endif
