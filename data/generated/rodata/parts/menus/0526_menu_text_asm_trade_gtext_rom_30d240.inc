	@ asm/trade.s:9631 sub_0807B624
	.globl gText_Rom_30D240
gText_Rom_30D240: @ 0x0830D240
	.string "{0xFD}{0x02}に\n{0xFD}{0x03}を　おくります！$"
	.if (. - gText_Rom_30D240) > 0xf
	.error "gText_Rom_30D240 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D240) < 0xf
	.space 0xf - (. - gText_Rom_30D240)
	.endif
