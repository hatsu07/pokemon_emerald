	@ src/field_specials.c:2639 field_specials_line_2639
	.globl gText_Rom_5CC2C9
gText_Rom_5CC2C9: @ 0x085CC2C9
	.string "こらえる     48BP$"
	.if (. - gText_Rom_5CC2C9) > 0xe
	.error "gText_Rom_5CC2C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC2C9) < 0xe
	.space 0xe - (. - gText_Rom_5CC2C9)
	.endif
