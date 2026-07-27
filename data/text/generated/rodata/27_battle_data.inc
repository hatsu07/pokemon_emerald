	@ src/battle_debug.c:412 battle_debug_line_412 (+1 aliases)
	.globl gText_Rom_2EAE74
gText_Rom_2EAE74: @ 0x082EAE74
	.string "しろいきり$"
	.if (. - gText_Rom_2EAE74) > 0x6
	.error "gText_Rom_2EAE74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE74) < 0x6
	.space 0x6 - (. - gText_Rom_2EAE74)
	.endif
	.incbin "baserom.gba", 0x2eae7a, 0x2

