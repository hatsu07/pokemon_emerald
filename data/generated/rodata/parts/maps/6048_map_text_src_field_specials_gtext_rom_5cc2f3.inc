	@ src/field_specials.c:2642 field_specials_line_2642
	.globl gText_Rom_5CC2F3
gText_Rom_5CC2F3: @ 0x085CC2F3
	.string "かみなりパンチ  48BP$"
	.if (. - gText_Rom_5CC2F3) > 0xe
	.error "gText_Rom_5CC2F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC2F3) < 0xe
	.space 0xe - (. - gText_Rom_5CC2F3)
	.endif
