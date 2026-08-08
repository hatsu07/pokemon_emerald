	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5ABC0C
gText_Rom_5ABC0C: @ 0x085ABC0C
	.string "こうげき$"
	.if (. - gText_Rom_5ABC0C) > 0x5
	.error "gText_Rom_5ABC0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC0C) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC0C)
	.endif

	@ src/battle_debug.c:338 battle_debug_line_338 (+4 aliases)
	.globl gText_Rom_5ABC11
gText_Rom_5ABC11: @ 0x085ABC11
	.string "ぼうぎょ$"
	.if (. - gText_Rom_5ABC11) > 0x5
	.error "gText_Rom_5ABC11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC11) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC11)
	.endif

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

	@ src/battle_debug.c:341 battle_debug_line_341 (+5 aliases)
	.globl gText_Rom_5ABC1B
gText_Rom_5ABC1B: @ 0x085ABC1B
	.string "とくぼう$"
	.if (. - gText_Rom_5ABC1B) > 0x5
	.error "gText_Rom_5ABC1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC1B) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC1B)
	.endif
	@ Replaced baserom.gba range: offset=0x5ABC20, size=0x18
	.byte 0x07, 0xBC, 0x5A, 0x08, 0x16, 0xBC, 0x5A, 0x08, 0x0C, 0xBC, 0x5A, 0x08, 0x1B, 0xBC, 0x5A, 0x08
	.byte 0x11, 0xBC, 0x5A, 0x08, 0x6D, 0xB0, 0x5A, 0x08
