	@ src/field_specials.c:2555 field_specials_line_2555
	.globl gText_Rom_5CC0BC
gText_Rom_5CC0BC: @ 0x085CC0BC
	.string "ワニノコドール   80BP$"
	.if (. - gText_Rom_5CC0BC) > 0xf
	.error "gText_Rom_5CC0BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC0BC) < 0xf
	.space 0xf - (. - gText_Rom_5CC0BC)
	.endif
