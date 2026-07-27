	@ src/data/easy_chat/easy_chat_group_battle.h:244 easy_chat_group_battle_line_244 (+3 aliases)
	.globl gText_Rom_5DD434
gText_Rom_5DD434: @ 0x085DD434
	.string "バトル$"
	.if (. - gText_Rom_5DD434) > 0x4
	.error "gText_Rom_5DD434 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD434) < 0x4
	.space 0x4 - (. - gText_Rom_5DD434)
	.endif
	.globl gUnknown_85DD438
gUnknown_85DD438: @ 0x085DD438

	@ src/strings.c:896 gText_RentalSwap
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DD438
gText_Rom_5DD438: @ 0x085DD438
	.string "レンタル/こうかん$"
	.if (. - gText_Rom_5DD438) != 0xa
	.error "gText_Rom_5DD438 must retain its original byte length"
	.endif
	.globl gText_Rom_5DD43D
	.set gText_Rom_5DD43D, gText_Rom_5DD438 + 0x5
	.globl gUnknown_85DD442
gUnknown_85DD442: @ 0x085DD442

	@ src/strings.c:897 gText_Total
	.globl gText_Rom_5DD442
gText_Rom_5DD442: @ 0x085DD442
	.string "つうさん$"
	.if (. - gText_Rom_5DD442) > 0x5
	.error "gText_Rom_5DD442 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD442) < 0x5
	.space 0x5 - (. - gText_Rom_5DD442)
	.endif
	.globl gUnknown_85DD447
gUnknown_85DD447: @ 0x085DD447

	@ src/strings.c:898 gText_ClearStreak
	.globl gText_Rom_5DD447
gText_Rom_5DD447: @ 0x085DD447
	.string "{STR_VAR_1}れんぱ$"
	.if (. - gText_Rom_5DD447) > 0x6
	.error "gText_Rom_5DD447 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD447) < 0x6
	.space 0x6 - (. - gText_Rom_5DD447)
	.endif
	.globl gUnknown_85DD44D
gUnknown_85DD44D: @ 0x085DD44D

	@ src/strings.c:899 gText_Championships
	.globl gText_Rom_5DD44D
gText_Rom_5DD44D: @ 0x085DD44D
	.string "{STR_VAR_1}かい ゆうしょう$"
	.if (. - gText_Rom_5DD44D) > 0xb
	.error "gText_Rom_5DD44D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD44D) < 0xb
	.space 0xb - (. - gText_Rom_5DD44D)
	.endif
	.globl gUnknown_85DD458
gUnknown_85DD458: @ 0x085DD458

	@ src/strings.c:900 gText_RoomsCleared
	.globl gText_Rom_5DD458
gText_Rom_5DD458: @ 0x085DD458
	.string "{STR_VAR_1}へや とっぱ$"
	.if (. - gText_Rom_5DD458) > 0x9
	.error "gText_Rom_5DD458 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD458) < 0x9
	.space 0x9 - (. - gText_Rom_5DD458)
	.endif
	.globl gUnknown_85DD461
gUnknown_85DD461: @ 0x085DD461
	.incbin "baserom.gba", 0x5dd461, 0x9
	.globl gUnknown_85DD46A
gUnknown_85DD46A: @ 0x085DD46A

	@ src/strings.c:902 gText_KOsInARow
	.globl gText_Rom_5DD46A
gText_Rom_5DD46A: @ 0x085DD46A
	.string "{STR_VAR_1}にんぬき$"
	.if (. - gText_Rom_5DD46A) > 0x7
	.error "gText_Rom_5DD46A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD46A) < 0x7
	.space 0x7 - (. - gText_Rom_5DD46A)
	.endif
	.globl gUnknown_85DD471
gUnknown_85DD471: @ 0x085DD471

	@ src/strings.c:903 gText_TimesVar1
	.globl gText_Rom_5DD471
gText_Rom_5DD471: @ 0x085DD471
	.string "{STR_VAR_1}かい$"
	.if (. - gText_Rom_5DD471) > 0x5
	.error "gText_Rom_5DD471 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD471) < 0x5
	.space 0x5 - (. - gText_Rom_5DD471)
	.endif
	.globl gUnknown_85DD476
gUnknown_85DD476: @ 0x085DD476

	@ src/strings.c:904 gText_FloorsCleared
	.globl gText_Rom_5DD476
gText_Rom_5DD476: @ 0x085DD476
	.string "{STR_VAR_1}だん せいは$"
	.if (. - gText_Rom_5DD476) > 0x9
	.error "gText_Rom_5DD476 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD476) < 0x9
	.space 0x9 - (. - gText_Rom_5DD476)
	.endif
	.globl gUnknown_85DD47F
gUnknown_85DD47F: @ 0x085DD47F
	.incbin "baserom.gba", 0x5dd47f, 0xf
	.globl gUnknown_85DD48E
gUnknown_85DD48E: @ 0x085DD48E
	.incbin "baserom.gba", 0x5dd48e, 0x16
	.globl gUnknown_85DD4A4
gUnknown_85DD4A4: @ 0x085DD4A4
	.incbin "baserom.gba", 0x5dd4a4, 0x51

	@ src/strings.c:468 gText_Lv50
	.globl gText_Rom_5DD4F5
gText_Rom_5DD4F5: @ 0x085DD4F5
	.string "レベル50$"
	.if (. - gText_Rom_5DD4F5) > 0x6
	.error "gText_Rom_5DD4F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD4F5) < 0x6
	.space 0x6 - (. - gText_Rom_5DD4F5)
	.endif
	.incbin "baserom.gba", 0x5dd4fb, 0x1

