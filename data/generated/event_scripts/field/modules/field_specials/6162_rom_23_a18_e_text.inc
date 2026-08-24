	@ asm/field_specials.s:6373 sub_0813AD6C (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A16D
gText_Rom_23A16D: @ 0x0823A16D
	.string "だれも　よけることの\nできない　ほしがたの\nこうせんで　こうげき"
	.byte EOS
	.if (. - gText_Rom_23A16D) != 0x21
	.error "gText_Rom_23A16D must retain its original byte length"
	.endif
	@ asm/field_specials.s:6373 sub_0813AD6C (+2 aliases)
	.globl gText_Rom_23A18E
gText_Rom_23A18E: @ 0x0823A18E
	.string "すごい　れいきで\nこうげき\nすばやさを　さげる"
	.byte EOS
	.if (. - gText_Rom_23A18E) > 0x18
	.error "gText_Rom_23A18E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A18E) < 0x18
	.space 0x18 - (. - gText_Rom_23A18E)
	.endif
