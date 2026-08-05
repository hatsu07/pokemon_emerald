	@ src/pokeblock.c:206 pokeblock_line_206
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C97CC
gText_Rom_5C97CC: @ 0x085C97CC
	.string "あおいポロック$"
	.if (. - gText_Rom_5C97CC) != 0x8
	.error "gText_Rom_5C97CC must retain its original byte length"
	.endif
