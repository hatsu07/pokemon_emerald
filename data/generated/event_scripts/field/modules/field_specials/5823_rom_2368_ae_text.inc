	@ asm/field_specials.s:6023 sub_0813AAAC (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2368AE
gText_Rom_2368AE: @ 0x082368AE
	.string "たいりょくの　きそポイントを　あげる"
	.byte EOS
	.if (. - gText_Rom_2368AE) != 0x13
	.error "gText_Rom_2368AE must retain its original byte length"
	.endif
