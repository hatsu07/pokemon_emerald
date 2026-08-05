	@ data/text/event_ticket_2.inc:39 EventTicket_Text_OddTicketsWhereTo
	.globl gText_Rom_275DF2
gText_Rom_275DF2: @ 0x08275DF2
	.string "ヘンテコな チケットを\nいくつも もってきたのは おまえさんか?\p…… …… ……ふむ\pこいつらで いける ところは\nどこも ここから とおい しま\lそこでは なにが おきるのか\lなにが まっているのか\lしっている やつは いねえ……\lううむ ふなのりの ちが さわぐぜ!\pさあ のりな!\nまずは どこから いってみるかい?$"
	.if (. - gText_Rom_275DF2) > 0xa3
	.error "gText_Rom_275DF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275DF2) < 0xa3
	.space 0xa3 - (. - gText_Rom_275DF2)
	.endif
