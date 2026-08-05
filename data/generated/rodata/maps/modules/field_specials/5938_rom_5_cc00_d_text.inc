	@ src/field_specials.c:2536 field_specials_line_2536
	.globl gText_Rom_5CC00D
gText_Rom_5CC00D: @ 0x085CC00D
	.string " 50てん$"
	.if (. - gText_Rom_5CC00D) > 0x6
	.error "gText_Rom_5CC00D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC00D) < 0x6
	.space 0x6 - (. - gText_Rom_5CC00D)
	.endif
