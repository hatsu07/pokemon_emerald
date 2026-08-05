	@ src/strings.c:82 gText_DexSortSmallestTitle
	.globl gText_Rom_5C9141
gText_Rom_5C9141: @ 0x085C9141
	.string "ひくい じゅん$"
	.if (. - gText_Rom_5C9141) > 0x8
	.error "gText_Rom_5C9141 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9141) < 0x8
	.space 0x8 - (. - gText_Rom_5C9141)
	.endif
