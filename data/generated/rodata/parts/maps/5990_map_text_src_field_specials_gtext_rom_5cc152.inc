	@ src/field_specials.c:2573 field_specials_line_2573
	.globl gText_Rom_5CC152
gText_Rom_5CC152: @ 0x085CC152
	.string "インドメタシン    1BP$"
	.if (. - gText_Rom_5CC152) > 0xf
	.error "gText_Rom_5CC152 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC152) < 0xf
	.space 0xf - (. - gText_Rom_5CC152)
	.endif
