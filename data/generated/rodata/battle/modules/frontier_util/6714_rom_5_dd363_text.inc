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
