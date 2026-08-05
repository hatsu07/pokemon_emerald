	@ src/field_specials.c:2560 field_specials_line_2560
	.globl gText_Rom_5CC0CB
gText_Rom_5CC0CB: @ 0x085CC0CB
	.string "ラプラスドール  128BP$"
	.if (. - gText_Rom_5CC0CB) > 0xf
	.error "gText_Rom_5CC0CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC0CB) < 0xf
	.space 0xf - (. - gText_Rom_5CC0CB)
	.endif
