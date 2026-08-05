	@ src/pokeblock.c:212 pokeblock_line_212
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9801
gText_Rom_5C9801: @ 0x085C9801
	.string "ちゃいろポロック$"
	.if (. - gText_Rom_5C9801) != 0x9
	.error "gText_Rom_5C9801 must retain its original byte length"
	.endif
