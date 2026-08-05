	@ src/strings.c:86 gText_DexSearchAlphaJKL
	.globl gText_Rom_5CC510
gText_Rom_5CC510: @ 0x085CC510
	.string "たちつてと$"
	.if (. - gText_Rom_5CC510) > 0x6
	.error "gText_Rom_5CC510 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC510) < 0x6
	.space 0x6 - (. - gText_Rom_5CC510)
	.endif
