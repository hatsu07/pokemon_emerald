	@ src/field_specials.c:2636 field_specials_line_2636
	.globl gText_Rom_5CC29F
gText_Rom_5CC29F: @ 0x085CC29F
	.string "どろかけ     24BP$"
	.if (. - gText_Rom_5CC29F) > 0xe
	.error "gText_Rom_5CC29F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC29F) < 0xe
	.space 0xe - (. - gText_Rom_5CC29F)
	.endif
