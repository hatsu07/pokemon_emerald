	@ data/text/trainers.inc:569 Route108_Text_CarolinaPostBattle
	.globl gText_Rom_25ADB8
gText_Rom_25ADB8: @ 0x0825ADB8
	.string "せっかくの うみ だし\nピンクの フリフリの ビキニも\lちょっと きてみたい……$"
	.if (. - gText_Rom_25ADB8) > 0x29
	.error "gText_Rom_25ADB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ADB8) < 0x29
	.space 0x29 - (. - gText_Rom_25ADB8)
	.endif
