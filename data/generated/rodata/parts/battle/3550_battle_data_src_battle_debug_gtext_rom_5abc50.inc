	@ src/battle_debug.c:346 battle_debug_line_346 (+3 aliases)
	.globl gText_Rom_5ABC50
gText_Rom_5ABC50: @ 0x085ABC50
	.string "ねむり$"
	.if (. - gText_Rom_5ABC50) > 0x4
	.error "gText_Rom_5ABC50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC50) < 0x4
	.space 0x4 - (. - gText_Rom_5ABC50)
	.endif
