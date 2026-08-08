	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A049
gText_Rom_23A049: @ 0x0823A049
	.string "ねている　てきに\nあたえた　ダメージの\nはんぶんを　かいふく"
	.byte EOS
	.if (. - gText_Rom_23A049) != 0x1f
	.error "gText_Rom_23A049 must retain its original byte length"
	.endif
