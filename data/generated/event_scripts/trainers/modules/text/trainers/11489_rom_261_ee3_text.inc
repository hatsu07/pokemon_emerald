	@ data/text/trainers.inc:3308 Route133_Text_LindaPostBattle
	.globl gText_Rom_261EE3
gText_Rom_261EE3: @ 0x08261EE3
	.string "つよい こどもの トレーナーなんて……\nおねえさん こまっちゃうぅ!$"
	.if (. - gText_Rom_261EE3) > 0x23
	.error "gText_Rom_261EE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261EE3) < 0x23
	.space 0x23 - (. - gText_Rom_261EE3)
	.endif
