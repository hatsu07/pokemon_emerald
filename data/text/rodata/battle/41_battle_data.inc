	@ src/battle_debug.c:400 battle_debug_line_400 (+1 aliases)
	.globl gText_Rom_2EB2BC
gText_Rom_2EB2BC: @ 0x082EB2BC
	.string "まきびし$"
	.if (. - gText_Rom_2EB2BC) > 0x5
	.error "gText_Rom_2EB2BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2BC) < 0x5
	.space 0x5 - (. - gText_Rom_2EB2BC)
	.endif
	.incbin "baserom.gba", 0x2eb2c1, 0x3

