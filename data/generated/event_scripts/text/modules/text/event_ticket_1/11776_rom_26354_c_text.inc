	@ data/text/event_ticket_1.inc:23 EventTicket_Text_SouthernIslandSailBack
	.globl gText_Rom_26354C
gText_Rom_26354C: @ 0x0826354C
	.string "なにもねえ ちんけな しま だな……\nミナモへ かえるか?$"
	.if (. - gText_Rom_26354C) > 0x1e
	.error "gText_Rom_26354C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26354C) < 0x1e
	.space 0x1e - (. - gText_Rom_26354C)
	.endif
