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
