	@ src/strings.c:90 gText_DexSearchAlphaVWX
	.globl gText_Rom_5CC52E
gText_Rom_5CC52E: @ 0x085CC52E
	.string "らりるれろ$"
	.if (. - gText_Rom_5CC52E) > 0x6
	.error "gText_Rom_5CC52E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC52E) < 0x6
	.space 0x6 - (. - gText_Rom_5CC52E)
	.endif
	@ Decoded text from ROM range: offset=0x5CC534, size=0x42
	.string "わをんー　$"
	.string "アイウエオ$"
	.string "カキクケコ$"
	.string "サシスセソ$"
	.string "タチツテト$"
	.string "ナニヌネノ$"
	.string "ハヒフヘホ$"
	.string "マミムメモ$"
	.string "ヤユヨ！？$"
	.string "ラリルレロ$"
	.string "ワヲンー　$"
