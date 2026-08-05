	@ src/battle_debug.c:340 battle_debug_line_340 (+5 aliases)
	.globl gText_Rom_5ABC16
gText_Rom_5ABC16: @ 0x085ABC16
	.string "とくこう$"
	.if (. - gText_Rom_5ABC16) > 0x5
	.error "gText_Rom_5ABC16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC16) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC16)
	.endif
