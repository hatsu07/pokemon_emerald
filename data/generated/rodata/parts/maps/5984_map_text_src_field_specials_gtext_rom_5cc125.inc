	@ src/field_specials.c:2570 field_specials_line_2570
	.globl gText_Rom_5CC125
gText_Rom_5CC125: @ 0x085CC125
	.string "リゾチウム      1BP$"
	.if (. - gText_Rom_5CC125) > 0xf
	.error "gText_Rom_5CC125 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC125) < 0xf
	.space 0xf - (. - gText_Rom_5CC125)
	.endif
