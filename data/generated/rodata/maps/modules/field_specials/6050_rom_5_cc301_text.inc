	@ src/field_specials.c:2643 field_specials_line_2643
	.globl gText_Rom_5CC301
gText_Rom_5CC301: @ 0x085CC301
	.string "ほのおのパンチ  48BP$"
	.if (. - gText_Rom_5CC301) > 0xe
	.error "gText_Rom_5CC301 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC301) < 0xe
	.space 0xe - (. - gText_Rom_5CC301)
	.endif
