	@ src/strings.c:1046 gText_Exit3 (+1 aliases)
	.globl gText_Rom_5C8E86
gText_Rom_5C8E86: @ 0x085C8E86
	.string "おわる$"
	.if (. - gText_Rom_5C8E86) > 0x4
	.error "gText_Rom_5C8E86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E86) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E86)
	.endif
	.space 0x2, 0x00
