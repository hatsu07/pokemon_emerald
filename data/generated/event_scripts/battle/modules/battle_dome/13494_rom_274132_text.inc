	@ src/battle_dome.c:961 battle_dome_line_961
	.globl gText_Rom_274132
gText_Rom_274132: @ 0x08274132
	.string "とくぼうには ちからを いれていない!{EOS}"
	.if (. - gText_Rom_274132) > 0x14
	.error "gText_Rom_274132 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274132) < 0x14
	.space 0x14 - (. - gText_Rom_274132)
	.endif
