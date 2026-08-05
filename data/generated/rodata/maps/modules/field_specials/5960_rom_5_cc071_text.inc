	@ src/field_specials.c:2550 field_specials_line_2550
	.globl gText_Rom_5CC071
gText_Rom_5CC071: @ 0x085CC071
	.string "ニャースドール   48BP$"
	.if (. - gText_Rom_5CC071) > 0xf
	.error "gText_Rom_5CC071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC071) < 0xf
	.space 0xf - (. - gText_Rom_5CC071)
	.endif
