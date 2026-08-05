	@ src/field_specials.c:2554 field_specials_line_2554
	.globl gText_Rom_5CC0AD
gText_Rom_5CC0AD: @ 0x085CC0AD
	.string "チコリータドール  80BP$"
	.if (. - gText_Rom_5CC0AD) > 0xf
	.error "gText_Rom_5CC0AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC0AD) < 0xf
	.space 0xf - (. - gText_Rom_5CC0AD)
	.endif
