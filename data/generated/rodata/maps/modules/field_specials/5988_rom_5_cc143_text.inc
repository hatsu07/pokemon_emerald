	@ src/field_specials.c:2572 field_specials_line_2572
	.globl gText_Rom_5CC143
gText_Rom_5CC143: @ 0x085CC143
	.string "キトサン       1BP$"
	.if (. - gText_Rom_5CC143) > 0xf
	.error "gText_Rom_5CC143 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC143) < 0xf
	.space 0xf - (. - gText_Rom_5CC143)
	.endif
