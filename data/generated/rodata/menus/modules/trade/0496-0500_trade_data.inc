	@ asm/trade.s:5229 sub_08079564
	.globl gText_Rom_300AA9
gText_Rom_300AA9: @ 0x08300AA9
	.string "？？？？{EOS}"
	.if (. - gText_Rom_300AA9) > 0x5
	.error "gText_Rom_300AA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AA9) < 0x5
	.space 0x5 - (. - gText_Rom_300AA9)
	.endif

	@ asm/trade.s:2612 sub_08078120
	.globl gText_Rom_300AAE
gText_Rom_300AAE: @ 0x08300AAE
	.string "と　{EOS}"
	.if (. - gText_Rom_300AAE) > 0x3
	.error "gText_Rom_300AAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AAE) < 0x3
	.space 0x3 - (. - gText_Rom_300AAE)
	.endif

	@ asm/trade.s:2618 sub_08078120
	.globl gText_Rom_300AB1
gText_Rom_300AB1: @ 0x08300AB1
	.string "を　こうかんしますか？{EOS}"
	.if (. - gText_Rom_300AB1) > 0xc
	.error "gText_Rom_300AB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AB1) < 0xc
	.space 0xc - (. - gText_Rom_300AB1)
	.endif
