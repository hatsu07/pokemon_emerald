	@ src/strings.c:719 gText_HealthboxGender_Male
	.globl gText_Rom_5CC4F0
gText_Rom_5CC4F0: @ 0x085CC4F0
	.string "{COLOR DYNAMIC_COLOR2}♂{EOS}"
	.if (. - gText_Rom_5CC4F0) > 0x5
	.error "gText_Rom_5CC4F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4F0) < 0x5
	.space 0x5 - (. - gText_Rom_5CC4F0)
	.endif

	@ src/strings.c:720 gText_HealthboxGender_Female
	.globl gText_Rom_5CC4F5
gText_Rom_5CC4F5: @ 0x085CC4F5
	.string "{COLOR DYNAMIC_COLOR1}♀{EOS}"
	.if (. - gText_Rom_5CC4F5) > 0x5
	.error "gText_Rom_5CC4F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4F5) < 0x5
	.space 0x5 - (. - gText_Rom_5CC4F5)
	.endif

	@ src/strings.c:721 gText_HealthboxGender_None
	.globl gText_Rom_5CC4FA
gText_Rom_5CC4FA: @ 0x085CC4FA
	.string "{COLOR DYNAMIC_COLOR2}{EOS}"
	.if (. - gText_Rom_5CC4FA) > 0x4
	.error "gText_Rom_5CC4FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4FA) < 0x4
	.space 0x4 - (. - gText_Rom_5CC4FA)
	.endif

	@ src/strings.c:83 gText_DexSearchAlphaABC
	.globl gText_Rom_5CC4FE
gText_Rom_5CC4FE: @ 0x085CC4FE
	.string "あいうえお{EOS}"
	.if (. - gText_Rom_5CC4FE) > 0x6
	.error "gText_Rom_5CC4FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4FE) < 0x6
	.space 0x6 - (. - gText_Rom_5CC4FE)
	.endif

	@ src/strings.c:84 gText_DexSearchAlphaDEF
	.globl gText_Rom_5CC504
gText_Rom_5CC504: @ 0x085CC504
	.string "かきくけこ{EOS}"
	.if (. - gText_Rom_5CC504) > 0x6
	.error "gText_Rom_5CC504 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC504) < 0x6
	.space 0x6 - (. - gText_Rom_5CC504)
	.endif

	@ src/strings.c:85 gText_DexSearchAlphaGHI
	.globl gText_Rom_5CC50A
gText_Rom_5CC50A: @ 0x085CC50A
	.string "さしすせそ{EOS}"
	.if (. - gText_Rom_5CC50A) > 0x6
	.error "gText_Rom_5CC50A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC50A) < 0x6
	.space 0x6 - (. - gText_Rom_5CC50A)
	.endif

	@ src/strings.c:86 gText_DexSearchAlphaJKL
	.globl gText_Rom_5CC510
gText_Rom_5CC510: @ 0x085CC510
	.string "たちつてと{EOS}"
	.if (. - gText_Rom_5CC510) > 0x6
	.error "gText_Rom_5CC510 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC510) < 0x6
	.space 0x6 - (. - gText_Rom_5CC510)
	.endif

	@ src/strings.c:87 gText_DexSearchAlphaMNO
	.globl gText_Rom_5CC516
gText_Rom_5CC516: @ 0x085CC516
	.string "なにぬねの{EOS}"
	.if (. - gText_Rom_5CC516) > 0x6
	.error "gText_Rom_5CC516 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC516) < 0x6
	.space 0x6 - (. - gText_Rom_5CC516)
	.endif

	@ src/strings.c:88 gText_DexSearchAlphaPQR
	.globl gText_Rom_5CC51C
gText_Rom_5CC51C: @ 0x085CC51C
	.string "はひふへほ{EOS}"
	.if (. - gText_Rom_5CC51C) > 0x6
	.error "gText_Rom_5CC51C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC51C) < 0x6
	.space 0x6 - (. - gText_Rom_5CC51C)
	.endif

	@ src/strings.c:89 gText_DexSearchAlphaSTU
	.globl gText_Rom_5CC522
gText_Rom_5CC522: @ 0x085CC522
	.string "まみむめも{EOS}"
	.if (. - gText_Rom_5CC522) > 0x6
	.error "gText_Rom_5CC522 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC522) < 0x6
	.space 0x6 - (. - gText_Rom_5CC522)
	.endif
	@ Decoded text from ROM range: offset=0x5CC528, size=0x6
	.string "やゆよ！？{EOS}"

	@ src/strings.c:90 gText_DexSearchAlphaVWX
	.globl gText_Rom_5CC52E
gText_Rom_5CC52E: @ 0x085CC52E
	.string "らりるれろ{EOS}"
	.if (. - gText_Rom_5CC52E) > 0x6
	.error "gText_Rom_5CC52E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC52E) < 0x6
	.space 0x6 - (. - gText_Rom_5CC52E)
	.endif
	@ Decoded text from ROM range: offset=0x5CC534, size=0x42
	.string "わをんー　{EOS}"
	.string "アイウエオ{EOS}"
	.string "カキクケコ{EOS}"
	.string "サシスセソ{EOS}"
	.string "タチツテト{EOS}"
	.string "ナニヌネノ{EOS}"
	.string "ハヒフヘホ{EOS}"
	.string "マミムメモ{EOS}"
	.string "ヤユヨ！？{EOS}"
	.string "ラリルレロ{EOS}"
	.string "ワヲンー　{EOS}"
