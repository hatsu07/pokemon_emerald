	@ asm/field_specials.s:6023 sub_0813AAAC (+11 aliases)
	.globl gText_Exit
gText_Exit: @ 0x085C93C8
	.string "やめる{EOS}"
	.if (. - gText_Exit) > 0x4
	.error "gText_Exit may not grow beyond its original slot"
	.endif
	.if (. - gText_Exit) < 0x4
	.space 0x4 - (. - gText_Exit)
	.endif
