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
