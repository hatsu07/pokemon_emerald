	@ src/strings.c:383 gText_ExpPoints
	.globl gText_Rom_5CA3BB
gText_Rom_5CA3BB: @ 0x085CA3BB
	.string "げんざいのけいけんち{EOS}"
	.if (. - gText_Rom_5CA3BB) > 0xb
	.error "gText_Rom_5CA3BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3BB) < 0xb
	.space 0xb - (. - gText_Rom_5CA3BB)
	.endif

	@ src/strings.c:384 gText_NextLv
	.globl gText_Rom_5CA3C6
gText_Rom_5CA3C6: @ 0x085CA3C6
	.string "レベルアップまで{EOS}"
	.if (. - gText_Rom_5CA3C6) > 0x9
	.error "gText_Rom_5CA3C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3C6) < 0x9
	.space 0x9 - (. - gText_Rom_5CA3C6)
	.endif
