	@ data/text/trainers.inc:1637 Route116_Text_KarenRematchDefeat (+1 aliases)
	.globl gText_Rom_25D98B
gText_Rom_25D98B: @ 0x0825D98B
	.string "ショック\nまた まけちゃったよ$"
	.if (. - gText_Rom_25D98B) > 0x10
	.error "gText_Rom_25D98B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D98B) < 0x10
	.space 0x10 - (. - gText_Rom_25D98B)
	.endif
