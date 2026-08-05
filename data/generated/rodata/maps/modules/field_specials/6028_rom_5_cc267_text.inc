	@ src/field_specials.c:2628 field_specials_line_2628
	.globl gText_Rom_5CC267
gText_Rom_5CC267: @ 0x085CC267
	.string "でんじは     48BP$"
	.if (. - gText_Rom_5CC267) > 0xe
	.error "gText_Rom_5CC267 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC267) < 0xe
	.space 0xe - (. - gText_Rom_5CC267)
	.endif
