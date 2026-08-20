	@ data/maps/Route104/scripts.inc:1112 Route104_Text_MayDefeat (+2 aliases)
	.globl gText_Rom_1DF892
gText_Rom_1DF892: @ 0x081DF892
	.string "うわあ……\nもう こんなに つよいなんて……{EOS}"
	.if (. - gText_Rom_1DF892) > 0x17
	.error "gText_Rom_1DF892 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF892) < 0x17
	.space 0x17 - (. - gText_Rom_1DF892)
	.endif
