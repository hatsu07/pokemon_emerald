	@ data/text/trainers.inc:554 Route108_Text_CoryRematchIntro (+1 aliases)
	.globl gText_Rom_25AD3A
gText_Rom_25AD3A: @ 0x0825AD3A
	.string "かっても まけても\nうみ での しょうぶが だいすきだー!$"
	.if (. - gText_Rom_25AD3A) > 0x1e
	.error "gText_Rom_25AD3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AD3A) < 0x1e
	.space 0x1e - (. - gText_Rom_25AD3A)
	.endif
