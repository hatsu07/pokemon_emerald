	@ asm/trade.s:9631 sub_0807B624
	.globl gText_Rom_30D240
gText_Rom_30D240: @ 0x0830D240
	.string "{0xFD}{0x02}に\n{0xFD}{0x03}を　おくります！{EOS}"
	.if (. - gText_Rom_30D240) > 0xf
	.error "gText_Rom_30D240 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D240) < 0xf
	.space 0xf - (. - gText_Rom_30D240)
	.endif

	@ asm/trade.s:9700 sub_0807B624
	.globl gText_Rom_30D24F
gText_Rom_30D24F: @ 0x0830D24F
	.string "ばいばい　{0xFD}{0x03}！{EOS}"
	.if (. - gText_Rom_30D24F) > 0x9
	.error "gText_Rom_30D24F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D24F) < 0x9
	.space 0x9 - (. - gText_Rom_30D24F)
	.endif

	@ asm/trade.s:11177 sub_0807B624
	.globl gText_Rom_30D258
gText_Rom_30D258: @ 0x0830D258
	.string "{0xFD}{0x02}から\n{0xFD}{0x04}が　おくられてきた！{EOS}"
	.if (. - gText_Rom_30D258) > 0x12
	.error "gText_Rom_30D258 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D258) < 0x12
	.space 0x12 - (. - gText_Rom_30D258)
	.endif

	@ asm/trade.s:11253 sub_0807B624
	.globl gText_Rom_30D26A
gText_Rom_30D26A: @ 0x0830D26A
	.string "{0xFD}{0x04}を　かわいがって　あげてね！{EOS}"
	.if (. - gText_Rom_30D26A) > 0x11
	.error "gText_Rom_30D26A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D26A) < 0x11
	.space 0x11 - (. - gText_Rom_30D26A)
	.endif
	.space 0x1, 0x00
