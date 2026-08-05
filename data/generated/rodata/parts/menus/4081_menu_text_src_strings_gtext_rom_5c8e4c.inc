	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gText_Rom_5C8E4C
gText_Rom_5C8E4C: @ 0x085C8E4C
	.string "けってい$"
	.if (. - gText_Rom_5C8E4C) > 0x5
	.error "gText_Rom_5C8E4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E4C) < 0x5
	.space 0x5 - (. - gText_Rom_5C8E4C)
	.endif
	.space 0x3, 0x00
