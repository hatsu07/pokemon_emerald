	@ src/battle_dome.c:940 battle_dome_line_940
	.globl gText_Rom_273F51
gText_Rom_273F51: @ 0x08273F51
	.string "とくぼうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273F51) > 0x12
	.error "gText_Rom_273F51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F51) < 0x12
	.space 0x12 - (. - gText_Rom_273F51)
	.endif
