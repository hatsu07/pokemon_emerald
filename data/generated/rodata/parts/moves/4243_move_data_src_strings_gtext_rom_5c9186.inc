	@ src/strings.c:94 gText_DexSearchColorYellow
	.globl gText_Rom_5C9186
gText_Rom_5C9186: @ 0x085C9186
	.string "きいろ$"
	.if (. - gText_Rom_5C9186) > 0x4
	.error "gText_Rom_5C9186 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9186) < 0x4
	.space 0x4 - (. - gText_Rom_5C9186)
	.endif

