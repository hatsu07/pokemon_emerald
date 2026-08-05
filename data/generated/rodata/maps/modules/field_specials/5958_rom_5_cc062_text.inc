	@ src/field_specials.c:2549 field_specials_line_2549
	.globl gText_Rom_5CC062
gText_Rom_5CC062: @ 0x085CC062
	.string "トゲピードール   48BP$"
	.if (. - gText_Rom_5CC062) > 0xf
	.error "gText_Rom_5CC062 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC062) < 0xf
	.space 0xf - (. - gText_Rom_5CC062)
	.endif
