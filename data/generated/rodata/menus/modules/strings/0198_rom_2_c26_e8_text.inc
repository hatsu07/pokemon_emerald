	@ src/strings.c:1055 gText_DontHaveNewsNewOneInput
	.globl gText_Rom_2C26E8
gText_Rom_2C26E8: @ 0x082C26E8
	.string "ふしぎなニュースを もっていないので\nあたらしく ニュースを よみこみます$"
	.if (. - gText_Rom_2C26E8) > 0x26
	.error "gText_Rom_2C26E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C26E8) < 0x26
	.space 0x26 - (. - gText_Rom_2C26E8)
	.endif
