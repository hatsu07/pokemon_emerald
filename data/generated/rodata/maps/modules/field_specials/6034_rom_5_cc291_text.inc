	@ src/field_specials.c:2635 field_specials_line_2635
	.globl gText_Rom_5CC291
gText_Rom_5CC291: @ 0x085CC291
	.string "いびき      24BP$"
	.if (. - gText_Rom_5CC291) > 0xe
	.error "gText_Rom_5CC291 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC291) < 0xe
	.space 0xe - (. - gText_Rom_5CC291)
	.endif
