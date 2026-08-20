	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BDC1
gText_Rom_24BDC1: @ 0x0824BDC1
	.string "{0xFD}{0x02}は　ちょっと\nきを　とられて　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BDC1) > 0x23
	.error "gText_Rom_24BDC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BDC1) < 0x23
	.space 0x23 - (. - gText_Rom_24BDC1)
	.endif
