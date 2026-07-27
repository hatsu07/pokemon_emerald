	@ src/battle_debug.c:384 battle_debug_line_384 (+1 aliases)
	.globl gText_Rom_2EB5B4
gText_Rom_2EB5B4: @ 0x082EB5B4
	.string "ふういん$"
	.if (. - gText_Rom_2EB5B4) > 0x5
	.error "gText_Rom_2EB5B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB5B4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB5B4)
	.endif
	.incbin "baserom.gba", 0x2eb5b9, 0x3

