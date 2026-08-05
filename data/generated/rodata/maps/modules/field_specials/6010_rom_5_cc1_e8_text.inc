	@ src/field_specials.c:2587 field_specials_line_2587
	.globl gText_Rom_5CC1E8
gText_Rom_5CC1E8: @ 0x085CC1E8
	.string "ピントレンズ    64BP$"
	.if (. - gText_Rom_5CC1E8) > 0xf
	.error "gText_Rom_5CC1E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC1E8) < 0xf
	.space 0xf - (. - gText_Rom_5CC1E8)
	.endif
