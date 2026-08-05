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
