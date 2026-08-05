	@ src/field_specials.c:2552 field_specials_line_2552
	.globl gText_Rom_5CC08F
gText_Rom_5CC08F: @ 0x085CC08F
	.string "メタモンドール   48BP$"
	.if (. - gText_Rom_5CC08F) > 0xf
	.error "gText_Rom_5CC08F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC08F) < 0xf
	.space 0xf - (. - gText_Rom_5CC08F)
	.endif
