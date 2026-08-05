	@ data/text/trainers.inc:1661 Route116_Text_DevanIntro (+1 aliases)
	.globl gText_Rom_25DA89
gText_Rom_25DA89: @ 0x0825DA89
	.string "ガツンと いってみようかあ!$"
	.if (. - gText_Rom_25DA89) > 0xf
	.error "gText_Rom_25DA89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DA89) < 0xf
	.space 0xf - (. - gText_Rom_25DA89)
	.endif
