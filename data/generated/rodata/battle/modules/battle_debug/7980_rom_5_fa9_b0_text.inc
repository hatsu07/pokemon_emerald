	@ src/battle_debug.c:338 battle_debug_line_338 (+4 aliases)
	.globl gText_Rom_5FA9B0
gText_Rom_5FA9B0: @ 0x085FA9B0
	.string "ぼうぎょ$"
	.if (. - gText_Rom_5FA9B0) > 0x5
	.error "gText_Rom_5FA9B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9B0) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9B0)
	.endif
