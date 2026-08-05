	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5CA36F
gText_Rom_5CA36F: @ 0x085CA36F
	.string "こうげき$"
	.if (. - gText_Rom_5CA36F) > 0x5
	.error "gText_Rom_5CA36F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA36F) < 0x5
	.space 0x5 - (. - gText_Rom_5CA36F)
	.endif
