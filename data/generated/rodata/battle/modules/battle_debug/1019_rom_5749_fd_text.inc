	@ src/battle_debug.c:318 battle_debug_line_318 (+1 aliases)
	.globl gText_Rom_5749FD
gText_Rom_5749FD: @ 0x085749FD
	.string "タイプ{EOS}"
	.if (. - gText_Rom_5749FD) > 0x4
	.error "gText_Rom_5749FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749FD) < 0x4
	.space 0x4 - (. - gText_Rom_5749FD)
	.endif
