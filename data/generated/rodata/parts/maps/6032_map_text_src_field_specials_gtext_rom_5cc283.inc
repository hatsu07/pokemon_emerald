	@ src/field_specials.c:2634 field_specials_line_2634
	.globl gText_Rom_5CC283
gText_Rom_5CC283: @ 0x085CC283
	.string "まるくなる    16BP$"
	.if (. - gText_Rom_5CC283) > 0xe
	.error "gText_Rom_5CC283 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC283) < 0xe
	.space 0xe - (. - gText_Rom_5CC283)
	.endif
