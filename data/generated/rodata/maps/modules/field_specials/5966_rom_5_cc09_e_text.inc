	@ src/field_specials.c:2553 field_specials_line_2553
	.globl gText_Rom_5CC09E
gText_Rom_5CC09E: @ 0x085CC09E
	.string "ヒノアラシドール  80BP$"
	.if (. - gText_Rom_5CC09E) > 0xf
	.error "gText_Rom_5CC09E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC09E) < 0xf
	.space 0xf - (. - gText_Rom_5CC09E)
	.endif
