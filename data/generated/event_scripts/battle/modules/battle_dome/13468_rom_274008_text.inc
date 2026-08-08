	@ src/battle_dome.c:948 battle_dome_line_948
	.globl gText_Rom_274008
gText_Rom_274008: @ 0x08274008
	.string "こうげきと とくこうに ちからを いれていない!$"
	.if (. - gText_Rom_274008) > 0x19
	.error "gText_Rom_274008 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274008) < 0x19
	.space 0x19 - (. - gText_Rom_274008)
	.endif
