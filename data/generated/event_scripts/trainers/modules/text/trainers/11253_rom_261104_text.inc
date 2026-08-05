	@ data/text/trainers.inc:2960 Route127_Text_KojiRematchDefeat (+1 aliases)
	.globl gText_Rom_261104
gText_Rom_261104: @ 0x08261104
	.string "いってェ!\nつちふまずに ジャリが……$"
	.if (. - gText_Rom_261104) > 0x14
	.error "gText_Rom_261104 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261104) < 0x14
	.space 0x14 - (. - gText_Rom_261104)
	.endif
