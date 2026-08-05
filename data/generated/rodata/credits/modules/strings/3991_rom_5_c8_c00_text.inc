	@ src/strings.c:973 gText_DiplomaEmpty
	.globl gText_Rom_5C8C00
gText_Rom_5C8C00: @ 0x085C8C00
	.string "{COLOR RED}{SHADOW LIGHT_RED}$"
	.if (. - gText_Rom_5C8C00) > 0x7
	.error "gText_Rom_5C8C00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C00) < 0x7
	.space 0x7 - (. - gText_Rom_5C8C00)
	.endif
	.space 0x1, 0x00
