	@ src/battle_debug.c:336 battle_debug_line_336 (+1 aliases)
	.globl gText_Rom_5FA9A4
gText_Rom_5FA9A4: @ 0x085FA9A4
	.string "さいだいHP$"
	.if (. - gText_Rom_5FA9A4) > 0x7
	.error "gText_Rom_5FA9A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9A4) < 0x7
	.space 0x7 - (. - gText_Rom_5FA9A4)
	.endif
