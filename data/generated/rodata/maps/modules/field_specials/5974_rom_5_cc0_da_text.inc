	@ src/field_specials.c:2561 field_specials_line_2561
	.globl gText_Rom_5CC0DA
gText_Rom_5CC0DA: @ 0x085CC0DA
	.string "カビゴンドール  128BP$"
	.if (. - gText_Rom_5CC0DA) > 0xf
	.error "gText_Rom_5CC0DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC0DA) < 0xf
	.space 0xf - (. - gText_Rom_5CC0DA)
	.endif
