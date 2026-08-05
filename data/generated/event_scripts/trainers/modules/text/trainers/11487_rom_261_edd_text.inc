	@ data/text/trainers.inc:3305 Route133_Text_LindaDefeat (+1 aliases)
	.globl gText_Rom_261EDD
gText_Rom_261EDD: @ 0x08261EDD
	.string "いやーん!$"
	.if (. - gText_Rom_261EDD) > 0x6
	.error "gText_Rom_261EDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261EDD) < 0x6
	.space 0x6 - (. - gText_Rom_261EDD)
	.endif
