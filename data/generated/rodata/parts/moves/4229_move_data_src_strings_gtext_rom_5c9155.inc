	@ src/strings.c:85 gText_DexSearchAlphaGHI
	.globl gText_Rom_5C9155
gText_Rom_5C9155: @ 0x085C9155
	.string "さしすせそ$"
	.if (. - gText_Rom_5C9155) > 0x6
	.error "gText_Rom_5C9155 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9155) < 0x6
	.space 0x6 - (. - gText_Rom_5C9155)
	.endif
