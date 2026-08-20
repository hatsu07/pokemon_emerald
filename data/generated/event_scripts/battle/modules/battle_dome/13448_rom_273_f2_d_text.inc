	@ src/battle_dome.c:938 battle_dome_line_938
	.globl gText_Rom_273F2D
gText_Rom_273F2D: @ 0x08273F2D
	.string "すばやさに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273F2D) > 0x12
	.error "gText_Rom_273F2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F2D) < 0x12
	.space 0x12 - (. - gText_Rom_273F2D)
	.endif
