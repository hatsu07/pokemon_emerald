	@ asm/trader.s:150 sub_08133AAC
	.globl gText_Rom_5C93F9
gText_Rom_5C93F9: @ 0x085C93F9
	.string "？？？？？$"
	.if (. - gText_Rom_5C93F9) > 0x6
	.error "gText_Rom_5C93F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93F9) < 0x6
	.space 0x6 - (. - gText_Rom_5C93F9)
	.endif
