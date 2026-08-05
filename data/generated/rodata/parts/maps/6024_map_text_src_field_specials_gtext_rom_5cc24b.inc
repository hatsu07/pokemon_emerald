	@ src/field_specials.c:2626 field_specials_line_2626
	.globl gText_Rom_5CC24B
gText_Rom_5CC24B: @ 0x085CC24B
	.string "いわなだれ    48BP$"
	.if (. - gText_Rom_5CC24B) > 0xe
	.error "gText_Rom_5CC24B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC24B) < 0xe
	.space 0xe - (. - gText_Rom_5CC24B)
	.endif
