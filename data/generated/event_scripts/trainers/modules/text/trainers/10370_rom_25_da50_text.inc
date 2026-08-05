	@ data/text/trainers.inc:1655 Route116_Text_DawsonDefeat (+1 aliases)
	.globl gText_Rom_25DA50
gText_Rom_25DA50: @ 0x0825DA50
	.string "そりゃないぜ ベイビー$"
	.if (. - gText_Rom_25DA50) > 0xc
	.error "gText_Rom_25DA50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DA50) < 0xc
	.space 0xc - (. - gText_Rom_25DA50)
	.endif
