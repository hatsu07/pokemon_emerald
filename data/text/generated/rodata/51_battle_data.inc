	@ src/battle_debug.c:360 battle_debug_line_360 (+1 aliases)
	.globl gText_Rom_2EB4DC
gText_Rom_2EB4DC: @ 0x082EB4DC
	.string "いちゃもん$"
	.if (. - gText_Rom_2EB4DC) > 0x6
	.error "gText_Rom_2EB4DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB4DC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB4DC)
	.endif
	.incbin "baserom.gba", 0x2eb4e2, 0x2

