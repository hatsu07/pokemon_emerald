	@ src/battle_debug.c:358 battle_debug_line_358 (+2 aliases)
	.globl gText_Rom_5ABC62
gText_Rom_5ABC62: @ 0x085ABC62
	.string "こんらん$"
	.if (. - gText_Rom_5ABC62) > 0x5
	.error "gText_Rom_5ABC62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC62) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC62)
	.endif
