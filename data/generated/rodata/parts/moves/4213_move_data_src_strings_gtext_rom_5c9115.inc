	@ src/strings.c:77 gText_DexSortNumericalTitle
	.globl gText_Rom_5C9115
gText_Rom_5C9115: @ 0x085C9115
	.string "ばんごう じゅん$"
	.if (. - gText_Rom_5C9115) > 0x9
	.error "gText_Rom_5C9115 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9115) < 0x9
	.space 0x9 - (. - gText_Rom_5C9115)
	.endif
