	@ src/data/moves_info.h:1109 moves_info_line_1109 (+1 aliases)
	.globl gText_Rom_5C8FD6
gText_Rom_5C8FD6: @ 0x085C8FD6
	.string "なきごえ$"
	.if (. - gText_Rom_5C8FD6) > 0x5
	.error "gText_Rom_5C8FD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8FD6) < 0x5
	.space 0x5 - (. - gText_Rom_5C8FD6)
	.endif
	.globl gUnknown_85C8FDB
gUnknown_85C8FDB: @ 0x085C8FDB
	.incbin "baserom.gba", 0x5c8fdb, 0x2
	.globl gUnknown_85C8FDD
gUnknown_85C8FDD: @ 0x085C8FDD

	@ src/strings.c:59 gText_SizeComparedTo
	.globl gText_Rom_5C8FDD
gText_Rom_5C8FDD: @ 0x085C8FDD
	.string "の おおきさくらべ$"
	.if (. - gText_Rom_5C8FDD) > 0xa
	.error "gText_Rom_5C8FDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8FDD) < 0xa
	.space 0xa - (. - gText_Rom_5C8FDD)
	.endif
	.globl gUnknown_85C8FE7
gUnknown_85C8FE7: @ 0x085C8FE7

	@ src/strings.c:60 gText_PokedexRegistration
	.globl gText_Rom_5C8FE7
gText_Rom_5C8FE7: @ 0x085C8FE7
	.string "ポケモンずかんの とうろく かんりょう!$"
	.if (. - gText_Rom_5C8FE7) > 0x15
	.error "gText_Rom_5C8FE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8FE7) < 0x15
	.space 0x15 - (. - gText_Rom_5C8FE7)
	.endif
	.globl gUnknown_85C8FFC
gUnknown_85C8FFC: @ 0x085C8FFC

	@ src/strings.c:63 gText_SearchingPleaseWait
	.globl gText_Rom_5C8FFC
gText_Rom_5C8FFC: @ 0x085C8FFC
	.string "けんさくを しています……$"
	.if (. - gText_Rom_5C8FFC) > 0xe
	.error "gText_Rom_5C8FFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8FFC) < 0xe
	.space 0xe - (. - gText_Rom_5C8FFC)
	.endif
	.globl gUnknown_85C900A
gUnknown_85C900A: @ 0x085C900A

	@ src/strings.c:64 gText_SearchCompleted
	.globl gText_Rom_5C900A
gText_Rom_5C900A: @ 0x085C900A
	.string "けんさくが しゅうりょう しました!$"
	.if (. - gText_Rom_5C900A) > 0x13
	.error "gText_Rom_5C900A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C900A) < 0x13
	.space 0x13 - (. - gText_Rom_5C900A)
	.endif
	.globl gUnknown_85C901D
gUnknown_85C901D: @ 0x085C901D

	@ src/strings.c:65 gText_NoMatchingPkmnWereFound
	.globl gText_Rom_5C901D
gText_Rom_5C901D: @ 0x085C901D
	.string "がいとう する ポケモンは いませんでした……$"
	.if (. - gText_Rom_5C901D) > 0x18
	.error "gText_Rom_5C901D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C901D) < 0x18
	.space 0x18 - (. - gText_Rom_5C901D)
	.endif

	@ src/strings.c:66 gText_SearchForPkmnBasedOnParameters
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9035
gText_Rom_5C9035: @ 0x085C9035
	.string "じょうけんを していして\nポケモンの けんさくを します$"
	.if (. - gText_Rom_5C9035) != 0x1d
	.error "gText_Rom_5C9035 must retain its original byte length"
	.endif
	.globl gText_Rom_5C904E
	.set gText_Rom_5C904E, gText_Rom_5C9035 + 0x19

	@ src/strings.c:67 gText_SwitchPokedexListings
	.globl gText_Rom_5C9052
gText_Rom_5C9052: @ 0x085C9052
	.string "ずかんリストの ならびを きりかえます$"
	.if (. - gText_Rom_5C9052) > 0x14
	.error "gText_Rom_5C9052 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9052) < 0x14
	.space 0x14 - (. - gText_Rom_5C9052)
	.endif

	@ src/strings.c:68 gText_ReturnToPokedex
	.globl gText_Rom_5C9066
gText_Rom_5C9066: @ 0x085C9066
	.string "ずかんに もどります$"
	.if (. - gText_Rom_5C9066) > 0xb
	.error "gText_Rom_5C9066 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9066) < 0xb
	.space 0xb - (. - gText_Rom_5C9066)
	.endif

	@ src/strings.c:69 gText_SelectPokedexMode
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9071
gText_Rom_5C9071: @ 0x085C9071
	.string "ずかんモードを してい します$"
	.if (. - gText_Rom_5C9071) != 0x10
	.error "gText_Rom_5C9071 must retain its original byte length"
	.endif
	.globl gText_Rom_5C907D
	.set gText_Rom_5C907D, gText_Rom_5C9071 + 0xc

	@ src/strings.c:70 gText_SelectPokedexListingMode
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9081
gText_Rom_5C9081: @ 0x085C9081
	.string "ずかんの ならびを してい します$"
	.if (. - gText_Rom_5C9081) != 0x12
	.error "gText_Rom_5C9081 must retain its original byte length"
	.endif
	.globl gText_Rom_5C908F
	.set gText_Rom_5C908F, gText_Rom_5C9081 + 0xe

	@ src/strings.c:71 gText_ListByFirstLetter
	.globl gText_Rom_5C9093
gText_Rom_5C9093: @ 0x085C9093
	.string "なまえの さいしょの もじを してい します\n /みつけたポケモンのみ$"
	.if (. - gText_Rom_5C9093) > 0x24
	.error "gText_Rom_5C9093 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9093) < 0x24
	.space 0x24 - (. - gText_Rom_5C9093)
	.endif

	@ src/strings.c:72 gText_ListByBodyColor
	.globl gText_Rom_5C90B7
gText_Rom_5C90B7: @ 0x085C90B7
	.string "からだの いろを してい します\n /みつけたポケモンのみ$"
	.if (. - gText_Rom_5C90B7) > 0x1e
	.error "gText_Rom_5C90B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C90B7) < 0x1e
	.space 0x1e - (. - gText_Rom_5C90B7)
	.endif

	@ src/strings.c:73 gText_ListByType
	.globl gText_Rom_5C90D5
gText_Rom_5C90D5: @ 0x085C90D5
	.string "タイプを してい します\n /つかまえたポケモンのみ$"
	.if (. - gText_Rom_5C90D5) > 0x1b
	.error "gText_Rom_5C90D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C90D5) < 0x1b
	.space 0x1b - (. - gText_Rom_5C90D5)
	.endif

	@ src/strings.c:74 gText_ExecuteSearchSwitch
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C90F0
gText_Rom_5C90F0: @ 0x085C90F0
	.string "けんさく/きりかえを じっこうします$"
	.if (. - gText_Rom_5C90F0) != 0x13
	.error "gText_Rom_5C90F0 must retain its original byte length"
	.endif
	.globl gText_Rom_5C90FF
	.set gText_Rom_5C90FF, gText_Rom_5C90F0 + 0xf

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
	.incbin "baserom.gba", 0x5c9180, 0x6

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

