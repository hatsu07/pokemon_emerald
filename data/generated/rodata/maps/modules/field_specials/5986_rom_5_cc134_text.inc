	@ src/field_specials.c:2571 field_specials_line_2571
	.globl gText_Rom_5CC134
gText_Rom_5CC134: @ 0x085CC134
	.string "ブロムヘキシン    1BP$"
	.if (. - gText_Rom_5CC134) > 0xf
	.error "gText_Rom_5CC134 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC134) < 0xf
	.space 0xf - (. - gText_Rom_5CC134)
	.endif
