	@ src/strings.c:88 gText_DexSearchAlphaPQR
	.globl gText_Rom_5C9167
gText_Rom_5C9167: @ 0x085C9167
	.string "はひふへほ$"
	.if (. - gText_Rom_5C9167) > 0x6
	.error "gText_Rom_5C9167 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9167) < 0x6
	.space 0x6 - (. - gText_Rom_5C9167)
	.endif
