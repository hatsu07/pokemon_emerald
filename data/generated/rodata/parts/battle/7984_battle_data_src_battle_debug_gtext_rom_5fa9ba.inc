	@ src/battle_debug.c:340 battle_debug_line_340 (+5 aliases)
	.globl gText_Rom_5FA9BA
gText_Rom_5FA9BA: @ 0x085FA9BA
	.string "とくこう$"
	.if (. - gText_Rom_5FA9BA) > 0x5
	.error "gText_Rom_5FA9BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9BA) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9BA)
	.endif
