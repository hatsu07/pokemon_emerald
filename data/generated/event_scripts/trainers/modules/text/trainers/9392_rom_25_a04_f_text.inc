	@ data/text/trainers.inc:248 Route104_Text_WinstonDefeat (+1 aliases)
	.globl gText_Rom_25A04F
gText_Rom_25A04F: @ 0x0825A04F
	.string "どうして かてないんだ……!?$"
	.if (. - gText_Rom_25A04F) > 0x10
	.error "gText_Rom_25A04F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A04F) < 0x10
	.space 0x10 - (. - gText_Rom_25A04F)
	.endif
