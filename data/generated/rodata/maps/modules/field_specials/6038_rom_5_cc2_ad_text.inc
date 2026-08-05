	@ src/field_specials.c:2637 field_specials_line_2637
	.globl gText_Rom_5CC2AD
gText_Rom_5CC2AD: @ 0x085CC2AD
	.string "スピードスター  24BP$"
	.if (. - gText_Rom_5CC2AD) > 0xe
	.error "gText_Rom_5CC2AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC2AD) < 0xe
	.space 0xe - (. - gText_Rom_5CC2AD)
	.endif
