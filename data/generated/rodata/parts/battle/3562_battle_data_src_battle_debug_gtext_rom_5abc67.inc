	@ src/battle_debug.c:459 battle_debug_line_459 (+3 aliases)
	.globl gText_Rom_5ABC67
gText_Rom_5ABC67: @ 0x085ABC67
	.string "メロメロ$"
	.if (. - gText_Rom_5ABC67) > 0x5
	.error "gText_Rom_5ABC67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC67) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC67)
	.endif
