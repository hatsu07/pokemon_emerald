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
