	@ src/strings.c:435 gText_Silver
	.globl gText_Rom_5CA742
gText_Rom_5CA742: @ 0x085CA742
	.string "ぎん$"
	.if (. - gText_Rom_5CA742) > 0x3
	.error "gText_Rom_5CA742 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA742) < 0x3
	.space 0x3 - (. - gText_Rom_5CA742)
	.endif
