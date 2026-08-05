	@ src/field_specials.c:2581 field_specials_line_2581
	.globl gText_Rom_5CC18E
gText_Rom_5CC18E: @ 0x085CC18E
	.string "せんせいのツメ   48BP$"
	.if (. - gText_Rom_5CC18E) > 0xf
	.error "gText_Rom_5CC18E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC18E) < 0xf
	.space 0xf - (. - gText_Rom_5CC18E)
	.endif
