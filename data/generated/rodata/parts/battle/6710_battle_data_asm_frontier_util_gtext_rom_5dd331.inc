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
