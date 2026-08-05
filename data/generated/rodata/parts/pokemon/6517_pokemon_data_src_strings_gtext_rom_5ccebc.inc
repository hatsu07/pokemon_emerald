	@ src/strings.c:855 gText_2nd
	.globl gText_Rom_5CCEBC
gText_Rom_5CCEBC: @ 0x085CCEBC
	.string "2い$"
	.if (. - gText_Rom_5CCEBC) > 0x3
	.error "gText_Rom_5CCEBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEBC) < 0x3
	.space 0x3 - (. - gText_Rom_5CCEBC)
	.endif
