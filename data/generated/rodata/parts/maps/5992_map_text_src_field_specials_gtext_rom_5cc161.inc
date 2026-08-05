	@ src/field_specials.c:2574 field_specials_line_2574
	.globl gText_Rom_5CC161
gText_Rom_5CC161: @ 0x085CC161
	.string "マックスアップ    1BP$"
	.if (. - gText_Rom_5CC161) > 0xf
	.error "gText_Rom_5CC161 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC161) < 0xf
	.space 0xf - (. - gText_Rom_5CC161)
	.endif
