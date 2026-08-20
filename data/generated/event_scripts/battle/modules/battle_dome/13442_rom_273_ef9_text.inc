	@ src/battle_dome.c:935 battle_dome_line_935
	.globl gText_Rom_273EF9
gText_Rom_273EF9: @ 0x08273EF9
	.string "HPに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273EF9) > 0x10
	.error "gText_Rom_273EF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273EF9) < 0x10
	.space 0x10 - (. - gText_Rom_273EF9)
	.endif
