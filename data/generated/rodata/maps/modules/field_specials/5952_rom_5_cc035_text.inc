	@ src/field_specials.c:2546 field_specials_line_2546
	.globl gText_Rom_5CC035
gText_Rom_5CC035: @ 0x085CC035
	.string "キッスポスター   16BP$"
	.if (. - gText_Rom_5CC035) > 0xf
	.error "gText_Rom_5CC035 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC035) < 0xf
	.space 0xf - (. - gText_Rom_5CC035)
	.endif
