	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:54 Route110_TrickHousePuzzle6_Text_SophiaPostBattle
	.globl gText_Rom_23FDF6
gText_Rom_23FDF6: @ 0x0823FDF6
	.string "やしきを しらべてたら おもしろくて\nなんかいも チャレンジ してるのよ!$"
	.if (. - gText_Rom_23FDF6) > 0x26
	.error "gText_Rom_23FDF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FDF6) < 0x26
	.space 0x26 - (. - gText_Rom_23FDF6)
	.endif
