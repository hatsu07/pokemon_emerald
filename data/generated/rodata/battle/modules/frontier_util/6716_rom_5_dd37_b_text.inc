	@ asm/frontier_util.s:1539 ShowPalaceResultsWindow
	.globl gText_Rom_5DD37B
gText_Rom_5DD37B: @ 0x085DD37B
	.string "{0xFD}{0x01}　の　シングル　バトルホール　せいせき$"
	.if (. - gText_Rom_5DD37B) > 0x16
	.error "gText_Rom_5DD37B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD37B) < 0x16
	.space 0x16 - (. - gText_Rom_5DD37B)
	.endif
