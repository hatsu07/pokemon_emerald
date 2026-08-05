	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5CA36F
gText_Rom_5CA36F: @ 0x085CA36F
	.string "こうげき$"
	.if (. - gText_Rom_5CA36F) > 0x5
	.error "gText_Rom_5CA36F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA36F) < 0x5
	.space 0x5 - (. - gText_Rom_5CA36F)
	.endif
	.globl gUnknown_85CA374
gUnknown_85CA374: @ 0x085CA374

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
	.globl gUnknown_85CA379
gUnknown_85CA379: @ 0x085CA379

	@ src/battle_debug.c:340 battle_debug_line_340 (+5 aliases)
	.globl gText_Rom_5CA379
gText_Rom_5CA379: @ 0x085CA379
	.string "とくこう$"
	.if (. - gText_Rom_5CA379) > 0x5
	.error "gText_Rom_5CA379 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA379) < 0x5
	.space 0x5 - (. - gText_Rom_5CA379)
	.endif
	.globl gUnknown_85CA37E
gUnknown_85CA37E: @ 0x085CA37E

	@ src/battle_debug.c:341 battle_debug_line_341 (+5 aliases)
	.globl gText_Rom_5CA37E
gText_Rom_5CA37E: @ 0x085CA37E
	.string "とくぼう$"
	.if (. - gText_Rom_5CA37E) > 0x5
	.error "gText_Rom_5CA37E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA37E) < 0x5
	.space 0x5 - (. - gText_Rom_5CA37E)
	.endif
	.globl gUnknown_85CA383
gUnknown_85CA383: @ 0x085CA383

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
	.globl gUnknown_85CA388
gUnknown_85CA388: @ 0x085CA388
	@ Replaced baserom.gba range: offset=0x5CA388, size=0x3
	.byte 0xC2, 0xCA, 0xFF
	.globl gUnknown_85CA38B
gUnknown_85CA38B: @ 0x085CA38B
	@ Replaced baserom.gba range: offset=0x5CA38B, size=0x3
	.byte 0x01, 0x14, 0xFF
	.globl gUnknown_85CA38E
gUnknown_85CA38E: @ 0x085CA38E

	@ src/strings.c:375 gText_OTSlash
	.globl gText_Rom_5CA38E
gText_Rom_5CA38E: @ 0x085CA38E
	.string "おや/$"
	.if (. - gText_Rom_5CA38E) > 0x4
	.error "gText_Rom_5CA38E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA38E) < 0x4
	.space 0x4 - (. - gText_Rom_5CA38E)
	.endif
	.globl gUnknown_85CA392
gUnknown_85CA392: @ 0x085CA392

	@ src/strings.c:376 gText_RentalPkmn
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA392
gText_Rom_5CA392: @ 0x085CA392
	.string "レンタルポケモン$"
	.if (. - gText_Rom_5CA392) != 0x9
	.error "gText_Rom_5CA392 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA396
	.set gText_Rom_5CA396, gText_Rom_5CA392 + 0x4
	.globl gUnknown_85CA39B
gUnknown_85CA39B: @ 0x085CA39B

