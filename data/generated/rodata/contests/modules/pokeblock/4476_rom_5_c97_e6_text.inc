	@ src/pokeblock.c:209 pokeblock_line_209
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C97E6
gText_Rom_5C97E6: @ 0x085C97E6
	.string "きいろのポロック$"
	.if (. - gText_Rom_5C97E6) != 0x9
	.error "gText_Rom_5C97E6 must retain its original byte length"
	.endif
