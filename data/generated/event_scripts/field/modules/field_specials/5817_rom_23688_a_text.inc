	@ asm/field_specials.s:6023 sub_0813AAAC (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23688A
gText_Rom_23688A: @ 0x0823688A
	.string "とくぼうの　きそポイントを　あげる"
	.byte EOS
	.if (. - gText_Rom_23688A) != 0x12
	.error "gText_Rom_23688A must retain its original byte length"
	.endif
