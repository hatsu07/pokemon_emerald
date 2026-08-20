	@ src/battle_dome.c:937 battle_dome_line_937
	.globl gText_Rom_273F1B
gText_Rom_273F1B: @ 0x08273F1B
	.string "ぼうぎょに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273F1B) > 0x12
	.error "gText_Rom_273F1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F1B) < 0x12
	.space 0x12 - (. - gText_Rom_273F1B)
	.endif
