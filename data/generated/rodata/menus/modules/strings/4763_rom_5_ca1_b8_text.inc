	@ src/strings.c:339 gText_Second_PM
	.globl gText_Rom_5CA1B8
gText_Rom_5CA1B8: @ 0x085CA1B8
	.string "にばんめ$"
	.if (. - gText_Rom_5CA1B8) > 0x5
	.error "gText_Rom_5CA1B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1B8) < 0x5
	.space 0x5 - (. - gText_Rom_5CA1B8)
	.endif
