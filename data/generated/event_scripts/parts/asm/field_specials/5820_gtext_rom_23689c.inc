	@ asm/field_specials.s:6023 sub_0813AAAC (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23689C
gText_Rom_23689C: @ 0x0823689C
	.string "すばやさの　きそポイントを　あげる"
	.byte EOS
	.if (. - gText_Rom_23689C) != 0x12
	.error "gText_Rom_23689C must retain its original byte length"
	.endif
