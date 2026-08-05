	@ data/text/trainers.inc:3248 Route132_Text_MakaylaIntro (+1 aliases)
	.globl gText_Rom_261CB3
gText_Rom_261CB3: @ 0x08261CB3
	.string "いつも いっしょの じいさんが\nいなくても かてるわい!$"
	.if (. - gText_Rom_261CB3) > 0x1d
	.error "gText_Rom_261CB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261CB3) < 0x1d
	.space 0x1d - (. - gText_Rom_261CB3)
	.endif
