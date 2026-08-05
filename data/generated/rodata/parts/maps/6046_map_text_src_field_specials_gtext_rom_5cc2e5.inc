	@ src/field_specials.c:2641 field_specials_line_2641
	.globl gText_Rom_5CC2E5
gText_Rom_5CC2E5: @ 0x085CC2E5
	.string "れいとうパンチ  48BP$"
	.if (. - gText_Rom_5CC2E5) > 0xe
	.error "gText_Rom_5CC2E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC2E5) < 0xe
	.space 0xe - (. - gText_Rom_5CC2E5)
	.endif
