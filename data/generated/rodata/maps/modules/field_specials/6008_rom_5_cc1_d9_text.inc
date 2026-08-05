	@ src/field_specials.c:2586 field_specials_line_2586
	.globl gText_Rom_5CC1D9
gText_Rom_5CC1D9: @ 0x085CC1D9
	.string "きあいのハチマキ  64BP$"
	.if (. - gText_Rom_5CC1D9) > 0xf
	.error "gText_Rom_5CC1D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC1D9) < 0xf
	.space 0xf - (. - gText_Rom_5CC1D9)
	.endif
