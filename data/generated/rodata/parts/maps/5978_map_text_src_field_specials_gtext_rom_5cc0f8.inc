	@ src/field_specials.c:2563 field_specials_line_2563
	.globl gText_Rom_5CC0F8
gText_Rom_5CC0F8: @ 0x085CC0F8
	.string "リザードンドール 256BP$"
	.if (. - gText_Rom_5CC0F8) > 0xf
	.error "gText_Rom_5CC0F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC0F8) < 0xf
	.space 0xf - (. - gText_Rom_5CC0F8)
	.endif
