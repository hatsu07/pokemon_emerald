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
	.globl gText_Rom_5C9149
gText_Rom_5C9149: @ 0x085C9149
	.string "あいうえお{EOS}"
	.if (. - gText_Rom_5C9149) > 0x6
	.error "gText_Rom_5C9149 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9149) < 0x6
	.space 0x6 - (. - gText_Rom_5C9149)
	.endif

	@ src/strings.c:84 gText_DexSearchAlphaDEF
	.globl gText_Rom_5C914F
gText_Rom_5C914F: @ 0x085C914F
	.string "かきくけこ{EOS}"
	.if (. - gText_Rom_5C914F) > 0x6
	.error "gText_Rom_5C914F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C914F) < 0x6
	.space 0x6 - (. - gText_Rom_5C914F)
	.endif

	@ src/strings.c:85 gText_DexSearchAlphaGHI
	.globl gText_Rom_5C9155
gText_Rom_5C9155: @ 0x085C9155
	.string "さしすせそ{EOS}"
	.if (. - gText_Rom_5C9155) > 0x6
	.error "gText_Rom_5C9155 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9155) < 0x6
	.space 0x6 - (. - gText_Rom_5C9155)
	.endif

	@ src/strings.c:86 gText_DexSearchAlphaJKL
	.globl gText_Rom_5C915B
gText_Rom_5C915B: @ 0x085C915B
	.string "たちつてと{EOS}"
	.if (. - gText_Rom_5C915B) > 0x6
	.error "gText_Rom_5C915B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C915B) < 0x6
	.space 0x6 - (. - gText_Rom_5C915B)
	.endif

	@ src/strings.c:87 gText_DexSearchAlphaMNO
	.globl gText_Rom_5C9161
gText_Rom_5C9161: @ 0x085C9161
	.string "なにぬねの{EOS}"
	.if (. - gText_Rom_5C9161) > 0x6
	.error "gText_Rom_5C9161 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9161) < 0x6
	.space 0x6 - (. - gText_Rom_5C9161)
	.endif

	@ src/strings.c:88 gText_DexSearchAlphaPQR
	.globl gText_Rom_5C9167
gText_Rom_5C9167: @ 0x085C9167
	.string "はひふへほ{EOS}"
	.if (. - gText_Rom_5C9167) > 0x6
	.error "gText_Rom_5C9167 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9167) < 0x6
	.space 0x6 - (. - gText_Rom_5C9167)
	.endif

	@ src/strings.c:89 gText_DexSearchAlphaSTU
	.globl gText_Rom_5C916D
gText_Rom_5C916D: @ 0x085C916D
	.string "まみむめも{EOS}"
	.if (. - gText_Rom_5C916D) > 0x6
	.error "gText_Rom_5C916D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C916D) < 0x6
	.space 0x6 - (. - gText_Rom_5C916D)
	.endif

