	@ src/field_specials.c:2583 field_specials_line_2583
	.globl gText_Rom_5CC1AC
gText_Rom_5CC1AC: @ 0x085CC1AC
	.string "ひかりのこな    64BP$"
	.if (. - gText_Rom_5CC1AC) > 0xf
	.error "gText_Rom_5CC1AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC1AC) < 0xf
	.space 0xf - (. - gText_Rom_5CC1AC)
	.endif
