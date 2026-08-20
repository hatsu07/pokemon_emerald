
	@ src/pokeblock.c:216 pokeblock_line_216
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9825
gText_Rom_5C9825: @ 0x085C9825
	.string "くろいポロック{EOS}"
	.if (. - gText_Rom_5C9825) != 0x8
	.error "gText_Rom_5C9825 must retain its original byte length"
	.endif
	.globl gText_Rom_5C9828
	.set gText_Rom_5C9828, gText_Rom_5C9825 + 0x3

	@ src/pokeblock.c:217 pokeblock_line_217
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C982D
gText_Rom_5C982D: @ 0x085C982D
	.string "しろいポロック{EOS}"
	.if (. - gText_Rom_5C982D) != 0x8
	.error "gText_Rom_5C982D must retain its original byte length"
	.endif
	.globl gText_Rom_5C9830
	.set gText_Rom_5C9830, gText_Rom_5C982D + 0x3

	@ src/pokeblock.c:218 pokeblock_line_218
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9835
gText_Rom_5C9835: @ 0x085C9835
	.string "きんいろポロック{EOS}"
	.if (. - gText_Rom_5C9835) != 0x9
	.error "gText_Rom_5C9835 must retain its original byte length"
	.endif
