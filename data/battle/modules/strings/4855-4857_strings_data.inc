	@ src/strings.c:383 gText_ExpPoints
	.globl gText_ExpPoints
gText_ExpPoints: @ 0x085CA3BB
	.string "げんざいのけいけんち{EOS}"
	.if (. - gText_ExpPoints) > 0xb
	.error "gText_ExpPoints may not grow beyond its original slot"
	.endif
	.if (. - gText_ExpPoints) < 0xb
	.space 0xb - (. - gText_ExpPoints)
	.endif

	@ src/strings.c:384 gText_NextLv
	.globl gText_NextLv
gText_NextLv: @ 0x085CA3C6
	.string "レベルアップまで{EOS}"
	.if (. - gText_NextLv) > 0x9
	.error "gText_NextLv may not grow beyond its original slot"
	.endif
	.if (. - gText_NextLv) < 0x9
	.space 0x9 - (. - gText_NextLv)
	.endif
