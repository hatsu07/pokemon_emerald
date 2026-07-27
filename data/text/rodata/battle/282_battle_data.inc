	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E804B
gText_Rom_5E804B: @ 0x085E804B
	.string "こうげき$"
	.if (. - gText_Rom_5E804B) > 0x5
	.error "gText_Rom_5E804B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E804B) < 0x5
	.space 0x5 - (. - gText_Rom_5E804B)
	.endif
	.incbin "baserom.gba", 0x5e8050, 0x6d

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E80BD
gText_Rom_5E80BD: @ 0x085E80BD
	.string "こうげき$"
	.if (. - gText_Rom_5E80BD) > 0x5
	.error "gText_Rom_5E80BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E80BD) < 0x5
	.space 0x5 - (. - gText_Rom_5E80BD)
	.endif
	.incbin "baserom.gba", 0x5e80c2, 0x36

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E80F8
gText_Rom_5E80F8: @ 0x085E80F8
	.string "こうげき$"
	.if (. - gText_Rom_5E80F8) > 0x5
	.error "gText_Rom_5E80F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E80F8) < 0x5
	.space 0x5 - (. - gText_Rom_5E80F8)
	.endif
	.incbin "baserom.gba", 0x5e80fd, 0x33

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8130
gText_Rom_5E8130: @ 0x085E8130
	.string "こうげき$"
	.if (. - gText_Rom_5E8130) > 0x5
	.error "gText_Rom_5E8130 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8130) < 0x5
	.space 0x5 - (. - gText_Rom_5E8130)
	.endif
	.incbin "baserom.gba", 0x5e8135, 0x36

