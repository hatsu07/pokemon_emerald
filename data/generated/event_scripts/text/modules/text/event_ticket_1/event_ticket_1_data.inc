	@ data/text/event_ticket_1.inc:1 EventTicket_Text_ShowOldSeaMap
	.globl EventTicket_Text_ShowOldSeaMap
EventTicket_Text_ShowOldSeaMap: @ 0x08263476
	.string "カイナいき れんらくせん……\pえ? この ちずの とおりに\nいってくれって?\pわたしでは よく わからないので\nおまちください{EOS}"
	.if (. - EventTicket_Text_ShowOldSeaMap) > 0x40
	.error "EventTicket_Text_ShowOldSeaMap may not grow beyond its original slot"
	.endif
	.if (. - EventTicket_Text_ShowOldSeaMap) < 0x40
	.space 0x40 - (. - EventTicket_Text_ShowOldSeaMap)
	.endif

	@ data/text/event_ticket_1.inc:8 EventTicket_Text_ThatPass
	.globl EventTicket_Text_ThatPass
EventTicket_Text_ThatPass: @ 0x082634B6
	.string "カイナいき れんらくせん……\pあら?\nその チケットは……!{EOS}"
	.if (. - EventTicket_Text_ThatPass) > 0x1f
	.error "EventTicket_Text_ThatPass may not grow beyond its original slot"
	.endif
	.if (. - EventTicket_Text_ThatPass) < 0x1f
	.space 0x1f - (. - EventTicket_Text_ThatPass)
	.endif

	@ data/text/event_ticket_1.inc:13 EventTicket_Text_ShowEonTicket
	.globl EventTicket_Text_ShowEonTicket
EventTicket_Text_ShowEonTicket: @ 0x082634D5
	.string "ヘンテコな チケットを\nもってきたのは おまえさんか?\pおまえが いこうと しているのは\nみなみの はての ちっぽけな しま……\pそこでは なにが おこるのか\nだれも わからねえ……\lううむ ふなのりの ちが さわぐぜ!\pさあ のりな!{EOS}"
	.if (. - EventTicket_Text_ShowEonTicket) > 0x77
	.error "EventTicket_Text_ShowEonTicket may not grow beyond its original slot"
	.endif
	.if (. - EventTicket_Text_ShowEonTicket) < 0x77
	.space 0x77 - (. - EventTicket_Text_ShowEonTicket)
	.endif

	@ data/text/event_ticket_1.inc:23 EventTicket_Text_SouthernIslandSailBack
	.globl EventTicket_Text_SouthernIslandSailBack
EventTicket_Text_SouthernIslandSailBack: @ 0x0826354C
	.string "なにもねえ ちんけな しま だな……\nミナモへ かえるか?{EOS}"
	.if (. - EventTicket_Text_SouthernIslandSailBack) > 0x1e
	.error "EventTicket_Text_SouthernIslandSailBack may not grow beyond its original slot"
	.endif
	.if (. - EventTicket_Text_SouthernIslandSailBack) < 0x1e
	.space 0x1e - (. - EventTicket_Text_SouthernIslandSailBack)
	.endif

	@ data/text/event_ticket_1.inc:27 EventTicket_Text_SailHome
	.globl EventTicket_Text_SailHome
EventTicket_Text_SailHome: @ 0x0826356A
	.string "よし! かえると するか!{EOS}"
	.if (. - EventTicket_Text_SailHome) > 0xe
	.error "EventTicket_Text_SailHome may not grow beyond its original slot"
	.endif
	.if (. - EventTicket_Text_SailHome) < 0xe
	.space 0xe - (. - EventTicket_Text_SailHome)
	.endif

	@ data/text/event_ticket_1.inc:30 EventTicket_Text_AsYouLike
	.globl EventTicket_Text_AsYouLike
EventTicket_Text_AsYouLike: @ 0x08263578
	.string "そうかい\nまあ すきにするが いいさ{EOS}"
	.if (. - EventTicket_Text_AsYouLike) > 0x13
	.error "EventTicket_Text_AsYouLike may not grow beyond its original slot"
	.endif
	.if (. - EventTicket_Text_AsYouLike) < 0x13
	.space 0x13 - (. - EventTicket_Text_AsYouLike)
	.endif

	@ data/text/event_ticket_1.inc:34 SouthernIsland_Interior_Text_Sign
	.globl SouthernIsland_Interior_Text_Sign
SouthernIsland_Interior_Text_Sign: @ 0x0826358B
	.string "すべての ゆめは もうひとつの げんじつ\nそれを わすれるべからず……{EOS}"
	.if (. - SouthernIsland_Interior_Text_Sign) > 0x24
	.error "SouthernIsland_Interior_Text_Sign may not grow beyond its original slot"
	.endif
	.if (. - SouthernIsland_Interior_Text_Sign) < 0x24
	.space 0x24 - (. - SouthernIsland_Interior_Text_Sign)
	.endif

	@ data/text/event_ticket_1.inc:38 SouthernIsland_Exterior_Text_Sign
	.globl SouthernIsland_Exterior_Text_Sign
SouthernIsland_Exterior_Text_Sign: @ 0x082635AF
	.string "きおく かすみし ものは\nこころに きざみつける ことを のぞむ……{EOS}"
	.if (. - SouthernIsland_Exterior_Text_Sign) > 0x23
	.error "SouthernIsland_Exterior_Text_Sign may not grow beyond its original slot"
	.endif
	.if (. - SouthernIsland_Exterior_Text_Sign) < 0x23
	.space 0x23 - (. - SouthernIsland_Exterior_Text_Sign)
	.endif
