	@ data/text/trainers.inc:2102 Route119_Text_DaytonPostBattle
	.globl gText_Rom_25ED44
gText_Rom_25ED44: @ 0x0825ED44
	.string "ホッホッホー!\nこども トレーナーの げんきを\lみならって おじちゃん がんばるぞ!$"
	.if (. - gText_Rom_25ED44) > 0x2b
	.error "gText_Rom_25ED44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ED44) < 0x2b
	.space 0x2b - (. - gText_Rom_25ED44)
	.endif
