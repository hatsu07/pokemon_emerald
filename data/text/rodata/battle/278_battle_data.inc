	@ asm/battle_factory_screen.s:8862 sub_0819E7FC
	.globl gText_Rom_5DC13C
gText_Rom_5DC13C: @ 0x085DC13C
	.string "　　　　$"
	.if (. - gText_Rom_5DC13C) > 0x5
	.error "gText_Rom_5DC13C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC13C) < 0x5
	.space 0x5 - (. - gText_Rom_5DC13C)
	.endif
	.globl gUnknown_85DC141
gUnknown_85DC141: @ 0x085DC141

	@ src/strings.c:1019 gText_SamePkmnInPartyAlready
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DC141
gText_Rom_5DC141: @ 0x085DC141
	.string "てもちに おなじ ポケモンが います!$"
	.if (. - gText_Rom_5DC141) != 0x14
	.error "gText_Rom_5DC141 must retain its original byte length"
	.endif
	.globl gText_Rom_5DC146
	.set gText_Rom_5DC146, gText_Rom_5DC141 + 0x5
	.incbin "baserom.gba", 0x5dc155, 0x3
	.globl gUnknown_85DC158
gUnknown_85DC158: @ 0x085DC158
	.incbin "baserom.gba", 0x5dc158, 0xc
	.globl gUnknown_85DC164
gUnknown_85DC164: @ 0x085DC164
	.incbin "baserom.gba", 0x5dc164, 0x10
	.globl gUnknown_85DC174
gUnknown_85DC174: @ 0x085DC174
	.incbin "baserom.gba", 0x5dc174, 0x50
	.globl gUnknown_85DC1C4
gUnknown_85DC1C4: @ 0x085DC1C4
	.incbin "baserom.gba", 0x5dc1c4, 0xa
	.globl gUnknown_85DC1CE
gUnknown_85DC1CE: @ 0x085DC1CE
	.incbin "baserom.gba", 0x5dc1ce, 0x3
	.globl gUnknown_85DC1D1
gUnknown_85DC1D1: @ 0x085DC1D1
	.incbin "baserom.gba", 0x5dc1d1, 0x3
	.globl gUnknown_85DC1D4
gUnknown_85DC1D4: @ 0x085DC1D4
	.incbin "baserom.gba", 0x5dc1d4, 0x20
	.globl gUnknown_85DC1F4
gUnknown_85DC1F4: @ 0x085DC1F4
	.incbin "baserom.gba", 0x5dc1f4, 0x28
	.globl gUnknown_85DC21C
gUnknown_85DC21C: @ 0x085DC21C

	@ src/data/battle_frontier/apprentice.h:300 apprentice_line_300
	.globl gText_Rom_5DC21C
gText_Rom_5DC21C: @ 0x085DC21C
	.string "サダヒロ$"
	.if (. - gText_Rom_5DC21C) > 0x5
	.error "gText_Rom_5DC21C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC21C) < 0x5
	.space 0x5 - (. - gText_Rom_5DC21C)
	.endif
	.incbin "baserom.gba", 0x5dc221, 0x7
	.globl gUnknown_85DC228
gUnknown_85DC228: @ 0x085DC228
	.incbin "baserom.gba", 0x5dc228, 0x16
	.globl gUnknown_85DC23E
gUnknown_85DC23E: @ 0x085DC23E
	.incbin "baserom.gba", 0x5dc23e, 0xe

	@ src/data/battle_frontier/apprentice.h:308 apprentice_line_308
	.globl gText_Rom_5DC24C
gText_Rom_5DC24C: @ 0x085DC24C
	.string "ヒロオ$"
	.if (. - gText_Rom_5DC24C) > 0x4
	.error "gText_Rom_5DC24C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC24C) < 0x4
	.space 0x4 - (. - gText_Rom_5DC24C)
	.endif
	.incbin "baserom.gba", 0x5dc250, 0x2c

	@ src/data/battle_frontier/apprentice.h:316 apprentice_line_316
	.globl gText_Rom_5DC27C
gText_Rom_5DC27C: @ 0x085DC27C
	.string "ケイジ$"
	.if (. - gText_Rom_5DC27C) > 0x4
	.error "gText_Rom_5DC27C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC27C) < 0x4
	.space 0x4 - (. - gText_Rom_5DC27C)
	.endif
	.incbin "baserom.gba", 0x5dc280, 0x5c

	@ src/data/battle_frontier/apprentice.h:332 apprentice_line_332
	.globl gText_Rom_5DC2DC
gText_Rom_5DC2DC: @ 0x085DC2DC
	.string "ヨウカ$"
	.if (. - gText_Rom_5DC2DC) > 0x4
	.error "gText_Rom_5DC2DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC2DC) < 0x4
	.space 0x4 - (. - gText_Rom_5DC2DC)
	.endif
	.incbin "baserom.gba", 0x5dc2e0, 0x2c

	@ src/data/battle_frontier/apprentice.h:340 apprentice_line_340
	.globl gText_Rom_5DC30C
gText_Rom_5DC30C: @ 0x085DC30C
	.string "ヤスシ$"
	.if (. - gText_Rom_5DC30C) > 0x4
	.error "gText_Rom_5DC30C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC30C) < 0x4
	.space 0x4 - (. - gText_Rom_5DC30C)
	.endif
	.incbin "baserom.gba", 0x5dc310, 0x2c

	@ src/data/battle_frontier/apprentice.h:348 apprentice_line_348
	.globl gText_Rom_5DC33C
gText_Rom_5DC33C: @ 0x085DC33C
	.string "ミサオ$"
	.if (. - gText_Rom_5DC33C) > 0x4
	.error "gText_Rom_5DC33C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC33C) < 0x4
	.space 0x4 - (. - gText_Rom_5DC33C)
	.endif
	.incbin "baserom.gba", 0x5dc340, 0x2c

	@ src/data/battle_frontier/apprentice.h:356 apprentice_line_356
	.globl gText_Rom_5DC36C
gText_Rom_5DC36C: @ 0x085DC36C
	.string "カズサ$"
	.if (. - gText_Rom_5DC36C) > 0x4
	.error "gText_Rom_5DC36C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC36C) < 0x4
	.space 0x4 - (. - gText_Rom_5DC36C)
	.endif
	.incbin "baserom.gba", 0x5dc370, 0x2c

	@ src/data/battle_frontier/apprentice.h:364 apprentice_line_364
	.globl gText_Rom_5DC39C
gText_Rom_5DC39C: @ 0x085DC39C
	.string "スミレ$"
	.if (. - gText_Rom_5DC39C) > 0x4
	.error "gText_Rom_5DC39C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC39C) < 0x4
	.space 0x4 - (. - gText_Rom_5DC39C)
	.endif
	.incbin "baserom.gba", 0x5dc3a0, 0x2c

	@ src/data/battle_frontier/apprentice.h:372 apprentice_line_372
	.globl gText_Rom_5DC3CC
gText_Rom_5DC3CC: @ 0x085DC3CC
	.string "アキノリ$"
	.if (. - gText_Rom_5DC3CC) > 0x5
	.error "gText_Rom_5DC3CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC3CC) < 0x5
	.space 0x5 - (. - gText_Rom_5DC3CC)
	.endif
	.incbin "baserom.gba", 0x5dc3d1, 0x2b

	@ src/data/battle_frontier/apprentice.h:380 apprentice_line_380
	.globl gText_Rom_5DC3FC
gText_Rom_5DC3FC: @ 0x085DC3FC
	.string "トウゾウ$"
	.if (. - gText_Rom_5DC3FC) > 0x5
	.error "gText_Rom_5DC3FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC3FC) < 0x5
	.space 0x5 - (. - gText_Rom_5DC3FC)
	.endif
	.incbin "baserom.gba", 0x5dc401, 0x2b

	@ src/data/battle_frontier/apprentice.h:388 apprentice_line_388
	.globl gText_Rom_5DC42C
gText_Rom_5DC42C: @ 0x085DC42C
	.string "セイヤ$"
	.if (. - gText_Rom_5DC42C) > 0x4
	.error "gText_Rom_5DC42C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC42C) < 0x4
	.space 0x4 - (. - gText_Rom_5DC42C)
	.endif
	.incbin "baserom.gba", 0x5dc430, 0x2c

	@ src/data/battle_frontier/apprentice.h:396 apprentice_line_396
	.globl gText_Rom_5DC45C
gText_Rom_5DC45C: @ 0x085DC45C
	.string "リュウジ$"
	.if (. - gText_Rom_5DC45C) > 0x5
	.error "gText_Rom_5DC45C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC45C) < 0x5
	.space 0x5 - (. - gText_Rom_5DC45C)
	.endif
	.incbin "baserom.gba", 0x5dc461, 0x2b

	@ src/data/battle_frontier/apprentice.h:404 apprentice_line_404
	.globl gText_Rom_5DC48C
gText_Rom_5DC48C: @ 0x085DC48C
	.string "カツアキ$"
	.if (. - gText_Rom_5DC48C) > 0x5
	.error "gText_Rom_5DC48C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC48C) < 0x5
	.space 0x5 - (. - gText_Rom_5DC48C)
	.endif
	.incbin "baserom.gba", 0x5dc491, 0x2b

	@ src/data/battle_frontier/apprentice.h:412 apprentice_line_412
	.globl gText_Rom_5DC4BC
gText_Rom_5DC4BC: @ 0x085DC4BC
	.string "トシミツ$"
	.if (. - gText_Rom_5DC4BC) > 0x5
	.error "gText_Rom_5DC4BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC4BC) < 0x5
	.space 0x5 - (. - gText_Rom_5DC4BC)
	.endif
	.incbin "baserom.gba", 0x5dc4c1, 0x2b

	@ src/data/battle_frontier/apprentice.h:420 apprentice_line_420
	.globl gText_Rom_5DC4EC
gText_Rom_5DC4EC: @ 0x085DC4EC
	.string "ローウェン$"
	.if (. - gText_Rom_5DC4EC) > 0x6
	.error "gText_Rom_5DC4EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC4EC) < 0x6
	.space 0x6 - (. - gText_Rom_5DC4EC)
	.endif
	.incbin "baserom.gba", 0x5dc4f2, 0x2a
	.globl gUnknown_85DC51C
gUnknown_85DC51C: @ 0x085DC51C
	.incbin "baserom.gba", 0x5dc51c, 0x100
	.globl gUnknown_85DC61C
gUnknown_85DC61C: @ 0x085DC61C
	.incbin "baserom.gba", 0x5dc61c, 0x80
	.globl gUnknown_85DC69C
gUnknown_85DC69C: @ 0x085DC69C
	.incbin "baserom.gba", 0x5dc69c, 0x140
	.globl gUnknown_85DC7DC
gUnknown_85DC7DC: @ 0x085DC7DC
	.incbin "baserom.gba", 0x5dc7dc, 0x80
	.globl gUnknown_85DC85C
gUnknown_85DC85C: @ 0x085DC85C
	.incbin "baserom.gba", 0x5dc85c, 0x80
	.globl gUnknown_85DC8DC
gUnknown_85DC8DC: @ 0x085DC8DC
	.incbin "baserom.gba", 0x5dc8dc, 0x80
	.globl gUnknown_85DC95C
gUnknown_85DC95C: @ 0x085DC95C
	.incbin "baserom.gba", 0x5dc95c, 0x40
	.globl gUnknown_85DC99C
gUnknown_85DC99C: @ 0x085DC99C
	.incbin "baserom.gba", 0x5dc99c, 0x163
	.globl gUnknown_85DCAFF
gUnknown_85DCAFF: @ 0x085DCAFF
	.incbin "baserom.gba", 0x5dcaff, 0xd
	.globl gUnknown_85DCB0C
gUnknown_85DCB0C: @ 0x085DCB0C
	.incbin "baserom.gba", 0x5dcb0c, 0x68
	.globl gUnknown_85DCB74
gUnknown_85DCB74: @ 0x085DCB74
	.incbin "baserom.gba", 0x5dcb74, 0x8
	.globl gUnknown_85DCB7C
gUnknown_85DCB7C: @ 0x085DCB7C
	.incbin "baserom.gba", 0x5dcb7c, 0x1c
	.globl gUnknown_85DCB98
gUnknown_85DCB98: @ 0x085DCB98
	.incbin "baserom.gba", 0x5dcb98, 0xc
	.globl gUnknown_85DCBA4
gUnknown_85DCBA4: @ 0x085DCBA4
	.incbin "baserom.gba", 0x5dcba4, 0x33c
	.globl gUnknown_85DCEE0
gUnknown_85DCEE0: @ 0x085DCEE0
	.incbin "baserom.gba", 0x5dcee0, 0x348
	.globl gUnknown_85DD228
gUnknown_85DD228: @ 0x085DD228
	.incbin "baserom.gba", 0x5dd228, 0x1c
	.globl gUnknown_85DD244
gUnknown_85DD244: @ 0x085DD244
	.incbin "baserom.gba", 0x5dd244, 0x5c
	.globl gUnknown_85DD2A0
gUnknown_85DD2A0: @ 0x085DD2A0
	.incbin "baserom.gba", 0x5dd2a0, 0x8
	.globl gUnknown_85DD2A8
gUnknown_85DD2A8: @ 0x085DD2A8
	.incbin "baserom.gba", 0x5dd2a8, 0x8
	.globl gUnknown_85DD2B0
gUnknown_85DD2B0: @ 0x085DD2B0
	.incbin "baserom.gba", 0x5dd2b0, 0x8
	.globl gUnknown_85DD2B8
gUnknown_85DD2B8: @ 0x085DD2B8
	.incbin "baserom.gba", 0x5dd2b8, 0x8
	.globl gUnknown_85DD2C0
gUnknown_85DD2C0: @ 0x085DD2C0
	.incbin "baserom.gba", 0x5dd2c0, 0x8
	.globl gUnknown_85DD2C8
gUnknown_85DD2C8: @ 0x085DD2C8
	.incbin "baserom.gba", 0x5dd2c8, 0x8
	.globl gUnknown_85DD2D0
gUnknown_85DD2D0: @ 0x085DD2D0
	.incbin "baserom.gba", 0x5dd2d0, 0x8
	.globl gUnknown_85DD2D8
gUnknown_85DD2D8: @ 0x085DD2D8
	.incbin "baserom.gba", 0x5dd2d8, 0x8
	.globl gUnknown_85DD2E0
gUnknown_85DD2E0: @ 0x085DD2E0
	.incbin "baserom.gba", 0x5dd2e0, 0x8
	.globl gUnknown_85DD2E8
gUnknown_85DD2E8: @ 0x085DD2E8

	@ src/data/easy_chat/easy_chat_group_voices.h:52 easy_chat_group_voices_line_52 (+3 aliases)
	.globl gText_Rom_5DD2E8
gText_Rom_5DD2E8: @ 0x085DD2E8
	.string "ーーー$"
	.if (. - gText_Rom_5DD2E8) > 0x4
	.error "gText_Rom_5DD2E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD2E8) < 0x4
	.space 0x4 - (. - gText_Rom_5DD2E8)
	.endif
	.globl gUnknown_85DD2EC
gUnknown_85DD2EC: @ 0x085DD2EC

	@ asm/frontier_util.s:847 ShowTowerResultsWindow
	.globl gText_Rom_5DD2EC
gText_Rom_5DD2EC: @ 0x085DD2EC
	.string "　{0xFD}{0x01}　の　シングル　バトルルーム　せいせき$"
	.if (. - gText_Rom_5DD2EC) > 0x17
	.error "gText_Rom_5DD2EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD2EC) < 0x17
	.space 0x17 - (. - gText_Rom_5DD2EC)
	.endif
	.globl gUnknown_85DD303
gUnknown_85DD303: @ 0x085DD303

	@ asm/frontier_util.s:859 ShowTowerResultsWindow
	.globl gText_Rom_5DD303
gText_Rom_5DD303: @ 0x085DD303
	.string "　　{0xFD}{0x01}　の　ダブル　バトルルーム　せいせき$"
	.if (. - gText_Rom_5DD303) > 0x17
	.error "gText_Rom_5DD303 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD303) < 0x17
	.space 0x17 - (. - gText_Rom_5DD303)
	.endif
	.globl gUnknown_85DD31A
gUnknown_85DD31A: @ 0x085DD31A

	@ asm/frontier_util.s:869 ShowTowerResultsWindow
	.globl gText_Rom_5DD31A
gText_Rom_5DD31A: @ 0x085DD31A
	.string "　　{0xFD}{0x01}　の　マルチ　バトルルーム　せいせき$"
	.if (. - gText_Rom_5DD31A) > 0x17
	.error "gText_Rom_5DD31A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD31A) < 0x17
	.space 0x17 - (. - gText_Rom_5DD31A)
	.endif
	.globl gUnknown_85DD331
gUnknown_85DD331: @ 0x085DD331

	@ asm/frontier_util.s:877 ShowTowerResultsWindow
	.globl gText_Rom_5DD331
gText_Rom_5DD331: @ 0x085DD331
	.string "{0xFD}{0x01}　の　つうしんマルチ　バトルルーム　せいせき$"
	.if (. - gText_Rom_5DD331) > 0x19
	.error "gText_Rom_5DD331 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD331) < 0x19
	.space 0x19 - (. - gText_Rom_5DD331)
	.endif
	.globl gUnknown_85DD34A
gUnknown_85DD34A: @ 0x085DD34A

	@ asm/frontier_util.s:1165 ShowDomeResultsWindow
	.globl gText_Rom_5DD34A
gText_Rom_5DD34A: @ 0x085DD34A
	.string "{0xFD}{0x01}　の　シングル　バトルトーナメント　せいせき$"
	.if (. - gText_Rom_5DD34A) > 0x19
	.error "gText_Rom_5DD34A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD34A) < 0x19
	.space 0x19 - (. - gText_Rom_5DD34A)
	.endif
	.globl gUnknown_85DD363
gUnknown_85DD363: @ 0x085DD363

	@ asm/frontier_util.s:1175 ShowDomeResultsWindow
	.globl gText_Rom_5DD363
gText_Rom_5DD363: @ 0x085DD363
	.string "{0xFD}{0x01}　の　ダブル　バトルトーナメント　せいせき$"
	.if (. - gText_Rom_5DD363) > 0x18
	.error "gText_Rom_5DD363 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD363) < 0x18
	.space 0x18 - (. - gText_Rom_5DD363)
	.endif
	.globl gUnknown_85DD37B
gUnknown_85DD37B: @ 0x085DD37B

	@ asm/frontier_util.s:1539 ShowPalaceResultsWindow
	.globl gText_Rom_5DD37B
gText_Rom_5DD37B: @ 0x085DD37B
	.string "{0xFD}{0x01}　の　シングル　バトルホール　せいせき$"
	.if (. - gText_Rom_5DD37B) > 0x16
	.error "gText_Rom_5DD37B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD37B) < 0x16
	.space 0x16 - (. - gText_Rom_5DD37B)
	.endif
	.globl gUnknown_85DD391
gUnknown_85DD391: @ 0x085DD391

	@ asm/frontier_util.s:1549 ShowPalaceResultsWindow
	.globl gText_Rom_5DD391
gText_Rom_5DD391: @ 0x085DD391
	.string "{0xFD}{0x01}　の　ダブル　バトルホール　せいせき$"
	.if (. - gText_Rom_5DD391) > 0x15
	.error "gText_Rom_5DD391 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD391) < 0x15
	.space 0x15 - (. - gText_Rom_5DD391)
	.endif
	.globl gUnknown_85DD3A6
gUnknown_85DD3A6: @ 0x085DD3A6

	@ asm/frontier_util.s:1808 ShowPikeResultsWindow
	.globl gText_Rom_5DD3A6
gText_Rom_5DD3A6: @ 0x085DD3A6
	.string "{0xFD}{0x01}　の　バトルゲーム　せいせき$"
	.if (. - gText_Rom_5DD3A6) > 0x11
	.error "gText_Rom_5DD3A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD3A6) < 0x11
	.space 0x11 - (. - gText_Rom_5DD3A6)
	.endif
	.globl gUnknown_85DD3B7
gUnknown_85DD3B7: @ 0x085DD3B7

	@ asm/frontier_util.s:2156 ShowArenaResultsWindow
	.globl gText_Rom_5DD3B7
gText_Rom_5DD3B7: @ 0x085DD3B7
	.string "{0xFD}{0x01}　の　かちぬきチームバトル　せいせき$"
	.if (. - gText_Rom_5DD3B7) > 0x15
	.error "gText_Rom_5DD3B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD3B7) < 0x15
	.space 0x15 - (. - gText_Rom_5DD3B7)
	.endif
	.globl gUnknown_85DD3CC
gUnknown_85DD3CC: @ 0x085DD3CC

	@ asm/frontier_util.s:2525 ShowFactoryResultsWindow
	.globl gText_Rom_5DD3CC
gText_Rom_5DD3CC: @ 0x085DD3CC
	.string "{0xFD}{0x01}　の　バトルトレード　シングル　せいせき$"
	.if (. - gText_Rom_5DD3CC) > 0x17
	.error "gText_Rom_5DD3CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD3CC) < 0x17
	.space 0x17 - (. - gText_Rom_5DD3CC)
	.endif
	.globl gUnknown_85DD3E3
gUnknown_85DD3E3: @ 0x085DD3E3

	@ asm/frontier_util.s:2535 ShowFactoryResultsWindow
	.globl gText_Rom_5DD3E3
gText_Rom_5DD3E3: @ 0x085DD3E3
	.string "{0xFD}{0x01}　の　バトルトレード　ダブル　せいせき$"
	.if (. - gText_Rom_5DD3E3) > 0x16
	.error "gText_Rom_5DD3E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD3E3) < 0x16
	.space 0x16 - (. - gText_Rom_5DD3E3)
	.endif
	.globl gUnknown_85DD3F9
gUnknown_85DD3F9: @ 0x085DD3F9

	@ asm/frontier_util.s:2826 ShowPyramidResultsWindow
	.globl gText_Rom_5DD3F9
gText_Rom_5DD3F9: @ 0x085DD3F9
	.string "{0xFD}{0x01}　の　バトルアドベンチャー　せいせき$"
	.if (. - gText_Rom_5DD3F9) > 0x15
	.error "gText_Rom_5DD3F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD3F9) < 0x15
	.space 0x15 - (. - gText_Rom_5DD3F9)
	.endif
	.globl gUnknown_85DD40E
gUnknown_85DD40E: @ 0x085DD40E

	@ src/strings.c:890 gText_Lv502 (+1 aliases)
	.globl gText_Rom_5DD40E
gText_Rom_5DD40E: @ 0x085DD40E
	.string "レベル 50$"
	.if (. - gText_Rom_5DD40E) > 0x7
	.error "gText_Rom_5DD40E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD40E) < 0x7
	.space 0x7 - (. - gText_Rom_5DD40E)
	.endif
	.globl gUnknown_85DD415
gUnknown_85DD415: @ 0x085DD415

