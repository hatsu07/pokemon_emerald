	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E84AD
gText_Rom_5E84AD: @ 0x085E84AD
	.string "こうげき$"
	.if (. - gText_Rom_5E84AD) > 0x5
	.error "gText_Rom_5E84AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E84AD) < 0x5
	.space 0x5 - (. - gText_Rom_5E84AD)
	.endif
	.incbin "baserom.gba", 0x5e84b2, 0x36

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E84E8
gText_Rom_5E84E8: @ 0x085E84E8
	.string "こうげき$"
	.if (. - gText_Rom_5E84E8) > 0x5
	.error "gText_Rom_5E84E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E84E8) < 0x5
	.space 0x5 - (. - gText_Rom_5E84E8)
	.endif
	.incbin "baserom.gba", 0x5e84ed, 0x6a

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8557
gText_Rom_5E8557: @ 0x085E8557
	.string "こうげき$"
	.if (. - gText_Rom_5E8557) > 0x5
	.error "gText_Rom_5E8557 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8557) < 0x5
	.space 0x5 - (. - gText_Rom_5E8557)
	.endif
	.incbin "baserom.gba", 0x5e855c, 0x36

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8592
gText_Rom_5E8592: @ 0x085E8592
	.string "こうげき$"
	.if (. - gText_Rom_5E8592) > 0x5
	.error "gText_Rom_5E8592 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8592) < 0x5
	.space 0x5 - (. - gText_Rom_5E8592)
	.endif
	.incbin "baserom.gba", 0x5e8597, 0x10b

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E86A2
gText_Rom_5E86A2: @ 0x085E86A2
	.string "こうげき$"
	.if (. - gText_Rom_5E86A2) > 0x5
	.error "gText_Rom_5E86A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E86A2) < 0x5
	.space 0x5 - (. - gText_Rom_5E86A2)
	.endif
	.incbin "baserom.gba", 0x5e86a7, 0x38

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E86DF
gText_Rom_5E86DF: @ 0x085E86DF
	.string "こうげき$"
	.if (. - gText_Rom_5E86DF) > 0x5
	.error "gText_Rom_5E86DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E86DF) < 0x5
	.space 0x5 - (. - gText_Rom_5E86DF)
	.endif
	.incbin "baserom.gba", 0x5e86e4, 0x6a

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E874E
gText_Rom_5E874E: @ 0x085E874E
	.string "こうげき$"
	.if (. - gText_Rom_5E874E) > 0x5
	.error "gText_Rom_5E874E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E874E) < 0x5
	.space 0x5 - (. - gText_Rom_5E874E)
	.endif
	.incbin "baserom.gba", 0x5e8753, 0x70

