	@ asm/trade.s:9700 sub_0807B624
	.globl gText_Rom_30D24F
gText_Rom_30D24F: @ 0x0830D24F
	.string "ばいばい　{0xFD}{0x03}！$"
	.if (. - gText_Rom_30D24F) > 0x9
	.error "gText_Rom_30D24F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D24F) < 0x9
	.space 0x9 - (. - gText_Rom_30D24F)
	.endif
