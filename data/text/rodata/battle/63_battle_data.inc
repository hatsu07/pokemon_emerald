	@ src/battle_debug.c:371 battle_debug_line_371 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB624
gText_Rom_2EB624: @ 0x082EB624
	.string "どろあそび$"
	.if (. - gText_Rom_2EB624) != 0x6
	.error "gText_Rom_2EB624 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB626
	.set gText_Rom_2EB626, gText_Rom_2EB624 + 0x2
	.incbin "baserom.gba", 0x2eb62a, 0x2

