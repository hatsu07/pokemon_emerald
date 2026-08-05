	@ src/battle_debug.c:321 battle_debug_line_321 (+2 aliases)
	.globl gText_Rom_5CA3B5
gText_Rom_5CA3B5: @ 0x085CA3B5
	.string "じょうたい$"
	.if (. - gText_Rom_5CA3B5) > 0x6
	.error "gText_Rom_5CA3B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3B5) < 0x6
	.space 0x6 - (. - gText_Rom_5CA3B5)
	.endif
