	@ src/field_specials.c:2621 field_specials_line_2621
	.globl gText_Rom_5CC205
gText_Rom_5CC205: @ 0x085CC205
	.string "ちきゅうなげ   24BP$"
	.if (. - gText_Rom_5CC205) > 0xe
	.error "gText_Rom_5CC205 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC205) < 0xe
	.space 0xe - (. - gText_Rom_5CC205)
	.endif
