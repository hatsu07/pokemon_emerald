	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_5CC031
gText_Rom_5CC031: @ 0x085CC031
	.string "  ？$"
	.if (. - gText_Rom_5CC031) > 0x4
	.error "gText_Rom_5CC031 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC031) < 0x4
	.space 0x4 - (. - gText_Rom_5CC031)
	.endif
