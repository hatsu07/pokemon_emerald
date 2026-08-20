	@ data/maps/Route104/scripts.inc:1112 Route104_Text_MayDefeat (+2 aliases)
	.globl gText_Rom_1E7F84
gText_Rom_1E7F84: @ 0x081E7F84
	.string "うわあ……\nもう こんなに つよいなんて……{EOS}"
	.if (. - gText_Rom_1E7F84) > 0x17
	.error "gText_Rom_1E7F84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7F84) < 0x17
	.space 0x17 - (. - gText_Rom_1E7F84)
	.endif
