	@ src/strings.c:89 gText_DexSearchAlphaSTU
	.globl gText_Rom_5CC522
gText_Rom_5CC522: @ 0x085CC522
	.string "まみむめも$"
	.if (. - gText_Rom_5CC522) > 0x6
	.error "gText_Rom_5CC522 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC522) < 0x6
	.space 0x6 - (. - gText_Rom_5CC522)
	.endif
	@ Decoded text from ROM range: offset=0x5CC528, size=0x6
	.string "やゆよ！？$"
