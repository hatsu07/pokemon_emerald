	@ src/strings.c:81 gText_DexSortTallestTitle
	.globl gText_Rom_5C9139
gText_Rom_5C9139: @ 0x085C9139
	.string "たかい じゅん$"
	.if (. - gText_Rom_5C9139) > 0x8
	.error "gText_Rom_5C9139 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9139) < 0x8
	.space 0x8 - (. - gText_Rom_5C9139)
	.endif
