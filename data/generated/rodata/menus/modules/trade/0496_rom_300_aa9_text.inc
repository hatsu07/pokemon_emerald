	@ asm/trade.s:5229 sub_08079564
	.globl gText_Rom_300AA9
gText_Rom_300AA9: @ 0x08300AA9
	.string "？？？？$"
	.if (. - gText_Rom_300AA9) > 0x5
	.error "gText_Rom_300AA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AA9) < 0x5
	.space 0x5 - (. - gText_Rom_300AA9)
	.endif
