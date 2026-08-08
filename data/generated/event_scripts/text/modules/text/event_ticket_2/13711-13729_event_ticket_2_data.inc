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

	@ data/text/event_ticket_2.inc:9 EventTicket_Text_BrineyHoldOnASecond
	.globl gText_Rom_275CB6
gText_Rom_275CB6: @ 0x08275CB6
	.string "ハギ『こら! わしの おんじんの\nねがいを ことわるとは なにごとだ!$"
	.if (. - gText_Rom_275CB6) > 0x24
	.error "gText_Rom_275CB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275CB6) < 0x24
	.space 0x24 - (. - gText_Rom_275CB6)
	.endif

	@ data/text/event_ticket_2.inc:13 EventTicket_Text_BrineyLetsSail
	.globl gText_Rom_275CDA
gText_Rom_275CDA: @ 0x08275CDA
	.string "{PLAYER}{KUN} すまなかったね\nこのふねを たよって きて くれたのに……\lもちろん いますぐに しゅっこうだ!\pさあいくぞ!\nかいずに ある しまへ しゅっぱつ!$"
	.if (. - gText_Rom_275CDA) > 0x50
	.error "gText_Rom_275CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275CDA) < 0x50
	.space 0x50 - (. - gText_Rom_275CDA)
	.endif

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

	@ data/text/event_ticket_2.inc:30 FarawayIsland_Entrance_Text_SailorReturn
	.globl gText_Rom_275DA5
gText_Rom_275DA5: @ 0x08275DA5
	.string "まったく ハギ せんちょうの\nきまぐれにも まいるよなあ……\pもう ミナモへ かえるのかい?$"
	.if (. - gText_Rom_275DA5) > 0x2f
	.error "gText_Rom_275DA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275DA5) < 0x2f
	.space 0x2f - (. - gText_Rom_275DA5)
	.endif

	@ data/text/event_ticket_2.inc:35 BirthIsland_Harbor_Text_SailorReturn
	.globl gText_Rom_275DD4
gText_Rom_275DD4: @ 0x08275DD4
	.string "ふしぎな かたちの しまだなあ\nもう ミナモへ かえるか?$"
	.if (. - gText_Rom_275DD4) > 0x1e
	.error "gText_Rom_275DD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275DD4) < 0x1e
	.space 0x1e - (. - gText_Rom_275DD4)
	.endif

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

	@ data/text/event_ticket_2.inc:52 NavelRock_Harbor_Text_SailorReturn
	.globl gText_Rom_275E95
gText_Rom_275E95: @ 0x08275E95
	.string "な…… なんか おくふかくから\nひくい うなりが きこえたような……\pだ だいじょうぶか?\nもう かえった ほうが いいんじゃないか?$"
	.if (. - gText_Rom_275E95) > 0x44
	.error "gText_Rom_275E95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275E95) < 0x44
	.space 0x44 - (. - gText_Rom_275E95)
	.endif

	@ data/text/event_ticket_2.inc:58 FarawayIsland_Entrance_Text_Sign
	.globl gText_Rom_275ED9
gText_Rom_275ED9: @ 0x08275ED9
	.string "なんねんも まえに かかれたような\nふるい かきおきが ある……\p……がつ 6か\nここに たちいる にんげ……が\lふたたび ……らわれると すれば\lこころ やさし……で あらんことを\p……こに その ねがいを しるし\nこの ……を あとにする\p……ジ$"
	.if (. - gText_Rom_275ED9) > 0x7e
	.error "gText_Rom_275ED9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275ED9) < 0x7e
	.space 0x7e - (. - gText_Rom_275ED9)
	.endif

	@ data/text/event_ticket_2.inc:69 FarawayIsland_Interior_Text_Mew
	.globl gText_Rom_275F57
gText_Rom_275F57: @ 0x08275F57
	.string "ミュー……$"
	.if (. - gText_Rom_275F57) > 0x6
	.error "gText_Rom_275F57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275F57) < 0x6
	.space 0x6 - (. - gText_Rom_275F57)
	.endif
