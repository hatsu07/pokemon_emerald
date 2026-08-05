	@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl gText_Rom_5ABC5E
gText_Rom_5ABC5E: @ 0x085ABC5E
	.string "こおり$"
	.if (. - gText_Rom_5ABC5E) > 0x4
	.error "gText_Rom_5ABC5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC5E) < 0x4
	.space 0x4 - (. - gText_Rom_5ABC5E)
	.endif
