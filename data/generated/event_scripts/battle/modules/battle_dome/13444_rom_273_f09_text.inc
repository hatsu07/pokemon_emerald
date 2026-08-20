	@ src/battle_dome.c:936 battle_dome_line_936
	.globl gText_Rom_273F09
gText_Rom_273F09: @ 0x08273F09
	.string "こうげきに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273F09) > 0x12
	.error "gText_Rom_273F09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F09) < 0x12
	.space 0x12 - (. - gText_Rom_273F09)
	.endif
