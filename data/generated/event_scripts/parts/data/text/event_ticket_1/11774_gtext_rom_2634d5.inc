	@ data/text/event_ticket_1.inc:13 EventTicket_Text_ShowEonTicket
	.globl gText_Rom_2634D5
gText_Rom_2634D5: @ 0x082634D5
	.string "ヘンテコな チケットを\nもってきたのは おまえさんか?\pおまえが いこうと しているのは\nみなみの はての ちっぽけな しま……\pそこでは なにが おこるのか\nだれも わからねえ……\lううむ ふなのりの ちが さわぐぜ!\pさあ のりな!$"
	.if (. - gText_Rom_2634D5) > 0x77
	.error "gText_Rom_2634D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2634D5) < 0x77
	.space 0x77 - (. - gText_Rom_2634D5)
	.endif
