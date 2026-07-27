	@ src/battle_debug.c:380 battle_debug_line_380 (+1 aliases)
	.globl gText_Rom_2EB01C
gText_Rom_2EB01C: @ 0x082EB01C
	.string "ちいさくなる$"
	.if (. - gText_Rom_2EB01C) > 0x7
	.error "gText_Rom_2EB01C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB01C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB01C)
	.endif
	.incbin "baserom.gba", 0x2eb023, 0x1

