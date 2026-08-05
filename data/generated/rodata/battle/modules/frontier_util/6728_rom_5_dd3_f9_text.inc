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
