	@ src/strings.c:340 gText_Third_PM
	.globl gText_Rom_5CA1BD
gText_Rom_5CA1BD: @ 0x085CA1BD
	.string "さんばんめ$"
	.if (. - gText_Rom_5CA1BD) > 0x6
	.error "gText_Rom_5CA1BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1BD) < 0x6
	.space 0x6 - (. - gText_Rom_5CA1BD)
	.endif
