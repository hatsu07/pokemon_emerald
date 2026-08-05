	@ asm/field_specials.s:6373 sub_0813AD6C (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A13B
gText_Rom_23A13B: @ 0x0823A13B
	.string "ねている　とき　だけ\nつかえる　わざ\nいびきで　こうげき"
	.byte EOS
	.if (. - gText_Rom_23A13B) != 0x1d
	.error "gText_Rom_23A13B must retain its original byte length"
	.endif
