	@ src/battle_dome.c:897 battle_dome_line_897
	.globl gText_Rom_273C29
gText_Rom_273C29: @ 0x08273C29
	.string "あいての こころを かきみだすのが とくい。{EOS}"
	.if (. - gText_Rom_273C29) > 0x17
	.error "gText_Rom_273C29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C29) < 0x17
	.space 0x17 - (. - gText_Rom_273C29)
	.endif
