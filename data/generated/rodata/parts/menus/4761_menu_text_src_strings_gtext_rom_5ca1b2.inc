	@ src/strings.c:338 gText_First_PM
	.globl gText_Rom_5CA1B2
gText_Rom_5CA1B2: @ 0x085CA1B2
	.string "いちばんめ$"
	.if (. - gText_Rom_5CA1B2) > 0x6
	.error "gText_Rom_5CA1B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1B2) < 0x6
	.space 0x6 - (. - gText_Rom_5CA1B2)
	.endif
