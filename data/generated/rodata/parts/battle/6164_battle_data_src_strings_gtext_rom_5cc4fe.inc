	@ src/strings.c:83 gText_DexSearchAlphaABC
	.globl gText_Rom_5CC4FE
gText_Rom_5CC4FE: @ 0x085CC4FE
	.string "あいうえお$"
	.if (. - gText_Rom_5CC4FE) > 0x6
	.error "gText_Rom_5CC4FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4FE) < 0x6
	.space 0x6 - (. - gText_Rom_5CC4FE)
	.endif
