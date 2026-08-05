	@ src/pokeblock.c:208 pokeblock_line_208
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C97DD
gText_Rom_5C97DD: @ 0x085C97DD
	.string "みどりのポロック$"
	.if (. - gText_Rom_5C97DD) != 0x9
	.error "gText_Rom_5C97DD must retain its original byte length"
	.endif
