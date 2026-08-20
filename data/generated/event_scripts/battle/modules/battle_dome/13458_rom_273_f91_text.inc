	@ src/battle_dome.c:943 battle_dome_line_943
	.globl gText_Rom_273F91
gText_Rom_273F91: @ 0x08273F91
	.string "HPと すばやさに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_273F91) > 0x17
	.error "gText_Rom_273F91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F91) < 0x17
	.space 0x17 - (. - gText_Rom_273F91)
	.endif
