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

	@ data/text/event_ticket_1.inc:27 EventTicket_Text_SailHome
	.globl gText_Rom_26356A
gText_Rom_26356A: @ 0x0826356A
	.string "よし! かえると するか!$"
	.if (. - gText_Rom_26356A) > 0xe
	.error "gText_Rom_26356A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26356A) < 0xe
	.space 0xe - (. - gText_Rom_26356A)
	.endif

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

	@ data/text/event_ticket_1.inc:34 SouthernIsland_Interior_Text_Sign
	.globl gText_Rom_26358B
gText_Rom_26358B: @ 0x0826358B
	.string "すべての ゆめは もうひとつの げんじつ\nそれを わすれるべからず……$"
	.if (. - gText_Rom_26358B) > 0x24
	.error "gText_Rom_26358B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26358B) < 0x24
	.space 0x24 - (. - gText_Rom_26358B)
	.endif

	@ data/text/event_ticket_1.inc:38 SouthernIsland_Exterior_Text_Sign
	.globl gText_Rom_2635AF
gText_Rom_2635AF: @ 0x082635AF
	.string "きおく かすみし ものは\nこころに きざみつける ことを のぞむ……$"
	.if (. - gText_Rom_2635AF) > 0x23
	.error "gText_Rom_2635AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2635AF) < 0x23
	.space 0x23 - (. - gText_Rom_2635AF)
	.endif
