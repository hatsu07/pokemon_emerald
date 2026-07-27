	@ src/battle_debug.c:378 battle_debug_line_378 (+1 aliases)
	.globl gText_Rom_2EB2FC
gText_Rom_2EB2FC: @ 0x082EB2FC
	.string "ロックオン$"
	.if (. - gText_Rom_2EB2FC) > 0x6
	.error "gText_Rom_2EB2FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2FC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB2FC)
	.endif
	.incbin "baserom.gba", 0x2eb302, 0x2

