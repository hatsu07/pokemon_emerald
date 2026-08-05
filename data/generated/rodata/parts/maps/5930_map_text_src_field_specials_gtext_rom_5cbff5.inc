	@ src/field_specials.c:2532 field_specials_line_2532
	.globl gText_Rom_5CBFF5
gText_Rom_5CBFF5: @ 0x085CBFF5
	.string " 10てん$"
	.if (. - gText_Rom_5CBFF5) > 0x6
	.error "gText_Rom_5CBFF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFF5) < 0x6
	.space 0x6 - (. - gText_Rom_5CBFF5)
	.endif
