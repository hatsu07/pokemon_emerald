	@ src/strings.c:75 gText_DexHoennTitle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_DexHoennTitle
gText_DexHoennTitle: @ 0x085C9103
	.string "ホウエン ずかん{EOS}"
	.if (. - gText_DexHoennTitle) != 0x9
	.error "gText_DexHoennTitle must retain its original byte length"
	.endif
	.globl gText_Rom_5C9108
	.set gText_Rom_5C9108, gText_DexHoennTitle + 0x5

	@ src/strings.c:76 gText_DexNatTitle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_DexNatTitle
gText_DexNatTitle: @ 0x085C910C
	.string "ぜんこく ずかん{EOS}"
	.if (. - gText_DexNatTitle) != 0x9
	.error "gText_DexNatTitle must retain its original byte length"
	.endif
	.globl gText_Rom_5C9111
	.set gText_Rom_5C9111, gText_DexNatTitle + 0x5

	@ src/strings.c:77 gText_DexSortNumericalTitle
	.globl gText_DexSortNumericalTitle
gText_DexSortNumericalTitle: @ 0x085C9115
	.string "ばんごう じゅん{EOS}"
	.if (. - gText_DexSortNumericalTitle) > 0x9
	.error "gText_DexSortNumericalTitle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSortNumericalTitle) < 0x9
	.space 0x9 - (. - gText_DexSortNumericalTitle)
	.endif

	@ src/strings.c:78 gText_DexSortAtoZTitle
	.globl gText_DexSortAtoZTitle
gText_DexSortAtoZTitle: @ 0x085C911E
	.string "ごじゅうおん じゅん{EOS}"
	.if (. - gText_DexSortAtoZTitle) > 0xb
	.error "gText_DexSortAtoZTitle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSortAtoZTitle) < 0xb
	.space 0xb - (. - gText_DexSortAtoZTitle)
	.endif

	@ src/strings.c:79 gText_DexSortHeaviestTitle
	.globl gText_DexSortHeaviestTitle
gText_DexSortHeaviestTitle: @ 0x085C9129
	.string "おもい じゅん{EOS}"
	.if (. - gText_DexSortHeaviestTitle) > 0x8
	.error "gText_DexSortHeaviestTitle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSortHeaviestTitle) < 0x8
	.space 0x8 - (. - gText_DexSortHeaviestTitle)
	.endif

	@ src/strings.c:80 gText_DexSortLightestTitle
	.globl gText_DexSortLightestTitle
gText_DexSortLightestTitle: @ 0x085C9131
	.string "かるい じゅん{EOS}"
	.if (. - gText_DexSortLightestTitle) > 0x8
	.error "gText_DexSortLightestTitle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSortLightestTitle) < 0x8
	.space 0x8 - (. - gText_DexSortLightestTitle)
	.endif

	@ src/strings.c:81 gText_DexSortTallestTitle
	.globl gText_DexSortTallestTitle
gText_DexSortTallestTitle: @ 0x085C9139
	.string "たかい じゅん{EOS}"
	.if (. - gText_DexSortTallestTitle) > 0x8
	.error "gText_DexSortTallestTitle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSortTallestTitle) < 0x8
	.space 0x8 - (. - gText_DexSortTallestTitle)
	.endif

	@ src/strings.c:82 gText_DexSortSmallestTitle
	.globl gText_DexSortSmallestTitle
gText_DexSortSmallestTitle: @ 0x085C9141
	.string "ひくい じゅん{EOS}"
	.if (. - gText_DexSortSmallestTitle) > 0x8
	.error "gText_DexSortSmallestTitle may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSortSmallestTitle) < 0x8
	.space 0x8 - (. - gText_DexSortSmallestTitle)
	.endif

	@ src/strings.c:83 gText_DexSearchAlphaABC
	.globl gText_DexSearchAlphaABC
gText_DexSearchAlphaABC: @ 0x085C9149
	.string "あいうえお{EOS}"
	.if (. - gText_DexSearchAlphaABC) > 0x6
	.error "gText_DexSearchAlphaABC may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaABC) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaABC)
	.endif

	@ src/strings.c:84 gText_DexSearchAlphaDEF
	.globl gText_DexSearchAlphaDEF
gText_DexSearchAlphaDEF: @ 0x085C914F
	.string "かきくけこ{EOS}"
	.if (. - gText_DexSearchAlphaDEF) > 0x6
	.error "gText_DexSearchAlphaDEF may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaDEF) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaDEF)
	.endif

	@ src/strings.c:85 gText_DexSearchAlphaGHI
	.globl gText_DexSearchAlphaGHI
gText_DexSearchAlphaGHI: @ 0x085C9155
	.string "さしすせそ{EOS}"
	.if (. - gText_DexSearchAlphaGHI) > 0x6
	.error "gText_DexSearchAlphaGHI may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaGHI) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaGHI)
	.endif

	@ src/strings.c:86 gText_DexSearchAlphaJKL
	.globl gText_DexSearchAlphaJKL
gText_DexSearchAlphaJKL: @ 0x085C915B
	.string "たちつてと{EOS}"
	.if (. - gText_DexSearchAlphaJKL) > 0x6
	.error "gText_DexSearchAlphaJKL may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaJKL) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaJKL)
	.endif

	@ src/strings.c:87 gText_DexSearchAlphaMNO
	.globl gText_DexSearchAlphaMNO
gText_DexSearchAlphaMNO: @ 0x085C9161
	.string "なにぬねの{EOS}"
	.if (. - gText_DexSearchAlphaMNO) > 0x6
	.error "gText_DexSearchAlphaMNO may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaMNO) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaMNO)
	.endif

	@ src/strings.c:88 gText_DexSearchAlphaPQR
	.globl gText_DexSearchAlphaPQR
gText_DexSearchAlphaPQR: @ 0x085C9167
	.string "はひふへほ{EOS}"
	.if (. - gText_DexSearchAlphaPQR) > 0x6
	.error "gText_DexSearchAlphaPQR may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaPQR) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaPQR)
	.endif

	@ src/strings.c:89 gText_DexSearchAlphaSTU
	.globl gText_DexSearchAlphaSTU
gText_DexSearchAlphaSTU: @ 0x085C916D
	.string "まみむめも{EOS}"
	.if (. - gText_DexSearchAlphaSTU) > 0x6
	.error "gText_DexSearchAlphaSTU may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaSTU) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaSTU)
	.endif

