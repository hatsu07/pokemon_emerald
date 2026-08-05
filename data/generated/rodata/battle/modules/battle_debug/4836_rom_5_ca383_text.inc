	@ src/battle_debug.c:339 battle_debug_line_339 (+4 aliases)
	.globl gText_Rom_5CA383
gText_Rom_5CA383: @ 0x085CA383
	.string "すばやさ$"
	.if (. - gText_Rom_5CA383) > 0x5
	.error "gText_Rom_5CA383 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA383) < 0x5
	.space 0x5 - (. - gText_Rom_5CA383)
	.endif
