	@ src/battle_debug.c:341 battle_debug_line_341 (+5 aliases)
	.globl gText_Rom_5FA9BF
gText_Rom_5FA9BF: @ 0x085FA9BF
	.string "とくぼう$"
	.if (. - gText_Rom_5FA9BF) > 0x5
	.error "gText_Rom_5FA9BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9BF) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9BF)
	.endif
