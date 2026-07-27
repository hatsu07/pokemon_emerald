	@ src/battle_debug.c:381 battle_debug_line_381 (+1 aliases)
	.globl gText_Rom_2EB524
gText_Rom_2EB524: @ 0x082EB524
	.string "じゅうでん$"
	.if (. - gText_Rom_2EB524) > 0x6
	.error "gText_Rom_2EB524 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB524) < 0x6
	.space 0x6 - (. - gText_Rom_2EB524)
	.endif
	.incbin "baserom.gba", 0x2eb52a, 0x2

