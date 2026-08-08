	@ data/text/trainers.inc:1646 Route116_Text_SarahDefeat (+1 aliases)
	.globl gText_Rom_25D9E7
gText_Rom_25D9E7: @ 0x0825D9E7
	.string "まあ\nこんなの はじめてですわ!$"
	.if (. - gText_Rom_25D9E7) > 0x11
	.error "gText_Rom_25D9E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D9E7) < 0x11
	.space 0x11 - (. - gText_Rom_25D9E7)
	.endif
