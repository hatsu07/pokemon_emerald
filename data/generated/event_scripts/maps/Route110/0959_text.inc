	@ data/maps/Route110/scripts.inc:749 Route110_Text_MyFirstJobInAqua
	.globl gText_Rom_1E9778
gText_Rom_1E9778: @ 0x081E9778
	.string "アクアだんに はいって\nはじめての しごと だぜ…… どきどき$"
	.if (. - gText_Rom_1E9778) > 0x20
	.error "gText_Rom_1E9778 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9778) < 0x20
	.space 0x20 - (. - gText_Rom_1E9778)
	.endif
