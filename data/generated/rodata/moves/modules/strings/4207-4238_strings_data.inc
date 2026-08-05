	@ src/strings.c:75 gText_DexHoennTitle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9103
gText_Rom_5C9103: @ 0x085C9103
	.string "ホウエン ずかん$"
	.if (. - gText_Rom_5C9103) != 0x9
	.error "gText_Rom_5C9103 must retain its original byte length"
	.endif
	.globl gText_Rom_5C9108
	.set gText_Rom_5C9108, gText_Rom_5C9103 + 0x5

	@ src/strings.c:76 gText_DexNatTitle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C910C
gText_Rom_5C910C: @ 0x085C910C
	.string "ぜんこく ずかん$"
	.if (. - gText_Rom_5C910C) != 0x9
	.error "gText_Rom_5C910C must retain its original byte length"
	.endif
	.globl gText_Rom_5C9111
	.set gText_Rom_5C9111, gText_Rom_5C910C + 0x5

	@ src/strings.c:77 gText_DexSortNumericalTitle
	.globl gText_Rom_5C9115
gText_Rom_5C9115: @ 0x085C9115
	.string "ばんごう じゅん$"
	.if (. - gText_Rom_5C9115) > 0x9
	.error "gText_Rom_5C9115 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9115) < 0x9
	.space 0x9 - (. - gText_Rom_5C9115)
	.endif

	@ src/strings.c:78 gText_DexSortAtoZTitle
	.globl gText_Rom_5C911E
gText_Rom_5C911E: @ 0x085C911E
	.string "ごじゅうおん じゅん$"
	.if (. - gText_Rom_5C911E) > 0xb
	.error "gText_Rom_5C911E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C911E) < 0xb
	.space 0xb - (. - gText_Rom_5C911E)
	.endif

	@ src/strings.c:79 gText_DexSortHeaviestTitle
	.globl gText_Rom_5C9129
gText_Rom_5C9129: @ 0x085C9129
	.string "おもい じゅん$"
	.if (. - gText_Rom_5C9129) > 0x8
	.error "gText_Rom_5C9129 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9129) < 0x8
	.space 0x8 - (. - gText_Rom_5C9129)
	.endif

	@ src/strings.c:80 gText_DexSortLightestTitle
	.globl gText_Rom_5C9131
gText_Rom_5C9131: @ 0x085C9131
	.string "かるい じゅん$"
	.if (. - gText_Rom_5C9131) > 0x8
	.error "gText_Rom_5C9131 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9131) < 0x8
	.space 0x8 - (. - gText_Rom_5C9131)
	.endif

	@ src/strings.c:81 gText_DexSortTallestTitle
	.globl gText_Rom_5C9139
gText_Rom_5C9139: @ 0x085C9139
	.string "たかい じゅん$"
	.if (. - gText_Rom_5C9139) > 0x8
	.error "gText_Rom_5C9139 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9139) < 0x8
	.space 0x8 - (. - gText_Rom_5C9139)
	.endif

	@ src/strings.c:82 gText_DexSortSmallestTitle
	.globl gText_Rom_5C9141
gText_Rom_5C9141: @ 0x085C9141
	.string "ひくい じゅん$"
	.if (. - gText_Rom_5C9141) > 0x8
	.error "gText_Rom_5C9141 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9141) < 0x8
	.space 0x8 - (. - gText_Rom_5C9141)
	.endif

	@ src/strings.c:83 gText_DexSearchAlphaABC
	.globl gText_Rom_5C9149
gText_Rom_5C9149: @ 0x085C9149
	.string "あいうえお$"
	.if (. - gText_Rom_5C9149) > 0x6
	.error "gText_Rom_5C9149 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9149) < 0x6
	.space 0x6 - (. - gText_Rom_5C9149)
	.endif

	@ src/strings.c:84 gText_DexSearchAlphaDEF
	.globl gText_Rom_5C914F
gText_Rom_5C914F: @ 0x085C914F
	.string "かきくけこ$"
	.if (. - gText_Rom_5C914F) > 0x6
	.error "gText_Rom_5C914F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C914F) < 0x6
	.space 0x6 - (. - gText_Rom_5C914F)
	.endif

	@ src/strings.c:85 gText_DexSearchAlphaGHI
	.globl gText_Rom_5C9155
gText_Rom_5C9155: @ 0x085C9155
	.string "さしすせそ$"
	.if (. - gText_Rom_5C9155) > 0x6
	.error "gText_Rom_5C9155 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9155) < 0x6
	.space 0x6 - (. - gText_Rom_5C9155)
	.endif

	@ src/strings.c:86 gText_DexSearchAlphaJKL
	.globl gText_Rom_5C915B
gText_Rom_5C915B: @ 0x085C915B
	.string "たちつてと$"
	.if (. - gText_Rom_5C915B) > 0x6
	.error "gText_Rom_5C915B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C915B) < 0x6
	.space 0x6 - (. - gText_Rom_5C915B)
	.endif

	@ src/strings.c:87 gText_DexSearchAlphaMNO
	.globl gText_Rom_5C9161
gText_Rom_5C9161: @ 0x085C9161
	.string "なにぬねの$"
	.if (. - gText_Rom_5C9161) > 0x6
	.error "gText_Rom_5C9161 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9161) < 0x6
	.space 0x6 - (. - gText_Rom_5C9161)
	.endif

	@ src/strings.c:88 gText_DexSearchAlphaPQR
	.globl gText_Rom_5C9167
gText_Rom_5C9167: @ 0x085C9167
	.string "はひふへほ$"
	.if (. - gText_Rom_5C9167) > 0x6
	.error "gText_Rom_5C9167 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9167) < 0x6
	.space 0x6 - (. - gText_Rom_5C9167)
	.endif

	@ src/strings.c:89 gText_DexSearchAlphaSTU
	.globl gText_Rom_5C916D
gText_Rom_5C916D: @ 0x085C916D
	.string "まみむめも$"
	.if (. - gText_Rom_5C916D) > 0x6
	.error "gText_Rom_5C916D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C916D) < 0x6
	.space 0x6 - (. - gText_Rom_5C916D)
	.endif

