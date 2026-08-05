	@ src/field_specials.c:2548 field_specials_line_2548
	.globl gText_Rom_5CC053
gText_Rom_5CC053: @ 0x085CC053
	.string "ムチュールドール  32BP$"
	.if (. - gText_Rom_5CC053) > 0xf
	.error "gText_Rom_5CC053 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC053) < 0xf
	.space 0xf - (. - gText_Rom_5CC053)
	.endif
