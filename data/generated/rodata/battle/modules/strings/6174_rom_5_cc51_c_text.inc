	@ src/strings.c:88 gText_DexSearchAlphaPQR
	.globl gText_Rom_5CC51C
gText_Rom_5CC51C: @ 0x085CC51C
	.string "はひふへほ$"
	.if (. - gText_Rom_5CC51C) > 0x6
	.error "gText_Rom_5CC51C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC51C) < 0x6
	.space 0x6 - (. - gText_Rom_5CC51C)
	.endif
