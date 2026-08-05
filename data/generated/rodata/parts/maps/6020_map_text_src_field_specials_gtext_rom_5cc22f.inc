	@ src/field_specials.c:2624 field_specials_line_2624
	.globl gText_Rom_5CC22F
gText_Rom_5CC22F: @ 0x085CC22F
	.string "メガトンキック  48BP$"
	.if (. - gText_Rom_5CC22F) > 0xe
	.error "gText_Rom_5CC22F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC22F) < 0xe
	.space 0xe - (. - gText_Rom_5CC22F)
	.endif
