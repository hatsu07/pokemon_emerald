	@ src/pokeblock.c:213 pokeblock_line_213
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C980A
gText_Rom_5C980A: @ 0x085C980A
	.string "そらいろポロック$"
	.if (. - gText_Rom_5C980A) != 0x9
	.error "gText_Rom_5C980A must retain its original byte length"
	.endif
