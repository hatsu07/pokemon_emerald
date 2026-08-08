	@ data/text/trainers.inc:1598 Route116_Text_JerryDefeat (+1 aliases)
	.globl gText_Rom_25D77F
gText_Rom_25D77F: @ 0x0825D77F
	.string "べんきょう さぼってたから\nまけちゃったよ$"
	.if (. - gText_Rom_25D77F) > 0x16
	.error "gText_Rom_25D77F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D77F) < 0x16
	.space 0x16 - (. - gText_Rom_25D77F)
	.endif
