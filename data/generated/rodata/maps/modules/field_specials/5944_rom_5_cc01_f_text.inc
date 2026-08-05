	@ src/field_specials.c:2539 field_specials_line_2539
	.globl gText_Rom_5CC01F
gText_Rom_5CC01F: @ 0x085CC01F
	.string " 80てん$"
	.if (. - gText_Rom_5CC01F) > 0x6
	.error "gText_Rom_5CC01F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC01F) < 0x6
	.space 0x6 - (. - gText_Rom_5CC01F)
	.endif
