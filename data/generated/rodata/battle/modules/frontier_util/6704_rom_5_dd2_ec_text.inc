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
