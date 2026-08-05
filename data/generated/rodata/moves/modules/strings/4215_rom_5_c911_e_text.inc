	@ src/strings.c:78 gText_DexSortAtoZTitle
	.globl gText_Rom_5C911E
gText_Rom_5C911E: @ 0x085C911E
	.string "ごじゅうおん じゅん$"
	.if (. - gText_Rom_5C911E) > 0xb
	.error "gText_Rom_5C911E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C911E) < 0xb
	.space 0xb - (. - gText_Rom_5C911E)
	.endif
