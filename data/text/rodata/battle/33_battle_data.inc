	@ src/battle_debug.c:362 battle_debug_line_362 (+1 aliases)
	.globl gText_Rom_2EB03C
gText_Rom_2EB03C: @ 0x082EB03C
	.string "まるくなる$"
	.if (. - gText_Rom_2EB03C) > 0x6
	.error "gText_Rom_2EB03C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB03C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB03C)
	.endif
	.incbin "baserom.gba", 0x2eb042, 0x2

