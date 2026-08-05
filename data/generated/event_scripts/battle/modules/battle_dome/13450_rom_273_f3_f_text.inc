	@ src/battle_dome.c:939 battle_dome_line_939
	.globl gText_Rom_273F3F
gText_Rom_273F3F: @ 0x08273F3F
	.string "とくこうに ちからを いれている。$"
	.if (. - gText_Rom_273F3F) > 0x12
	.error "gText_Rom_273F3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F3F) < 0x12
	.space 0x12 - (. - gText_Rom_273F3F)
	.endif
