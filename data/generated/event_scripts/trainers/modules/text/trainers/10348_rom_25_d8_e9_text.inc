	@ data/text/trainers.inc:1622 Route116_Text_KarenDefeat (+1 aliases)
	.globl gText_Rom_25D8E9
gText_Rom_25D8E9: @ 0x0825D8E9
	.string "ショック\nまけちゃったよ$"
	.if (. - gText_Rom_25D8E9) > 0xd
	.error "gText_Rom_25D8E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D8E9) < 0xd
	.space 0xd - (. - gText_Rom_25D8E9)
	.endif
