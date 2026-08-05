	@ data/text/event_ticket_2.inc:1 EventTicket_Text_OldSeaMapTooFar
	.globl gText_Rom_275C60
gText_Rom_275C60: @ 0x08275C60
	.string "なんだ?\nボロっちい ちずを もってきたってのは\lおまえさんか? みせてみな!\p…… …… ……\pこりゃ また ずいぶん とおいなあ\nわりいが ほかを あたったほうが……$"
	.if (. - gText_Rom_275C60) > 0x56
	.error "gText_Rom_275C60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275C60) < 0x56
	.space 0x56 - (. - gText_Rom_275C60)
	.endif
