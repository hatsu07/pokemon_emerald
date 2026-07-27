	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8E12
gText_Rom_5E8E12: @ 0x085E8E12
	.string "こうげき$"
	.if (. - gText_Rom_5E8E12) > 0x5
	.error "gText_Rom_5E8E12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8E12) < 0x5
	.space 0x5 - (. - gText_Rom_5E8E12)
	.endif
	.incbin "baserom.gba", 0x5e8e17, 0x14b

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8F62
gText_Rom_5E8F62: @ 0x085E8F62
	.string "こうげき$"
	.if (. - gText_Rom_5E8F62) > 0x5
	.error "gText_Rom_5E8F62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8F62) < 0x5
	.space 0x5 - (. - gText_Rom_5E8F62)
	.endif
	.incbin "baserom.gba", 0x5e8f67, 0xab

