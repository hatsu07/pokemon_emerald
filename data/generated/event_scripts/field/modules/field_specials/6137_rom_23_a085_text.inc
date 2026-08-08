	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A085
gText_Rom_23A085: @ 0x0823A085
	.string "ものすごい　ちからを\nこめた　キックで\nてきを　こうげき"
	.byte EOS
	.if (. - gText_Rom_23A085) != 0x1d
	.error "gText_Rom_23A085 must retain its original byte length"
	.endif
