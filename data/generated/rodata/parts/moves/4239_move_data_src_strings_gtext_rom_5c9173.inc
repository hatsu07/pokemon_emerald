	@ src/strings.c:90 gText_DexSearchAlphaVWX
	.globl gText_Rom_5C9173
gText_Rom_5C9173: @ 0x085C9173
	.string "らりるれろ$"
	.if (. - gText_Rom_5C9173) > 0x6
	.error "gText_Rom_5C9173 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9173) < 0x6
	.space 0x6 - (. - gText_Rom_5C9173)
	.endif
