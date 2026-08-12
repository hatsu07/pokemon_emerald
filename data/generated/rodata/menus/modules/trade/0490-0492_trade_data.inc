	@ asm/trade.s:5088 sub_0807946C
	.globl gText_Rom_300AA0
gText_Rom_300AA0: @ 0x08300AA0
	.string "/$"
	.if (. - gText_Rom_300AA0) > 0x2
	.error "gText_Rom_300AA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AA0) < 0x2
	.space 0x2 - (. - gText_Rom_300AA0)
	.endif

	@ asm/trade.s:5098 sub_0807946C
	.globl gText_Rom_300AA2
gText_Rom_300AA2: @ 0x08300AA2
	.string "Lv$"
	.if (. - gText_Rom_300AA2) > 0x3
	.error "gText_Rom_300AA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AA2) < 0x3
	.space 0x3 - (. - gText_Rom_300AA2)
	.endif
