	@ src/strings.c:91 gText_DexSearchAlphaYZ
	.globl gText_Rom_5C9179
gText_Rom_5C9179: @ 0x085C9179
	.string "やゆよわをん$"
	.if (. - gText_Rom_5C9179) > 0x7
	.error "gText_Rom_5C9179 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9179) < 0x7
	.space 0x7 - (. - gText_Rom_5C9179)
	.endif
	@ Decoded text from ROM range: offset=0x5C9180, size=0x6
	.string "あか$"
	.string "あお$"
