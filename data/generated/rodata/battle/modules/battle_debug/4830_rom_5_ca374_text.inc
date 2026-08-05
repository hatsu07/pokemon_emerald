	@ src/battle_debug.c:338 battle_debug_line_338 (+4 aliases)
	.globl gText_Rom_5CA374
gText_Rom_5CA374: @ 0x085CA374
	.string "ぼうぎょ$"
	.if (. - gText_Rom_5CA374) > 0x5
	.error "gText_Rom_5CA374 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA374) < 0x5
	.space 0x5 - (. - gText_Rom_5CA374)
	.endif
