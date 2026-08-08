	@ asm/field_specials.s:6023 sub_0813AAAC (+11 aliases)
	.globl gText_Rom_5C93C8
gText_Rom_5C93C8: @ 0x085C93C8
	.string "やめる$"
	.if (. - gText_Rom_5C93C8) > 0x4
	.error "gText_Rom_5C93C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93C8) < 0x4
	.space 0x4 - (. - gText_Rom_5C93C8)
	.endif

