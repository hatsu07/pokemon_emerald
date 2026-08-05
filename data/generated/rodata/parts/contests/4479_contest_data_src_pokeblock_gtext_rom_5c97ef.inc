	@ src/pokeblock.c:210 pokeblock_line_210
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C97EF
gText_Rom_5C97EF: @ 0x085C97EF
	.string "むらさきポロック$"
	.if (. - gText_Rom_5C97EF) != 0x9
	.error "gText_Rom_5C97EF must retain its original byte length"
	.endif
