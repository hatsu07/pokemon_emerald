	@ asm/field_specials.s:6373 sub_0813AD6C (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A127
gText_Rom_23A127: @ 0x0823A127
	.string "からだを　まるめて\nぼうぎょを　あげる"
	.byte EOS
	.if (. - gText_Rom_23A127) != 0x14
	.error "gText_Rom_23A127 must retain its original byte length"
	.endif
