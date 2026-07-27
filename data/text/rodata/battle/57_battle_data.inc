	@ src/battle_debug.c:383 battle_debug_line_383 (+1 aliases)
	.globl gText_Rom_2EB58C
gText_Rom_2EB58C: @ 0x082EB58C
	.string "あくび$"
	.if (. - gText_Rom_2EB58C) > 0x4
	.error "gText_Rom_2EB58C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB58C) < 0x4
	.space 0x4 - (. - gText_Rom_2EB58C)
	.endif
	.incbin "baserom.gba", 0x2eb590, 0x4

