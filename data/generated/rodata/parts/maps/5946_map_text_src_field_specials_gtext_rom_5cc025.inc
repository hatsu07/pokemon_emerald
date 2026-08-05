	@ src/field_specials.c:2540 field_specials_line_2540
	.globl gText_Rom_5CC025
gText_Rom_5CC025: @ 0x085CC025
	.string " 90てん$"
	.if (. - gText_Rom_5CC025) > 0x6
	.error "gText_Rom_5CC025 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC025) < 0x6
	.space 0x6 - (. - gText_Rom_5CC025)
	.endif
