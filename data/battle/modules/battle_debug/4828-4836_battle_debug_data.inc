	@ src/strings.c:367 gText_Register
	.globl gText_Register
gText_Register: @ 0x085CA368
	.string "とうろくする{EOS}"
	.if (. - gText_Register) > 0x7
	.error "gText_Register may not grow beyond its original slot"
	.endif
	.if (. - gText_Register) < 0x7
	.space 0x7 - (. - gText_Register)
	.endif

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5CA36F
gText_Rom_5CA36F: @ 0x085CA36F
	.string "こうげき{EOS}"
	.if (. - gText_Rom_5CA36F) > 0x5
	.error "gText_Rom_5CA36F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA36F) < 0x5
	.space 0x5 - (. - gText_Rom_5CA36F)
	.endif

	@ src/battle_debug.c:338 battle_debug_line_338 (+4 aliases)
	.globl gText_Rom_5CA374
gText_Rom_5CA374: @ 0x085CA374
	.string "ぼうぎょ{EOS}"
	.if (. - gText_Rom_5CA374) > 0x5
	.error "gText_Rom_5CA374 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA374) < 0x5
	.space 0x5 - (. - gText_Rom_5CA374)
	.endif

	@ src/battle_debug.c:340 battle_debug_line_340 (+5 aliases)
	.globl gText_Rom_5CA379
gText_Rom_5CA379: @ 0x085CA379
	.string "とくこう{EOS}"
	.if (. - gText_Rom_5CA379) > 0x5
	.error "gText_Rom_5CA379 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA379) < 0x5
	.space 0x5 - (. - gText_Rom_5CA379)
	.endif

	@ src/battle_debug.c:341 battle_debug_line_341 (+5 aliases)
	.globl gText_Rom_5CA37E
gText_Rom_5CA37E: @ 0x085CA37E
	.string "とくぼう{EOS}"
	.if (. - gText_Rom_5CA37E) > 0x5
	.error "gText_Rom_5CA37E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA37E) < 0x5
	.space 0x5 - (. - gText_Rom_5CA37E)
	.endif

	@ src/battle_debug.c:339 battle_debug_line_339 (+4 aliases)
	.globl gText_Rom_5CA383
gText_Rom_5CA383: @ 0x085CA383
	.string "すばやさ{EOS}"
	.if (. - gText_Rom_5CA383) > 0x5
	.error "gText_Rom_5CA383 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA383) < 0x5
	.space 0x5 - (. - gText_Rom_5CA383)
	.endif
