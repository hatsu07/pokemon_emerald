	@ asm/trade.s:11253 sub_0807B624
	.globl gText_Rom_30D26A
gText_Rom_30D26A: @ 0x0830D26A
	.string "{0xFD}{0x04}を　かわいがって　あげてね！$"
	.if (. - gText_Rom_30D26A) > 0x11
	.error "gText_Rom_30D26A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D26A) < 0x11
	.space 0x11 - (. - gText_Rom_30D26A)
	.endif
	.space 0x1, 0x00
