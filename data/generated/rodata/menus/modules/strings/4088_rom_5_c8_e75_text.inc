	@ src/strings.c:1046 gText_Exit3 (+1 aliases)
	.globl gText_Rom_5C8E75
gText_Rom_5C8E75: @ 0x085C8E75
	.string "おわる$"
	.if (. - gText_Rom_5C8E75) > 0x4
	.error "gText_Rom_5C8E75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E75) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E75)
	.endif
	.space 0x3, 0x00
