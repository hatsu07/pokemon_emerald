	@ src/data/moves_info.h:6761 moves_info_line_6761
	.globl gText_Rom_5B661D
gText_Rom_5B661D: @ 0x085B661D
	.string "トリック$"
	.if (. - gText_Rom_5B661D) > 0x5
	.error "gText_Rom_5B661D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B661D) < 0x5
	.space 0x5 - (. - gText_Rom_5B661D)
	.endif
	.incbin "baserom.gba", 0x5b6622, 0x4e9

	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_5B6B0B
gText_Rom_5B6B0B: @ 0x085B6B0B
	.string "ほうし$"
	.if (. - gText_Rom_5B6B0B) > 0x4
	.error "gText_Rom_5B6B0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B6B0B) < 0x4
	.space 0x4 - (. - gText_Rom_5B6B0B)
	.endif
	.incbin "baserom.gba", 0x5b6b0f, 0x3cb

