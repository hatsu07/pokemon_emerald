	@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl gText_Rom_5CAAB8
gText_Rom_5CAAB8: @ 0x085CAAB8
	.string "こおり$"
	.if (. - gText_Rom_5CAAB8) > 0x4
	.error "gText_Rom_5CAAB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAB8) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAB8)
	.endif

