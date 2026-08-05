	@ src/pokeblock.c:214 pokeblock_line_214
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9813
gText_Rom_5C9813: @ 0x085C9813
	.string "きみどりポロック$"
	.if (. - gText_Rom_5C9813) != 0x9
	.error "gText_Rom_5C9813 must retain its original byte length"
	.endif
