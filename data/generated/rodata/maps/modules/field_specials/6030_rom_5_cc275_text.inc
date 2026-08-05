	@ src/field_specials.c:2629 field_specials_line_2629
	.globl gText_Rom_5CC275
gText_Rom_5CC275: @ 0x085CC275
	.string "つるぎのまい   48BP$"
	.if (. - gText_Rom_5CC275) > 0xe
	.error "gText_Rom_5CC275 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC275) < 0xe
	.space 0xe - (. - gText_Rom_5CC275)
	.endif
