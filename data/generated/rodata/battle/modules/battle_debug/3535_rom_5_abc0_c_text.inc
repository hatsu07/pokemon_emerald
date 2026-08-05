	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5ABC0C
gText_Rom_5ABC0C: @ 0x085ABC0C
	.string "こうげき$"
	.if (. - gText_Rom_5ABC0C) > 0x5
	.error "gText_Rom_5ABC0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC0C) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC0C)
	.endif
