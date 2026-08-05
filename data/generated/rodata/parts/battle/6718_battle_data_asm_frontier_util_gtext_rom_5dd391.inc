	@ asm/frontier_util.s:1549 ShowPalaceResultsWindow
	.globl gText_Rom_5DD391
gText_Rom_5DD391: @ 0x085DD391
	.string "{0xFD}{0x01}　の　ダブル　バトルホール　せいせき$"
	.if (. - gText_Rom_5DD391) > 0x15
	.error "gText_Rom_5DD391 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD391) < 0x15
	.space 0x15 - (. - gText_Rom_5DD391)
	.endif
