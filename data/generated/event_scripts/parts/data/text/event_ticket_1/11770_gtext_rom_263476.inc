	@ data/text/event_ticket_1.inc:1 EventTicket_Text_ShowOldSeaMap
	.globl gText_Rom_263476
gText_Rom_263476: @ 0x08263476
	.string "カイナいき れんらくせん……\pえ? この ちずの とおりに\nいってくれって?\pわたしでは よく わからないので\nおまちください$"
	.if (. - gText_Rom_263476) > 0x40
	.error "gText_Rom_263476 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263476) < 0x40
	.space 0x40 - (. - gText_Rom_263476)
	.endif
