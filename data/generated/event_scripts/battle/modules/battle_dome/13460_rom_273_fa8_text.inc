	@ src/battle_dome.c:944 battle_dome_line_944
	.globl gText_Rom_273FA8
gText_Rom_273FA8: @ 0x08273FA8
	.string "HPと とくこうに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_273FA8) > 0x17
	.error "gText_Rom_273FA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273FA8) < 0x17
	.space 0x17 - (. - gText_Rom_273FA8)
	.endif
