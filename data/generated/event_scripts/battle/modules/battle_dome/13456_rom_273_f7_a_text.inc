	@ src/battle_dome.c:942 battle_dome_line_942
	.globl gText_Rom_273F7A
gText_Rom_273F7A: @ 0x08273F7A
	.string "HPと ぼうぎょに ちからを いれていない!$"
	.if (. - gText_Rom_273F7A) > 0x17
	.error "gText_Rom_273F7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F7A) < 0x17
	.space 0x17 - (. - gText_Rom_273F7A)
	.endif
