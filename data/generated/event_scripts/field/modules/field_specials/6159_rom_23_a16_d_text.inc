	@ asm/field_specials.s:6373 sub_0813AD6C (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A16D
gText_Rom_23A16D: @ 0x0823A16D
	.string "だれも　よけることの\nできない　ほしがたの\nこうせんで　こうげき"
	.byte EOS
	.if (. - gText_Rom_23A16D) != 0x21
	.error "gText_Rom_23A16D must retain its original byte length"
	.endif
