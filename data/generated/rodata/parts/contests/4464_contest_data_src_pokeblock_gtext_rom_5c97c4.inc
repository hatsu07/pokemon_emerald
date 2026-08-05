	@ src/pokeblock.c:205 pokeblock_line_205
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C97C4
gText_Rom_5C97C4: @ 0x085C97C4
	.string "あかいポロック$"
	.if (. - gText_Rom_5C97C4) != 0x8
	.error "gText_Rom_5C97C4 must retain its original byte length"
	.endif
