	@ src/field_specials.c:2547 field_specials_line_2547
	.globl gText_Rom_5CC044
gText_Rom_5CC044: @ 0x085CC044
	.string "キッスクッション  32BP$"
	.if (. - gText_Rom_5CC044) > 0xf
	.error "gText_Rom_5CC044 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC044) < 0xf
	.space 0xf - (. - gText_Rom_5CC044)
	.endif
