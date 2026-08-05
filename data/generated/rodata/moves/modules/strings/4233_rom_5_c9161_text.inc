	@ src/strings.c:87 gText_DexSearchAlphaMNO
	.globl gText_Rom_5C9161
gText_Rom_5C9161: @ 0x085C9161
	.string "なにぬねの$"
	.if (. - gText_Rom_5C9161) > 0x6
	.error "gText_Rom_5C9161 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9161) < 0x6
	.space 0x6 - (. - gText_Rom_5C9161)
	.endif
