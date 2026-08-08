	@ src/battle_dome.c:945 battle_dome_line_945
	.globl gText_Rom_273FBF
gText_Rom_273FBF: @ 0x08273FBF
	.string "HPと とくぼうに ちからを いれていない!$"
	.if (. - gText_Rom_273FBF) > 0x17
	.error "gText_Rom_273FBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273FBF) < 0x17
	.space 0x17 - (. - gText_Rom_273FBF)
	.endif
