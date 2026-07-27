	@ src/battle_debug.c:410 battle_debug_line_410 (+1 aliases)
	.globl gText_Rom_2EB04C
gText_Rom_2EB04C: @ 0x082EB04C
	.string "ひかりのかべ$"
	.if (. - gText_Rom_2EB04C) > 0x7
	.error "gText_Rom_2EB04C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB04C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB04C)
	.endif
	.incbin "baserom.gba", 0x2eb053, 0x1

