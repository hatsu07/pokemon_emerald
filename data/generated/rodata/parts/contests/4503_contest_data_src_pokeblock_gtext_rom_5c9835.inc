	@ src/pokeblock.c:218 pokeblock_line_218
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9835
gText_Rom_5C9835: @ 0x085C9835
	.string "きんいろポロック$"
	.if (. - gText_Rom_5C9835) != 0x9
	.error "gText_Rom_5C9835 must retain its original byte length"
	.endif
