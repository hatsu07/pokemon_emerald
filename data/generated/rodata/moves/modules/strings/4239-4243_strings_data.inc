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

