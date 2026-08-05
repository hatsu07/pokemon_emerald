	@ src/field_specials.c:2640 field_specials_line_2640
	.globl gText_Rom_5CC2D7
gText_Rom_5CC2D7: @ 0x085CC2D7
	.string "じこあんじ    48BP$"
	.if (. - gText_Rom_5CC2D7) > 0xe
	.error "gText_Rom_5CC2D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC2D7) < 0xe
	.space 0xe - (. - gText_Rom_5CC2D7)
	.endif
