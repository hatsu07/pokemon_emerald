	@ src/field_specials.c:2620 field_specials_line_2620
	.globl gText_Rom_5CC1F7
gText_Rom_5CC1F7: @ 0x085CC1F7
	.string "タマゴうみ    16BP$"
	.if (. - gText_Rom_5CC1F7) > 0xe
	.error "gText_Rom_5CC1F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC1F7) < 0xe
	.space 0xe - (. - gText_Rom_5CC1F7)
	.endif
