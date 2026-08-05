	@ src/strings.c:85 gText_DexSearchAlphaGHI
	.globl gText_Rom_5CC50A
gText_Rom_5CC50A: @ 0x085CC50A
	.string "さしすせそ$"
	.if (. - gText_Rom_5CC50A) > 0x6
	.error "gText_Rom_5CC50A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC50A) < 0x6
	.space 0x6 - (. - gText_Rom_5CC50A)
	.endif
