	@ data/text/trainers.inc:1568 Route116_Text_JoeyIntro (+1 aliases)
	.globl gText_Rom_25D643
gText_Rom_25D643: @ 0x0825D643
	.string "おれの ポケモン つえーぞ!\nちょっと みてみろよ!$"
	.if (. - gText_Rom_25D643) > 0x1b
	.error "gText_Rom_25D643 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D643) < 0x1b
	.space 0x1b - (. - gText_Rom_25D643)
	.endif
