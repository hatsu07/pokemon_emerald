	@ src/data/pokemon/species_info/gen_2_families.h:1858 gen_2_families_line_1858
	.globl gText_Rom_2EA742
gText_Rom_2EA742: @ 0x082EA742
	.string "ネイティ$"
	.if (. - gText_Rom_2EA742) > 0x5
	.error "gText_Rom_2EA742 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA742) < 0x5
	.space 0x5 - (. - gText_Rom_2EA742)
	.endif
	.incbin "baserom.gba", 0x2ea747, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:1932 gen_2_families_line_1932
	.globl gText_Rom_2EA748
gText_Rom_2EA748: @ 0x082EA748
	.string "ネイティオ$"
	.if (. - gText_Rom_2EA748) > 0x6
	.error "gText_Rom_2EA748 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA748) < 0x6
	.space 0x6 - (. - gText_Rom_2EA748)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:2017 gen_2_families_line_2017
	.globl gText_Rom_2EA74E
gText_Rom_2EA74E: @ 0x082EA74E
	.string "メリープ$"
	.if (. - gText_Rom_2EA74E) > 0x5
	.error "gText_Rom_2EA74E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA74E) < 0x5
	.space 0x5 - (. - gText_Rom_2EA74E)
	.endif
	.incbin "baserom.gba", 0x2ea753, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:2090 gen_2_families_line_2090
	.globl gText_Rom_2EA754
gText_Rom_2EA754: @ 0x082EA754
	.string "モココ$"
	.if (. - gText_Rom_2EA754) > 0x4
	.error "gText_Rom_2EA754 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA754) < 0x4
	.space 0x4 - (. - gText_Rom_2EA754)
	.endif
	.incbin "baserom.gba", 0x2ea758, 0x2

	@ src/data/pokemon/species_info/gen_2_families.h:2168 gen_2_families_line_2168 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EA75A
gText_Rom_2EA75A: @ 0x082EA75A
	.string "デンリュウ$"
	.if (. - gText_Rom_2EA75A) != 0x6
	.error "gText_Rom_2EA75A must retain its original byte length"
	.endif
	.globl gText_Rom_2EA75C
	.set gText_Rom_2EA75C, gText_Rom_2EA75A + 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:6327 gen_1_families_line_6327
	.globl gText_Rom_2EA760
gText_Rom_2EA760: @ 0x082EA760
	.string "キレイハナ$"
	.if (. - gText_Rom_2EA760) > 0x6
	.error "gText_Rom_2EA760 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA760) < 0x6
	.space 0x6 - (. - gText_Rom_2EA760)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:2397 gen_2_families_line_2397
	.globl gText_Rom_2EA766
gText_Rom_2EA766: @ 0x082EA766
	.string "マリル$"
	.if (. - gText_Rom_2EA766) > 0x4
	.error "gText_Rom_2EA766 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA766) < 0x4
	.space 0x4 - (. - gText_Rom_2EA766)
	.endif
	.incbin "baserom.gba", 0x2ea76a, 0x2

	@ src/data/pokemon/species_info/gen_2_families.h:2479 gen_2_families_line_2479
	.globl gText_Rom_2EA76C
gText_Rom_2EA76C: @ 0x082EA76C
	.string "マリルリ$"
	.if (. - gText_Rom_2EA76C) > 0x5
	.error "gText_Rom_2EA76C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA76C) < 0x5
	.space 0x5 - (. - gText_Rom_2EA76C)
	.endif
	.incbin "baserom.gba", 0x2ea771, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:2623 gen_2_families_line_2623
	.globl gText_Rom_2EA772
gText_Rom_2EA772: @ 0x082EA772
	.string "ウソッキー$"
	.if (. - gText_Rom_2EA772) > 0x6
	.error "gText_Rom_2EA772 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA772) < 0x6
	.space 0x6 - (. - gText_Rom_2EA772)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8411 gen_1_families_line_8411
	.globl gText_Rom_2EA778
gText_Rom_2EA778: @ 0x082EA778
	.string "ニョロトノ$"
	.if (. - gText_Rom_2EA778) > 0x6
	.error "gText_Rom_2EA778 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA778) < 0x6
	.space 0x6 - (. - gText_Rom_2EA778)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:2713 gen_2_families_line_2713
	.globl gText_Rom_2EA77E
gText_Rom_2EA77E: @ 0x082EA77E
	.string "ハネッコ$"
	.if (. - gText_Rom_2EA77E) > 0x5
	.error "gText_Rom_2EA77E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA77E) < 0x5
	.space 0x5 - (. - gText_Rom_2EA77E)
	.endif
	.incbin "baserom.gba", 0x2ea783, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:2788 gen_2_families_line_2788
	.globl gText_Rom_2EA784
gText_Rom_2EA784: @ 0x082EA784
	.string "ポポッコ$"
	.if (. - gText_Rom_2EA784) > 0x5
	.error "gText_Rom_2EA784 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA784) < 0x5
	.space 0x5 - (. - gText_Rom_2EA784)
	.endif
	.incbin "baserom.gba", 0x2ea789, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:2874 gen_2_families_line_2874
	.globl gText_Rom_2EA78A
gText_Rom_2EA78A: @ 0x082EA78A
	.string "ワタッコ$"
	.if (. - gText_Rom_2EA78A) > 0x5
	.error "gText_Rom_2EA78A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA78A) < 0x5
	.space 0x5 - (. - gText_Rom_2EA78A)
	.endif
	.incbin "baserom.gba", 0x2ea78f, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:2947 gen_2_families_line_2947
	.globl gText_Rom_2EA790
gText_Rom_2EA790: @ 0x082EA790
	.string "エイパム$"
	.if (. - gText_Rom_2EA790) > 0x5
	.error "gText_Rom_2EA790 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA790) < 0x5
	.space 0x5 - (. - gText_Rom_2EA790)
	.endif
	.incbin "baserom.gba", 0x2ea795, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:3118 gen_2_families_line_3118
	.globl gText_Rom_2EA796
gText_Rom_2EA796: @ 0x082EA796
	.string "ヒマナッツ$"
	.if (. - gText_Rom_2EA796) > 0x6
	.error "gText_Rom_2EA796 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA796) < 0x6
	.space 0x6 - (. - gText_Rom_2EA796)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:3194 gen_2_families_line_3194
	.globl gText_Rom_2EA79C
gText_Rom_2EA79C: @ 0x082EA79C
	.string "キマワリ$"
	.if (. - gText_Rom_2EA79C) > 0x5
	.error "gText_Rom_2EA79C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA79C) < 0x5
	.space 0x5 - (. - gText_Rom_2EA79C)
	.endif
	.incbin "baserom.gba", 0x2ea7a1, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:3264 gen_2_families_line_3264
	.globl gText_Rom_2EA7A2
gText_Rom_2EA7A2: @ 0x082EA7A2
	.string "ヤンヤンマ$"
	.if (. - gText_Rom_2EA7A2) > 0x6
	.error "gText_Rom_2EA7A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7A2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7A2)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:3451 gen_2_families_line_3451 (+1 aliases)
	.globl gText_Rom_2EA7A8
gText_Rom_2EA7A8: @ 0x082EA7A8
	.string "ウパー$"
	.if (. - gText_Rom_2EA7A8) > 0x4
	.error "gText_Rom_2EA7A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7A8) < 0x4
	.space 0x4 - (. - gText_Rom_2EA7A8)
	.endif
	.incbin "baserom.gba", 0x2ea7ac, 0x2

	@ src/data/pokemon/species_info/gen_2_families.h:3534 gen_2_families_line_3534
	.globl gText_Rom_2EA7AE
gText_Rom_2EA7AE: @ 0x082EA7AE
	.string "ヌオー$"
	.if (. - gText_Rom_2EA7AE) > 0x4
	.error "gText_Rom_2EA7AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7AE) < 0x4
	.space 0x4 - (. - gText_Rom_2EA7AE)
	.endif
	.incbin "baserom.gba", 0x2ea7b2, 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:18441 gen_1_families_line_18441
	.globl gText_Rom_2EA7B4
gText_Rom_2EA7B4: @ 0x082EA7B4
	.string "エーフィ$"
	.if (. - gText_Rom_2EA7B4) > 0x5
	.error "gText_Rom_2EA7B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7B4) < 0x5
	.space 0x5 - (. - gText_Rom_2EA7B4)
	.endif
	.incbin "baserom.gba", 0x2ea7b9, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:18508 gen_1_families_line_18508
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EA7BA
gText_Rom_2EA7BA: @ 0x082EA7BA
	.string "ブラッキー$"
	.if (. - gText_Rom_2EA7BA) != 0x6
	.error "gText_Rom_2EA7BA must retain its original byte length"
	.endif
	.globl gText_Rom_2EA7BB
	.set gText_Rom_2EA7BB, gText_Rom_2EA7BA + 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:3751 gen_2_families_line_3751
	.globl gText_Rom_2EA7C0
gText_Rom_2EA7C0: @ 0x082EA7C0
	.string "ヤミカラス$"
	.if (. - gText_Rom_2EA7C0) > 0x6
	.error "gText_Rom_2EA7C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7C0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7C0)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:10448 gen_1_families_line_10448 (+1 aliases)
	.globl gText_Rom_2EA7C6
gText_Rom_2EA7C6: @ 0x082EA7C6
	.string "ヤドキング$"
	.if (. - gText_Rom_2EA7C6) > 0x6
	.error "gText_Rom_2EA7C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7C6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7C6)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:3909 gen_2_families_line_3909
	.globl gText_Rom_2EA7CC
gText_Rom_2EA7CC: @ 0x082EA7CC
	.string "ムウマ$"
	.if (. - gText_Rom_2EA7CC) > 0x4
	.error "gText_Rom_2EA7CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7CC) < 0x4
	.space 0x4 - (. - gText_Rom_2EA7CC)
	.endif
	.incbin "baserom.gba", 0x2ea7d0, 0x2

	@ src/data/pokemon/species_info/gen_2_families.h:4070 gen_2_families_line_4070
	.globl gText_Rom_2EA7D2
gText_Rom_2EA7D2: @ 0x082EA7D2
	.string "アンノーン$"
	.if (. - gText_Rom_2EA7D2) > 0x6
	.error "gText_Rom_2EA7D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7D2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7D2)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4237 gen_2_families_line_4237
	.globl gText_Rom_2EA7D8
gText_Rom_2EA7D8: @ 0x082EA7D8
	.string "ソーナンス$"
	.if (. - gText_Rom_2EA7D8) > 0x6
	.error "gText_Rom_2EA7D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7D8) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7D8)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4326 gen_2_families_line_4326
	.globl gText_Rom_2EA7DE
gText_Rom_2EA7DE: @ 0x082EA7DE
	.string "キリンリキ$"
	.if (. - gText_Rom_2EA7DE) > 0x6
	.error "gText_Rom_2EA7DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7DE) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7DE)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4477 gen_2_families_line_4477
	.globl gText_Rom_2EA7E4
gText_Rom_2EA7E4: @ 0x082EA7E4
	.string "クヌギダマ$"
	.if (. - gText_Rom_2EA7E4) > 0x6
	.error "gText_Rom_2EA7E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7E4) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7E4)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4551 gen_2_families_line_4551
	.globl gText_Rom_2EA7EA
gText_Rom_2EA7EA: @ 0x082EA7EA
	.string "フォレトス$"
	.if (. - gText_Rom_2EA7EA) > 0x6
	.error "gText_Rom_2EA7EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7EA) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7EA)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4627 gen_2_families_line_4627
	.globl gText_Rom_2EA7F0
gText_Rom_2EA7F0: @ 0x082EA7F0
	.string "ノコッチ$"
	.if (. - gText_Rom_2EA7F0) > 0x5
	.error "gText_Rom_2EA7F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7F0) < 0x5
	.space 0x5 - (. - gText_Rom_2EA7F0)
	.endif
	.incbin "baserom.gba", 0x2ea7f5, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:4833 gen_2_families_line_4833
	.globl gText_Rom_2EA7F6
gText_Rom_2EA7F6: @ 0x082EA7F6
	.string "グライガー$"
	.if (. - gText_Rom_2EA7F6) > 0x6
	.error "gText_Rom_2EA7F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7F6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7F6)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:12462 gen_1_families_line_12462 (+1 aliases)
	.globl gText_Rom_2EA7FC
gText_Rom_2EA7FC: @ 0x082EA7FC
	.string "ハガネール$"
	.if (. - gText_Rom_2EA7FC) > 0x6
	.error "gText_Rom_2EA7FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7FC) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7FC)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4995 gen_2_families_line_4995
	.globl gText_Rom_2EA802
gText_Rom_2EA802: @ 0x082EA802
	.string "ブルー$"
	.if (. - gText_Rom_2EA802) > 0x4
	.error "gText_Rom_2EA802 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA802) < 0x4
	.space 0x4 - (. - gText_Rom_2EA802)
	.endif
	.incbin "baserom.gba", 0x2ea806, 0x2

	@ src/data/pokemon/species_info/gen_2_families.h:5071 gen_2_families_line_5071
	.globl gText_Rom_2EA808
gText_Rom_2EA808: @ 0x082EA808
	.string "グランブル$"
	.if (. - gText_Rom_2EA808) > 0x6
	.error "gText_Rom_2EA808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA808) < 0x6
	.space 0x6 - (. - gText_Rom_2EA808)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:5146 gen_2_families_line_5146 (+1 aliases)
	.globl gText_Rom_2EA80E
gText_Rom_2EA80E: @ 0x082EA80E
	.string "ハリーセン$"
	.if (. - gText_Rom_2EA80E) > 0x6
	.error "gText_Rom_2EA80E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA80E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA80E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16296 gen_1_families_line_16296 (+1 aliases)
	.globl gText_Rom_2EA814
gText_Rom_2EA814: @ 0x082EA814
	.string "ハッサム$"
	.if (. - gText_Rom_2EA814) > 0x5
	.error "gText_Rom_2EA814 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA814) < 0x5
	.space 0x5 - (. - gText_Rom_2EA814)
	.endif
	.incbin "baserom.gba", 0x2ea819, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:5365 gen_2_families_line_5365
	.globl gText_Rom_2EA81A
gText_Rom_2EA81A: @ 0x082EA81A
	.string "ツボツボ$"
	.if (. - gText_Rom_2EA81A) > 0x5
	.error "gText_Rom_2EA81A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA81A) < 0x5
	.space 0x5 - (. - gText_Rom_2EA81A)
	.endif
	.incbin "baserom.gba", 0x2ea81f, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:5435 gen_2_families_line_5435 (+1 aliases)
	.globl gText_Rom_2EA820
gText_Rom_2EA820: @ 0x082EA820
	.string "ヘラクロス$"
	.if (. - gText_Rom_2EA820) > 0x6
	.error "gText_Rom_2EA820 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA820) < 0x6
	.space 0x6 - (. - gText_Rom_2EA820)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:5599 gen_2_families_line_5599 (+1 aliases)
	.globl gText_Rom_2EA826
gText_Rom_2EA826: @ 0x082EA826
	.string "ニューラ$"
	.if (. - gText_Rom_2EA826) > 0x5
	.error "gText_Rom_2EA826 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA826) < 0x5
	.space 0x5 - (. - gText_Rom_2EA826)
	.endif
	.incbin "baserom.gba", 0x2ea82b, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:5928 gen_2_families_line_5928
	.globl gText_Rom_2EA82C
gText_Rom_2EA82C: @ 0x082EA82C
	.string "ヒメグマ$"
	.if (. - gText_Rom_2EA82C) > 0x5
	.error "gText_Rom_2EA82C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA82C) < 0x5
	.space 0x5 - (. - gText_Rom_2EA82C)
	.endif
	.incbin "baserom.gba", 0x2ea831, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:6000 gen_2_families_line_6000
	.globl gText_Rom_2EA832
gText_Rom_2EA832: @ 0x082EA832
	.string "リングマ$"
	.if (. - gText_Rom_2EA832) > 0x5
	.error "gText_Rom_2EA832 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA832) < 0x5
	.space 0x5 - (. - gText_Rom_2EA832)
	.endif
	.incbin "baserom.gba", 0x2ea837, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:6216 gen_2_families_line_6216
	.globl gText_Rom_2EA838
gText_Rom_2EA838: @ 0x082EA838
	.string "マグマッグ$"
	.if (. - gText_Rom_2EA838) > 0x6
	.error "gText_Rom_2EA838 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA838) < 0x6
	.space 0x6 - (. - gText_Rom_2EA838)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:6294 gen_2_families_line_6294
	.globl gText_Rom_2EA83E
gText_Rom_2EA83E: @ 0x082EA83E
	.string "マグカルゴ$"
	.if (. - gText_Rom_2EA83E) > 0x6
	.error "gText_Rom_2EA83E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA83E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA83E)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:6369 gen_2_families_line_6369
	.globl gText_Rom_2EA844
gText_Rom_2EA844: @ 0x082EA844
	.string "ウリムー$"
	.if (. - gText_Rom_2EA844) > 0x5
	.error "gText_Rom_2EA844 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA844) < 0x5
	.space 0x5 - (. - gText_Rom_2EA844)
	.endif
	.incbin "baserom.gba", 0x2ea849, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:6444 gen_2_families_line_6444
	.globl gText_Rom_2EA84A
gText_Rom_2EA84A: @ 0x082EA84A
	.string "イノムー$"
	.if (. - gText_Rom_2EA84A) > 0x5
	.error "gText_Rom_2EA84A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA84A) < 0x5
	.space 0x5 - (. - gText_Rom_2EA84A)
	.endif
	.incbin "baserom.gba", 0x2ea84f, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:6624 gen_2_families_line_6624 (+1 aliases)
	.globl gText_Rom_2EA850
gText_Rom_2EA850: @ 0x082EA850
	.string "サニーゴ$"
	.if (. - gText_Rom_2EA850) > 0x5
	.error "gText_Rom_2EA850 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA850) < 0x5
	.space 0x5 - (. - gText_Rom_2EA850)
	.endif
	.incbin "baserom.gba", 0x2ea855, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:6834 gen_2_families_line_6834
	.globl gText_Rom_2EA856
gText_Rom_2EA856: @ 0x082EA856
	.string "テッポウオ$"
	.if (. - gText_Rom_2EA856) > 0x6
	.error "gText_Rom_2EA856 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA856) < 0x6
	.space 0x6 - (. - gText_Rom_2EA856)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:6908 gen_2_families_line_6908
	.globl gText_Rom_2EA85C
gText_Rom_2EA85C: @ 0x082EA85C
	.string "オクタン$"
	.if (. - gText_Rom_2EA85C) > 0x5
	.error "gText_Rom_2EA85C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA85C) < 0x5
	.space 0x5 - (. - gText_Rom_2EA85C)
	.endif
	.incbin "baserom.gba", 0x2ea861, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:6993 gen_2_families_line_6993
	.globl gText_Rom_2EA862
gText_Rom_2EA862: @ 0x082EA862
	.string "デリバード$"
	.if (. - gText_Rom_2EA862) > 0x6
	.error "gText_Rom_2EA862 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA862) < 0x6
	.space 0x6 - (. - gText_Rom_2EA862)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:7142 gen_2_families_line_7142
	.globl gText_Rom_2EA868
gText_Rom_2EA868: @ 0x082EA868
	.string "マンタイン$"
	.if (. - gText_Rom_2EA868) > 0x6
	.error "gText_Rom_2EA868 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA868) < 0x6
	.space 0x6 - (. - gText_Rom_2EA868)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:7215 gen_2_families_line_7215 (+1 aliases)
	.globl gText_Rom_2EA86E
gText_Rom_2EA86E: @ 0x082EA86E
	.string "エアームド$"
	.if (. - gText_Rom_2EA86E) > 0x6
	.error "gText_Rom_2EA86E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA86E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA86E)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:7347 gen_2_families_line_7347
	.globl gText_Rom_2EA874
gText_Rom_2EA874: @ 0x082EA874
	.string "デルビル$"
	.if (. - gText_Rom_2EA874) > 0x5
	.error "gText_Rom_2EA874 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA874) < 0x5
	.space 0x5 - (. - gText_Rom_2EA874)
	.endif
	.incbin "baserom.gba", 0x2ea879, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:7415 gen_2_families_line_7415 (+1 aliases)
	.globl gText_Rom_2EA87A
gText_Rom_2EA87A: @ 0x082EA87A
	.string "ヘルガー$"
	.if (. - gText_Rom_2EA87A) > 0x5
	.error "gText_Rom_2EA87A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA87A) < 0x5
	.space 0x5 - (. - gText_Rom_2EA87A)
	.endif
	.incbin "baserom.gba", 0x2ea87f, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:15437 gen_1_families_line_15437
	.globl gText_Rom_2EA880
gText_Rom_2EA880: @ 0x082EA880
	.string "キングドラ$"
	.if (. - gText_Rom_2EA880) > 0x6
	.error "gText_Rom_2EA880 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA880) < 0x6
	.space 0x6 - (. - gText_Rom_2EA880)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:7571 gen_2_families_line_7571
	.globl gText_Rom_2EA886
gText_Rom_2EA886: @ 0x082EA886
	.string "ゴマゾウ$"
	.if (. - gText_Rom_2EA886) > 0x5
	.error "gText_Rom_2EA886 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA886) < 0x5
	.space 0x5 - (. - gText_Rom_2EA886)
	.endif
	.incbin "baserom.gba", 0x2ea88b, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:7645 gen_2_families_line_7645
	.globl gText_Rom_2EA88C
gText_Rom_2EA88C: @ 0x082EA88C
	.string "ドンファン$"
	.if (. - gText_Rom_2EA88C) > 0x6
	.error "gText_Rom_2EA88C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA88C) < 0x6
	.space 0x6 - (. - gText_Rom_2EA88C)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:18864 gen_1_families_line_18864
	.globl gText_Rom_2EA892
gText_Rom_2EA892: @ 0x082EA892
	.string "ポリゴン2$"
	.if (. - gText_Rom_2EA892) > 0x6
	.error "gText_Rom_2EA892 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA892) < 0x6
	.space 0x6 - (. - gText_Rom_2EA892)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:7731 gen_2_families_line_7731
	.globl gText_Rom_2EA898
gText_Rom_2EA898: @ 0x082EA898
	.string "オドシシ$"
	.if (. - gText_Rom_2EA898) > 0x5
	.error "gText_Rom_2EA898 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA898) < 0x5
	.space 0x5 - (. - gText_Rom_2EA898)
	.endif
	.incbin "baserom.gba", 0x2ea89d, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:7874 gen_2_families_line_7874
	.globl gText_Rom_2EA89E
gText_Rom_2EA89E: @ 0x082EA89E
	.string "ドーブル$"
	.if (. - gText_Rom_2EA89E) > 0x5
	.error "gText_Rom_2EA89E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA89E) < 0x5
	.space 0x5 - (. - gText_Rom_2EA89E)
	.endif
	.incbin "baserom.gba", 0x2ea8a3, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:13800 gen_1_families_line_13800
	.globl gText_Rom_2EA8A4
gText_Rom_2EA8A4: @ 0x082EA8A4
	.string "バルキー$"
	.if (. - gText_Rom_2EA8A4) > 0x5
	.error "gText_Rom_2EA8A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8A4) < 0x5
	.space 0x5 - (. - gText_Rom_2EA8A4)
	.endif
	.incbin "baserom.gba", 0x2ea8a9, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:14026 gen_1_families_line_14026
	.globl gText_Rom_2EA8AA
gText_Rom_2EA8AA: @ 0x082EA8AA
	.string "カポエラー$"
	.if (. - gText_Rom_2EA8AA) > 0x6
	.error "gText_Rom_2EA8AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8AA) < 0x6
	.space 0x6 - (. - gText_Rom_2EA8AA)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16523 gen_1_families_line_16523
	.globl gText_Rom_2EA8B0
gText_Rom_2EA8B0: @ 0x082EA8B0
	.string "ムチュール$"
	.if (. - gText_Rom_2EA8B0) > 0x6
	.error "gText_Rom_2EA8B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8B0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA8B0)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16671 gen_1_families_line_16671
	.globl gText_Rom_2EA8B6
gText_Rom_2EA8B6: @ 0x082EA8B6
	.string "エレキッド$"
	.if (. - gText_Rom_2EA8B6) > 0x6
	.error "gText_Rom_2EA8B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8B6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA8B6)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16897 gen_1_families_line_16897
	.globl gText_Rom_2EA8BC
gText_Rom_2EA8BC: @ 0x082EA8BC
	.string "ブビィ$"
	.if (. - gText_Rom_2EA8BC) > 0x4
	.error "gText_Rom_2EA8BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8BC) < 0x4
	.space 0x4 - (. - gText_Rom_2EA8BC)
	.endif
	.incbin "baserom.gba", 0x2ea8c0, 0x2

	@ src/data/pokemon/species_info/gen_2_families.h:7951 gen_2_families_line_7951
	.globl gText_Rom_2EA8C2
gText_Rom_2EA8C2: @ 0x082EA8C2
	.string "ミルタンク$"
	.if (. - gText_Rom_2EA8C2) > 0x6
	.error "gText_Rom_2EA8C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8C2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA8C2)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:14889 gen_1_families_line_14889
	.globl gText_Rom_2EA8C8
gText_Rom_2EA8C8: @ 0x082EA8C8
	.string "ハピナス$"
	.if (. - gText_Rom_2EA8C8) > 0x5
	.error "gText_Rom_2EA8C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8C8) < 0x5
	.space 0x5 - (. - gText_Rom_2EA8C8)
	.endif
	.incbin "baserom.gba", 0x2ea8cd, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:8031 gen_2_families_line_8031
	.globl gText_Rom_2EA8CE
gText_Rom_2EA8CE: @ 0x082EA8CE
	.string "ライコウ$"
	.if (. - gText_Rom_2EA8CE) > 0x5
	.error "gText_Rom_2EA8CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8CE) < 0x5
	.space 0x5 - (. - gText_Rom_2EA8CE)
	.endif
	.incbin "baserom.gba", 0x2ea8d3, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:8113 gen_2_families_line_8113
	.globl gText_Rom_2EA8D4
gText_Rom_2EA8D4: @ 0x082EA8D4
	.string "エンテイ$"
	.if (. - gText_Rom_2EA8D4) > 0x5
	.error "gText_Rom_2EA8D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8D4) < 0x5
	.space 0x5 - (. - gText_Rom_2EA8D4)
	.endif
	.incbin "baserom.gba", 0x2ea8d9, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:8194 gen_2_families_line_8194
	.globl gText_Rom_2EA8DA
gText_Rom_2EA8DA: @ 0x082EA8DA
	.string "スイクン$"
	.if (. - gText_Rom_2EA8DA) > 0x5
	.error "gText_Rom_2EA8DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8DA) < 0x5
	.space 0x5 - (. - gText_Rom_2EA8DA)
	.endif
	.incbin "baserom.gba", 0x2ea8df, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:8264 gen_2_families_line_8264
	.globl gText_Rom_2EA8E0
gText_Rom_2EA8E0: @ 0x082EA8E0
	.string "ヨーギラス$"
	.if (. - gText_Rom_2EA8E0) > 0x6
	.error "gText_Rom_2EA8E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8E0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA8E0)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:8334 gen_2_families_line_8334
	.globl gText_Rom_2EA8E6
gText_Rom_2EA8E6: @ 0x082EA8E6
	.string "サナギラス$"
	.if (. - gText_Rom_2EA8E6) > 0x6
	.error "gText_Rom_2EA8E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8E6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA8E6)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:8407 gen_2_families_line_8407 (+1 aliases)
	.globl gText_Rom_2EA8EC
gText_Rom_2EA8EC: @ 0x082EA8EC
	.string "バンギラス$"
	.if (. - gText_Rom_2EA8EC) > 0x6
	.error "gText_Rom_2EA8EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8EC) < 0x6
	.space 0x6 - (. - gText_Rom_2EA8EC)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:8559 gen_2_families_line_8559
	.globl gText_Rom_2EA8F2
gText_Rom_2EA8F2: @ 0x082EA8F2
	.string "ルギア$"
	.if (. - gText_Rom_2EA8F2) > 0x4
	.error "gText_Rom_2EA8F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8F2) < 0x4
	.space 0x4 - (. - gText_Rom_2EA8F2)
	.endif
	.incbin "baserom.gba", 0x2ea8f6, 0x2

	@ src/data/pokemon/species_info/gen_2_families.h:8650 gen_2_families_line_8650
	.globl gText_Rom_2EA8F8
gText_Rom_2EA8F8: @ 0x082EA8F8
	.string "ホウオウ$"
	.if (. - gText_Rom_2EA8F8) > 0x5
	.error "gText_Rom_2EA8F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8F8) < 0x5
	.space 0x5 - (. - gText_Rom_2EA8F8)
	.endif
	.incbin "baserom.gba", 0x2ea8fd, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:8730 gen_2_families_line_8730
	.globl gText_Rom_2EA8FE
gText_Rom_2EA8FE: @ 0x082EA8FE
	.string "セレビィ$"
	.if (. - gText_Rom_2EA8FE) > 0x5
	.error "gText_Rom_2EA8FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8FE) < 0x5
	.space 0x5 - (. - gText_Rom_2EA8FE)
	.endif
	.incbin "baserom.gba", 0x2ea903, 0x5

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA908
gText_Rom_2EA908: @ 0x082EA908
	.string "  ？$"
	.if (. - gText_Rom_2EA908) > 0x4
	.error "gText_Rom_2EA908 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA908) < 0x4
	.space 0x4 - (. - gText_Rom_2EA908)
	.endif
	.incbin "baserom.gba", 0x2ea90c, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA90E
gText_Rom_2EA90E: @ 0x082EA90E
	.string "  ？$"
	.if (. - gText_Rom_2EA90E) > 0x4
	.error "gText_Rom_2EA90E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA90E) < 0x4
	.space 0x4 - (. - gText_Rom_2EA90E)
	.endif
	.incbin "baserom.gba", 0x2ea912, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA914
gText_Rom_2EA914: @ 0x082EA914
	.string "  ？$"
	.if (. - gText_Rom_2EA914) > 0x4
	.error "gText_Rom_2EA914 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA914) < 0x4
	.space 0x4 - (. - gText_Rom_2EA914)
	.endif
	.incbin "baserom.gba", 0x2ea918, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA91A
gText_Rom_2EA91A: @ 0x082EA91A
	.string "  ？$"
	.if (. - gText_Rom_2EA91A) > 0x4
	.error "gText_Rom_2EA91A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA91A) < 0x4
	.space 0x4 - (. - gText_Rom_2EA91A)
	.endif
	.incbin "baserom.gba", 0x2ea91e, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA920
gText_Rom_2EA920: @ 0x082EA920
	.string "  ？$"
	.if (. - gText_Rom_2EA920) > 0x4
	.error "gText_Rom_2EA920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA920) < 0x4
	.space 0x4 - (. - gText_Rom_2EA920)
	.endif
	.incbin "baserom.gba", 0x2ea924, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA926
gText_Rom_2EA926: @ 0x082EA926
	.string "  ？$"
	.if (. - gText_Rom_2EA926) > 0x4
	.error "gText_Rom_2EA926 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA926) < 0x4
	.space 0x4 - (. - gText_Rom_2EA926)
	.endif
	.incbin "baserom.gba", 0x2ea92a, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA92C
gText_Rom_2EA92C: @ 0x082EA92C
	.string "  ？$"
	.if (. - gText_Rom_2EA92C) > 0x4
	.error "gText_Rom_2EA92C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA92C) < 0x4
	.space 0x4 - (. - gText_Rom_2EA92C)
	.endif
	.incbin "baserom.gba", 0x2ea930, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA932
gText_Rom_2EA932: @ 0x082EA932
	.string "  ？$"
	.if (. - gText_Rom_2EA932) > 0x4
	.error "gText_Rom_2EA932 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA932) < 0x4
	.space 0x4 - (. - gText_Rom_2EA932)
	.endif
	.incbin "baserom.gba", 0x2ea936, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA938
gText_Rom_2EA938: @ 0x082EA938
	.string "  ？$"
	.if (. - gText_Rom_2EA938) > 0x4
	.error "gText_Rom_2EA938 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA938) < 0x4
	.space 0x4 - (. - gText_Rom_2EA938)
	.endif
	.incbin "baserom.gba", 0x2ea93c, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA93E
gText_Rom_2EA93E: @ 0x082EA93E
	.string "  ？$"
	.if (. - gText_Rom_2EA93E) > 0x4
	.error "gText_Rom_2EA93E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA93E) < 0x4
	.space 0x4 - (. - gText_Rom_2EA93E)
	.endif
	.incbin "baserom.gba", 0x2ea942, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA944
gText_Rom_2EA944: @ 0x082EA944
	.string "  ？$"
	.if (. - gText_Rom_2EA944) > 0x4
	.error "gText_Rom_2EA944 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA944) < 0x4
	.space 0x4 - (. - gText_Rom_2EA944)
	.endif
	.incbin "baserom.gba", 0x2ea948, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA94A
gText_Rom_2EA94A: @ 0x082EA94A
	.string "  ？$"
	.if (. - gText_Rom_2EA94A) > 0x4
	.error "gText_Rom_2EA94A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA94A) < 0x4
	.space 0x4 - (. - gText_Rom_2EA94A)
	.endif
	.incbin "baserom.gba", 0x2ea94e, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA950
gText_Rom_2EA950: @ 0x082EA950
	.string "  ？$"
	.if (. - gText_Rom_2EA950) > 0x4
	.error "gText_Rom_2EA950 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA950) < 0x4
	.space 0x4 - (. - gText_Rom_2EA950)
	.endif
	.incbin "baserom.gba", 0x2ea954, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA956
gText_Rom_2EA956: @ 0x082EA956
	.string "  ？$"
	.if (. - gText_Rom_2EA956) > 0x4
	.error "gText_Rom_2EA956 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA956) < 0x4
	.space 0x4 - (. - gText_Rom_2EA956)
	.endif
	.incbin "baserom.gba", 0x2ea95a, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA95C
gText_Rom_2EA95C: @ 0x082EA95C
	.string "  ？$"
	.if (. - gText_Rom_2EA95C) > 0x4
	.error "gText_Rom_2EA95C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA95C) < 0x4
	.space 0x4 - (. - gText_Rom_2EA95C)
	.endif
	.incbin "baserom.gba", 0x2ea960, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA962
gText_Rom_2EA962: @ 0x082EA962
	.string "  ？$"
	.if (. - gText_Rom_2EA962) > 0x4
	.error "gText_Rom_2EA962 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA962) < 0x4
	.space 0x4 - (. - gText_Rom_2EA962)
	.endif
	.incbin "baserom.gba", 0x2ea966, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA968
gText_Rom_2EA968: @ 0x082EA968
	.string "  ？$"
	.if (. - gText_Rom_2EA968) > 0x4
	.error "gText_Rom_2EA968 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA968) < 0x4
	.space 0x4 - (. - gText_Rom_2EA968)
	.endif
	.incbin "baserom.gba", 0x2ea96c, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA96E
gText_Rom_2EA96E: @ 0x082EA96E
	.string "  ？$"
	.if (. - gText_Rom_2EA96E) > 0x4
	.error "gText_Rom_2EA96E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA96E) < 0x4
	.space 0x4 - (. - gText_Rom_2EA96E)
	.endif
	.incbin "baserom.gba", 0x2ea972, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA974
gText_Rom_2EA974: @ 0x082EA974
	.string "  ？$"
	.if (. - gText_Rom_2EA974) > 0x4
	.error "gText_Rom_2EA974 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA974) < 0x4
	.space 0x4 - (. - gText_Rom_2EA974)
	.endif
	.incbin "baserom.gba", 0x2ea978, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA97A
gText_Rom_2EA97A: @ 0x082EA97A
	.string "  ？$"
	.if (. - gText_Rom_2EA97A) > 0x4
	.error "gText_Rom_2EA97A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA97A) < 0x4
	.space 0x4 - (. - gText_Rom_2EA97A)
	.endif
	.incbin "baserom.gba", 0x2ea97e, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA980
gText_Rom_2EA980: @ 0x082EA980
	.string "  ？$"
	.if (. - gText_Rom_2EA980) > 0x4
	.error "gText_Rom_2EA980 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA980) < 0x4
	.space 0x4 - (. - gText_Rom_2EA980)
	.endif
	.incbin "baserom.gba", 0x2ea984, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA986
gText_Rom_2EA986: @ 0x082EA986
	.string "  ？$"
	.if (. - gText_Rom_2EA986) > 0x4
	.error "gText_Rom_2EA986 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA986) < 0x4
	.space 0x4 - (. - gText_Rom_2EA986)
	.endif
	.incbin "baserom.gba", 0x2ea98a, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA98C
gText_Rom_2EA98C: @ 0x082EA98C
	.string "  ？$"
	.if (. - gText_Rom_2EA98C) > 0x4
	.error "gText_Rom_2EA98C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA98C) < 0x4
	.space 0x4 - (. - gText_Rom_2EA98C)
	.endif
	.incbin "baserom.gba", 0x2ea990, 0x2

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_2EA992
gText_Rom_2EA992: @ 0x082EA992
	.string "  ？$"
	.if (. - gText_Rom_2EA992) > 0x4
	.error "gText_Rom_2EA992 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA992) < 0x4
	.space 0x4 - (. - gText_Rom_2EA992)
	.endif
	.incbin "baserom.gba", 0x2ea996, 0x4

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

	@ src/data/moves_info.h:48 moves_info_line_48
	.globl gText_Rom_2EACCC
gText_Rom_2EACCC: @ 0x082EACCC
	.string "はたく$"
	.if (. - gText_Rom_2EACCC) > 0x4
	.error "gText_Rom_2EACCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACCC) < 0x4
	.space 0x4 - (. - gText_Rom_2EACCC)
	.endif
	.incbin "baserom.gba", 0x2eacd0, 0x4

	@ src/data/moves_info.h:69 moves_info_line_69
	.globl gText_Rom_2EACD4
gText_Rom_2EACD4: @ 0x082EACD4
	.string "からてチョップ$"
	.if (. - gText_Rom_2EACD4) > 0x8
	.error "gText_Rom_2EACD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACD4) < 0x8
	.space 0x8 - (. - gText_Rom_2EACD4)
	.endif

	@ src/data/moves_info.h:91 moves_info_line_91
	.globl gText_Rom_2EACDC
gText_Rom_2EACDC: @ 0x082EACDC
	.string "おうふくビンタ$"
	.if (. - gText_Rom_2EACDC) > 0x8
	.error "gText_Rom_2EACDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACDC) < 0x8
	.space 0x8 - (. - gText_Rom_2EACDC)
	.endif

	@ src/data/moves_info.h:113 moves_info_line_113
	.globl gText_Rom_2EACE4
gText_Rom_2EACE4: @ 0x082EACE4
	.string "れんぞくパンチ$"
	.if (. - gText_Rom_2EACE4) > 0x8
	.error "gText_Rom_2EACE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACE4) < 0x8
	.space 0x8 - (. - gText_Rom_2EACE4)
	.endif

	@ src/data/moves_info.h:135 moves_info_line_135
	.globl gText_Rom_2EACEC
gText_Rom_2EACEC: @ 0x082EACEC
	.string "メガトンパンチ$"
	.if (. - gText_Rom_2EACEC) > 0x8
	.error "gText_Rom_2EACEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACEC) < 0x8
	.space 0x8 - (. - gText_Rom_2EACEC)
	.endif

	@ src/data/moves_info.h:157 moves_info_line_157
	.globl gText_Rom_2EACF4
gText_Rom_2EACF4: @ 0x082EACF4
	.string "ネコにこばん$"
	.if (. - gText_Rom_2EACF4) > 0x7
	.error "gText_Rom_2EACF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACF4) < 0x7
	.space 0x7 - (. - gText_Rom_2EACF4)
	.endif
	.incbin "baserom.gba", 0x2eacfb, 0x1

	@ src/data/moves_info.h:179 moves_info_line_179
	.globl gText_Rom_2EACFC
gText_Rom_2EACFC: @ 0x082EACFC
	.string "ほのおのパンチ$"
	.if (. - gText_Rom_2EACFC) > 0x8
	.error "gText_Rom_2EACFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACFC) < 0x8
	.space 0x8 - (. - gText_Rom_2EACFC)
	.endif

	@ src/data/moves_info.h:205 moves_info_line_205
	.globl gText_Rom_2EAD04
gText_Rom_2EAD04: @ 0x082EAD04
	.string "れいとうパンチ$"
	.if (. - gText_Rom_2EAD04) > 0x8
	.error "gText_Rom_2EAD04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD04) < 0x8
	.space 0x8 - (. - gText_Rom_2EAD04)
	.endif

	@ src/data/moves_info.h:231 moves_info_line_231
	.globl gText_Rom_2EAD0C
gText_Rom_2EAD0C: @ 0x082EAD0C
	.string "かみなりパンチ$"
	.if (. - gText_Rom_2EAD0C) > 0x8
	.error "gText_Rom_2EAD0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD0C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAD0C)
	.endif

	@ src/data/moves_info.h:257 moves_info_line_257
	.globl gText_Rom_2EAD14
gText_Rom_2EAD14: @ 0x082EAD14
	.string "ひっかく$"
	.if (. - gText_Rom_2EAD14) > 0x5
	.error "gText_Rom_2EAD14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD14) < 0x5
	.space 0x5 - (. - gText_Rom_2EAD14)
	.endif
	.incbin "baserom.gba", 0x2ead19, 0x3

	@ src/data/moves_info.h:277 moves_info_line_277
	.globl gText_Rom_2EAD1C
gText_Rom_2EAD1C: @ 0x082EAD1C
	.string "はさむ$"
	.if (. - gText_Rom_2EAD1C) > 0x4
	.error "gText_Rom_2EAD1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD1C) < 0x4
	.space 0x4 - (. - gText_Rom_2EAD1C)
	.endif
	.incbin "baserom.gba", 0x2ead20, 0x4

	@ src/data/moves_info.h:297 moves_info_line_297
	.globl gText_Rom_2EAD24
gText_Rom_2EAD24: @ 0x082EAD24
	.string "ハサミギロチン$"
	.if (. - gText_Rom_2EAD24) > 0x8
	.error "gText_Rom_2EAD24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD24) < 0x8
	.space 0x8 - (. - gText_Rom_2EAD24)
	.endif

	@ src/data/moves_info.h:318 moves_info_line_318
	.globl gText_Rom_2EAD2C
gText_Rom_2EAD2C: @ 0x082EAD2C
	.string "かまいたち$"
	.if (. - gText_Rom_2EAD2C) > 0x6
	.error "gText_Rom_2EAD2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD2C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAD2C)
	.endif
	.incbin "baserom.gba", 0x2ead32, 0x2

	@ src/data/moves_info.h:348 moves_info_line_348
	.globl gText_Rom_2EAD34
gText_Rom_2EAD34: @ 0x082EAD34
	.string "つるぎのまい$"
	.if (. - gText_Rom_2EAD34) > 0x7
	.error "gText_Rom_2EAD34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD34) < 0x7
	.space 0x7 - (. - gText_Rom_2EAD34)
	.endif
	.incbin "baserom.gba", 0x2ead3b, 0x1

	@ src/data/moves_info.h:377 moves_info_line_377
	.globl gText_Rom_2EAD3C
gText_Rom_2EAD3C: @ 0x082EAD3C
	.string "いあいぎり$"
	.if (. - gText_Rom_2EAD3C) > 0x6
	.error "gText_Rom_2EAD3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD3C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAD3C)
	.endif
	.incbin "baserom.gba", 0x2ead42, 0x2

	@ src/data/moves_info.h:398 moves_info_line_398
	.globl gText_Rom_2EAD44
gText_Rom_2EAD44: @ 0x082EAD44
	.string "かぜおこし$"
	.if (. - gText_Rom_2EAD44) > 0x6
	.error "gText_Rom_2EAD44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD44) < 0x6
	.space 0x6 - (. - gText_Rom_2EAD44)
	.endif
	.incbin "baserom.gba", 0x2ead4a, 0x2

	@ src/data/moves_info.h:420 moves_info_line_420
	.globl gText_Rom_2EAD4C
gText_Rom_2EAD4C: @ 0x082EAD4C
	.string "つばさでうつ$"
	.if (. - gText_Rom_2EAD4C) > 0x7
	.error "gText_Rom_2EAD4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD4C) < 0x7
	.space 0x7 - (. - gText_Rom_2EAD4C)
	.endif
	.incbin "baserom.gba", 0x2ead53, 0x1

	@ src/data/moves_info.h:440 moves_info_line_440
	.globl gText_Rom_2EAD54
gText_Rom_2EAD54: @ 0x082EAD54
	.string "ふきとばし$"
	.if (. - gText_Rom_2EAD54) > 0x6
	.error "gText_Rom_2EAD54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD54) < 0x6
	.space 0x6 - (. - gText_Rom_2EAD54)
	.endif
	.incbin "baserom.gba", 0x2ead5a, 0x2

	@ src/data/moves_info.h:478 moves_info_line_478
	.globl gText_Rom_2EAD5C
gText_Rom_2EAD5C: @ 0x082EAD5C
	.string "そらをとぶ$"
	.if (. - gText_Rom_2EAD5C) > 0x6
	.error "gText_Rom_2EAD5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD5C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAD5C)
	.endif
	.incbin "baserom.gba", 0x2ead62, 0x2

	@ src/data/moves_info.h:504 moves_info_line_504
	.globl gText_Rom_2EAD64
gText_Rom_2EAD64: @ 0x082EAD64
	.string "しめつける$"
	.if (. - gText_Rom_2EAD64) > 0x6
	.error "gText_Rom_2EAD64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD64) < 0x6
	.space 0x6 - (. - gText_Rom_2EAD64)
	.endif
	.incbin "baserom.gba", 0x2ead6a, 0x2

	@ src/data/moves_info.h:530 moves_info_line_530
	.globl gText_Rom_2EAD6C
gText_Rom_2EAD6C: @ 0x082EAD6C
	.string "たたきつける$"
	.if (. - gText_Rom_2EAD6C) > 0x7
	.error "gText_Rom_2EAD6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD6C) < 0x7
	.space 0x7 - (. - gText_Rom_2EAD6C)
	.endif
	.incbin "baserom.gba", 0x2ead73, 0x1

	@ src/data/moves_info.h:552 moves_info_line_552
	.globl gText_Rom_2EAD74
gText_Rom_2EAD74: @ 0x082EAD74
	.string "つるのムチ$"
	.if (. - gText_Rom_2EAD74) > 0x6
	.error "gText_Rom_2EAD74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD74) < 0x6
	.space 0x6 - (. - gText_Rom_2EAD74)
	.endif
	.incbin "baserom.gba", 0x2ead7a, 0x2

	@ src/data/moves_info.h:578 moves_info_line_578
	.globl gText_Rom_2EAD7C
gText_Rom_2EAD7C: @ 0x082EAD7C
	.string "ふみつけ$"
	.if (. - gText_Rom_2EAD7C) > 0x5
	.error "gText_Rom_2EAD7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD7C) < 0x5
	.space 0x5 - (. - gText_Rom_2EAD7C)
	.endif
	.incbin "baserom.gba", 0x2ead81, 0x3

	@ src/data/moves_info.h:605 moves_info_line_605
	.globl gText_Rom_2EAD84
gText_Rom_2EAD84: @ 0x082EAD84
	.string "にどげり$"
	.if (. - gText_Rom_2EAD84) > 0x5
	.error "gText_Rom_2EAD84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD84) < 0x5
	.space 0x5 - (. - gText_Rom_2EAD84)
	.endif
	.incbin "baserom.gba", 0x2ead89, 0x3

	@ src/data/moves_info.h:627 moves_info_line_627
	.globl gText_Rom_2EAD8C
gText_Rom_2EAD8C: @ 0x082EAD8C
	.string "メガトンキック$"
	.if (. - gText_Rom_2EAD8C) > 0x8
	.error "gText_Rom_2EAD8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD8C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAD8C)
	.endif

	@ src/data/moves_info.h:648 moves_info_line_648
	.globl gText_Rom_2EAD94
gText_Rom_2EAD94: @ 0x082EAD94
	.string "とびげり$"
	.if (. - gText_Rom_2EAD94) > 0x5
	.error "gText_Rom_2EAD94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD94) < 0x5
	.space 0x5 - (. - gText_Rom_2EAD94)
	.endif
	.incbin "baserom.gba", 0x2ead99, 0x3

	@ src/data/moves_info.h:676 moves_info_line_676
	.globl gText_Rom_2EAD9C
gText_Rom_2EAD9C: @ 0x082EAD9C
	.string "まわしげり$"
	.if (. - gText_Rom_2EAD9C) > 0x6
	.error "gText_Rom_2EAD9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAD9C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAD9C)
	.endif
	.incbin "baserom.gba", 0x2eada2, 0x2

	@ src/data/moves_info.h:702 moves_info_line_702
	.globl gText_Rom_2EADA4
gText_Rom_2EADA4: @ 0x082EADA4
	.string "すなかけ$"
	.if (. - gText_Rom_2EADA4) > 0x5
	.error "gText_Rom_2EADA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADA4) < 0x5
	.space 0x5 - (. - gText_Rom_2EADA4)
	.endif
	.incbin "baserom.gba", 0x2eada9, 0x3

	@ src/data/moves_info.h:728 moves_info_line_728
	.globl gText_Rom_2EADAC
gText_Rom_2EADAC: @ 0x082EADAC
	.string "ずつき$"
	.if (. - gText_Rom_2EADAC) > 0x4
	.error "gText_Rom_2EADAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADAC) < 0x4
	.space 0x4 - (. - gText_Rom_2EADAC)
	.endif
	.incbin "baserom.gba", 0x2eadb0, 0x4

	@ src/data/moves_info.h:753 moves_info_line_753
	.globl gText_Rom_2EADB4
gText_Rom_2EADB4: @ 0x082EADB4
	.string "つのでつく$"
	.if (. - gText_Rom_2EADB4) > 0x6
	.error "gText_Rom_2EADB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADB4) < 0x6
	.space 0x6 - (. - gText_Rom_2EADB4)
	.endif
	.incbin "baserom.gba", 0x2eadba, 0x2

	@ src/data/moves_info.h:773 moves_info_line_773
	.globl gText_Rom_2EADBC
gText_Rom_2EADBC: @ 0x082EADBC
	.string "みだれづき$"
	.if (. - gText_Rom_2EADBC) > 0x6
	.error "gText_Rom_2EADBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADBC) < 0x6
	.space 0x6 - (. - gText_Rom_2EADBC)
	.endif
	.incbin "baserom.gba", 0x2eadc2, 0x2

	@ src/data/moves_info.h:794 moves_info_line_794
	.globl gText_Rom_2EADC4
gText_Rom_2EADC4: @ 0x082EADC4
	.string "つのドリル$"
	.if (. - gText_Rom_2EADC4) > 0x6
	.error "gText_Rom_2EADC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADC4) < 0x6
	.space 0x6 - (. - gText_Rom_2EADC4)
	.endif
	.incbin "baserom.gba", 0x2eadca, 0x2

	@ src/data/moves_info.h:815 moves_info_line_815
	.globl gText_Rom_2EADCC
gText_Rom_2EADCC: @ 0x082EADCC
	.string "たいあたり$"
	.if (. - gText_Rom_2EADCC) > 0x6
	.error "gText_Rom_2EADCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADCC) < 0x6
	.space 0x6 - (. - gText_Rom_2EADCC)
	.endif
	.incbin "baserom.gba", 0x2eadd2, 0x2

	@ src/data/moves_info.h:841 moves_info_line_841
	.globl gText_Rom_2EADD4
gText_Rom_2EADD4: @ 0x082EADD4
	.string "のしかかり$"
	.if (. - gText_Rom_2EADD4) > 0x6
	.error "gText_Rom_2EADD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADD4) < 0x6
	.space 0x6 - (. - gText_Rom_2EADD4)
	.endif
	.incbin "baserom.gba", 0x2eadda, 0x2

	@ src/data/moves_info.h:868 moves_info_line_868
	.globl gText_Rom_2EADDC
gText_Rom_2EADDC: @ 0x082EADDC
	.string "まきつく$"
	.if (. - gText_Rom_2EADDC) > 0x5
	.error "gText_Rom_2EADDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADDC) < 0x5
	.space 0x5 - (. - gText_Rom_2EADDC)
	.endif
	.incbin "baserom.gba", 0x2eade1, 0x3

	@ src/data/moves_info.h:894 moves_info_line_894
	.globl gText_Rom_2EADE4
gText_Rom_2EADE4: @ 0x082EADE4
	.string "とっしん$"
	.if (. - gText_Rom_2EADE4) > 0x5
	.error "gText_Rom_2EADE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADE4) < 0x5
	.space 0x5 - (. - gText_Rom_2EADE4)
	.endif
	.incbin "baserom.gba", 0x2eade9, 0x3

	@ src/data/moves_info.h:916 moves_info_line_916
	.globl gText_Rom_2EADEC
gText_Rom_2EADEC: @ 0x082EADEC
	.string "あばれる$"
	.if (. - gText_Rom_2EADEC) > 0x5
	.error "gText_Rom_2EADEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADEC) < 0x5
	.space 0x5 - (. - gText_Rom_2EADEC)
	.endif
	.incbin "baserom.gba", 0x2eadf1, 0x3

	@ src/data/moves_info.h:942 moves_info_line_942
	.globl gText_Rom_2EADF4
gText_Rom_2EADF4: @ 0x082EADF4
	.string "すてみタックル$"
	.if (. - gText_Rom_2EADF4) > 0x8
	.error "gText_Rom_2EADF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADF4) < 0x8
	.space 0x8 - (. - gText_Rom_2EADF4)
	.endif

	@ src/data/moves_info.h:964 moves_info_line_964
	.globl gText_Rom_2EADFC
gText_Rom_2EADFC: @ 0x082EADFC
	.string "しっぽをふる$"
	.if (. - gText_Rom_2EADFC) > 0x7
	.error "gText_Rom_2EADFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EADFC) < 0x7
	.space 0x7 - (. - gText_Rom_2EADFC)
	.endif
	.incbin "baserom.gba", 0x2eae03, 0x1

	@ src/data/moves_info.h:989 moves_info_line_989
	.globl gText_Rom_2EAE04
gText_Rom_2EAE04: @ 0x082EAE04
	.string "どくばり$"
	.if (. - gText_Rom_2EAE04) > 0x5
	.error "gText_Rom_2EAE04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE04) < 0x5
	.space 0x5 - (. - gText_Rom_2EAE04)
	.endif
	.incbin "baserom.gba", 0x2eae09, 0x3

	@ src/data/moves_info.h:1012 moves_info_line_1012
	.globl gText_Rom_2EAE0C
gText_Rom_2EAE0C: @ 0x082EAE0C
	.string "ダブルニードル$"
	.if (. - gText_Rom_2EAE0C) > 0x8
	.error "gText_Rom_2EAE0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE0C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAE0C)
	.endif

	@ src/data/moves_info.h:1038 moves_info_line_1038
	.globl gText_Rom_2EAE14
gText_Rom_2EAE14: @ 0x082EAE14
	.string "ミサイルばり$"
	.if (. - gText_Rom_2EAE14) > 0x7
	.error "gText_Rom_2EAE14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE14) < 0x7
	.space 0x7 - (. - gText_Rom_2EAE14)
	.endif
	.incbin "baserom.gba", 0x2eae1b, 0x1

	@ src/data/moves_info.h:1058 moves_info_line_1058
	.globl gText_Rom_2EAE1C
gText_Rom_2EAE1C: @ 0x082EAE1C
	.string "にらみつける$"
	.if (. - gText_Rom_2EAE1C) > 0x7
	.error "gText_Rom_2EAE1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE1C) < 0x7
	.space 0x7 - (. - gText_Rom_2EAE1C)
	.endif
	.incbin "baserom.gba", 0x2eae23, 0x1

	@ src/data/moves_info.h:1083 moves_info_line_1083
	.globl gText_Rom_2EAE24
gText_Rom_2EAE24: @ 0x082EAE24
	.string "かみつく$"
	.if (. - gText_Rom_2EAE24) > 0x5
	.error "gText_Rom_2EAE24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE24) < 0x5
	.space 0x5 - (. - gText_Rom_2EAE24)
	.endif
	.incbin "baserom.gba", 0x2eae29, 0x3

	@ src/data/moves_info.h:1109 moves_info_line_1109 (+1 aliases)
	.globl gText_Rom_2EAE2C
gText_Rom_2EAE2C: @ 0x082EAE2C
	.string "なきごえ$"
	.if (. - gText_Rom_2EAE2C) > 0x5
	.error "gText_Rom_2EAE2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE2C) < 0x5
	.space 0x5 - (. - gText_Rom_2EAE2C)
	.endif
	.incbin "baserom.gba", 0x2eae31, 0x3

	@ src/data/moves_info.h:1136 moves_info_line_1136
	.globl gText_Rom_2EAE34
gText_Rom_2EAE34: @ 0x082EAE34
	.string "ほえる$"
	.if (. - gText_Rom_2EAE34) > 0x4
	.error "gText_Rom_2EAE34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE34) < 0x4
	.space 0x4 - (. - gText_Rom_2EAE34)
	.endif
	.incbin "baserom.gba", 0x2eae38, 0x4

	@ src/data/moves_info.h:1169 moves_info_line_1169
	.globl gText_Rom_2EAE3C
gText_Rom_2EAE3C: @ 0x082EAE3C
	.string "うたう$"
	.if (. - gText_Rom_2EAE3C) > 0x4
	.error "gText_Rom_2EAE3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE3C) < 0x4
	.space 0x4 - (. - gText_Rom_2EAE3C)
	.endif
	.incbin "baserom.gba", 0x2eae40, 0x4

	@ src/data/moves_info.h:1194 moves_info_line_1194
	.globl gText_Rom_2EAE44
gText_Rom_2EAE44: @ 0x082EAE44
	.string "ちょうおんぱ$"
	.if (. - gText_Rom_2EAE44) > 0x7
	.error "gText_Rom_2EAE44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE44) < 0x7
	.space 0x7 - (. - gText_Rom_2EAE44)
	.endif
	.incbin "baserom.gba", 0x2eae4b, 0x1

	@ src/data/moves_info.h:1218 moves_info_line_1218
	.globl gText_Rom_2EAE4C
gText_Rom_2EAE4C: @ 0x082EAE4C
	.string "ソニックブーム$"
	.if (. - gText_Rom_2EAE4C) > 0x8
	.error "gText_Rom_2EAE4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE4C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAE4C)
	.endif

	@ src/data/moves_info.h:1239 moves_info_line_1239
	.globl gText_Rom_2EAE54
gText_Rom_2EAE54: @ 0x082EAE54
	.string "かなしばり$"
	.if (. - gText_Rom_2EAE54) > 0x6
	.error "gText_Rom_2EAE54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE54) < 0x6
	.space 0x6 - (. - gText_Rom_2EAE54)
	.endif
	.incbin "baserom.gba", 0x2eae5a, 0x2

	@ src/data/moves_info.h:1268 moves_info_line_1268
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EAE5C
gText_Rom_2EAE5C: @ 0x082EAE5C
	.string "ようかいえき$"
	.if (. - gText_Rom_2EAE5C) != 0x7
	.error "gText_Rom_2EAE5C must retain its original byte length"
	.endif
	.globl gText_Rom_2EAE5F
	.set gText_Rom_2EAE5F, gText_Rom_2EAE5C + 0x3
	.incbin "baserom.gba", 0x2eae63, 0x1

	@ src/data/moves_info.h:1293 moves_info_line_1293
	.globl gText_Rom_2EAE64
gText_Rom_2EAE64: @ 0x082EAE64
	.string "ひのこ$"
	.if (. - gText_Rom_2EAE64) > 0x4
	.error "gText_Rom_2EAE64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE64) < 0x4
	.space 0x4 - (. - gText_Rom_2EAE64)
	.endif
	.incbin "baserom.gba", 0x2eae68, 0x4

	@ src/data/moves_info.h:1316 moves_info_line_1316
	.globl gText_Rom_2EAE6C
gText_Rom_2EAE6C: @ 0x082EAE6C
	.string "かえんほうしゃ$"
	.if (. - gText_Rom_2EAE6C) > 0x8
	.error "gText_Rom_2EAE6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE6C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAE6C)
	.endif

	@ src/battle_debug.c:412 battle_debug_line_412 (+1 aliases)
	.globl gText_Rom_2EAE74
gText_Rom_2EAE74: @ 0x082EAE74
	.string "しろいきり$"
	.if (. - gText_Rom_2EAE74) > 0x6
	.error "gText_Rom_2EAE74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE74) < 0x6
	.space 0x6 - (. - gText_Rom_2EAE74)
	.endif
	.incbin "baserom.gba", 0x2eae7a, 0x2

	@ src/data/moves_info.h:1364 moves_info_line_1364
	.globl gText_Rom_2EAE7C
gText_Rom_2EAE7C: @ 0x082EAE7C
	.string "みずでっぽう$"
	.if (. - gText_Rom_2EAE7C) > 0x7
	.error "gText_Rom_2EAE7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE7C) < 0x7
	.space 0x7 - (. - gText_Rom_2EAE7C)
	.endif
	.incbin "baserom.gba", 0x2eae83, 0x1

	@ src/data/moves_info.h:1383 moves_info_line_1383
	.globl gText_Rom_2EAE84
gText_Rom_2EAE84: @ 0x082EAE84
	.string "ハイドロポンプ$"
	.if (. - gText_Rom_2EAE84) > 0x8
	.error "gText_Rom_2EAE84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE84) < 0x8
	.space 0x8 - (. - gText_Rom_2EAE84)
	.endif

	@ src/data/moves_info.h:1403 moves_info_line_1403
	.globl gText_Rom_2EAE8C
gText_Rom_2EAE8C: @ 0x082EAE8C
	.string "なみのり$"
	.if (. - gText_Rom_2EAE8C) > 0x5
	.error "gText_Rom_2EAE8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE8C) < 0x5
	.space 0x5 - (. - gText_Rom_2EAE8C)
	.endif
	.incbin "baserom.gba", 0x2eae91, 0x3

	@ src/data/moves_info.h:1425 moves_info_line_1425
	.globl gText_Rom_2EAE94
gText_Rom_2EAE94: @ 0x082EAE94
	.string "れいとうビーム$"
	.if (. - gText_Rom_2EAE94) > 0x8
	.error "gText_Rom_2EAE94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE94) < 0x8
	.space 0x8 - (. - gText_Rom_2EAE94)
	.endif

	@ src/data/moves_info.h:1451 moves_info_line_1451
	.globl gText_Rom_2EAE9C
gText_Rom_2EAE9C: @ 0x082EAE9C
	.string "ふぶき$"
	.if (. - gText_Rom_2EAE9C) > 0x4
	.error "gText_Rom_2EAE9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAE9C) < 0x4
	.space 0x4 - (. - gText_Rom_2EAE9C)
	.endif
	.incbin "baserom.gba", 0x2eaea0, 0x4

	@ src/data/moves_info.h:1477 moves_info_line_1477
	.globl gText_Rom_2EAEA4
gText_Rom_2EAEA4: @ 0x082EAEA4
	.string "サイケこうせん$"
	.if (. - gText_Rom_2EAEA4) > 0x8
	.error "gText_Rom_2EAEA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEA4) < 0x8
	.space 0x8 - (. - gText_Rom_2EAEA4)
	.endif

	@ src/data/moves_info.h:1501 moves_info_line_1501
	.globl gText_Rom_2EAEAC
gText_Rom_2EAEAC: @ 0x082EAEAC
	.string "バブルこうせん$"
	.if (. - gText_Rom_2EAEAC) > 0x8
	.error "gText_Rom_2EAEAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEAC) < 0x8
	.space 0x8 - (. - gText_Rom_2EAEAC)
	.endif

	@ src/data/moves_info.h:1525 moves_info_line_1525
	.globl gText_Rom_2EAEB4
gText_Rom_2EAEB4: @ 0x082EAEB4
	.string "オーロラビーム$"
	.if (. - gText_Rom_2EAEB4) > 0x8
	.error "gText_Rom_2EAEB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEB4) < 0x8
	.space 0x8 - (. - gText_Rom_2EAEB4)
	.endif

	@ src/data/moves_info.h:1549 moves_info_line_1549
	.globl gText_Rom_2EAEBC
gText_Rom_2EAEBC: @ 0x082EAEBC
	.string "はかいこうせん$"
	.if (. - gText_Rom_2EAEBC) > 0x8
	.error "gText_Rom_2EAEBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEBC) < 0x8
	.space 0x8 - (. - gText_Rom_2EAEBC)
	.endif

	@ src/data/moves_info.h:1574 moves_info_line_1574
	.globl gText_Rom_2EAEC4
gText_Rom_2EAEC4: @ 0x082EAEC4
	.string "つつく$"
	.if (. - gText_Rom_2EAEC4) > 0x4
	.error "gText_Rom_2EAEC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEC4) < 0x4
	.space 0x4 - (. - gText_Rom_2EAEC4)
	.endif
	.incbin "baserom.gba", 0x2eaec8, 0x4

	@ src/data/moves_info.h:1594 moves_info_line_1594
	.globl gText_Rom_2EAECC
gText_Rom_2EAECC: @ 0x082EAECC
	.string "ドリルくちばし$"
	.if (. - gText_Rom_2EAECC) > 0x8
	.error "gText_Rom_2EAECC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAECC) < 0x8
	.space 0x8 - (. - gText_Rom_2EAECC)
	.endif

	@ src/data/moves_info.h:1615 moves_info_line_1615
	.globl gText_Rom_2EAED4
gText_Rom_2EAED4: @ 0x082EAED4
	.string "じごくぐるま$"
	.if (. - gText_Rom_2EAED4) > 0x7
	.error "gText_Rom_2EAED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAED4) < 0x7
	.space 0x7 - (. - gText_Rom_2EAED4)
	.endif
	.incbin "baserom.gba", 0x2eaedb, 0x1

	@ src/data/moves_info.h:1637 moves_info_line_1637
	.globl gText_Rom_2EAEDC
gText_Rom_2EAEDC: @ 0x082EAEDC
	.string "けたぐり$"
	.if (. - gText_Rom_2EAEDC) > 0x5
	.error "gText_Rom_2EAEDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEDC) < 0x5
	.space 0x5 - (. - gText_Rom_2EAEDC)
	.endif
	.incbin "baserom.gba", 0x2eaee1, 0x3

	@ src/data/moves_info.h:1666 moves_info_line_1666
	.globl gText_Rom_2EAEE4
gText_Rom_2EAEE4: @ 0x082EAEE4
	.string "カウンター$"
	.if (. - gText_Rom_2EAEE4) > 0x6
	.error "gText_Rom_2EAEE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEE4) < 0x6
	.space 0x6 - (. - gText_Rom_2EAEE4)
	.endif
	.incbin "baserom.gba", 0x2eaeea, 0x2

	@ src/data/moves_info.h:1698 moves_info_line_1698
	.globl gText_Rom_2EAEEC
gText_Rom_2EAEEC: @ 0x082EAEEC
	.string "ちきゅうなげ$"
	.if (. - gText_Rom_2EAEEC) > 0x7
	.error "gText_Rom_2EAEEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEEC) < 0x7
	.space 0x7 - (. - gText_Rom_2EAEEC)
	.endif
	.incbin "baserom.gba", 0x2eaef3, 0x1

	@ src/data/moves_info.h:1720 moves_info_line_1720
	.globl gText_Rom_2EAEF4
gText_Rom_2EAEF4: @ 0x082EAEF4
	.string "かいりき$"
	.if (. - gText_Rom_2EAEF4) > 0x5
	.error "gText_Rom_2EAEF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEF4) < 0x5
	.space 0x5 - (. - gText_Rom_2EAEF4)
	.endif
	.incbin "baserom.gba", 0x2eaef9, 0x3

	@ src/data/moves_info.h:1741 moves_info_line_1741
	.globl gText_Rom_2EAEFC
gText_Rom_2EAEFC: @ 0x082EAEFC
	.string "すいとる$"
	.if (. - gText_Rom_2EAEFC) > 0x5
	.error "gText_Rom_2EAEFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAEFC) < 0x5
	.space 0x5 - (. - gText_Rom_2EAEFC)
	.endif
	.incbin "baserom.gba", 0x2eaf01, 0x3

	@ src/data/moves_info.h:1763 moves_info_line_1763
	.globl gText_Rom_2EAF04
gText_Rom_2EAF04: @ 0x082EAF04
	.string "メガドレイン$"
	.if (. - gText_Rom_2EAF04) > 0x7
	.error "gText_Rom_2EAF04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF04) < 0x7
	.space 0x7 - (. - gText_Rom_2EAF04)
	.endif
	.incbin "baserom.gba", 0x2eaf0b, 0x1

	@ src/data/moves_info.h:1786 moves_info_line_1786
	.globl gText_Rom_2EAF0C
gText_Rom_2EAF0C: @ 0x082EAF0C
	.string "やどりぎのタネ$"
	.if (. - gText_Rom_2EAF0C) > 0x8
	.error "gText_Rom_2EAF0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF0C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF0C)
	.endif

	@ src/data/moves_info.h:1808 moves_info_line_1808
	.globl gText_Rom_2EAF14
gText_Rom_2EAF14: @ 0x082EAF14
	.string "せいちょう$"
	.if (. - gText_Rom_2EAF14) > 0x6
	.error "gText_Rom_2EAF14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF14) < 0x6
	.space 0x6 - (. - gText_Rom_2EAF14)
	.endif
	.incbin "baserom.gba", 0x2eaf1a, 0x2

	@ src/data/moves_info.h:1837 moves_info_line_1837
	.globl gText_Rom_2EAF1C
gText_Rom_2EAF1C: @ 0x082EAF1C
	.string "はっぱカッター$"
	.if (. - gText_Rom_2EAF1C) > 0x8
	.error "gText_Rom_2EAF1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF1C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF1C)
	.endif

	@ src/data/moves_info.h:1859 moves_info_line_1859
	.globl gText_Rom_2EAF24
gText_Rom_2EAF24: @ 0x082EAF24
	.string "ソーラービーム$"
	.if (. - gText_Rom_2EAF24) > 0x8
	.error "gText_Rom_2EAF24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF24) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF24)
	.endif

	@ src/data/moves_info.h:1882 moves_info_line_1882
	.globl gText_Rom_2EAF2C
gText_Rom_2EAF2C: @ 0x082EAF2C
	.string "どくのこな$"
	.if (. - gText_Rom_2EAF2C) > 0x6
	.error "gText_Rom_2EAF2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF2C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAF2C)
	.endif
	.incbin "baserom.gba", 0x2eaf32, 0x2

	@ src/data/moves_info.h:1906 moves_info_line_1906
	.globl gText_Rom_2EAF34
gText_Rom_2EAF34: @ 0x082EAF34
	.string "しびれごな$"
	.if (. - gText_Rom_2EAF34) > 0x6
	.error "gText_Rom_2EAF34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF34) < 0x6
	.space 0x6 - (. - gText_Rom_2EAF34)
	.endif
	.incbin "baserom.gba", 0x2eaf3a, 0x2

	@ src/data/moves_info.h:1930 moves_info_line_1930
	.globl gText_Rom_2EAF3C
gText_Rom_2EAF3C: @ 0x082EAF3C
	.string "ねむりごな$"
	.if (. - gText_Rom_2EAF3C) > 0x6
	.error "gText_Rom_2EAF3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF3C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAF3C)
	.endif
	.incbin "baserom.gba", 0x2eaf42, 0x2

	@ src/data/moves_info.h:1954 moves_info_line_1954
	.globl gText_Rom_2EAF44
gText_Rom_2EAF44: @ 0x082EAF44
	.string "はなびらのまい$"
	.if (. - gText_Rom_2EAF44) > 0x8
	.error "gText_Rom_2EAF44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF44) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF44)
	.endif

	@ src/data/moves_info.h:1987 moves_info_line_1987
	.globl gText_Rom_2EAF4C
gText_Rom_2EAF4C: @ 0x082EAF4C
	.string "いとをはく$"
	.if (. - gText_Rom_2EAF4C) > 0x6
	.error "gText_Rom_2EAF4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF4C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAF4C)
	.endif
	.incbin "baserom.gba", 0x2eaf52, 0x2

	@ src/data/moves_info.h:2012 moves_info_line_2012
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EAF54
gText_Rom_2EAF54: @ 0x082EAF54
	.string "りゅうのいかり$"
	.if (. - gText_Rom_2EAF54) != 0x8
	.error "gText_Rom_2EAF54 must retain its original byte length"
	.endif
	.globl gText_Rom_2EAF58
	.set gText_Rom_2EAF58, gText_Rom_2EAF54 + 0x4

	@ src/data/moves_info.h:2034 moves_info_line_2034
	.globl gText_Rom_2EAF5C
gText_Rom_2EAF5C: @ 0x082EAF5C
	.string "ほのおのうず$"
	.if (. - gText_Rom_2EAF5C) > 0x7
	.error "gText_Rom_2EAF5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF5C) < 0x7
	.space 0x7 - (. - gText_Rom_2EAF5C)
	.endif
	.incbin "baserom.gba", 0x2eaf63, 0x1

	@ src/data/moves_info.h:2059 moves_info_line_2059
	.globl gText_Rom_2EAF64
gText_Rom_2EAF64: @ 0x082EAF64
	.string "でんきショック$"
	.if (. - gText_Rom_2EAF64) > 0x8
	.error "gText_Rom_2EAF64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF64) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF64)
	.endif

	@ src/data/moves_info.h:2082 moves_info_line_2082
	.globl gText_Rom_2EAF6C
gText_Rom_2EAF6C: @ 0x082EAF6C
	.string "10まんボルト$"
	.if (. - gText_Rom_2EAF6C) > 0x8
	.error "gText_Rom_2EAF6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF6C) < 0x8
	.space 0x8 - (. - gText_Rom_2EAF6C)
	.endif

	@ src/data/moves_info.h:2106 moves_info_line_2106
	.globl gText_Rom_2EAF74
gText_Rom_2EAF74: @ 0x082EAF74
	.string "でんじは$"
	.if (. - gText_Rom_2EAF74) > 0x5
	.error "gText_Rom_2EAF74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF74) < 0x5
	.space 0x5 - (. - gText_Rom_2EAF74)
	.endif
	.incbin "baserom.gba", 0x2eaf79, 0x3

	@ src/data/moves_info.h:2129 moves_info_line_2129 (+1 aliases)
	.globl gText_Rom_2EAF7C
gText_Rom_2EAF7C: @ 0x082EAF7C
	.string "かみなり$"
	.if (. - gText_Rom_2EAF7C) > 0x5
	.error "gText_Rom_2EAF7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF7C) < 0x5
	.space 0x5 - (. - gText_Rom_2EAF7C)
	.endif
	.incbin "baserom.gba", 0x2eaf81, 0x3

	@ src/data/moves_info.h:2156 moves_info_line_2156
	.globl gText_Rom_2EAF84
gText_Rom_2EAF84: @ 0x082EAF84
	.string "いわおとし$"
	.if (. - gText_Rom_2EAF84) > 0x6
	.error "gText_Rom_2EAF84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF84) < 0x6
	.space 0x6 - (. - gText_Rom_2EAF84)
	.endif
	.incbin "baserom.gba", 0x2eaf8a, 0x2

	@ src/data/moves_info.h:2175 moves_info_line_2175
	.globl gText_Rom_2EAF8C
gText_Rom_2EAF8C: @ 0x082EAF8C
	.string "じしん$"
	.if (. - gText_Rom_2EAF8C) > 0x4
	.error "gText_Rom_2EAF8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF8C) < 0x4
	.space 0x4 - (. - gText_Rom_2EAF8C)
	.endif
	.incbin "baserom.gba", 0x2eaf90, 0x4

	@ src/data/moves_info.h:2198 moves_info_line_2198
	.globl gText_Rom_2EAF94
gText_Rom_2EAF94: @ 0x082EAF94
	.string "じわれ$"
	.if (. - gText_Rom_2EAF94) > 0x4
	.error "gText_Rom_2EAF94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF94) < 0x4
	.space 0x4 - (. - gText_Rom_2EAF94)
	.endif
	.incbin "baserom.gba", 0x2eaf98, 0x4

	@ src/data/moves_info.h:2220 moves_info_line_2220
	.globl gText_Rom_2EAF9C
gText_Rom_2EAF9C: @ 0x082EAF9C
	.string "あなをほる$"
	.if (. - gText_Rom_2EAF9C) > 0x6
	.error "gText_Rom_2EAF9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAF9C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAF9C)
	.endif
	.incbin "baserom.gba", 0x2eafa2, 0x2

	@ src/data/moves_info.h:2252 moves_info_line_2252
	.globl gText_Rom_2EAFA4
gText_Rom_2EAFA4: @ 0x082EAFA4
	.string "どくどく$"
	.if (. - gText_Rom_2EAFA4) > 0x5
	.error "gText_Rom_2EAFA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFA4) < 0x5
	.space 0x5 - (. - gText_Rom_2EAFA4)
	.endif
	.incbin "baserom.gba", 0x2eafa9, 0x3

	@ src/data/moves_info.h:2276 moves_info_line_2276
	.globl gText_Rom_2EAFAC
gText_Rom_2EAFAC: @ 0x082EAFAC
	.string "ねんりき$"
	.if (. - gText_Rom_2EAFAC) > 0x5
	.error "gText_Rom_2EAFAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFAC) < 0x5
	.space 0x5 - (. - gText_Rom_2EAFAC)
	.endif
	.incbin "baserom.gba", 0x2eafb1, 0x3

	@ src/data/moves_info.h:2299 moves_info_line_2299
	.globl gText_Rom_2EAFB4
gText_Rom_2EAFB4: @ 0x082EAFB4
	.string "サイコキネシス$"
	.if (. - gText_Rom_2EAFB4) > 0x8
	.error "gText_Rom_2EAFB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFB4) < 0x8
	.space 0x8 - (. - gText_Rom_2EAFB4)
	.endif

	@ src/data/moves_info.h:2324 moves_info_line_2324
	.globl gText_Rom_2EAFBC
gText_Rom_2EAFBC: @ 0x082EAFBC
	.string "さいみんじゅつ$"
	.if (. - gText_Rom_2EAFBC) > 0x8
	.error "gText_Rom_2EAFBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFBC) < 0x8
	.space 0x8 - (. - gText_Rom_2EAFBC)
	.endif

	@ src/data/moves_info.h:2347 moves_info_line_2347
	.globl gText_Rom_2EAFC4
gText_Rom_2EAFC4: @ 0x082EAFC4
	.string "ヨガのポーズ$"
	.if (. - gText_Rom_2EAFC4) > 0x7
	.error "gText_Rom_2EAFC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFC4) < 0x7
	.space 0x7 - (. - gText_Rom_2EAFC4)
	.endif
	.incbin "baserom.gba", 0x2eafcb, 0x1

	@ src/data/moves_info.h:2375 moves_info_line_2375
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EAFCC
gText_Rom_2EAFCC: @ 0x082EAFCC
	.string "こうそくいどう$"
	.if (. - gText_Rom_2EAFCC) != 0x8
	.error "gText_Rom_2EAFCC must retain its original byte length"
	.endif
	.globl gText_Rom_2EAFD0
	.set gText_Rom_2EAFD0, gText_Rom_2EAFCC + 0x4

	@ src/data/moves_info.h:2403 moves_info_line_2403
	.globl gText_Rom_2EAFD4
gText_Rom_2EAFD4: @ 0x082EAFD4
	.string "でんこうせっか$"
	.if (. - gText_Rom_2EAFD4) > 0x8
	.error "gText_Rom_2EAFD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFD4) < 0x8
	.space 0x8 - (. - gText_Rom_2EAFD4)
	.endif

	@ src/battle_debug.c:363 battle_debug_line_363 (+1 aliases)
	.globl gText_Rom_2EAFDC
gText_Rom_2EAFDC: @ 0x082EAFDC
	.string "いかり$"
	.if (. - gText_Rom_2EAFDC) > 0x4
	.error "gText_Rom_2EAFDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFDC) < 0x4
	.space 0x4 - (. - gText_Rom_2EAFDC)
	.endif
	.incbin "baserom.gba", 0x2eafe0, 0x4

	@ src/data/moves_info.h:2448 moves_info_line_2448
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EAFE4
gText_Rom_2EAFE4: @ 0x082EAFE4
	.string "テレポート$"
	.if (. - gText_Rom_2EAFE4) != 0x6
	.error "gText_Rom_2EAFE4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EAFE5
	.set gText_Rom_2EAFE5, gText_Rom_2EAFE4 + 0x1
	.incbin "baserom.gba", 0x2eafea, 0x2

	@ src/data/moves_info.h:2470 moves_info_line_2470
	.globl gText_Rom_2EAFEC
gText_Rom_2EAFEC: @ 0x082EAFEC
	.string "ナイトヘッド$"
	.if (. - gText_Rom_2EAFEC) > 0x7
	.error "gText_Rom_2EAFEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFEC) < 0x7
	.space 0x7 - (. - gText_Rom_2EAFEC)
	.endif
	.incbin "baserom.gba", 0x2eaff3, 0x1

	@ src/data/moves_info.h:2490 moves_info_line_2490
	.globl gText_Rom_2EAFF4
gText_Rom_2EAFF4: @ 0x082EAFF4
	.string "ものまね$"
	.if (. - gText_Rom_2EAFF4) > 0x5
	.error "gText_Rom_2EAFF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFF4) < 0x5
	.space 0x5 - (. - gText_Rom_2EAFF4)
	.endif
	.incbin "baserom.gba", 0x2eaff9, 0x3

	@ src/data/moves_info.h:2519 moves_info_line_2519
	.globl gText_Rom_2EAFFC
gText_Rom_2EAFFC: @ 0x082EAFFC
	.string "いやなおと$"
	.if (. - gText_Rom_2EAFFC) > 0x6
	.error "gText_Rom_2EAFFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAFFC) < 0x6
	.space 0x6 - (. - gText_Rom_2EAFFC)
	.endif
	.incbin "baserom.gba", 0x2eb002, 0x2

	@ src/data/moves_info.h:2547 moves_info_line_2547
	.globl gText_Rom_2EB004
gText_Rom_2EB004: @ 0x082EB004
	.string "かげぶんしん$"
	.if (. - gText_Rom_2EB004) > 0x7
	.error "gText_Rom_2EB004 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB004) < 0x7
	.space 0x7 - (. - gText_Rom_2EB004)
	.endif
	.incbin "baserom.gba", 0x2eb00b, 0x1

	@ src/data/moves_info.h:2575 moves_info_line_2575
	.globl gText_Rom_2EB00C
gText_Rom_2EB00C: @ 0x082EB00C
	.string "じこさいせい$"
	.if (. - gText_Rom_2EB00C) > 0x7
	.error "gText_Rom_2EB00C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB00C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB00C)
	.endif
	.incbin "baserom.gba", 0x2eb013, 0x1

	@ src/data/moves_info.h:2606 moves_info_line_2606
	.globl gText_Rom_2EB014
gText_Rom_2EB014: @ 0x082EB014
	.string "かたくなる$"
	.if (. - gText_Rom_2EB014) > 0x6
	.error "gText_Rom_2EB014 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB014) < 0x6
	.space 0x6 - (. - gText_Rom_2EB014)
	.endif
	.incbin "baserom.gba", 0x2eb01a, 0x2

	@ src/battle_debug.c:380 battle_debug_line_380 (+1 aliases)
	.globl gText_Rom_2EB01C
gText_Rom_2EB01C: @ 0x082EB01C
	.string "ちいさくなる$"
	.if (. - gText_Rom_2EB01C) > 0x7
	.error "gText_Rom_2EB01C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB01C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB01C)
	.endif
	.incbin "baserom.gba", 0x2eb023, 0x1

	@ src/data/moves_info.h:2662 moves_info_line_2662
	.globl gText_Rom_2EB024
gText_Rom_2EB024: @ 0x082EB024
	.string "えんまく$"
	.if (. - gText_Rom_2EB024) > 0x5
	.error "gText_Rom_2EB024 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB024) < 0x5
	.space 0x5 - (. - gText_Rom_2EB024)
	.endif
	.incbin "baserom.gba", 0x2eb029, 0x3

	@ src/data/moves_info.h:2688 moves_info_line_2688
	.globl gText_Rom_2EB02C
gText_Rom_2EB02C: @ 0x082EB02C
	.string "あやしいひかり$"
	.if (. - gText_Rom_2EB02C) > 0x8
	.error "gText_Rom_2EB02C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB02C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB02C)
	.endif

	@ src/data/moves_info.h:2710 moves_info_line_2710
	.globl gText_Rom_2EB034
gText_Rom_2EB034: @ 0x082EB034
	.string "からにこもる$"
	.if (. - gText_Rom_2EB034) > 0x7
	.error "gText_Rom_2EB034 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB034) < 0x7
	.space 0x7 - (. - gText_Rom_2EB034)
	.endif
	.incbin "baserom.gba", 0x2eb03b, 0x1

	@ src/battle_debug.c:362 battle_debug_line_362 (+1 aliases)
	.globl gText_Rom_2EB03C
gText_Rom_2EB03C: @ 0x082EB03C
	.string "まるくなる$"
	.if (. - gText_Rom_2EB03C) > 0x6
	.error "gText_Rom_2EB03C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB03C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB03C)
	.endif
	.incbin "baserom.gba", 0x2eb042, 0x2

