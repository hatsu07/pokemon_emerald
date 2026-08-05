	@ src/strings.c:86 gText_DexSearchAlphaJKL
	.globl gText_Rom_5C915B
gText_Rom_5C915B: @ 0x085C915B
	.string "たちつてと$"
	.if (. - gText_Rom_5C915B) > 0x6
	.error "gText_Rom_5C915B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C915B) < 0x6
	.space 0x6 - (. - gText_Rom_5C915B)
	.endif
