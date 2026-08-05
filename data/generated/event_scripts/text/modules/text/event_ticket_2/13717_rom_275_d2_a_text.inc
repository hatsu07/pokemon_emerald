	@ data/text/event_ticket_2.inc:20 EventTicket_Text_OddTicketGetOnBoard
	.globl gText_Rom_275D2A
gText_Rom_275D2A: @ 0x08275D2A
	.string "みょうな チケットを\nもってきたのは おまえさんか?\pおまえが いこうと しているのは\nとおく はなれた ちほうの しま……\lそこには なにが まっているのか\lしって いるやつは いねえ……\lううむ ふなのりの ちが さわぐぜ!\pさあ のりな!$"
	.if (. - gText_Rom_275D2A) > 0x7b
	.error "gText_Rom_275D2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275D2A) < 0x7b
	.space 0x7b - (. - gText_Rom_275D2A)
	.endif
