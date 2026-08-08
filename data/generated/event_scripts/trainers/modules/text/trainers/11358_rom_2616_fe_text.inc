	@ data/text/trainers.inc:3116 Route130_Text_KatieIntro (+1 aliases)
	.globl gText_Rom_2616FE
gText_Rom_2616FE: @ 0x082616FE
	.string "あおい うみ\nブルーな こころ\lいやされる……$"
	.if (. - gText_Rom_2616FE) > 0x18
	.error "gText_Rom_2616FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2616FE) < 0x18
	.space 0x18 - (. - gText_Rom_2616FE)
	.endif
