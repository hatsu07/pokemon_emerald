	@ src/field_specials.c:2622 field_specials_line_2622
	.globl gText_Rom_5CC213
gText_Rom_5CC213: @ 0x085CC213
	.string "ゆめくい     24BP$"
	.if (. - gText_Rom_5CC213) > 0xe
	.error "gText_Rom_5CC213 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC213) < 0xe
	.space 0xe - (. - gText_Rom_5CC213)
	.endif
