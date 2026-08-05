	@ src/data/abilities.h:75 abilities_line_75 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5749F7
gText_Rom_5749F7: @ 0x085749F7
	.string "せいでんき$"
	.if (. - gText_Rom_5749F7) != 0x6
	.error "gText_Rom_5749F7 must retain its original byte length"
	.endif
