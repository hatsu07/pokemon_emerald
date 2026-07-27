	@ src/battle_debug.c:411 battle_debug_line_411 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB39C
gText_Rom_2EB39C: @ 0x082EB39C
	.string "しんぴのまもり$"
	.if (. - gText_Rom_2EB39C) != 0x8
	.error "gText_Rom_2EB39C must retain its original byte length"
	.endif
	.globl gText_Rom_2EB3A0
	.set gText_Rom_2EB3A0, gText_Rom_2EB39C + 0x4

