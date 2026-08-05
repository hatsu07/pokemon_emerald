	@ src/strings.c:395 gText_EggWillTakeSomeTime
	.globl gText_Rom_5CA425
gText_Rom_5CA425: @ 0x085CA425
	.string "なにが うまれて くるのかな?\nうまれる まで まだまだ かかりそう$"
	.if (. - gText_Rom_5CA425) > 0x23
	.error "gText_Rom_5CA425 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA425) < 0x23
	.space 0x23 - (. - gText_Rom_5CA425)
	.endif
