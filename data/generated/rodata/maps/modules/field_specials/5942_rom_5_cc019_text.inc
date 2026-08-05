	@ src/field_specials.c:2538 field_specials_line_2538
	.globl gText_Rom_5CC019
gText_Rom_5CC019: @ 0x085CC019
	.string " 70てん$"
	.if (. - gText_Rom_5CC019) > 0x6
	.error "gText_Rom_5CC019 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC019) < 0x6
	.space 0x6 - (. - gText_Rom_5CC019)
	.endif
