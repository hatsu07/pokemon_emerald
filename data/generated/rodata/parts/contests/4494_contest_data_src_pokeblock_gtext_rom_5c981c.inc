	@ src/pokeblock.c:215 pokeblock_line_215
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C981C
gText_Rom_5C981C: @ 0x085C981C
	.string "はいいろポロック$"
	.if (. - gText_Rom_5C981C) != 0x9
	.error "gText_Rom_5C981C must retain its original byte length"
	.endif
