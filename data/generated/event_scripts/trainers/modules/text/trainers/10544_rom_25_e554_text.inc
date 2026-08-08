	@ data/text/trainers.inc:1907 Route118_Text_DaltonIntro (+1 aliases)
	.globl gText_Rom_25E554
gText_Rom_25E554: @ 0x0825E554
	.string "ぼくの メロディ\nあなたの こころに とどけるよ$"
	.if (. - gText_Rom_25E554) > 0x19
	.error "gText_Rom_25E554 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E554) < 0x19
	.space 0x19 - (. - gText_Rom_25E554)
	.endif
