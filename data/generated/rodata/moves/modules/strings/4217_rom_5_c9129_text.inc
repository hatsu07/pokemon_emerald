	@ src/strings.c:79 gText_DexSortHeaviestTitle
	.globl gText_Rom_5C9129
gText_Rom_5C9129: @ 0x085C9129
	.string "おもい じゅん$"
	.if (. - gText_Rom_5C9129) > 0x8
	.error "gText_Rom_5C9129 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9129) < 0x8
	.space 0x8 - (. - gText_Rom_5C9129)
	.endif
