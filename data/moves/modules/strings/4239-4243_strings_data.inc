	@ src/strings.c:90 gText_DexSearchAlphaVWX
	.globl gText_Rom_5C9173
gText_Rom_5C9173: @ 0x085C9173
	.string "らりるれろ{EOS}"
	.if (. - gText_Rom_5C9173) > 0x6
	.error "gText_Rom_5C9173 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9173) < 0x6
	.space 0x6 - (. - gText_Rom_5C9173)
	.endif

	@ src/strings.c:91 gText_DexSearchAlphaYZ
	.globl gText_DexSearchAlphaYZ
gText_DexSearchAlphaYZ: @ 0x085C9179
	.string "やゆよわをん{EOS}"
	.if (. - gText_DexSearchAlphaYZ) > 0x7
	.error "gText_DexSearchAlphaYZ may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaYZ) < 0x7
	.space 0x7 - (. - gText_DexSearchAlphaYZ)
	.endif
	@ Decoded text from ROM range: offset=0x5C9180, size=0x6
	.string "あか{EOS}"
	.string "あお{EOS}"

	@ src/strings.c:94 gText_DexSearchColorYellow
	.globl gText_DexSearchColorYellow
gText_DexSearchColorYellow: @ 0x085C9186
	.string "きいろ{EOS}"
	.if (. - gText_DexSearchColorYellow) > 0x4
	.error "gText_DexSearchColorYellow may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchColorYellow) < 0x4
	.space 0x4 - (. - gText_DexSearchColorYellow)
	.endif

