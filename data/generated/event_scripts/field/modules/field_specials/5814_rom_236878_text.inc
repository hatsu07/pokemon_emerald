	@ asm/field_specials.s:6023 sub_0813AAAC (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_236878
gText_Rom_236878: @ 0x08236878
	.string "ぼうぎょの　きそポイントを　あげる"
	.byte EOS
	.if (. - gText_Rom_236878) != 0x12
	.error "gText_Rom_236878 must retain its original byte length"
	.endif
