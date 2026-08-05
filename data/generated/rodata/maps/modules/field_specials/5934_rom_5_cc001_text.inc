	@ src/field_specials.c:2534 field_specials_line_2534
	.globl gText_Rom_5CC001
gText_Rom_5CC001: @ 0x085CC001
	.string " 30てん$"
	.if (. - gText_Rom_5CC001) > 0x6
	.error "gText_Rom_5CC001 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC001) < 0x6
	.space 0x6 - (. - gText_Rom_5CC001)
	.endif
