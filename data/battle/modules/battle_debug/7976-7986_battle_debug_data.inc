	@ src/battle_debug.c:336 battle_debug_line_336 (+1 aliases)
	.globl gText_Rom_5FA9A4
gText_Rom_5FA9A4: @ 0x085FA9A4
	.string "さいだいHP{EOS}"
	.if (. - gText_Rom_5FA9A4) > 0x7
	.error "gText_Rom_5FA9A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9A4) < 0x7
	.space 0x7 - (. - gText_Rom_5FA9A4)
	.endif

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5FA9AB
gText_Rom_5FA9AB: @ 0x085FA9AB
	.string "こうげき{EOS}"
	.if (. - gText_Rom_5FA9AB) > 0x5
	.error "gText_Rom_5FA9AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9AB) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9AB)
	.endif

	@ src/battle_debug.c:338 battle_debug_line_338 (+4 aliases)
	.globl gText_Rom_5FA9B0
gText_Rom_5FA9B0: @ 0x085FA9B0
	.string "ぼうぎょ{EOS}"
	.if (. - gText_Rom_5FA9B0) > 0x5
	.error "gText_Rom_5FA9B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9B0) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9B0)
	.endif

	@ src/battle_debug.c:339 battle_debug_line_339 (+4 aliases)
	.globl gText_Rom_5FA9B5
gText_Rom_5FA9B5: @ 0x085FA9B5
	.string "すばやさ{EOS}"
	.if (. - gText_Rom_5FA9B5) > 0x5
	.error "gText_Rom_5FA9B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9B5) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9B5)
	.endif

	@ src/battle_debug.c:340 battle_debug_line_340 (+5 aliases)
	.globl gText_Rom_5FA9BA
gText_Rom_5FA9BA: @ 0x085FA9BA
	.string "とくこう{EOS}"
	.if (. - gText_Rom_5FA9BA) > 0x5
	.error "gText_Rom_5FA9BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9BA) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9BA)
	.endif

	@ src/battle_debug.c:341 battle_debug_line_341 (+5 aliases)
	.globl gText_Rom_5FA9BF
gText_Rom_5FA9BF: @ 0x085FA9BF
	.string "とくぼう{EOS}"
	.if (. - gText_Rom_5FA9BF) > 0x5
	.error "gText_Rom_5FA9BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9BF) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9BF)
	.endif
