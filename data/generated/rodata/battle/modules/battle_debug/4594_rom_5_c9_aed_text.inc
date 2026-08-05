	@ src/battle_debug.c:340 battle_debug_line_340 (+5 aliases)
	.globl gText_Rom_5C9AED
gText_Rom_5C9AED: @ 0x085C9AED
	.string "とくこう$"
	.if (. - gText_Rom_5C9AED) > 0x5
	.error "gText_Rom_5C9AED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AED) < 0x5
	.space 0x5 - (. - gText_Rom_5C9AED)
	.endif
