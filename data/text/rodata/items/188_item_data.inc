	@ asm/berry_tag_screen.s:704 sub_0817804C
	.globl gText_Rom_5C93F5
gText_Rom_5C93F5: @ 0x085C93F5
	.string "？？？$"
	.if (. - gText_Rom_5C93F5) > 0x4
	.error "gText_Rom_5C93F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93F5) < 0x4
	.space 0x4 - (. - gText_Rom_5C93F5)
	.endif
	.globl gUnknown_85C93F9
gUnknown_85C93F9: @ 0x085C93F9

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
	.globl gUnknown_85C93FF
gUnknown_85C93FF: @ 0x085C93FF

