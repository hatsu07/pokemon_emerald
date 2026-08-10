	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5ECCA7
gText_Rom_5ECCA7: @ 0x085ECCA7
	.string "こうげき$"
	.if (. - gText_Rom_5ECCA7) > 0x5
	.error "gText_Rom_5ECCA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECCA7) < 0x5
	.space 0x5 - (. - gText_Rom_5ECCA7)
	.endif
	@ analyzed canonical ROM range 0x085ECCAC-0x085ECCDF
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x460D, 0x0824, 0x4400, 0x3A2E
	.2byte 0x2D07, 0x0800, 0x4128, 0xFE0D, 0x0713, 0x001A, 0x503F, 0x0210
	.2byte 0x0016, 0x0926
