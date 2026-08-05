	@ src/pokeblock.c:216 pokeblock_line_216
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9825
gText_Rom_5C9825: @ 0x085C9825
	.string "くろいポロック$"
	.if (. - gText_Rom_5C9825) != 0x8
	.error "gText_Rom_5C9825 must retain its original byte length"
	.endif
