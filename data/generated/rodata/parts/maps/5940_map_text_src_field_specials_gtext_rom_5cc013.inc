	@ src/field_specials.c:2537 field_specials_line_2537
	.globl gText_Rom_5CC013
gText_Rom_5CC013: @ 0x085CC013
	.string " 60てん$"
	.if (. - gText_Rom_5CC013) > 0x6
	.error "gText_Rom_5CC013 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC013) < 0x6
	.space 0x6 - (. - gText_Rom_5CC013)
	.endif
