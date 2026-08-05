	@ src/field_specials.c:2562 field_specials_line_2562
	.globl gText_Rom_5CC0E9
gText_Rom_5CC0E9: @ 0x085CC0E9
	.string "フシギバナドール 256BP$"
	.if (. - gText_Rom_5CC0E9) > 0xf
	.error "gText_Rom_5CC0E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC0E9) < 0xf
	.space 0xf - (. - gText_Rom_5CC0E9)
	.endif
