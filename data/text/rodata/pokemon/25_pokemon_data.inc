	@ src/data/pokemon/species_info/gen_3_families.h:26 gen_3_families_line_26
	.globl gText_Rom_2EA99A
gText_Rom_2EA99A: @ 0x082EA99A
	.string "キモリ$"
	.if (. - gText_Rom_2EA99A) > 0x4
	.error "gText_Rom_2EA99A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA99A) < 0x4
	.space 0x4 - (. - gText_Rom_2EA99A)
	.endif
	.incbin "baserom.gba", 0x2ea99e, 0x2

	@ src/data/pokemon/species_info/gen_3_families.h:97 gen_3_families_line_97
	.globl gText_Rom_2EA9A0
gText_Rom_2EA9A0: @ 0x082EA9A0
	.string "ジュプトル$"
	.if (. - gText_Rom_2EA9A0) > 0x6
	.error "gText_Rom_2EA9A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9A0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9A0)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:173 gen_3_families_line_173 (+1 aliases)
	.globl gText_Rom_2EA9A6
gText_Rom_2EA9A6: @ 0x082EA9A6
	.string "ジュカイン$"
	.if (. - gText_Rom_2EA9A6) > 0x6
	.error "gText_Rom_2EA9A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9A6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9A6)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:318 gen_3_families_line_318
	.globl gText_Rom_2EA9AC
gText_Rom_2EA9AC: @ 0x082EA9AC
	.string "アチャモ$"
	.if (. - gText_Rom_2EA9AC) > 0x5
	.error "gText_Rom_2EA9AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9AC) < 0x5
	.space 0x5 - (. - gText_Rom_2EA9AC)
	.endif
	.incbin "baserom.gba", 0x2ea9b1, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:403 gen_3_families_line_403
	.globl gText_Rom_2EA9B2
gText_Rom_2EA9B2: @ 0x082EA9B2
	.string "ワカシャモ$"
	.if (. - gText_Rom_2EA9B2) > 0x6
	.error "gText_Rom_2EA9B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9B2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9B2)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:490 gen_3_families_line_490 (+1 aliases)
	.globl gText_Rom_2EA9B8
gText_Rom_2EA9B8: @ 0x082EA9B8
	.string "バシャーモ$"
	.if (. - gText_Rom_2EA9B8) > 0x6
	.error "gText_Rom_2EA9B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9B8) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9B8)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:650 gen_3_families_line_650
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EA9BE
gText_Rom_2EA9BE: @ 0x082EA9BE
	.string "ミズゴロウ$"
	.if (. - gText_Rom_2EA9BE) != 0x6
	.error "gText_Rom_2EA9BE must retain its original byte length"
	.endif
	.globl gText_Rom_2EA9C0
	.set gText_Rom_2EA9C0, gText_Rom_2EA9BE + 0x2

	@ src/data/pokemon/species_info/gen_3_families.h:721 gen_3_families_line_721
	.globl gText_Rom_2EA9C4
gText_Rom_2EA9C4: @ 0x082EA9C4
	.string "ヌマクロー$"
	.if (. - gText_Rom_2EA9C4) > 0x6
	.error "gText_Rom_2EA9C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9C4) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9C4)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:801 gen_3_families_line_801 (+1 aliases)
	.globl gText_Rom_2EA9CA
gText_Rom_2EA9CA: @ 0x082EA9CA
	.string "ラグラージ$"
	.if (. - gText_Rom_2EA9CA) > 0x6
	.error "gText_Rom_2EA9CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9CA) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9CA)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:958 gen_3_families_line_958 (+3 aliases)
	.globl gText_Rom_2EA9D0
gText_Rom_2EA9D0: @ 0x082EA9D0
	.string "ポチエナ$"
	.if (. - gText_Rom_2EA9D0) > 0x5
	.error "gText_Rom_2EA9D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9D0) < 0x5
	.space 0x5 - (. - gText_Rom_2EA9D0)
	.endif
	.incbin "baserom.gba", 0x2ea9d5, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:1031 gen_3_families_line_1031
	.globl gText_Rom_2EA9D6
gText_Rom_2EA9D6: @ 0x082EA9D6
	.string "グラエナ$"
	.if (. - gText_Rom_2EA9D6) > 0x5
	.error "gText_Rom_2EA9D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9D6) < 0x5
	.space 0x5 - (. - gText_Rom_2EA9D6)
	.endif
	.incbin "baserom.gba", 0x2ea9db, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:1114 gen_3_families_line_1114 (+3 aliases)
	.globl gText_Rom_2EA9DC
gText_Rom_2EA9DC: @ 0x082EA9DC
	.string "ジグザグマ$"
	.if (. - gText_Rom_2EA9DC) > 0x6
	.error "gText_Rom_2EA9DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9DC) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9DC)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:1192 gen_3_families_line_1192 (+1 aliases)
	.globl gText_Rom_2EA9E2
gText_Rom_2EA9E2: @ 0x082EA9E2
	.string "マッスグマ$"
	.if (. - gText_Rom_2EA9E2) > 0x6
	.error "gText_Rom_2EA9E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9E2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9E2)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:1470 gen_3_families_line_1470
	.globl gText_Rom_2EA9E8
gText_Rom_2EA9E8: @ 0x082EA9E8
	.string "ケムッソ$"
	.if (. - gText_Rom_2EA9E8) > 0x5
	.error "gText_Rom_2EA9E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9E8) < 0x5
	.space 0x5 - (. - gText_Rom_2EA9E8)
	.endif
	.incbin "baserom.gba", 0x2ea9ed, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:1541 gen_3_families_line_1541
	.globl gText_Rom_2EA9EE
gText_Rom_2EA9EE: @ 0x082EA9EE
	.string "カラサリス$"
	.if (. - gText_Rom_2EA9EE) > 0x6
	.error "gText_Rom_2EA9EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9EE) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9EE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:1619 gen_3_families_line_1619
	.globl gText_Rom_2EA9F4
gText_Rom_2EA9F4: @ 0x082EA9F4
	.string "アゲハント$"
	.if (. - gText_Rom_2EA9F4) > 0x6
	.error "gText_Rom_2EA9F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9F4) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9F4)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:1713 gen_3_families_line_1713
	.globl gText_Rom_2EA9FA
gText_Rom_2EA9FA: @ 0x082EA9FA
	.string "マユルド$"
	.if (. - gText_Rom_2EA9FA) > 0x5
	.error "gText_Rom_2EA9FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9FA) < 0x5
	.space 0x5 - (. - gText_Rom_2EA9FA)
	.endif
	.incbin "baserom.gba", 0x2ea9ff, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:1795 gen_3_families_line_1795 (+1 aliases)
	.globl gText_Rom_2EAA00
gText_Rom_2EAA00: @ 0x082EAA00
	.string "ドクケイル$"
	.if (. - gText_Rom_2EAA00) > 0x6
	.error "gText_Rom_2EAA00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA00) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA00)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:1891 gen_3_families_line_1891 (+1 aliases)
	.globl gText_Rom_2EAA06
gText_Rom_2EAA06: @ 0x082EAA06
	.string "ハスボー$"
	.if (. - gText_Rom_2EAA06) > 0x5
	.error "gText_Rom_2EAA06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA06) < 0x5
	.space 0x5 - (. - gText_Rom_2EAA06)
	.endif
	.incbin "baserom.gba", 0x2eaa0b, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:1962 gen_3_families_line_1962
	.globl gText_Rom_2EAA0C
gText_Rom_2EAA0C: @ 0x082EAA0C
	.string "ハスブレロ$"
	.if (. - gText_Rom_2EAA0C) > 0x6
	.error "gText_Rom_2EAA0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA0C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA0C)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:2039 gen_3_families_line_2039
	.globl gText_Rom_2EAA12
gText_Rom_2EAA12: @ 0x082EAA12
	.string "ルンパッパ$"
	.if (. - gText_Rom_2EAA12) > 0x6
	.error "gText_Rom_2EAA12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA12) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA12)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:2126 gen_3_families_line_2126
	.globl gText_Rom_2EAA18
gText_Rom_2EAA18: @ 0x082EAA18
	.string "タネボー$"
	.if (. - gText_Rom_2EAA18) > 0x5
	.error "gText_Rom_2EAA18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA18) < 0x5
	.space 0x5 - (. - gText_Rom_2EAA18)
	.endif
	.incbin "baserom.gba", 0x2eaa1d, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:2202 gen_3_families_line_2202
	.globl gText_Rom_2EAA1E
gText_Rom_2EAA1E: @ 0x082EAA1E
	.string "コノハナ$"
	.if (. - gText_Rom_2EAA1E) > 0x5
	.error "gText_Rom_2EAA1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA1E) < 0x5
	.space 0x5 - (. - gText_Rom_2EAA1E)
	.endif
	.incbin "baserom.gba", 0x2eaa23, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:2300 gen_3_families_line_2300
	.globl gText_Rom_2EAA24
gText_Rom_2EAA24: @ 0x082EAA24
	.string "ダーテング$"
	.if (. - gText_Rom_2EAA24) > 0x6
	.error "gText_Rom_2EAA24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA24) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA24)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3690 gen_3_families_line_3690 (+1 aliases)
	.globl gText_Rom_2EAA2A
gText_Rom_2EAA2A: @ 0x082EAA2A
	.string "ツチニン$"
	.if (. - gText_Rom_2EAA2A) > 0x5
	.error "gText_Rom_2EAA2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA2A) < 0x5
	.space 0x5 - (. - gText_Rom_2EAA2A)
	.endif
	.incbin "baserom.gba", 0x2eaa2f, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:3766 gen_3_families_line_3766
	.globl gText_Rom_2EAA30
gText_Rom_2EAA30: @ 0x082EAA30
	.string "テッカニン$"
	.if (. - gText_Rom_2EAA30) > 0x6
	.error "gText_Rom_2EAA30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA30) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA30)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3849 gen_3_families_line_3849 (+2 aliases)
	.globl gText_Rom_2EAA36
gText_Rom_2EAA36: @ 0x082EAA36
	.string "ヌケニン$"
	.if (. - gText_Rom_2EAA36) > 0x5
	.error "gText_Rom_2EAA36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA36) < 0x5
	.space 0x5 - (. - gText_Rom_2EAA36)
	.endif
	.incbin "baserom.gba", 0x2eaa3b, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:2382 gen_3_families_line_2382 (+1 aliases)
	.globl gText_Rom_2EAA3C
gText_Rom_2EAA3C: @ 0x082EAA3C
	.string "スバメ$"
	.if (. - gText_Rom_2EAA3C) > 0x4
	.error "gText_Rom_2EAA3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA3C) < 0x4
	.space 0x4 - (. - gText_Rom_2EAA3C)
	.endif
	.incbin "baserom.gba", 0x2eaa40, 0x2

	@ src/data/pokemon/species_info/gen_3_families.h:2464 gen_3_families_line_2464
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EAA42
gText_Rom_2EAA42: @ 0x082EAA42
	.string "オオスバメ$"
	.if (. - gText_Rom_2EAA42) != 0x6
	.error "gText_Rom_2EAA42 must retain its original byte length"
	.endif
	.globl gText_Rom_2EAA44
	.set gText_Rom_2EAA44, gText_Rom_2EAA42 + 0x2

	@ src/data/pokemon/species_info/gen_3_families.h:3312 gen_3_families_line_3312 (+1 aliases)
	.globl gText_Rom_2EAA48
gText_Rom_2EAA48: @ 0x082EAA48
	.string "キノココ$"
	.if (. - gText_Rom_2EAA48) > 0x5
	.error "gText_Rom_2EAA48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA48) < 0x5
	.space 0x5 - (. - gText_Rom_2EAA48)
	.endif
	.incbin "baserom.gba", 0x2eaa4d, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:3395 gen_3_families_line_3395
	.globl gText_Rom_2EAA4E
gText_Rom_2EAA4E: @ 0x082EAA4E
	.string "キノガッサ$"
	.if (. - gText_Rom_2EAA4E) > 0x6
	.error "gText_Rom_2EAA4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA4E) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA4E)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7267 gen_3_families_line_7267
	.globl gText_Rom_2EAA54
gText_Rom_2EAA54: @ 0x082EAA54
	.string "パッチール$"
	.if (. - gText_Rom_2EAA54) > 0x6
	.error "gText_Rom_2EAA54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA54) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA54)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:2538 gen_3_families_line_2538 (+1 aliases)
	.globl gText_Rom_2EAA5A
gText_Rom_2EAA5A: @ 0x082EAA5A
	.string "キャモメ$"
	.if (. - gText_Rom_2EAA5A) > 0x5
	.error "gText_Rom_2EAA5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA5A) < 0x5
	.space 0x5 - (. - gText_Rom_2EAA5A)
	.endif
	.incbin "baserom.gba", 0x2eaa5f, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:2619 gen_3_families_line_2619
	.globl gText_Rom_2EAA60
gText_Rom_2EAA60: @ 0x082EAA60
	.string "ペリッパー$"
	.if (. - gText_Rom_2EAA60) > 0x6
	.error "gText_Rom_2EAA60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA60) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA60)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3150 gen_3_families_line_3150
	.globl gText_Rom_2EAA66
gText_Rom_2EAA66: @ 0x082EAA66
	.string "アメタマ$"
	.if (. - gText_Rom_2EAA66) > 0x5
	.error "gText_Rom_2EAA66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA66) < 0x5
	.space 0x5 - (. - gText_Rom_2EAA66)
	.endif
	.incbin "baserom.gba", 0x2eaa6b, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:3229 gen_3_families_line_3229
	.globl gText_Rom_2EAA6C
gText_Rom_2EAA6C: @ 0x082EAA6C
	.string "アメモース$"
	.if (. - gText_Rom_2EAA6C) > 0x6
	.error "gText_Rom_2EAA6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA6C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA6C)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:6637 gen_3_families_line_6637
	.globl gText_Rom_2EAA72
gText_Rom_2EAA72: @ 0x082EAA72
	.string "ホエルコ$"
	.if (. - gText_Rom_2EAA72) > 0x5
	.error "gText_Rom_2EAA72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA72) < 0x5
	.space 0x5 - (. - gText_Rom_2EAA72)
	.endif
	.incbin "baserom.gba", 0x2eaa77, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:6710 gen_3_families_line_6710
	.globl gText_Rom_2EAA78
gText_Rom_2EAA78: @ 0x082EAA78
	.string "ホエルオー$"
	.if (. - gText_Rom_2EAA78) > 0x6
	.error "gText_Rom_2EAA78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA78) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA78)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:4448 gen_3_families_line_4448
	.globl gText_Rom_2EAA7E
gText_Rom_2EAA7E: @ 0x082EAA7E
	.string "エネコ$"
	.if (. - gText_Rom_2EAA7E) > 0x4
	.error "gText_Rom_2EAA7E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA7E) < 0x4
	.space 0x4 - (. - gText_Rom_2EAA7E)
	.endif
	.incbin "baserom.gba", 0x2eaa82, 0x2

	@ src/data/pokemon/species_info/gen_3_families.h:4528 gen_3_families_line_4528
	.globl gText_Rom_2EAA84
gText_Rom_2EAA84: @ 0x082EAA84
	.string "エネコロロ$"
	.if (. - gText_Rom_2EAA84) > 0x6
	.error "gText_Rom_2EAA84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA84) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA84)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:9543 gen_3_families_line_9543
	.globl gText_Rom_2EAA8A
gText_Rom_2EAA8A: @ 0x082EAA8A
	.string "カクレオン$"
	.if (. - gText_Rom_2EAA8A) > 0x6
	.error "gText_Rom_2EAA8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA8A) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA8A)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8585 gen_3_families_line_8585
	.globl gText_Rom_2EAA90
gText_Rom_2EAA90: @ 0x082EAA90
	.string "ヤジロン$"
	.if (. - gText_Rom_2EAA90) > 0x5
	.error "gText_Rom_2EAA90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA90) < 0x5
	.space 0x5 - (. - gText_Rom_2EAA90)
	.endif
	.incbin "baserom.gba", 0x2eaa95, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:8659 gen_3_families_line_8659
	.globl gText_Rom_2EAA96
gText_Rom_2EAA96: @ 0x082EAA96
	.string "ネンドール$"
	.if (. - gText_Rom_2EAA96) > 0x6
	.error "gText_Rom_2EAA96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA96) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA96)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:4292 gen_3_families_line_4292
	.globl gText_Rom_2EAA9C
gText_Rom_2EAA9C: @ 0x082EAA9C
	.string "ノズパス$"
	.if (. - gText_Rom_2EAA9C) > 0x5
	.error "gText_Rom_2EAA9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA9C) < 0x5
	.space 0x5 - (. - gText_Rom_2EAA9C)
	.endif
	.incbin "baserom.gba", 0x2eaaa1, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:7041 gen_3_families_line_7041
	.globl gText_Rom_2EAAA2
gText_Rom_2EAAA2: @ 0x082EAAA2
	.string "コータス$"
	.if (. - gText_Rom_2EAAA2) > 0x5
	.error "gText_Rom_2EAAA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAA2) < 0x5
	.space 0x5 - (. - gText_Rom_2EAAA2)
	.endif
	.incbin "baserom.gba", 0x2eaaa7, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:4603 gen_3_families_line_4603 (+1 aliases)
	.globl gText_Rom_2EAAA8
gText_Rom_2EAAA8: @ 0x082EAAA8
	.string "ヤミラミ$"
	.if (. - gText_Rom_2EAAA8) > 0x5
	.error "gText_Rom_2EAAA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAA8) < 0x5
	.space 0x5 - (. - gText_Rom_2EAAA8)
	.endif
	.incbin "baserom.gba", 0x2eaaad, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:8277 gen_3_families_line_8277
	.globl gText_Rom_2EAAAE
gText_Rom_2EAAAE: @ 0x082EAAAE
	.string "ドジョッチ$"
	.if (. - gText_Rom_2EAAAE) > 0x6
	.error "gText_Rom_2EAAAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAAE) < 0x6
	.space 0x6 - (. - gText_Rom_2EAAAE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8361 gen_3_families_line_8361
	.globl gText_Rom_2EAAB4
gText_Rom_2EAAB4: @ 0x082EAAB4
	.string "ナマズン$"
	.if (. - gText_Rom_2EAAB4) > 0x5
	.error "gText_Rom_2EAAB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAB4) < 0x5
	.space 0x5 - (. - gText_Rom_2EAAB4)
	.endif
	.incbin "baserom.gba", 0x2eaab9, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:11534 gen_3_families_line_11534
	.globl gText_Rom_2EAABA
gText_Rom_2EAABA: @ 0x082EAABA
	.string "ラブカス$"
	.if (. - gText_Rom_2EAABA) > 0x5
	.error "gText_Rom_2EAABA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAABA) < 0x5
	.space 0x5 - (. - gText_Rom_2EAABA)
	.endif
	.incbin "baserom.gba", 0x2eaabf, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:8440 gen_3_families_line_8440
	.globl gText_Rom_2EAAC0
gText_Rom_2EAAC0: @ 0x082EAAC0
	.string "ヘイガニ$"
	.if (. - gText_Rom_2EAAC0) > 0x5
	.error "gText_Rom_2EAAC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAC0) < 0x5
	.space 0x5 - (. - gText_Rom_2EAAC0)
	.endif
	.incbin "baserom.gba", 0x2eaac5, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:8513 gen_3_families_line_8513
	.globl gText_Rom_2EAAC6
gText_Rom_2EAAC6: @ 0x082EAAC6
	.string "シザリガー$"
	.if (. - gText_Rom_2EAAC6) > 0x6
	.error "gText_Rom_2EAAC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAC6) < 0x6
	.space 0x6 - (. - gText_Rom_2EAAC6)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:9052 gen_3_families_line_9052
	.globl gText_Rom_2EAACC
gText_Rom_2EAACC: @ 0x082EAACC
	.string "ヒンバス$"
	.if (. - gText_Rom_2EAACC) > 0x5
	.error "gText_Rom_2EAACC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAACC) < 0x5
	.space 0x5 - (. - gText_Rom_2EAACC)
	.endif
	.incbin "baserom.gba", 0x2eaad1, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:9131 gen_3_families_line_9131
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EAAD2
gText_Rom_2EAAD2: @ 0x082EAAD2
	.string "ミロカロス$"
	.if (. - gText_Rom_2EAAD2) != 0x6
	.error "gText_Rom_2EAAD2 must retain its original byte length"
	.endif
	.globl gText_Rom_2EAAD4
	.set gText_Rom_2EAAD4, gText_Rom_2EAAD2 + 0x2

	@ src/data/pokemon/species_info/gen_3_families.h:6408 gen_3_families_line_6408 (+1 aliases)
	.globl gText_Rom_2EAAD8
gText_Rom_2EAAD8: @ 0x082EAAD8
	.string "キバニア$"
	.if (. - gText_Rom_2EAAD8) > 0x5
	.error "gText_Rom_2EAAD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAD8) < 0x5
	.space 0x5 - (. - gText_Rom_2EAAD8)
	.endif
	.incbin "baserom.gba", 0x2eaadd, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:6484 gen_3_families_line_6484 (+1 aliases)
	.globl gText_Rom_2EAADE
gText_Rom_2EAADE: @ 0x082EAADE
	.string "サメハダー$"
	.if (. - gText_Rom_2EAADE) > 0x6
	.error "gText_Rom_2EAADE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAADE) < 0x6
	.space 0x6 - (. - gText_Rom_2EAADE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7350 gen_3_families_line_7350
	.globl gText_Rom_2EAAE4
gText_Rom_2EAAE4: @ 0x082EAAE4
	.string "ナックラー$"
	.if (. - gText_Rom_2EAAE4) > 0x6
	.error "gText_Rom_2EAAE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAE4) < 0x6
	.space 0x6 - (. - gText_Rom_2EAAE4)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7422 gen_3_families_line_7422
	.globl gText_Rom_2EAAEA
gText_Rom_2EAAEA: @ 0x082EAAEA
	.string "ビブラーバ$"
	.if (. - gText_Rom_2EAAEA) > 0x6
	.error "gText_Rom_2EAAEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAEA) < 0x6
	.space 0x6 - (. - gText_Rom_2EAAEA)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7501 gen_3_families_line_7501
	.globl gText_Rom_2EAAF0
gText_Rom_2EAAF0: @ 0x082EAAF0
	.string "フライゴン$"
	.if (. - gText_Rom_2EAAF0) > 0x6
	.error "gText_Rom_2EAAF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAF0) < 0x6
	.space 0x6 - (. - gText_Rom_2EAAF0)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:4145 gen_3_families_line_4145
	.globl gText_Rom_2EAAF6
gText_Rom_2EAAF6: @ 0x082EAAF6
	.string "マクノシタ$"
	.if (. - gText_Rom_2EAAF6) > 0x6
	.error "gText_Rom_2EAAF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAF6) < 0x6
	.space 0x6 - (. - gText_Rom_2EAAF6)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:4221 gen_3_families_line_4221
	.globl gText_Rom_2EAAFC
gText_Rom_2EAAFC: @ 0x082EAAFC
	.string "ハリテヤマ$"
	.if (. - gText_Rom_2EAAFC) > 0x6
	.error "gText_Rom_2EAAFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAFC) < 0x6
	.space 0x6 - (. - gText_Rom_2EAAFC)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:5451 gen_3_families_line_5451
	.globl gText_Rom_2EAB02
gText_Rom_2EAB02: @ 0x082EAB02
	.string "ラクライ$"
	.if (. - gText_Rom_2EAB02) > 0x5
	.error "gText_Rom_2EAB02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB02) < 0x5
	.space 0x5 - (. - gText_Rom_2EAB02)
	.endif
	.incbin "baserom.gba", 0x2eab07, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:5522 gen_3_families_line_5522 (+1 aliases)
	.globl gText_Rom_2EAB08
gText_Rom_2EAB08: @ 0x082EAB08
	.string "ライボルト$"
	.if (. - gText_Rom_2EAB08) > 0x6
	.error "gText_Rom_2EAB08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB08) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB08)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:6784 gen_3_families_line_6784
	.globl gText_Rom_2EAB0E
gText_Rom_2EAB0E: @ 0x082EAB0E
	.string "ドンメル$"
	.if (. - gText_Rom_2EAB0E) > 0x5
	.error "gText_Rom_2EAB0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB0E) < 0x5
	.space 0x5 - (. - gText_Rom_2EAB0E)
	.endif
	.incbin "baserom.gba", 0x2eab13, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:6873 gen_3_families_line_6873 (+1 aliases)
	.globl gText_Rom_2EAB14
gText_Rom_2EAB14: @ 0x082EAB14
	.string "バクーダ$"
	.if (. - gText_Rom_2EAB14) > 0x5
	.error "gText_Rom_2EAB14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB14) < 0x5
	.space 0x5 - (. - gText_Rom_2EAB14)
	.endif
	.incbin "baserom.gba", 0x2eab19, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:10997 gen_3_families_line_10997
	.globl gText_Rom_2EAB1A
gText_Rom_2EAB1A: @ 0x082EAB1A
	.string "タマザラシ$"
	.if (. - gText_Rom_2EAB1A) > 0x6
	.error "gText_Rom_2EAB1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB1A) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB1A)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11076 gen_3_families_line_11076
	.globl gText_Rom_2EAB20
gText_Rom_2EAB20: @ 0x082EAB20
	.string "トドグラー$"
	.if (. - gText_Rom_2EAB20) > 0x6
	.error "gText_Rom_2EAB20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB20) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB20)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11156 gen_3_families_line_11156
	.globl gText_Rom_2EAB26
gText_Rom_2EAB26: @ 0x082EAB26
	.string "トドゼルガ$"
	.if (. - gText_Rom_2EAB26) > 0x6
	.error "gText_Rom_2EAB26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB26) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB26)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7576 gen_3_families_line_7576
	.globl gText_Rom_2EAB2C
gText_Rom_2EAB2C: @ 0x082EAB2C
	.string "サボネア$"
	.if (. - gText_Rom_2EAB2C) > 0x5
	.error "gText_Rom_2EAB2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB2C) < 0x5
	.space 0x5 - (. - gText_Rom_2EAB2C)
	.endif
	.incbin "baserom.gba", 0x2eab31, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:7655 gen_3_families_line_7655
	.globl gText_Rom_2EAB32
gText_Rom_2EAB32: @ 0x082EAB32
	.string "ノクタス$"
	.if (. - gText_Rom_2EAB32) > 0x5
	.error "gText_Rom_2EAB32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB32) < 0x5
	.space 0x5 - (. - gText_Rom_2EAB32)
	.endif
	.incbin "baserom.gba", 0x2eab37, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:10633 gen_3_families_line_10633
	.globl gText_Rom_2EAB38
gText_Rom_2EAB38: @ 0x082EAB38
	.string "ユキワラシ$"
	.if (. - gText_Rom_2EAB38) > 0x6
	.error "gText_Rom_2EAB38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB38) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB38)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:10713 gen_3_families_line_10713 (+1 aliases)
	.globl gText_Rom_2EAB3E
gText_Rom_2EAB3E: @ 0x082EAB3E
	.string "オニゴーリ$"
	.if (. - gText_Rom_2EAB3E) > 0x6
	.error "gText_Rom_2EAB3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB3E) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB3E)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8121 gen_3_families_line_8121
	.globl gText_Rom_2EAB44
gText_Rom_2EAB44: @ 0x082EAB44
	.string "ルナトーン$"
	.if (. - gText_Rom_2EAB44) > 0x6
	.error "gText_Rom_2EAB44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB44) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB44)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8201 gen_3_families_line_8201
	.globl gText_Rom_2EAB4A
gText_Rom_2EAB4A: @ 0x082EAB4A
	.string "ソルロック$"
	.if (. - gText_Rom_2EAB4A) > 0x6
	.error "gText_Rom_2EAB4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB4A) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB4A)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:2319 gen_2_families_line_2319 (+1 aliases)
	.globl gText_Rom_2EAB50
gText_Rom_2EAB50: @ 0x082EAB50
	.string "ルリリ$"
	.if (. - gText_Rom_2EAB50) > 0x4
	.error "gText_Rom_2EAB50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB50) < 0x4
	.space 0x4 - (. - gText_Rom_2EAB50)
	.endif
	.incbin "baserom.gba", 0x2eab54, 0x2

	@ src/data/pokemon/species_info/gen_3_families.h:7113 gen_3_families_line_7113
	.globl gText_Rom_2EAB56
gText_Rom_2EAB56: @ 0x082EAB56
	.string "バネブー$"
	.if (. - gText_Rom_2EAB56) > 0x5
	.error "gText_Rom_2EAB56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB56) < 0x5
	.space 0x5 - (. - gText_Rom_2EAB56)
	.endif
	.incbin "baserom.gba", 0x2eab5b, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:7190 gen_3_families_line_7190
	.globl gText_Rom_2EAB5C
gText_Rom_2EAB5C: @ 0x082EAB5C
	.string "ブーピッグ$"
	.if (. - gText_Rom_2EAB5C) > 0x6
	.error "gText_Rom_2EAB5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB5C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB5C)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:5673 gen_3_families_line_5673
	.globl gText_Rom_2EAB62
gText_Rom_2EAB62: @ 0x082EAB62
	.string "プラスル$"
	.if (. - gText_Rom_2EAB62) > 0x5
	.error "gText_Rom_2EAB62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB62) < 0x5
	.space 0x5 - (. - gText_Rom_2EAB62)
	.endif
	.incbin "baserom.gba", 0x2eab67, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:5750 gen_3_families_line_5750
	.globl gText_Rom_2EAB68
gText_Rom_2EAB68: @ 0x082EAB68
	.string "マイナン$"
	.if (. - gText_Rom_2EAB68) > 0x5
	.error "gText_Rom_2EAB68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB68) < 0x5
	.space 0x5 - (. - gText_Rom_2EAB68)
	.endif
	.incbin "baserom.gba", 0x2eab6d, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:4759 gen_3_families_line_4759 (+1 aliases)
	.globl gText_Rom_2EAB6E
gText_Rom_2EAB6E: @ 0x082EAB6E
	.string "クチート$"
	.if (. - gText_Rom_2EAB6E) > 0x5
	.error "gText_Rom_2EAB6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB6E) < 0x5
	.space 0x5 - (. - gText_Rom_2EAB6E)
	.endif
	.incbin "baserom.gba", 0x2eab73, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:5207 gen_3_families_line_5207
	.globl gText_Rom_2EAB74
gText_Rom_2EAB74: @ 0x082EAB74
	.string "アサナン$"
	.if (. - gText_Rom_2EAB74) > 0x5
	.error "gText_Rom_2EAB74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB74) < 0x5
	.space 0x5 - (. - gText_Rom_2EAB74)
	.endif
	.incbin "baserom.gba", 0x2eab79, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:5289 gen_3_families_line_5289 (+1 aliases)
	.globl gText_Rom_2EAB7A
gText_Rom_2EAB7A: @ 0x082EAB7A
	.string "チャーレム$"
	.if (. - gText_Rom_2EAB7A) > 0x6
	.error "gText_Rom_2EAB7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB7A) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB7A)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7737 gen_3_families_line_7737
	.globl gText_Rom_2EAB80
gText_Rom_2EAB80: @ 0x082EAB80
	.string "チルット$"
	.if (. - gText_Rom_2EAB80) > 0x5
	.error "gText_Rom_2EAB80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB80) < 0x5
	.space 0x5 - (. - gText_Rom_2EAB80)
	.endif
	.incbin "baserom.gba", 0x2eab85, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:7811 gen_3_families_line_7811 (+1 aliases)
	.globl gText_Rom_2EAB86
gText_Rom_2EAB86: @ 0x082EAB86
	.string "チルタリス$"
	.if (. - gText_Rom_2EAB86) > 0x6
	.error "gText_Rom_2EAB86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB86) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB86)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4164 gen_2_families_line_4164
	.globl gText_Rom_2EAB8C
gText_Rom_2EAB8C: @ 0x082EAB8C
	.string "ソーナノ$"
	.if (. - gText_Rom_2EAB8C) > 0x5
	.error "gText_Rom_2EAB8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB8C) < 0x5
	.space 0x5 - (. - gText_Rom_2EAB8C)
	.endif
	.incbin "baserom.gba", 0x2eab91, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:9859 gen_3_families_line_9859
	.globl gText_Rom_2EAB92
gText_Rom_2EAB92: @ 0x082EAB92
	.string "ヨマワル$"
	.if (. - gText_Rom_2EAB92) > 0x5
	.error "gText_Rom_2EAB92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB92) < 0x5
	.space 0x5 - (. - gText_Rom_2EAB92)
	.endif
	.incbin "baserom.gba", 0x2eab97, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:9937 gen_3_families_line_9937
	.globl gText_Rom_2EAB98
gText_Rom_2EAB98: @ 0x082EAB98
	.string "サマヨール$"
	.if (. - gText_Rom_2EAB98) > 0x6
	.error "gText_Rom_2EAB98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB98) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB98)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:6059 gen_3_families_line_6059
	.globl gText_Rom_2EAB9E
gText_Rom_2EAB9E: @ 0x082EAB9E
	.string "ロゼリア$"
	.if (. - gText_Rom_2EAB9E) > 0x5
	.error "gText_Rom_2EAB9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB9E) < 0x5
	.space 0x5 - (. - gText_Rom_2EAB9E)
	.endif
	.incbin "baserom.gba", 0x2eaba3, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:3466 gen_3_families_line_3466 (+1 aliases)
	.globl gText_Rom_2EABA4
gText_Rom_2EABA4: @ 0x082EABA4
	.string "ナマケロ$"
	.if (. - gText_Rom_2EABA4) > 0x5
	.error "gText_Rom_2EABA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABA4) < 0x5
	.space 0x5 - (. - gText_Rom_2EABA4)
	.endif
	.incbin "baserom.gba", 0x2eaba9, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:3538 gen_3_families_line_3538
	.globl gText_Rom_2EABAA
gText_Rom_2EABAA: @ 0x082EABAA
	.string "ヤルキモノ$"
	.if (. - gText_Rom_2EABAA) > 0x6
	.error "gText_Rom_2EABAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABAA) < 0x6
	.space 0x6 - (. - gText_Rom_2EABAA)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3616 gen_3_families_line_3616
	.globl gText_Rom_2EABB0
gText_Rom_2EABB0: @ 0x082EABB0
	.string "ケッキング$"
	.if (. - gText_Rom_2EABB0) > 0x6
	.error "gText_Rom_2EABB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABB0) < 0x6
	.space 0x6 - (. - gText_Rom_2EABB0)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:6238 gen_3_families_line_6238
	.globl gText_Rom_2EABB6
gText_Rom_2EABB6: @ 0x082EABB6
	.string "ゴクリン$"
	.if (. - gText_Rom_2EABB6) > 0x5
	.error "gText_Rom_2EABB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABB6) < 0x5
	.space 0x5 - (. - gText_Rom_2EABB6)
	.endif
	.incbin "baserom.gba", 0x2eabbb, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:6324 gen_3_families_line_6324
	.globl gText_Rom_2EABBC
gText_Rom_2EABBC: @ 0x082EABBC
	.string "マルノーム$"
	.if (. - gText_Rom_2EABBC) > 0x6
	.error "gText_Rom_2EABBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABBC) < 0x6
	.space 0x6 - (. - gText_Rom_2EABBC)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:10106 gen_3_families_line_10106
	.globl gText_Rom_2EABC2
gText_Rom_2EABC2: @ 0x082EABC2
	.string "トロピウス$"
	.if (. - gText_Rom_2EABC2) > 0x6
	.error "gText_Rom_2EABC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABC2) < 0x6
	.space 0x6 - (. - gText_Rom_2EABC2)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3921 gen_3_families_line_3921
	.globl gText_Rom_2EABC8
gText_Rom_2EABC8: @ 0x082EABC8
	.string "ゴニョニョ$"
	.if (. - gText_Rom_2EABC8) > 0x6
	.error "gText_Rom_2EABC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABC8) < 0x6
	.space 0x6 - (. - gText_Rom_2EABC8)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3997 gen_3_families_line_3997
	.globl gText_Rom_2EABCE
gText_Rom_2EABCE: @ 0x082EABCE
	.string "ドゴーム$"
	.if (. - gText_Rom_2EABCE) > 0x5
	.error "gText_Rom_2EABCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABCE) < 0x5
	.space 0x5 - (. - gText_Rom_2EABCE)
	.endif
	.incbin "baserom.gba", 0x2eabd3, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:4075 gen_3_families_line_4075
	.globl gText_Rom_2EABD4
gText_Rom_2EABD4: @ 0x082EABD4
	.string "バクオング$"
	.if (. - gText_Rom_2EABD4) > 0x6
	.error "gText_Rom_2EABD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABD4) < 0x6
	.space 0x6 - (. - gText_Rom_2EABD4)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11229 gen_3_families_line_11229
	.globl gText_Rom_2EABDA
gText_Rom_2EABDA: @ 0x082EABDA
	.string "パールル$"
	.if (. - gText_Rom_2EABDA) > 0x5
	.error "gText_Rom_2EABDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABDA) < 0x5
	.space 0x5 - (. - gText_Rom_2EABDA)
	.endif
	.incbin "baserom.gba", 0x2eabdf, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:11305 gen_3_families_line_11305
	.globl gText_Rom_2EABE0
gText_Rom_2EABE0: @ 0x082EABE0
	.string "ハンテール$"
	.if (. - gText_Rom_2EABE0) > 0x6
	.error "gText_Rom_2EABE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABE0) < 0x6
	.space 0x6 - (. - gText_Rom_2EABE0)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11375 gen_3_families_line_11375
	.globl gText_Rom_2EABE6
gText_Rom_2EABE6: @ 0x082EABE6
	.string "サクラビス$"
	.if (. - gText_Rom_2EABE6) > 0x6
	.error "gText_Rom_2EABE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABE6) < 0x6
	.space 0x6 - (. - gText_Rom_2EABE6)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:10416 gen_3_families_line_10416 (+2 aliases)
	.globl gText_Rom_2EABEC
gText_Rom_2EABEC: @ 0x082EABEC
	.string "アブソル$"
	.if (. - gText_Rom_2EABEC) > 0x5
	.error "gText_Rom_2EABEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABEC) < 0x5
	.space 0x5 - (. - gText_Rom_2EABEC)
	.endif
	.incbin "baserom.gba", 0x2eabf1, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:9621 gen_3_families_line_9621
	.globl gText_Rom_2EABF2
gText_Rom_2EABF2: @ 0x082EABF2
	.string "カゲボウズ$"
	.if (. - gText_Rom_2EABF2) > 0x6
	.error "gText_Rom_2EABF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABF2) < 0x6
	.space 0x6 - (. - gText_Rom_2EABF2)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:9701 gen_3_families_line_9701 (+1 aliases)
	.globl gText_Rom_2EABF8
gText_Rom_2EABF8: @ 0x082EABF8
	.string "ジュペッタ$"
	.if (. - gText_Rom_2EABF8) > 0x6
	.error "gText_Rom_2EABF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABF8) < 0x6
	.space 0x6 - (. - gText_Rom_2EABF8)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8039 gen_3_families_line_8039
	.globl gText_Rom_2EABFE
gText_Rom_2EABFE: @ 0x082EABFE
	.string "ハブネーク$"
	.if (. - gText_Rom_2EABFE) > 0x6
	.error "gText_Rom_2EABFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABFE) < 0x6
	.space 0x6 - (. - gText_Rom_2EABFE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7962 gen_3_families_line_7962
	.globl gText_Rom_2EAC04
gText_Rom_2EAC04: @ 0x082EAC04
	.string "ザングース$"
	.if (. - gText_Rom_2EAC04) > 0x6
	.error "gText_Rom_2EAC04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC04) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC04)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11448 gen_3_families_line_11448
	.globl gText_Rom_2EAC0A
gText_Rom_2EAC0A: @ 0x082EAC0A
	.string "ジーランス$"
	.if (. - gText_Rom_2EAC0A) > 0x6
	.error "gText_Rom_2EAC0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC0A) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC0A)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:4912 gen_3_families_line_4912
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EAC10
gText_Rom_2EAC10: @ 0x082EAC10
	.string "ココドラ$"
	.if (. - gText_Rom_2EAC10) != 0x5
	.error "gText_Rom_2EAC10 must retain its original byte length"
	.endif
	.globl gText_Rom_2EAC11
	.set gText_Rom_2EAC11, gText_Rom_2EAC10 + 0x1
	.incbin "baserom.gba", 0x2eac15, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:4984 gen_3_families_line_4984
	.globl gText_Rom_2EAC16
gText_Rom_2EAC16: @ 0x082EAC16
	.string "コドラ$"
	.if (. - gText_Rom_2EAC16) > 0x4
	.error "gText_Rom_2EAC16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC16) < 0x4
	.space 0x4 - (. - gText_Rom_2EAC16)
	.endif
	.incbin "baserom.gba", 0x2eac1a, 0x2

	@ src/data/pokemon/species_info/gen_3_families.h:5061 gen_3_families_line_5061 (+1 aliases)
	.globl gText_Rom_2EAC1C
gText_Rom_2EAC1C: @ 0x082EAC1C
	.string "ボスゴドラ$"
	.if (. - gText_Rom_2EAC1C) > 0x6
	.error "gText_Rom_2EAC1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC1C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC1C)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:9220 gen_3_families_line_9220 (+3 aliases)
	.globl gText_Rom_2EAC22
gText_Rom_2EAC22: @ 0x082EAC22
	.string "ポワルン$"
	.if (. - gText_Rom_2EAC22) > 0x5
	.error "gText_Rom_2EAC22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC22) < 0x5
	.space 0x5 - (. - gText_Rom_2EAC22)
	.endif
	.incbin "baserom.gba", 0x2eac27, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:5829 gen_3_families_line_5829
	.globl gText_Rom_2EAC28
gText_Rom_2EAC28: @ 0x082EAC28
	.string "バルビート$"
	.if (. - gText_Rom_2EAC28) > 0x6
	.error "gText_Rom_2EAC28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC28) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC28)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:5912 gen_3_families_line_5912
	.globl gText_Rom_2EAC2E
gText_Rom_2EAC2E: @ 0x082EAC2E
	.string "イルミーゼ$"
	.if (. - gText_Rom_2EAC2E) > 0x6
	.error "gText_Rom_2EAC2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC2E) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC2E)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8740 gen_3_families_line_8740
	.globl gText_Rom_2EAC34
gText_Rom_2EAC34: @ 0x082EAC34
	.string "リリーラ$"
	.if (. - gText_Rom_2EAC34) > 0x5
	.error "gText_Rom_2EAC34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC34) < 0x5
	.space 0x5 - (. - gText_Rom_2EAC34)
	.endif
	.incbin "baserom.gba", 0x2eac39, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:8818 gen_3_families_line_8818
	.globl gText_Rom_2EAC3A
gText_Rom_2EAC3A: @ 0x082EAC3A
	.string "ユレイドル$"
	.if (. - gText_Rom_2EAC3A) > 0x6
	.error "gText_Rom_2EAC3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC3A) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC3A)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8897 gen_3_families_line_8897
	.globl gText_Rom_2EAC40
gText_Rom_2EAC40: @ 0x082EAC40
	.string "アノプス$"
	.if (. - gText_Rom_2EAC40) > 0x5
	.error "gText_Rom_2EAC40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC40) < 0x5
	.space 0x5 - (. - gText_Rom_2EAC40)
	.endif
	.incbin "baserom.gba", 0x2eac45, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:8976 gen_3_families_line_8976
	.globl gText_Rom_2EAC46
gText_Rom_2EAC46: @ 0x082EAC46
	.string "アーマルド$"
	.if (. - gText_Rom_2EAC46) > 0x6
	.error "gText_Rom_2EAC46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC46) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC46)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:2703 gen_3_families_line_2703 (+1 aliases)
	.globl gText_Rom_2EAC4C
gText_Rom_2EAC4C: @ 0x082EAC4C
	.string "ラルトス$"
	.if (. - gText_Rom_2EAC4C) > 0x5
	.error "gText_Rom_2EAC4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC4C) < 0x5
	.space 0x5 - (. - gText_Rom_2EAC4C)
	.endif
	.incbin "baserom.gba", 0x2eac51, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:2772 gen_3_families_line_2772
	.globl gText_Rom_2EAC52
gText_Rom_2EAC52: @ 0x082EAC52
	.string "キルリア$"
	.if (. - gText_Rom_2EAC52) > 0x5
	.error "gText_Rom_2EAC52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC52) < 0x5
	.space 0x5 - (. - gText_Rom_2EAC52)
	.endif
	.incbin "baserom.gba", 0x2eac57, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:2850 gen_3_families_line_2850 (+1 aliases)
	.globl gText_Rom_2EAC58
gText_Rom_2EAC58: @ 0x082EAC58
	.string "サーナイト$"
	.if (. - gText_Rom_2EAC58) > 0x6
	.error "gText_Rom_2EAC58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC58) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC58)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11607 gen_3_families_line_11607
	.globl gText_Rom_2EAC5E
gText_Rom_2EAC5E: @ 0x082EAC5E
	.string "タツベイ$"
	.if (. - gText_Rom_2EAC5E) > 0x5
	.error "gText_Rom_2EAC5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC5E) < 0x5
	.space 0x5 - (. - gText_Rom_2EAC5E)
	.endif
	.incbin "baserom.gba", 0x2eac63, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:11679 gen_3_families_line_11679
	.globl gText_Rom_2EAC64
gText_Rom_2EAC64: @ 0x082EAC64
	.string "コモルー$"
	.if (. - gText_Rom_2EAC64) > 0x5
	.error "gText_Rom_2EAC64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC64) < 0x5
	.space 0x5 - (. - gText_Rom_2EAC64)
	.endif
	.incbin "baserom.gba", 0x2eac69, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:11756 gen_3_families_line_11756 (+1 aliases)
	.globl gText_Rom_2EAC6A
gText_Rom_2EAC6A: @ 0x082EAC6A
	.string "ボーマンダ$"
	.if (. - gText_Rom_2EAC6A) > 0x6
	.error "gText_Rom_2EAC6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC6A) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC6A)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11907 gen_3_families_line_11907
	.globl gText_Rom_2EAC70
gText_Rom_2EAC70: @ 0x082EAC70
	.string "ダンバル$"
	.if (. - gText_Rom_2EAC70) > 0x5
	.error "gText_Rom_2EAC70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC70) < 0x5
	.space 0x5 - (. - gText_Rom_2EAC70)
	.endif
	.incbin "baserom.gba", 0x2eac75, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:11980 gen_3_families_line_11980
	.globl gText_Rom_2EAC76
gText_Rom_2EAC76: @ 0x082EAC76
	.string "メタング$"
	.if (. - gText_Rom_2EAC76) > 0x5
	.error "gText_Rom_2EAC76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC76) < 0x5
	.space 0x5 - (. - gText_Rom_2EAC76)
	.endif
	.incbin "baserom.gba", 0x2eac7b, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:12057 gen_3_families_line_12057 (+1 aliases)
	.globl gText_Rom_2EAC7C
gText_Rom_2EAC7C: @ 0x082EAC7C
	.string "メタグロス$"
	.if (. - gText_Rom_2EAC7C) > 0x6
	.error "gText_Rom_2EAC7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC7C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC7C)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12212 gen_3_families_line_12212
	.globl gText_Rom_2EAC82
gText_Rom_2EAC82: @ 0x082EAC82
	.string "レジロック$"
	.if (. - gText_Rom_2EAC82) > 0x6
	.error "gText_Rom_2EAC82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC82) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC82)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12291 gen_3_families_line_12291
	.globl gText_Rom_2EAC88
gText_Rom_2EAC88: @ 0x082EAC88
	.string "レジアイス$"
	.if (. - gText_Rom_2EAC88) > 0x6
	.error "gText_Rom_2EAC88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC88) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC88)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12371 gen_3_families_line_12371
	.globl gText_Rom_2EAC8E
gText_Rom_2EAC8E: @ 0x082EAC8E
	.string "レジスチル$"
	.if (. - gText_Rom_2EAC8E) > 0x6
	.error "gText_Rom_2EAC8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC8E) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC8E)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12768 gen_3_families_line_12768 (+2 aliases)
	.globl gText_Rom_2EAC94
gText_Rom_2EAC94: @ 0x082EAC94
	.string "カイオーガ$"
	.if (. - gText_Rom_2EAC94) > 0x6
	.error "gText_Rom_2EAC94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC94) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC94)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12923 gen_3_families_line_12923 (+2 aliases)
	.globl gText_Rom_2EAC9A
gText_Rom_2EAC9A: @ 0x082EAC9A
	.string "グラードン$"
	.if (. - gText_Rom_2EAC9A) > 0x6
	.error "gText_Rom_2EAC9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC9A) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC9A)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:13079 gen_3_families_line_13079 (+1 aliases)
	.globl gText_Rom_2EACA0
gText_Rom_2EACA0: @ 0x082EACA0
	.string "レックウザ$"
	.if (. - gText_Rom_2EACA0) > 0x6
	.error "gText_Rom_2EACA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACA0) < 0x6
	.space 0x6 - (. - gText_Rom_2EACA0)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12450 gen_3_families_line_12450 (+1 aliases)
	.globl gText_Rom_2EACA6
gText_Rom_2EACA6: @ 0x082EACA6
	.string "ラティアス$"
	.if (. - gText_Rom_2EACA6) > 0x6
	.error "gText_Rom_2EACA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACA6) < 0x6
	.space 0x6 - (. - gText_Rom_2EACA6)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12609 gen_3_families_line_12609 (+1 aliases)
	.globl gText_Rom_2EACAC
gText_Rom_2EACAC: @ 0x082EACAC
	.string "ラティオス$"
	.if (. - gText_Rom_2EACAC) > 0x6
	.error "gText_Rom_2EACAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACAC) < 0x6
	.space 0x6 - (. - gText_Rom_2EACAC)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:13240 gen_3_families_line_13240
	.globl gText_Rom_2EACB2
gText_Rom_2EACB2: @ 0x082EACB2
	.string "ジラーチ$"
	.if (. - gText_Rom_2EACB2) > 0x5
	.error "gText_Rom_2EACB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACB2) < 0x5
	.space 0x5 - (. - gText_Rom_2EACB2)
	.endif
	.incbin "baserom.gba", 0x2eacb7, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:13330 gen_3_families_line_13330 (+3 aliases)
	.globl gText_Rom_2EACB8
gText_Rom_2EACB8: @ 0x082EACB8
	.string "デオキシス$"
	.if (. - gText_Rom_2EACB8) > 0x6
	.error "gText_Rom_2EACB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACB8) < 0x6
	.space 0x6 - (. - gText_Rom_2EACB8)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:10263 gen_3_families_line_10263 (+1 aliases)
	.globl gText_Rom_2EACBE
gText_Rom_2EACBE: @ 0x082EACBE
	.string "チリーン$"
	.if (. - gText_Rom_2EACBE) > 0x5
	.error "gText_Rom_2EACBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACBE) < 0x5
	.space 0x5 - (. - gText_Rom_2EACBE)
	.endif
	.incbin "baserom.gba", 0x2eacc3, 0x1
	.globl gUnknown_82EACC4
gUnknown_82EACC4: @ 0x082EACC4
	.incbin "baserom.gba", 0x2eacc4, 0x8

