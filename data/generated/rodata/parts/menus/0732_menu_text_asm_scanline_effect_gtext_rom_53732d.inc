	@ asm/scanline_effect.s:2188 sub_080BA834 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_53732D
gText_Rom_53732D: @ 0x0853732D
	.string "しあいの　ルール$"
	.if (. - gText_Rom_53732D) != 0x9
	.error "gText_Rom_53732D must retain its original byte length"
	.endif
