	@ src/battle_dome.c:954 battle_dome_line_954
	.globl gText_Rom_27409E
gText_Rom_27409E: @ 0x0827409E
	.string "すばやさと とくぼうに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_27409E) > 0x19
	.error "gText_Rom_27409E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27409E) < 0x19
	.space 0x19 - (. - gText_Rom_27409E)
	.endif
