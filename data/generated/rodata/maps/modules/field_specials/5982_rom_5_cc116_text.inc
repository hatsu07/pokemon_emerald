	@ src/field_specials.c:2569 field_specials_line_2569
	.globl gText_Rom_5CC116
gText_Rom_5CC116: @ 0x085CC116
	.string "タウリン       1BP$"
	.if (. - gText_Rom_5CC116) > 0xf
	.error "gText_Rom_5CC116 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC116) < 0xf
	.space 0xf - (. - gText_Rom_5CC116)
	.endif
