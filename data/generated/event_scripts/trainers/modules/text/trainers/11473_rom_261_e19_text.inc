	@ data/text/trainers.inc:3284 Route133_Text_FranklinIntro (+1 aliases)
	.globl gText_Rom_261E19
gText_Rom_261E19: @ 0x08261E19
	.string "キミも しおに ながされて きたの?\nこれも なにかの えんだね\lしょうぶ しようよ!$"
	.if (. - gText_Rom_261E19) > 0x2c
	.error "gText_Rom_261E19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261E19) < 0x2c
	.space 0x2c - (. - gText_Rom_261E19)
	.endif
