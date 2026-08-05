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
