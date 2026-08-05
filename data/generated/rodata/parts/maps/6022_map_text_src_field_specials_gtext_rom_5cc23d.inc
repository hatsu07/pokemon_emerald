	@ src/field_specials.c:2625 field_specials_line_2625
	.globl gText_Rom_5CC23D
gText_Rom_5CC23D: @ 0x085CC23D
	.string "のしかかり    48BP$"
	.if (. - gText_Rom_5CC23D) > 0xe
	.error "gText_Rom_5CC23D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC23D) < 0xe
	.space 0xe - (. - gText_Rom_5CC23D)
	.endif
