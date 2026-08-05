	@ src/data/abilities.h:303 abilities_line_303 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5749EF
gText_Rom_5749EF: @ 0x085749EF
	.string "せいしんりょく$"
	.if (. - gText_Rom_5749EF) != 0x8
	.error "gText_Rom_5749EF must retain its original byte length"
	.endif
