	@ data/text/event_ticket_1.inc:30 EventTicket_Text_AsYouLike
	.globl gText_Rom_263578
gText_Rom_263578: @ 0x08263578
	.string "そうかい\nまあ すきにするが いいさ$"
	.if (. - gText_Rom_263578) > 0x13
	.error "gText_Rom_263578 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263578) < 0x13
	.space 0x13 - (. - gText_Rom_263578)
	.endif
