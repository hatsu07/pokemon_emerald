	@ asm/trade.s:2612 sub_08078120
	.globl gText_Rom_300AAE
gText_Rom_300AAE: @ 0x08300AAE
	.string "と　$"
	.if (. - gText_Rom_300AAE) > 0x3
	.error "gText_Rom_300AAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AAE) < 0x3
	.space 0x3 - (. - gText_Rom_300AAE)
	.endif
