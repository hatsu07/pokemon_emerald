	@ src/data/easy_chat/easy_chat_group_voices.h:52 easy_chat_group_voices_line_52 (+3 aliases)
	.globl gText_Rom_5DD2E8
gText_Rom_5DD2E8: @ 0x085DD2E8
	.string "ーーー{EOS}"
	.if (. - gText_Rom_5DD2E8) > 0x4
	.error "gText_Rom_5DD2E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD2E8) < 0x4
	.space 0x4 - (. - gText_Rom_5DD2E8)
	.endif
	.globl gText_Rom_5DD2EC

	@ asm/frontier_util.s:847 ShowTowerResultsWindow
	.globl gText_Rom_5DD2EC
gText_Rom_5DD2EC: @ 0x085DD2EC
	.string "　{0xFD}{0x01}　の　シングル　バトルルーム　せいせき{EOS}"
	.if (. - gText_Rom_5DD2EC) > 0x17
	.error "gText_Rom_5DD2EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD2EC) < 0x17
	.space 0x17 - (. - gText_Rom_5DD2EC)
	.endif

	@ asm/frontier_util.s:859 ShowTowerResultsWindow
	.globl gText_Rom_5DD303
gText_Rom_5DD303: @ 0x085DD303
	.string "　　{0xFD}{0x01}　の　ダブル　バトルルーム　せいせき{EOS}"
	.if (. - gText_Rom_5DD303) > 0x17
	.error "gText_Rom_5DD303 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD303) < 0x17
	.space 0x17 - (. - gText_Rom_5DD303)
	.endif

	@ asm/frontier_util.s:869 ShowTowerResultsWindow
	.globl gText_Rom_5DD31A
gText_Rom_5DD31A: @ 0x085DD31A
	.string "　　{0xFD}{0x01}　の　マルチ　バトルルーム　せいせき{EOS}"
	.if (. - gText_Rom_5DD31A) > 0x17
	.error "gText_Rom_5DD31A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD31A) < 0x17
	.space 0x17 - (. - gText_Rom_5DD31A)
	.endif

	@ asm/frontier_util.s:877 ShowTowerResultsWindow
	.globl gText_Rom_5DD331
gText_Rom_5DD331: @ 0x085DD331
	.string "{0xFD}{0x01}　の　つうしんマルチ　バトルルーム　せいせき{EOS}"
	.if (. - gText_Rom_5DD331) > 0x19
	.error "gText_Rom_5DD331 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD331) < 0x19
	.space 0x19 - (. - gText_Rom_5DD331)
	.endif

	@ asm/frontier_util.s:1165 ShowDomeResultsWindow
	.globl gText_Rom_5DD34A
gText_Rom_5DD34A: @ 0x085DD34A
	.string "{0xFD}{0x01}　の　シングル　バトルトーナメント　せいせき{EOS}"
	.if (. - gText_Rom_5DD34A) > 0x19
	.error "gText_Rom_5DD34A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD34A) < 0x19
	.space 0x19 - (. - gText_Rom_5DD34A)
	.endif

	@ asm/frontier_util.s:1175 ShowDomeResultsWindow
	.globl gText_Rom_5DD363
gText_Rom_5DD363: @ 0x085DD363
	.string "{0xFD}{0x01}　の　ダブル　バトルトーナメント　せいせき{EOS}"
	.if (. - gText_Rom_5DD363) > 0x18
	.error "gText_Rom_5DD363 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD363) < 0x18
	.space 0x18 - (. - gText_Rom_5DD363)
	.endif

	@ asm/frontier_util.s:1539 ShowPalaceResultsWindow
	.globl gText_Rom_5DD37B
gText_Rom_5DD37B: @ 0x085DD37B
	.string "{0xFD}{0x01}　の　シングル　バトルホール　せいせき{EOS}"
	.if (. - gText_Rom_5DD37B) > 0x16
	.error "gText_Rom_5DD37B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD37B) < 0x16
	.space 0x16 - (. - gText_Rom_5DD37B)
	.endif

	@ asm/frontier_util.s:1549 ShowPalaceResultsWindow
	.globl gText_Rom_5DD391
gText_Rom_5DD391: @ 0x085DD391
	.string "{0xFD}{0x01}　の　ダブル　バトルホール　せいせき{EOS}"
	.if (. - gText_Rom_5DD391) > 0x15
	.error "gText_Rom_5DD391 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD391) < 0x15
	.space 0x15 - (. - gText_Rom_5DD391)
	.endif

	@ asm/frontier_util.s:1808 ShowPikeResultsWindow
	.globl gText_Rom_5DD3A6
gText_Rom_5DD3A6: @ 0x085DD3A6
	.string "{0xFD}{0x01}　の　バトルゲーム　せいせき{EOS}"
	.if (. - gText_Rom_5DD3A6) > 0x11
	.error "gText_Rom_5DD3A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD3A6) < 0x11
	.space 0x11 - (. - gText_Rom_5DD3A6)
	.endif

	@ asm/frontier_util.s:2156 ShowArenaResultsWindow
	.globl gText_Rom_5DD3B7
gText_Rom_5DD3B7: @ 0x085DD3B7
	.string "{0xFD}{0x01}　の　かちぬきチームバトル　せいせき{EOS}"
	.if (. - gText_Rom_5DD3B7) > 0x15
	.error "gText_Rom_5DD3B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD3B7) < 0x15
	.space 0x15 - (. - gText_Rom_5DD3B7)
	.endif

	@ asm/frontier_util.s:2525 ShowFactoryResultsWindow
	.globl gText_Rom_5DD3CC
gText_Rom_5DD3CC: @ 0x085DD3CC
	.string "{0xFD}{0x01}　の　バトルトレード　シングル　せいせき{EOS}"
	.if (. - gText_Rom_5DD3CC) > 0x17
	.error "gText_Rom_5DD3CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD3CC) < 0x17
	.space 0x17 - (. - gText_Rom_5DD3CC)
	.endif

	@ asm/frontier_util.s:2535 ShowFactoryResultsWindow
	.globl gText_Rom_5DD3E3
gText_Rom_5DD3E3: @ 0x085DD3E3
	.string "{0xFD}{0x01}　の　バトルトレード　ダブル　せいせき{EOS}"
	.if (. - gText_Rom_5DD3E3) > 0x16
	.error "gText_Rom_5DD3E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD3E3) < 0x16
	.space 0x16 - (. - gText_Rom_5DD3E3)
	.endif

	@ asm/frontier_util.s:2826 ShowPyramidResultsWindow
	.globl gText_Rom_5DD3F9
gText_Rom_5DD3F9: @ 0x085DD3F9
	.string "{0xFD}{0x01}　の　バトルアドベンチャー　せいせき{EOS}"
	.if (. - gText_Rom_5DD3F9) > 0x15
	.error "gText_Rom_5DD3F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD3F9) < 0x15
	.space 0x15 - (. - gText_Rom_5DD3F9)
	.endif
