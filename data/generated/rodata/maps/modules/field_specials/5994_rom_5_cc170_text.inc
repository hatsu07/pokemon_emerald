	@ src/field_specials.c:2579 field_specials_line_2579
	.globl gText_Rom_5CC170
gText_Rom_5CC170: @ 0x085CC170
	.string "たべのこし     48BP$"
	.if (. - gText_Rom_5CC170) > 0xf
	.error "gText_Rom_5CC170 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC170) < 0xf
	.space 0xf - (. - gText_Rom_5CC170)
	.endif
