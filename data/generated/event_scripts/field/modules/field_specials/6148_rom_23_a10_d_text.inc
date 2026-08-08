	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A10D
gText_Rom_23A10D: @ 0x0823A10D
	.string "たたかいの　おどりで\nこうげきを　グーンと\nあげる"
	.byte EOS
	.if (. - gText_Rom_23A10D) != 0x1a
	.error "gText_Rom_23A10D must retain its original byte length"
	.endif
