	@ asm/field_specials.s:6023 sub_0813AAAC (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_236866
gText_Rom_236866: @ 0x08236866
	.string "とくこうの　きそポイントを　あげる"
	.byte EOS
	.if (. - gText_Rom_236866) != 0x12
	.error "gText_Rom_236866 must retain its original byte length"
	.endif
