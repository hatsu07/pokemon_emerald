	@ src/pokeblock.c:211 pokeblock_line_211
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C97F8
gText_Rom_5C97F8: @ 0x085C97F8
	.string "こんいろポロック$"
	.if (. - gText_Rom_5C97F8) != 0x9
	.error "gText_Rom_5C97F8 must retain its original byte length"
	.endif
