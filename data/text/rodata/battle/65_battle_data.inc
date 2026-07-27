	@ src/battle_debug.c:372 battle_debug_line_372 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB794
gText_Rom_2EB794: @ 0x082EB794
	.string "みずあそび$"
	.if (. - gText_Rom_2EB794) != 0x6
	.error "gText_Rom_2EB794 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB796
	.set gText_Rom_2EB796, gText_Rom_2EB794 + 0x2
	.incbin "baserom.gba", 0x2eb79a, 0x2

