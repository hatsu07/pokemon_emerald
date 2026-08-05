	@ data/text/trainers.inc:2576 Route123_Text_KayleyDefeat (+1 aliases)
	.globl gText_Rom_2600B1
gText_Rom_2600B1: @ 0x082600B1
	.string "わたしの 5ばい くらい つよいわね$"
	.if (. - gText_Rom_2600B1) > 0x13
	.error "gText_Rom_2600B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2600B1) < 0x13
	.space 0x13 - (. - gText_Rom_2600B1)
	.endif
