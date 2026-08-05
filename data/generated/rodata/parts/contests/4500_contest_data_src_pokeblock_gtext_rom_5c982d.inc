	@ src/pokeblock.c:217 pokeblock_line_217
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C982D
gText_Rom_5C982D: @ 0x085C982D
	.string "しろいポロック$"
	.if (. - gText_Rom_5C982D) != 0x8
	.error "gText_Rom_5C982D must retain its original byte length"
	.endif
