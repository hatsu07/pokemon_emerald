	@ data/text/trainers.inc:1559 Route116_Text_ClarkIntro (+1 aliases)
	.globl gText_Rom_25D5E4
gText_Rom_25D5E4: @ 0x0825D5E4
	.string "トンネルが つうじて いないなら\nやまを こえて いけば いいのだ!$"
	.if (. - gText_Rom_25D5E4) > 0x23
	.error "gText_Rom_25D5E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D5E4) < 0x23
	.space 0x23 - (. - gText_Rom_25D5E4)
	.endif
