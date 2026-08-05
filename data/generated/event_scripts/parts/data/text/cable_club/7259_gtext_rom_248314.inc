	@ data/text/cable_club.inc:200 MossdeepCity_GameCorner_1F_Text_TalkToOldManToPlay
	.globl gText_Rom_248314
gText_Rom_248314: @ 0x08248314
	.string "ゲームを するなら\nおとなりの おじいさんに いってね$"
	.if (. - gText_Rom_248314) > 0x1c
	.error "gText_Rom_248314 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248314) < 0x1c
	.space 0x1c - (. - gText_Rom_248314)
	.endif
