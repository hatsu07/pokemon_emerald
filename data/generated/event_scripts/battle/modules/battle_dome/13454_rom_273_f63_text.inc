	@ src/battle_dome.c:941 battle_dome_line_941
	.globl gText_Rom_273F63
gText_Rom_273F63: @ 0x08273F63
	.string "HPと こうげきに ちからを いれていない!$"
	.if (. - gText_Rom_273F63) > 0x17
	.error "gText_Rom_273F63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F63) < 0x17
	.space 0x17 - (. - gText_Rom_273F63)
	.endif
