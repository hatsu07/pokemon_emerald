	@ src/strings.c:1054 gText_DontHaveCardNewOneInput
	.globl gText_Rom_2C26C4
gText_Rom_2C26C4: @ 0x082C26C4
	.string "ふしぎなカードを もっていないので\nあたらしく カードを よみこみます$"
	.if (. - gText_Rom_2C26C4) > 0x24
	.error "gText_Rom_2C26C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C26C4) < 0x24
	.space 0x24 - (. - gText_Rom_2C26C4)
	.endif
