	@ src/battle_debug.c:363 battle_debug_line_363 (+1 aliases)
	.globl gText_Rom_2EAFDC
gText_Rom_2EAFDC: @ 0x082EAFDC
	.string "いかり$"
	.if (. - gText_Rom_2EAFDC) > 0x4
	.error "gText_Rom_2EAFDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFDC) < 0x4
	.space 0x4 - (. - gText_Rom_2EAFDC)
	.endif
	.incbin "baserom.gba", 0x2eafe0, 0x4

