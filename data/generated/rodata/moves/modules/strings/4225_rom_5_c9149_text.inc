	@ src/strings.c:83 gText_DexSearchAlphaABC
	.globl gText_Rom_5C9149
gText_Rom_5C9149: @ 0x085C9149
	.string "あいうえお$"
	.if (. - gText_Rom_5C9149) > 0x6
	.error "gText_Rom_5C9149 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9149) < 0x6
	.space 0x6 - (. - gText_Rom_5C9149)
	.endif
