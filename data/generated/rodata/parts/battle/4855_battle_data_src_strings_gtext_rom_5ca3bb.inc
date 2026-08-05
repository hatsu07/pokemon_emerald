	@ src/strings.c:383 gText_ExpPoints
	.globl gText_Rom_5CA3BB
gText_Rom_5CA3BB: @ 0x085CA3BB
	.string "げんざいのけいけんち$"
	.if (. - gText_Rom_5CA3BB) > 0xb
	.error "gText_Rom_5CA3BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3BB) < 0xb
	.space 0xb - (. - gText_Rom_5CA3BB)
	.endif
