	@ data/text/trainers.inc:1613 Route116_Text_JerryRematchDefeat (+1 aliases)
	.globl gText_Rom_25D885
gText_Rom_25D885: @ 0x0825D885
	.string "あれー?\nきちんと べんきょう したのに{EOS}"
	.if (. - gText_Rom_25D885) > 0x15
	.error "gText_Rom_25D885 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D885) < 0x15
	.space 0x15 - (. - gText_Rom_25D885)
	.endif
