	@ src/battle_debug.c:385 battle_debug_line_385 (+1 aliases)
	.globl gText_Rom_2EB5C4
gText_Rom_2EB5C4: @ 0x082EB5C4
	.string "おんねん$"
	.if (. - gText_Rom_2EB5C4) > 0x5
	.error "gText_Rom_2EB5C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5C4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB5C4)
	.endif
	.incbin "baserom.gba", 0x2eb5c9, 0x3

