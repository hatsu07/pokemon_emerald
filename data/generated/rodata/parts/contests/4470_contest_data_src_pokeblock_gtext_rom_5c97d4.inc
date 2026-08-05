	@ src/pokeblock.c:207 pokeblock_line_207
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C97D4
gText_Rom_5C97D4: @ 0x085C97D4
	.string "ももいろポロック$"
	.if (. - gText_Rom_5C97D4) != 0x9
	.error "gText_Rom_5C97D4 must retain its original byte length"
	.endif
