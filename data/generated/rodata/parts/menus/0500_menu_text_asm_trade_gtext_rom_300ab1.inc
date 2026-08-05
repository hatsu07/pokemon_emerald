	@ asm/trade.s:2618 sub_08078120
	.globl gText_Rom_300AB1
gText_Rom_300AB1: @ 0x08300AB1
	.string "を　こうかんしますか？$"
	.if (. - gText_Rom_300AB1) > 0xc
	.error "gText_Rom_300AB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AB1) < 0xc
	.space 0xc - (. - gText_Rom_300AB1)
	.endif
