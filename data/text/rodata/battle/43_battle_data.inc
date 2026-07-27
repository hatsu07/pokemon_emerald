	@ src/battle_debug.c:367 battle_debug_line_367 (+1 aliases)
	.globl gText_Rom_2EB2CC
gText_Rom_2EB2CC: @ 0x082EB2CC
	.string "みやぶる$"
	.if (. - gText_Rom_2EB2CC) > 0x5
	.error "gText_Rom_2EB2CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2CC) < 0x5
	.space 0x5 - (. - gText_Rom_2EB2CC)
	.endif
	.incbin "baserom.gba", 0x2eb2d1, 0x3

	@ src/battle_debug.c:364 battle_debug_line_364 (+1 aliases)
	.globl gText_Rom_2EB2D4
gText_Rom_2EB2D4: @ 0x082EB2D4
	.string "みちづれ$"
	.if (. - gText_Rom_2EB2D4) > 0x5
	.error "gText_Rom_2EB2D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2D4) < 0x5
	.space 0x5 - (. - gText_Rom_2EB2D4)
	.endif
	.incbin "baserom.gba", 0x2eb2d9, 0x3

	@ src/battle_debug.c:379 battle_debug_line_379 (+1 aliases)
	.globl gText_Rom_2EB2DC
gText_Rom_2EB2DC: @ 0x082EB2DC
	.string "ほろびのうた$"
	.if (. - gText_Rom_2EB2DC) > 0x7
	.error "gText_Rom_2EB2DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2DC) < 0x7
	.space 0x7 - (. - gText_Rom_2EB2DC)
	.endif
	.incbin "baserom.gba", 0x2eb2e3, 0x1

