	@ src/battle_debug.c:341 battle_debug_line_341 (+5 aliases)
	.globl gText_Rom_5CA37E
gText_Rom_5CA37E: @ 0x085CA37E
	.string "とくぼう$"
	.if (. - gText_Rom_5CA37E) > 0x5
	.error "gText_Rom_5CA37E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA37E) < 0x5
	.space 0x5 - (. - gText_Rom_5CA37E)
	.endif
