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
