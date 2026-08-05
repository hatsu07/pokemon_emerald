	@ src/field_specials.c:2627 field_specials_line_2627
	.globl gText_Rom_5CC259
gText_Rom_5CC259: @ 0x085CC259
	.string "カウンター    48BP$"
	.if (. - gText_Rom_5CC259) > 0xe
	.error "gText_Rom_5CC259 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC259) < 0xe
	.space 0xe - (. - gText_Rom_5CC259)
	.endif
