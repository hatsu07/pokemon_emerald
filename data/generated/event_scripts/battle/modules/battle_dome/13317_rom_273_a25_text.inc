	@ src/battle_dome.c:870 battle_dome_line_870
	.globl gText_Rom_273A25
gText_Rom_273A25: @ 0x08273A25
	.string "へいきんより やや ちからが おちる チーム。{EOS}"
	.if (. - gText_Rom_273A25) > 0x18
	.error "gText_Rom_273A25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A25) < 0x18
	.space 0x18 - (. - gText_Rom_273A25)
	.endif
