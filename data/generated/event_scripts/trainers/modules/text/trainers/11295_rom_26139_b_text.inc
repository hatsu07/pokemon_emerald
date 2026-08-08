	@ data/text/trainers.inc:3023 Route128_Text_AlexaPostBattle
	.globl gText_Rom_26139B
gText_Rom_26139B: @ 0x0826139B
	.string "ここまで きたんですもの\nいちど まけたからって あきらめない$"
	.if (. - gText_Rom_26139B) > 0x20
	.error "gText_Rom_26139B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26139B) < 0x20
	.space 0x20 - (. - gText_Rom_26139B)
	.endif
