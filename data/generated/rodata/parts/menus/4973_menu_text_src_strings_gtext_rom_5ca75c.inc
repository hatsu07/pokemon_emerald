	@ src/strings.c:438 gText_CancelDecorating
	.globl gText_Rom_5CA75C
gText_Rom_5CA75C: @ 0x085CA75C
	.string "おくのを やめますか?$"
	.if (. - gText_Rom_5CA75C) > 0xc
	.error "gText_Rom_5CA75C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA75C) < 0xc
	.space 0xc - (. - gText_Rom_5CA75C)
	.endif
