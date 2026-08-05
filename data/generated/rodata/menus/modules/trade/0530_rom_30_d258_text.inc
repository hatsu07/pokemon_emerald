	@ asm/trade.s:11177 sub_0807B624
	.globl gText_Rom_30D258
gText_Rom_30D258: @ 0x0830D258
	.string "{0xFD}{0x02}から\n{0xFD}{0x04}が　おくられてきた！$"
	.if (. - gText_Rom_30D258) > 0x12
	.error "gText_Rom_30D258 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D258) < 0x12
	.space 0x12 - (. - gText_Rom_30D258)
	.endif
