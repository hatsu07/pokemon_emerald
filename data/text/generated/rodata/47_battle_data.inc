	@ src/battle_debug.c:459 battle_debug_line_459 (+3 aliases)
	.globl gText_Rom_2EB36C
gText_Rom_2EB36C: @ 0x082EB36C
	.string "メロメロ$"
	.if (. - gText_Rom_2EB36C) > 0x5
	.error "gText_Rom_2EB36C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB36C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB36C)
	.endif
	.incbin "baserom.gba", 0x2eb371, 0x3

