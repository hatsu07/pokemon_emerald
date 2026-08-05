	@ src/strings.c:87 gText_DexSearchAlphaMNO
	.globl gText_Rom_5CC516
gText_Rom_5CC516: @ 0x085CC516
	.string "なにぬねの$"
	.if (. - gText_Rom_5CC516) > 0x6
	.error "gText_Rom_5CC516 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC516) < 0x6
	.space 0x6 - (. - gText_Rom_5CC516)
	.endif
