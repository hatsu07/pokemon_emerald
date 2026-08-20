	@ data/text/trainers.inc:2096 Route119_Text_DaytonIntro (+1 aliases)
	.globl gText_Rom_25ED0E
gText_Rom_25ED0E: @ 0x0825ED0E
	.string "ホッホッホー!\nこども トレーナーは だいすきだぞ!\lおじちゃんと たたかおうっ!{EOS}"
	.if (. - gText_Rom_25ED0E) > 0x2a
	.error "gText_Rom_25ED0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ED0E) < 0x2a
	.space 0x2a - (. - gText_Rom_25ED0E)
	.endif
