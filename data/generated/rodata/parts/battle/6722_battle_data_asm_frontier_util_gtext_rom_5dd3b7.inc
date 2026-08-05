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
