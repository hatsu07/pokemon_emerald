	@ src/pokeblock.c:133 sText_StowCase
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C985C
gText_Rom_5C985C: @ 0x085C985C
	.string "ケースをしまう$"
	.if (. - gText_Rom_5C985C) != 0x8
	.error "gText_Rom_5C985C must retain its original byte length"
	.endif
