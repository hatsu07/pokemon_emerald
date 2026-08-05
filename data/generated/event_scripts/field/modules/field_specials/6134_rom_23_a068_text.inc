	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A068
gText_Rom_23A068: @ 0x0823A068
	.string "ものすごい　ちからを\nこめた　パンチで\nてきを　こうげき"
	.byte EOS
	.if (. - gText_Rom_23A068) != 0x1d
	.error "gText_Rom_23A068 must retain its original byte length"
	.endif
