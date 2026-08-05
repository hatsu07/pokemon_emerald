	@ src/field_specials.c:2638 field_specials_line_2638
	.globl gText_Rom_5CC2BB
gText_Rom_5CC2BB: @ 0x085CC2BB
	.string "こごえるかぜ   24BP$"
	.if (. - gText_Rom_5CC2BB) > 0xe
	.error "gText_Rom_5CC2BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC2BB) < 0xe
	.space 0xe - (. - gText_Rom_5CC2BB)
	.endif
