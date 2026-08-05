	@ data/text/trainers.inc:2450 Route123_Text_JackiPostBattle
	.globl gText_Rom_25FBC4
gText_Rom_25FBC4: @ 0x0825FBC4
	.string "だれでも ちょうのうりょくを もっているの\nただ つかいかたを わすれている だけよ$"
	.if (. - gText_Rom_25FBC4) > 0x2b
	.error "gText_Rom_25FBC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FBC4) < 0x2b
	.space 0x2b - (. - gText_Rom_25FBC4)
	.endif
