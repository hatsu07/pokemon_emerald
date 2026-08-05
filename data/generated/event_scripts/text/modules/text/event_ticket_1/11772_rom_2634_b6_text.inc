	@ data/text/event_ticket_1.inc:8 EventTicket_Text_ThatPass
	.globl gText_Rom_2634B6
gText_Rom_2634B6: @ 0x082634B6
	.string "カイナいき れんらくせん……\pあら?\nその チケットは……!$"
	.if (. - gText_Rom_2634B6) > 0x1f
	.error "gText_Rom_2634B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2634B6) < 0x1f
	.space 0x1f - (. - gText_Rom_2634B6)
	.endif
