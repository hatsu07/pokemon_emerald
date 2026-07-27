	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8911
gText_Rom_5E8911: @ 0x085E8911
	.string "こうげき$"
	.if (. - gText_Rom_5E8911) > 0x5
	.error "gText_Rom_5E8911 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8911) < 0x5
	.space 0x5 - (. - gText_Rom_5E8911)
	.endif
	.incbin "baserom.gba", 0x5e8916, 0x35

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E894B
gText_Rom_5E894B: @ 0x085E894B
	.string "こうげき$"
	.if (. - gText_Rom_5E894B) > 0x5
	.error "gText_Rom_5E894B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E894B) < 0x5
	.space 0x5 - (. - gText_Rom_5E894B)
	.endif
	.incbin "baserom.gba", 0x5e8950, 0xda

	@ src/strings.c:1046 gText_Exit3 (+1 aliases)
	.globl gText_Rom_5E8A2A
gText_Rom_5E8A2A: @ 0x085E8A2A
	.string "おわる$"
	.if (. - gText_Rom_5E8A2A) > 0x4
	.error "gText_Rom_5E8A2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8A2A) < 0x4
	.space 0x4 - (. - gText_Rom_5E8A2A)
	.endif
	.incbin "baserom.gba", 0x5e8a2e, 0x1e5

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8C13
gText_Rom_5E8C13: @ 0x085E8C13
	.string "こうげき$"
	.if (. - gText_Rom_5E8C13) > 0x5
	.error "gText_Rom_5E8C13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8C13) < 0x5
	.space 0x5 - (. - gText_Rom_5E8C13)
	.endif
	.incbin "baserom.gba", 0x5e8c18, 0x3f

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8C57
gText_Rom_5E8C57: @ 0x085E8C57
	.string "こうげき$"
	.if (. - gText_Rom_5E8C57) > 0x5
	.error "gText_Rom_5E8C57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8C57) < 0x5
	.space 0x5 - (. - gText_Rom_5E8C57)
	.endif
	.incbin "baserom.gba", 0x5e8c5c, 0x33

