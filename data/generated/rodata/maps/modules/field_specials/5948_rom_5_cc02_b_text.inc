	@ src/field_specials.c:2541 field_specials_line_2541
	.globl gText_Rom_5CC02B
gText_Rom_5CC02B: @ 0x085CC02B
	.string "100てん$"
	.if (. - gText_Rom_5CC02B) > 0x6
	.error "gText_Rom_5CC02B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC02B) < 0x6
	.space 0x6 - (. - gText_Rom_5CC02B)
	.endif
