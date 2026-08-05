	@ src/field_specials.c:2582 field_specials_line_2582
	.globl gText_Rom_5CC19D
gText_Rom_5CC19D: @ 0x085CC19D
	.string "メンタルハーブ   48BP$"
	.if (. - gText_Rom_5CC19D) > 0xf
	.error "gText_Rom_5CC19D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC19D) < 0xf
	.space 0xf - (. - gText_Rom_5CC19D)
	.endif
