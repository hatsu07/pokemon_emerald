	@ src/field_specials.c:2533 field_specials_line_2533
	.globl gText_Rom_5CBFFB
gText_Rom_5CBFFB: @ 0x085CBFFB
	.string " 20てん$"
	.if (. - gText_Rom_5CBFFB) > 0x6
	.error "gText_Rom_5CBFFB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFFB) < 0x6
	.space 0x6 - (. - gText_Rom_5CBFFB)
	.endif
