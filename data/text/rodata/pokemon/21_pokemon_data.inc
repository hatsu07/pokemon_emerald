	@ src/data/pokemon/species_info/gen_1_families.h:27 gen_1_families_line_27
	.globl gText_Rom_2EA322
gText_Rom_2EA322: @ 0x082EA322
	.string "フシギダネ$"
	.if (. - gText_Rom_2EA322) > 0x6
	.error "gText_Rom_2EA322 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA322) < 0x6
	.space 0x6 - (. - gText_Rom_2EA322)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:98 gen_1_families_line_98
	.globl gText_Rom_2EA328
gText_Rom_2EA328: @ 0x082EA328
	.string "フシギソウ$"
	.if (. - gText_Rom_2EA328) > 0x6
	.error "gText_Rom_2EA328 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA328) < 0x6
	.space 0x6 - (. - gText_Rom_2EA328)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:175 gen_1_families_line_175 (+2 aliases)
	.globl gText_Rom_2EA32E
gText_Rom_2EA32E: @ 0x082EA32E
	.string "フシギバナ$"
	.if (. - gText_Rom_2EA32E) > 0x6
	.error "gText_Rom_2EA32E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA32E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA32E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:393 gen_1_families_line_393
	.globl gText_Rom_2EA334
gText_Rom_2EA334: @ 0x082EA334
	.string "ヒトカゲ$"
	.if (. - gText_Rom_2EA334) > 0x5
	.error "gText_Rom_2EA334 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA334) < 0x5
	.space 0x5 - (. - gText_Rom_2EA334)
	.endif
	.incbin "baserom.gba", 0x2ea339, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:463 gen_1_families_line_463
	.globl gText_Rom_2EA33A
gText_Rom_2EA33A: @ 0x082EA33A
	.string "リザード$"
	.if (. - gText_Rom_2EA33A) > 0x5
	.error "gText_Rom_2EA33A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA33A) < 0x5
	.space 0x5 - (. - gText_Rom_2EA33A)
	.endif
	.incbin "baserom.gba", 0x2ea33f, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:541 gen_1_families_line_541 (+3 aliases)
	.globl gText_Rom_2EA340
gText_Rom_2EA340: @ 0x082EA340
	.string "リザードン$"
	.if (. - gText_Rom_2EA340) > 0x6
	.error "gText_Rom_2EA340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA340) < 0x6
	.space 0x6 - (. - gText_Rom_2EA340)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:815 gen_1_families_line_815
	.globl gText_Rom_2EA346
gText_Rom_2EA346: @ 0x082EA346
	.string "ゼニガメ$"
	.if (. - gText_Rom_2EA346) > 0x5
	.error "gText_Rom_2EA346 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA346) < 0x5
	.space 0x5 - (. - gText_Rom_2EA346)
	.endif
	.incbin "baserom.gba", 0x2ea34b, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:886 gen_1_families_line_886
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EA34C
gText_Rom_2EA34C: @ 0x082EA34C
	.string "カメール$"
	.if (. - gText_Rom_2EA34C) != 0x5
	.error "gText_Rom_2EA34C must retain its original byte length"
	.endif
	.globl gText_Rom_2EA34D
	.set gText_Rom_2EA34D, gText_Rom_2EA34C + 0x1
	.incbin "baserom.gba", 0x2ea351, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:964 gen_1_families_line_964 (+2 aliases)
	.globl gText_Rom_2EA352
gText_Rom_2EA352: @ 0x082EA352
	.string "カメックス$"
	.if (. - gText_Rom_2EA352) > 0x6
	.error "gText_Rom_2EA352 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA352) < 0x6
	.space 0x6 - (. - gText_Rom_2EA352)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:1170 gen_1_families_line_1170
	.globl gText_Rom_2EA358
gText_Rom_2EA358: @ 0x082EA358
	.string "キャタピー$"
	.if (. - gText_Rom_2EA358) > 0x6
	.error "gText_Rom_2EA358 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA358) < 0x6
	.space 0x6 - (. - gText_Rom_2EA358)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:1244 gen_1_families_line_1244
	.globl gText_Rom_2EA35E
gText_Rom_2EA35E: @ 0x082EA35E
	.string "トランセル$"
	.if (. - gText_Rom_2EA35E) > 0x6
	.error "gText_Rom_2EA35E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA35E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA35E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:1324 gen_1_families_line_1324 (+1 aliases)
	.globl gText_Rom_2EA364
gText_Rom_2EA364: @ 0x082EA364
	.string "バタフリー$"
	.if (. - gText_Rom_2EA364) > 0x6
	.error "gText_Rom_2EA364 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA364) < 0x6
	.space 0x6 - (. - gText_Rom_2EA364)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:1481 gen_1_families_line_1481
	.globl gText_Rom_2EA36A
gText_Rom_2EA36A: @ 0x082EA36A
	.string "ビードル$"
	.if (. - gText_Rom_2EA36A) > 0x5
	.error "gText_Rom_2EA36A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA36A) < 0x5
	.space 0x5 - (. - gText_Rom_2EA36A)
	.endif
	.incbin "baserom.gba", 0x2ea36f, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:1555 gen_1_families_line_1555
	.globl gText_Rom_2EA370
gText_Rom_2EA370: @ 0x082EA370
	.string "コクーン$"
	.if (. - gText_Rom_2EA370) > 0x5
	.error "gText_Rom_2EA370 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA370) < 0x5
	.space 0x5 - (. - gText_Rom_2EA370)
	.endif
	.incbin "baserom.gba", 0x2ea375, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:1643 gen_1_families_line_1643 (+1 aliases)
	.globl gText_Rom_2EA376
gText_Rom_2EA376: @ 0x082EA376
	.string "スピアー$"
	.if (. - gText_Rom_2EA376) > 0x5
	.error "gText_Rom_2EA376 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA376) < 0x5
	.space 0x5 - (. - gText_Rom_2EA376)
	.endif
	.incbin "baserom.gba", 0x2ea37b, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:1800 gen_1_families_line_1800
	.globl gText_Rom_2EA37C
gText_Rom_2EA37C: @ 0x082EA37C
	.string "ポッポ$"
	.if (. - gText_Rom_2EA37C) > 0x4
	.error "gText_Rom_2EA37C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA37C) < 0x4
	.space 0x4 - (. - gText_Rom_2EA37C)
	.endif
	.incbin "baserom.gba", 0x2ea380, 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:1874 gen_1_families_line_1874
	.globl gText_Rom_2EA382
gText_Rom_2EA382: @ 0x082EA382
	.string "ピジョン$"
	.if (. - gText_Rom_2EA382) > 0x5
	.error "gText_Rom_2EA382 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA382) < 0x5
	.space 0x5 - (. - gText_Rom_2EA382)
	.endif
	.incbin "baserom.gba", 0x2ea387, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:1957 gen_1_families_line_1957 (+1 aliases)
	.globl gText_Rom_2EA388
gText_Rom_2EA388: @ 0x082EA388
	.string "ピジョット$"
	.if (. - gText_Rom_2EA388) > 0x6
	.error "gText_Rom_2EA388 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA388) < 0x6
	.space 0x6 - (. - gText_Rom_2EA388)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:2102 gen_1_families_line_2102 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EA38E
gText_Rom_2EA38E: @ 0x082EA38E
	.string "コラッタ$"
	.if (. - gText_Rom_2EA38E) != 0x5
	.error "gText_Rom_2EA38E must retain its original byte length"
	.endif
	.globl gText_Rom_2EA38F
	.set gText_Rom_2EA38F, gText_Rom_2EA38E + 0x1
	.incbin "baserom.gba", 0x2ea393, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:2186 gen_1_families_line_2186 (+2 aliases)
	.globl gText_Rom_2EA394
gText_Rom_2EA394: @ 0x082EA394
	.string "ラッタ$"
	.if (. - gText_Rom_2EA394) > 0x4
	.error "gText_Rom_2EA394 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA394) < 0x4
	.space 0x4 - (. - gText_Rom_2EA394)
	.endif
	.incbin "baserom.gba", 0x2ea398, 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:2476 gen_1_families_line_2476
	.globl gText_Rom_2EA39A
gText_Rom_2EA39A: @ 0x082EA39A
	.string "オニスズメ$"
	.if (. - gText_Rom_2EA39A) > 0x6
	.error "gText_Rom_2EA39A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA39A) < 0x6
	.space 0x6 - (. - gText_Rom_2EA39A)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:2548 gen_1_families_line_2548
	.globl gText_Rom_2EA3A0
gText_Rom_2EA3A0: @ 0x082EA3A0
	.string "オニドリル$"
	.if (. - gText_Rom_2EA3A0) > 0x6
	.error "gText_Rom_2EA3A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3A0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3A0)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:2624 gen_1_families_line_2624
	.globl gText_Rom_2EA3A6
gText_Rom_2EA3A6: @ 0x082EA3A6
	.string "アーボ$"
	.if (. - gText_Rom_2EA3A6) > 0x4
	.error "gText_Rom_2EA3A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3A6) < 0x4
	.space 0x4 - (. - gText_Rom_2EA3A6)
	.endif
	.incbin "baserom.gba", 0x2ea3aa, 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:2703 gen_1_families_line_2703
	.globl gText_Rom_2EA3AC
gText_Rom_2EA3AC: @ 0x082EA3AC
	.string "アーボック$"
	.if (. - gText_Rom_2EA3AC) > 0x6
	.error "gText_Rom_2EA3AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3AC) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3AC)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:2924 gen_1_families_line_2924 (+16 aliases)
	.globl gText_Rom_2EA3B2
gText_Rom_2EA3B2: @ 0x082EA3B2
	.string "ピカチュウ$"
	.if (. - gText_Rom_2EA3B2) > 0x6
	.error "gText_Rom_2EA3B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3B2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3B2)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:3932 gen_1_families_line_3932 (+3 aliases)
	.globl gText_Rom_2EA3B8
gText_Rom_2EA3B8: @ 0x082EA3B8
	.string "ライチュウ$"
	.if (. - gText_Rom_2EA3B8) > 0x6
	.error "gText_Rom_2EA3B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3B8) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3B8)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4204 gen_1_families_line_4204 (+1 aliases)
	.globl gText_Rom_2EA3BE
gText_Rom_2EA3BE: @ 0x082EA3BE
	.string "サンド$"
	.if (. - gText_Rom_2EA3BE) > 0x4
	.error "gText_Rom_2EA3BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3BE) < 0x4
	.space 0x4 - (. - gText_Rom_2EA3BE)
	.endif
	.incbin "baserom.gba", 0x2ea3c2, 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:4277 gen_1_families_line_4277 (+1 aliases)
	.globl gText_Rom_2EA3C4
gText_Rom_2EA3C4: @ 0x082EA3C4
	.string "サンドパン$"
	.if (. - gText_Rom_2EA3C4) > 0x6
	.error "gText_Rom_2EA3C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3C4) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3C4)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4489 gen_1_families_line_4489
	.globl gText_Rom_2EA3CA
gText_Rom_2EA3CA: @ 0x082EA3CA
	.string "ニドラン♀$"
	.if (. - gText_Rom_2EA3CA) > 0x6
	.error "gText_Rom_2EA3CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3CA) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3CA)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4569 gen_1_families_line_4569
	.globl gText_Rom_2EA3D0
gText_Rom_2EA3D0: @ 0x082EA3D0
	.string "ニドリーナ$"
	.if (. - gText_Rom_2EA3D0) > 0x6
	.error "gText_Rom_2EA3D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3D0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3D0)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4648 gen_1_families_line_4648
	.globl gText_Rom_2EA3D6
gText_Rom_2EA3D6: @ 0x082EA3D6
	.string "ニドクイン$"
	.if (. - gText_Rom_2EA3D6) > 0x6
	.error "gText_Rom_2EA3D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3D6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3D6)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4718 gen_1_families_line_4718
	.globl gText_Rom_2EA3DC
gText_Rom_2EA3DC: @ 0x082EA3DC
	.string "ニドラン♂$"
	.if (. - gText_Rom_2EA3DC) > 0x6
	.error "gText_Rom_2EA3DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3DC) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3DC)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4791 gen_1_families_line_4791
	.globl gText_Rom_2EA3E2
gText_Rom_2EA3E2: @ 0x082EA3E2
	.string "ニドリーノ$"
	.if (. - gText_Rom_2EA3E2) > 0x6
	.error "gText_Rom_2EA3E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3E2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3E2)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4871 gen_1_families_line_4871
	.globl gText_Rom_2EA3E8
gText_Rom_2EA3E8: @ 0x082EA3E8
	.string "ニドキング$"
	.if (. - gText_Rom_2EA3E8) > 0x6
	.error "gText_Rom_2EA3E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3E8) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3E8)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:5032 gen_1_families_line_5032
	.globl gText_Rom_2EA3EE
gText_Rom_2EA3EE: @ 0x082EA3EE
	.string "ピッピ$"
	.if (. - gText_Rom_2EA3EE) > 0x4
	.error "gText_Rom_2EA3EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3EE) < 0x4
	.space 0x4 - (. - gText_Rom_2EA3EE)
	.endif
	.incbin "baserom.gba", 0x2ea3f2, 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:5114 gen_1_families_line_5114 (+1 aliases)
	.globl gText_Rom_2EA3F4
gText_Rom_2EA3F4: @ 0x082EA3F4
	.string "ピクシー$"
	.if (. - gText_Rom_2EA3F4) > 0x5
	.error "gText_Rom_2EA3F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3F4) < 0x5
	.space 0x5 - (. - gText_Rom_2EA3F4)
	.endif
	.incbin "baserom.gba", 0x2ea3f9, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:5246 gen_1_families_line_5246 (+1 aliases)
	.globl gText_Rom_2EA3FA
gText_Rom_2EA3FA: @ 0x082EA3FA
	.string "ロコン$"
	.if (. - gText_Rom_2EA3FA) > 0x4
	.error "gText_Rom_2EA3FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3FA) < 0x4
	.space 0x4 - (. - gText_Rom_2EA3FA)
	.endif
	.incbin "baserom.gba", 0x2ea3fe, 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:5320 gen_1_families_line_5320 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EA400
gText_Rom_2EA400: @ 0x082EA400
	.string "キュウコン$"
	.if (. - gText_Rom_2EA400) != 0x6
	.error "gText_Rom_2EA400 must retain its original byte length"
	.endif
	.globl gText_Rom_2EA402
	.set gText_Rom_2EA402, gText_Rom_2EA400 + 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:5619 gen_1_families_line_5619
	.globl gText_Rom_2EA406
gText_Rom_2EA406: @ 0x082EA406
	.string "プリン$"
	.if (. - gText_Rom_2EA406) > 0x4
	.error "gText_Rom_2EA406 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA406) < 0x4
	.space 0x4 - (. - gText_Rom_2EA406)
	.endif
	.incbin "baserom.gba", 0x2ea40a, 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:5711 gen_1_families_line_5711
	.globl gText_Rom_2EA40C
gText_Rom_2EA40C: @ 0x082EA40C
	.string "プクリン$"
	.if (. - gText_Rom_2EA40C) > 0x5
	.error "gText_Rom_2EA40C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA40C) < 0x5
	.space 0x5 - (. - gText_Rom_2EA40C)
	.endif
	.incbin "baserom.gba", 0x2ea411, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:5782 gen_1_families_line_5782 (+2 aliases)
	.globl gText_Rom_2EA412
gText_Rom_2EA412: @ 0x082EA412
	.string "ズバット$"
	.if (. - gText_Rom_2EA412) > 0x5
	.error "gText_Rom_2EA412 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA412) < 0x5
	.space 0x5 - (. - gText_Rom_2EA412)
	.endif
	.incbin "baserom.gba", 0x2ea417, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:5875 gen_1_families_line_5875
	.globl gText_Rom_2EA418
gText_Rom_2EA418: @ 0x082EA418
	.string "ゴルバット$"
	.if (. - gText_Rom_2EA418) > 0x6
	.error "gText_Rom_2EA418 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA418) < 0x6
	.space 0x6 - (. - gText_Rom_2EA418)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6068 gen_1_families_line_6068 (+1 aliases)
	.globl gText_Rom_2EA41E
gText_Rom_2EA41E: @ 0x082EA41E
	.string "ナゾノクサ$"
	.if (. - gText_Rom_2EA41E) > 0x6
	.error "gText_Rom_2EA41E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA41E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA41E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6143 gen_1_families_line_6143
	.globl gText_Rom_2EA424
gText_Rom_2EA424: @ 0x082EA424
	.string "クサイハナ$"
	.if (. - gText_Rom_2EA424) > 0x6
	.error "gText_Rom_2EA424 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA424) < 0x6
	.space 0x6 - (. - gText_Rom_2EA424)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6238 gen_1_families_line_6238
	.globl gText_Rom_2EA42A
gText_Rom_2EA42A: @ 0x082EA42A
	.string "ラフレシア$"
	.if (. - gText_Rom_2EA42A) > 0x6
	.error "gText_Rom_2EA42A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA42A) < 0x6
	.space 0x6 - (. - gText_Rom_2EA42A)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6416 gen_1_families_line_6416
	.globl gText_Rom_2EA430
gText_Rom_2EA430: @ 0x082EA430
	.string "パラス$"
	.if (. - gText_Rom_2EA430) > 0x4
	.error "gText_Rom_2EA430 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA430) < 0x4
	.space 0x4 - (. - gText_Rom_2EA430)
	.endif
	.incbin "baserom.gba", 0x2ea434, 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:6506 gen_1_families_line_6506
	.globl gText_Rom_2EA436
gText_Rom_2EA436: @ 0x082EA436
	.string "パラセクト$"
	.if (. - gText_Rom_2EA436) > 0x6
	.error "gText_Rom_2EA436 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA436) < 0x6
	.space 0x6 - (. - gText_Rom_2EA436)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6583 gen_1_families_line_6583
	.globl gText_Rom_2EA43C
gText_Rom_2EA43C: @ 0x082EA43C
	.string "コンパン$"
	.if (. - gText_Rom_2EA43C) > 0x5
	.error "gText_Rom_2EA43C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA43C) < 0x5
	.space 0x5 - (. - gText_Rom_2EA43C)
	.endif
	.incbin "baserom.gba", 0x2ea441, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:6662 gen_1_families_line_6662
	.globl gText_Rom_2EA442
gText_Rom_2EA442: @ 0x082EA442
	.string "モルフォン$"
	.if (. - gText_Rom_2EA442) > 0x6
	.error "gText_Rom_2EA442 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA442) < 0x6
	.space 0x6 - (. - gText_Rom_2EA442)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6752 gen_1_families_line_6752 (+1 aliases)
	.globl gText_Rom_2EA448
gText_Rom_2EA448: @ 0x082EA448
	.string "ディグダ$"
	.if (. - gText_Rom_2EA448) > 0x5
	.error "gText_Rom_2EA448 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA448) < 0x5
	.space 0x5 - (. - gText_Rom_2EA448)
	.endif
	.incbin "baserom.gba", 0x2ea44d, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:6831 gen_1_families_line_6831 (+1 aliases)
	.globl gText_Rom_2EA44E
gText_Rom_2EA44E: @ 0x082EA44E
	.string "ダグトリオ$"
	.if (. - gText_Rom_2EA44E) > 0x6
	.error "gText_Rom_2EA44E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA44E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA44E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:7056 gen_1_families_line_7056 (+3 aliases)
	.globl gText_Rom_2EA454
gText_Rom_2EA454: @ 0x082EA454
	.string "ニャース$"
	.if (. - gText_Rom_2EA454) > 0x5
	.error "gText_Rom_2EA454 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA454) < 0x5
	.space 0x5 - (. - gText_Rom_2EA454)
	.endif
	.incbin "baserom.gba", 0x2ea459, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:7136 gen_1_families_line_7136 (+1 aliases)
	.globl gText_Rom_2EA45A
gText_Rom_2EA45A: @ 0x082EA45A
	.string "ペルシアン$"
	.if (. - gText_Rom_2EA45A) > 0x6
	.error "gText_Rom_2EA45A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA45A) < 0x6
	.space 0x6 - (. - gText_Rom_2EA45A)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:7534 gen_1_families_line_7534
	.globl gText_Rom_2EA460
gText_Rom_2EA460: @ 0x082EA460
	.string "コダック$"
	.if (. - gText_Rom_2EA460) > 0x5
	.error "gText_Rom_2EA460 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA460) < 0x5
	.space 0x5 - (. - gText_Rom_2EA460)
	.endif
	.incbin "baserom.gba", 0x2ea465, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:7605 gen_1_families_line_7605
	.globl gText_Rom_2EA466
gText_Rom_2EA466: @ 0x082EA466
	.string "ゴルダック$"
	.if (. - gText_Rom_2EA466) > 0x6
	.error "gText_Rom_2EA466 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA466) < 0x6
	.space 0x6 - (. - gText_Rom_2EA466)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:7680 gen_1_families_line_7680
	.globl gText_Rom_2EA46C
gText_Rom_2EA46C: @ 0x082EA46C
	.string "マンキー$"
	.if (. - gText_Rom_2EA46C) > 0x5
	.error "gText_Rom_2EA46C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA46C) < 0x5
	.space 0x5 - (. - gText_Rom_2EA46C)
	.endif
	.incbin "baserom.gba", 0x2ea471, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:7758 gen_1_families_line_7758
	.globl gText_Rom_2EA472
gText_Rom_2EA472: @ 0x082EA472
	.string "オコリザル$"
	.if (. - gText_Rom_2EA472) > 0x6
	.error "gText_Rom_2EA472 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA472) < 0x6
	.space 0x6 - (. - gText_Rom_2EA472)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:7900 gen_1_families_line_7900 (+1 aliases)
	.globl gText_Rom_2EA478
gText_Rom_2EA478: @ 0x082EA478
	.string "ガーディ$"
	.if (. - gText_Rom_2EA478) > 0x5
	.error "gText_Rom_2EA478 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA478) < 0x5
	.space 0x5 - (. - gText_Rom_2EA478)
	.endif
	.incbin "baserom.gba", 0x2ea47d, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:7974 gen_1_families_line_7974 (+1 aliases)
	.globl gText_Rom_2EA47E
gText_Rom_2EA47E: @ 0x082EA47E
	.string "ウインディ$"
	.if (. - gText_Rom_2EA47E) > 0x6
	.error "gText_Rom_2EA47E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA47E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA47E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8179 gen_1_families_line_8179
	.globl gText_Rom_2EA484
gText_Rom_2EA484: @ 0x082EA484
	.string "ニョロモ$"
	.if (. - gText_Rom_2EA484) > 0x5
	.error "gText_Rom_2EA484 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA484) < 0x5
	.space 0x5 - (. - gText_Rom_2EA484)
	.endif
	.incbin "baserom.gba", 0x2ea489, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:8250 gen_1_families_line_8250
	.globl gText_Rom_2EA48A
gText_Rom_2EA48A: @ 0x082EA48A
	.string "ニョロゾ$"
	.if (. - gText_Rom_2EA48A) > 0x5
	.error "gText_Rom_2EA48A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA48A) < 0x5
	.space 0x5 - (. - gText_Rom_2EA48A)
	.endif
	.incbin "baserom.gba", 0x2ea48f, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:8336 gen_1_families_line_8336
	.globl gText_Rom_2EA490
gText_Rom_2EA490: @ 0x082EA490
	.string "ニョロボン$"
	.if (. - gText_Rom_2EA490) > 0x6
	.error "gText_Rom_2EA490 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA490) < 0x6
	.space 0x6 - (. - gText_Rom_2EA490)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8505 gen_1_families_line_8505
	.globl gText_Rom_2EA496
gText_Rom_2EA496: @ 0x082EA496
	.string "ケーシィ$"
	.if (. - gText_Rom_2EA496) > 0x5
	.error "gText_Rom_2EA496 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA496) < 0x5
	.space 0x5 - (. - gText_Rom_2EA496)
	.endif
	.incbin "baserom.gba", 0x2ea49b, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:8578 gen_1_families_line_8578
	.globl gText_Rom_2EA49C
gText_Rom_2EA49C: @ 0x082EA49C
	.string "ユンゲラー$"
	.if (. - gText_Rom_2EA49C) > 0x6
	.error "gText_Rom_2EA49C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA49C) < 0x6
	.space 0x6 - (. - gText_Rom_2EA49C)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8677 gen_1_families_line_8677 (+1 aliases)
	.globl gText_Rom_2EA4A2
gText_Rom_2EA4A2: @ 0x082EA4A2
	.string "フーディン$"
	.if (. - gText_Rom_2EA4A2) > 0x6
	.error "gText_Rom_2EA4A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4A2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4A2)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8853 gen_1_families_line_8853
	.globl gText_Rom_2EA4A8
gText_Rom_2EA4A8: @ 0x082EA4A8
	.string "ワンリキー$"
	.if (. - gText_Rom_2EA4A8) > 0x6
	.error "gText_Rom_2EA4A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4A8) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4A8)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8930 gen_1_families_line_8930
	.globl gText_Rom_2EA4AE
gText_Rom_2EA4AE: @ 0x082EA4AE
	.string "ゴーリキー$"
	.if (. - gText_Rom_2EA4AE) > 0x6
	.error "gText_Rom_2EA4AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4AE) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4AE)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9012 gen_1_families_line_9012 (+1 aliases)
	.globl gText_Rom_2EA4B4
gText_Rom_2EA4B4: @ 0x082EA4B4
	.string "カイリキー$"
	.if (. - gText_Rom_2EA4B4) > 0x6
	.error "gText_Rom_2EA4B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4B4) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4B4)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9151 gen_1_families_line_9151
	.globl gText_Rom_2EA4BA
gText_Rom_2EA4BA: @ 0x082EA4BA
	.string "マダツボミ$"
	.if (. - gText_Rom_2EA4BA) > 0x6
	.error "gText_Rom_2EA4BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4BA) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4BA)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9221 gen_1_families_line_9221
	.globl gText_Rom_2EA4C0
gText_Rom_2EA4C0: @ 0x082EA4C0
	.string "ウツドン$"
	.if (. - gText_Rom_2EA4C0) > 0x5
	.error "gText_Rom_2EA4C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4C0) < 0x5
	.space 0x5 - (. - gText_Rom_2EA4C0)
	.endif
	.incbin "baserom.gba", 0x2ea4c5, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:9311 gen_1_families_line_9311 (+1 aliases)
	.globl gText_Rom_2EA4C6
gText_Rom_2EA4C6: @ 0x082EA4C6
	.string "ウツボット$"
	.if (. - gText_Rom_2EA4C6) > 0x6
	.error "gText_Rom_2EA4C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4C6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4C6)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9447 gen_1_families_line_9447
	.globl gText_Rom_2EA4CC
gText_Rom_2EA4CC: @ 0x082EA4CC
	.string "メノクラゲ$"
	.if (. - gText_Rom_2EA4CC) > 0x6
	.error "gText_Rom_2EA4CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4CC) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4CC)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9519 gen_1_families_line_9519
	.globl gText_Rom_2EA4D2
gText_Rom_2EA4D2: @ 0x082EA4D2
	.string "ドククラゲ$"
	.if (. - gText_Rom_2EA4D2) > 0x6
	.error "gText_Rom_2EA4D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4D2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4D2)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9597 gen_1_families_line_9597 (+1 aliases)
	.globl gText_Rom_2EA4D8
gText_Rom_2EA4D8: @ 0x082EA4D8
	.string "イシツブテ$"
	.if (. - gText_Rom_2EA4D8) > 0x6
	.error "gText_Rom_2EA4D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4D8) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4D8)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9669 gen_1_families_line_9669 (+1 aliases)
	.globl gText_Rom_2EA4DE
gText_Rom_2EA4DE: @ 0x082EA4DE
	.string "ゴローン$"
	.if (. - gText_Rom_2EA4DE) > 0x5
	.error "gText_Rom_2EA4DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4DE) < 0x5
	.space 0x5 - (. - gText_Rom_2EA4DE)
	.endif
	.incbin "baserom.gba", 0x2ea4e3, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:9750 gen_1_families_line_9750 (+1 aliases)
	.globl gText_Rom_2EA4E4
gText_Rom_2EA4E4: @ 0x082EA4E4
	.string "ゴローニャ$"
	.if (. - gText_Rom_2EA4E4) > 0x6
	.error "gText_Rom_2EA4E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4E4) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4E4)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:10027 gen_1_families_line_10027 (+1 aliases)
	.globl gText_Rom_2EA4EA
gText_Rom_2EA4EA: @ 0x082EA4EA
	.string "ポニータ$"
	.if (. - gText_Rom_2EA4EA) > 0x5
	.error "gText_Rom_2EA4EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4EA) < 0x5
	.space 0x5 - (. - gText_Rom_2EA4EA)
	.endif
	.incbin "baserom.gba", 0x2ea4ef, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:10097 gen_1_families_line_10097 (+1 aliases)
	.globl gText_Rom_2EA4F0
gText_Rom_2EA4F0: @ 0x082EA4F0
	.string "ギャロップ$"
	.if (. - gText_Rom_2EA4F0) > 0x6
	.error "gText_Rom_2EA4F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4F0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4F0)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:10302 gen_1_families_line_10302 (+1 aliases)
	.globl gText_Rom_2EA4F6
gText_Rom_2EA4F6: @ 0x082EA4F6
	.string "ヤドン$"
	.if (. - gText_Rom_2EA4F6) > 0x4
	.error "gText_Rom_2EA4F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4F6) < 0x4
	.space 0x4 - (. - gText_Rom_2EA4F6)
	.endif
	.incbin "baserom.gba", 0x2ea4fa, 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:10378 gen_1_families_line_10378 (+2 aliases)
	.globl gText_Rom_2EA4FC
gText_Rom_2EA4FC: @ 0x082EA4FC
	.string "ヤドラン$"
	.if (. - gText_Rom_2EA4FC) > 0x5
	.error "gText_Rom_2EA4FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4FC) < 0x5
	.space 0x5 - (. - gText_Rom_2EA4FC)
	.endif
	.incbin "baserom.gba", 0x2ea501, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:10800 gen_1_families_line_10800
	.globl gText_Rom_2EA502
gText_Rom_2EA502: @ 0x082EA502
	.string "コイル$"
	.if (. - gText_Rom_2EA502) > 0x4
	.error "gText_Rom_2EA502 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA502) < 0x4
	.space 0x4 - (. - gText_Rom_2EA502)
	.endif
	.incbin "baserom.gba", 0x2ea506, 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:10872 gen_1_families_line_10872
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EA508
gText_Rom_2EA508: @ 0x082EA508
	.string "レアコイル$"
	.if (. - gText_Rom_2EA508) != 0x6
	.error "gText_Rom_2EA508 must retain its original byte length"
	.endif
	.globl gText_Rom_2EA50A
	.set gText_Rom_2EA50A, gText_Rom_2EA508 + 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:11037 gen_1_families_line_11037 (+1 aliases)
	.globl gText_Rom_2EA50E
gText_Rom_2EA50E: @ 0x082EA50E
	.string "カモネギ$"
	.if (. - gText_Rom_2EA50E) > 0x5
	.error "gText_Rom_2EA50E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA50E) < 0x5
	.space 0x5 - (. - gText_Rom_2EA50E)
	.endif
	.incbin "baserom.gba", 0x2ea513, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:11255 gen_1_families_line_11255
	.globl gText_Rom_2EA514
gText_Rom_2EA514: @ 0x082EA514
	.string "ドードー$"
	.if (. - gText_Rom_2EA514) > 0x5
	.error "gText_Rom_2EA514 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA514) < 0x5
	.space 0x5 - (. - gText_Rom_2EA514)
	.endif
	.incbin "baserom.gba", 0x2ea519, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:11348 gen_1_families_line_11348
	.globl gText_Rom_2EA51A
gText_Rom_2EA51A: @ 0x082EA51A
	.string "ドードリオ$"
	.if (. - gText_Rom_2EA51A) > 0x6
	.error "gText_Rom_2EA51A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA51A) < 0x6
	.space 0x6 - (. - gText_Rom_2EA51A)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:11439 gen_1_families_line_11439
	.globl gText_Rom_2EA520
gText_Rom_2EA520: @ 0x082EA520
	.string "パウワウ$"
	.if (. - gText_Rom_2EA520) > 0x5
	.error "gText_Rom_2EA520 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA520) < 0x5
	.space 0x5 - (. - gText_Rom_2EA520)
	.endif
	.incbin "baserom.gba", 0x2ea525, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:11513 gen_1_families_line_11513
	.globl gText_Rom_2EA526
gText_Rom_2EA526: @ 0x082EA526
	.string "ジュゴン$"
	.if (. - gText_Rom_2EA526) > 0x5
	.error "gText_Rom_2EA526 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA526) < 0x5
	.space 0x5 - (. - gText_Rom_2EA526)
	.endif
	.incbin "baserom.gba", 0x2ea52b, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:11583 gen_1_families_line_11583 (+1 aliases)
	.globl gText_Rom_2EA52C
gText_Rom_2EA52C: @ 0x082EA52C
	.string "ベトベター$"
	.if (. - gText_Rom_2EA52C) > 0x6
	.error "gText_Rom_2EA52C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA52C) < 0x6
	.space 0x6 - (. - gText_Rom_2EA52C)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:11657 gen_1_families_line_11657 (+1 aliases)
	.globl gText_Rom_2EA532
gText_Rom_2EA532: @ 0x082EA532
	.string "ベトベトン$"
	.if (. - gText_Rom_2EA532) > 0x6
	.error "gText_Rom_2EA532 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA532) < 0x6
	.space 0x6 - (. - gText_Rom_2EA532)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:11874 gen_1_families_line_11874
	.globl gText_Rom_2EA538
gText_Rom_2EA538: @ 0x082EA538
	.string "シェルダー$"
	.if (. - gText_Rom_2EA538) > 0x6
	.error "gText_Rom_2EA538 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA538) < 0x6
	.space 0x6 - (. - gText_Rom_2EA538)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:11951 gen_1_families_line_11951
	.globl gText_Rom_2EA53E
gText_Rom_2EA53E: @ 0x082EA53E
	.string "パルシェン$"
	.if (. - gText_Rom_2EA53E) > 0x6
	.error "gText_Rom_2EA53E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA53E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA53E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:12021 gen_1_families_line_12021
	.globl gText_Rom_2EA544
gText_Rom_2EA544: @ 0x082EA544
	.string "ゴース$"
	.if (. - gText_Rom_2EA544) > 0x4
	.error "gText_Rom_2EA544 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA544) < 0x4
	.space 0x4 - (. - gText_Rom_2EA544)
	.endif
	.incbin "baserom.gba", 0x2ea548, 0x2

	@ src/data/easy_chat/easy_chat_group_status.h:190 easy_chat_group_status_line_190 (+3 aliases)
	.globl gText_Rom_2EA54A
gText_Rom_2EA54A: @ 0x082EA54A
	.string "ゴースト$"
	.if (. - gText_Rom_2EA54A) > 0x5
	.error "gText_Rom_2EA54A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA54A) < 0x5
	.space 0x5 - (. - gText_Rom_2EA54A)
	.endif
	.incbin "baserom.gba", 0x2ea54f, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:12184 gen_1_families_line_12184 (+2 aliases)
	.globl gText_Rom_2EA550
gText_Rom_2EA550: @ 0x082EA550
	.string "ゲンガー$"
	.if (. - gText_Rom_2EA550) > 0x5
	.error "gText_Rom_2EA550 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA550) < 0x5
	.space 0x5 - (. - gText_Rom_2EA550)
	.endif
	.incbin "baserom.gba", 0x2ea555, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:12389 gen_1_families_line_12389
	.globl gText_Rom_2EA556
gText_Rom_2EA556: @ 0x082EA556
	.string "イワーク$"
	.if (. - gText_Rom_2EA556) > 0x5
	.error "gText_Rom_2EA556 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA556) < 0x5
	.space 0x5 - (. - gText_Rom_2EA556)
	.endif
	.incbin "baserom.gba", 0x2ea55b, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:12629 gen_1_families_line_12629
	.globl gText_Rom_2EA55C
gText_Rom_2EA55C: @ 0x082EA55C
	.string "スリープ$"
	.if (. - gText_Rom_2EA55C) > 0x5
	.error "gText_Rom_2EA55C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA55C) < 0x5
	.space 0x5 - (. - gText_Rom_2EA55C)
	.endif
	.incbin "baserom.gba", 0x2ea561, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:12706 gen_1_families_line_12706
	.globl gText_Rom_2EA562
gText_Rom_2EA562: @ 0x082EA562
	.string "スリーパー$"
	.if (. - gText_Rom_2EA562) > 0x6
	.error "gText_Rom_2EA562 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA562) < 0x6
	.space 0x6 - (. - gText_Rom_2EA562)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:12793 gen_1_families_line_12793
	.globl gText_Rom_2EA568
gText_Rom_2EA568: @ 0x082EA568
	.string "クラブ$"
	.if (. - gText_Rom_2EA568) > 0x4
	.error "gText_Rom_2EA568 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA568) < 0x4
	.space 0x4 - (. - gText_Rom_2EA568)
	.endif
	.incbin "baserom.gba", 0x2ea56c, 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:12866 gen_1_families_line_12866 (+1 aliases)
	.globl gText_Rom_2EA56E
gText_Rom_2EA56E: @ 0x082EA56E
	.string "キングラー$"
	.if (. - gText_Rom_2EA56E) > 0x6
	.error "gText_Rom_2EA56E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA56E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA56E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:12997 gen_1_families_line_12997 (+1 aliases)
	.globl gText_Rom_2EA574
gText_Rom_2EA574: @ 0x082EA574
	.string "ビリリダマ$"
	.if (. - gText_Rom_2EA574) > 0x6
	.error "gText_Rom_2EA574 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA574) < 0x6
	.space 0x6 - (. - gText_Rom_2EA574)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:13075 gen_1_families_line_13075 (+1 aliases)
	.globl gText_Rom_2EA57A
gText_Rom_2EA57A: @ 0x082EA57A
	.string "マルマイン$"
	.if (. - gText_Rom_2EA57A) > 0x6
	.error "gText_Rom_2EA57A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA57A) < 0x6
	.space 0x6 - (. - gText_Rom_2EA57A)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:13282 gen_1_families_line_13282
	.globl gText_Rom_2EA580
gText_Rom_2EA580: @ 0x082EA580
	.string "タマタマ$"
	.if (. - gText_Rom_2EA580) > 0x5
	.error "gText_Rom_2EA580 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA580) < 0x5
	.space 0x5 - (. - gText_Rom_2EA580)
	.endif
	.incbin "baserom.gba", 0x2ea585, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:13374 gen_1_families_line_13374 (+1 aliases)
	.globl gText_Rom_2EA586
gText_Rom_2EA586: @ 0x082EA586
	.string "ナッシー$"
	.if (. - gText_Rom_2EA586) > 0x5
	.error "gText_Rom_2EA586 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA586) < 0x5
	.space 0x5 - (. - gText_Rom_2EA586)
	.endif
	.incbin "baserom.gba", 0x2ea58b, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:13513 gen_1_families_line_13513
	.globl gText_Rom_2EA58C
gText_Rom_2EA58C: @ 0x082EA58C
	.string "カラカラ$"
	.if (. - gText_Rom_2EA58C) > 0x5
	.error "gText_Rom_2EA58C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA58C) < 0x5
	.space 0x5 - (. - gText_Rom_2EA58C)
	.endif
	.incbin "baserom.gba", 0x2ea591, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:13593 gen_1_families_line_13593 (+2 aliases)
	.globl gText_Rom_2EA592
gText_Rom_2EA592: @ 0x082EA592
	.string "ガラガラ$"
	.if (. - gText_Rom_2EA592) > 0x5
	.error "gText_Rom_2EA592 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA592) < 0x5
	.space 0x5 - (. - gText_Rom_2EA592)
	.endif
	.incbin "baserom.gba", 0x2ea597, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:13875 gen_1_families_line_13875
	.globl gText_Rom_2EA598
gText_Rom_2EA598: @ 0x082EA598
	.string "サワムラー$"
	.if (. - gText_Rom_2EA598) > 0x6
	.error "gText_Rom_2EA598 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA598) < 0x6
	.space 0x6 - (. - gText_Rom_2EA598)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:13946 gen_1_families_line_13946
	.globl gText_Rom_2EA59E
gText_Rom_2EA59E: @ 0x082EA59E
	.string "エビワラー$"
	.if (. - gText_Rom_2EA59E) > 0x6
	.error "gText_Rom_2EA59E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA59E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA59E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:14099 gen_1_families_line_14099
	.globl gText_Rom_2EA5A4
gText_Rom_2EA5A4: @ 0x082EA5A4
	.string "ベロリンガ$"
	.if (. - gText_Rom_2EA5A4) > 0x6
	.error "gText_Rom_2EA5A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5A4) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5A4)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:14252 gen_1_families_line_14252
	.globl gText_Rom_2EA5AA
gText_Rom_2EA5AA: @ 0x082EA5AA
	.string "ドガース$"
	.if (. - gText_Rom_2EA5AA) > 0x5
	.error "gText_Rom_2EA5AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5AA) < 0x5
	.space 0x5 - (. - gText_Rom_2EA5AA)
	.endif
	.incbin "baserom.gba", 0x2ea5af, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:14334 gen_1_families_line_14334 (+1 aliases)
	.globl gText_Rom_2EA5B0
gText_Rom_2EA5B0: @ 0x082EA5B0
	.string "マタドガス$"
	.if (. - gText_Rom_2EA5B0) > 0x6
	.error "gText_Rom_2EA5B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5B0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5B0)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:14477 gen_1_families_line_14477
	.globl gText_Rom_2EA5B6
gText_Rom_2EA5B6: @ 0x082EA5B6
	.string "サイホーン$"
	.if (. - gText_Rom_2EA5B6) > 0x6
	.error "gText_Rom_2EA5B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5B6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5B6)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:14561 gen_1_families_line_14561
	.globl gText_Rom_2EA5BC
gText_Rom_2EA5BC: @ 0x082EA5BC
	.string "サイドン$"
	.if (. - gText_Rom_2EA5BC) > 0x5
	.error "gText_Rom_2EA5BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5BC) < 0x5
	.space 0x5 - (. - gText_Rom_2EA5BC)
	.endif
	.incbin "baserom.gba", 0x2ea5c1, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:14810 gen_1_families_line_14810
	.globl gText_Rom_2EA5C2
gText_Rom_2EA5C2: @ 0x082EA5C2
	.string "ラッキー$"
	.if (. - gText_Rom_2EA5C2) > 0x5
	.error "gText_Rom_2EA5C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5C2) < 0x5
	.space 0x5 - (. - gText_Rom_2EA5C2)
	.endif
	.incbin "baserom.gba", 0x2ea5c7, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:14963 gen_1_families_line_14963
	.globl gText_Rom_2EA5C8
gText_Rom_2EA5C8: @ 0x082EA5C8
	.string "モンジャラ$"
	.if (. - gText_Rom_2EA5C8) > 0x6
	.error "gText_Rom_2EA5C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5C8) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5C8)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:15120 gen_1_families_line_15120 (+1 aliases)
	.globl gText_Rom_2EA5CE
gText_Rom_2EA5CE: @ 0x082EA5CE
	.string "ガルーラ$"
	.if (. - gText_Rom_2EA5CE) > 0x5
	.error "gText_Rom_2EA5CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5CE) < 0x5
	.space 0x5 - (. - gText_Rom_2EA5CE)
	.endif
	.incbin "baserom.gba", 0x2ea5d3, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:15273 gen_1_families_line_15273
	.globl gText_Rom_2EA5D4
gText_Rom_2EA5D4: @ 0x082EA5D4
	.string "タッツー$"
	.if (. - gText_Rom_2EA5D4) > 0x5
	.error "gText_Rom_2EA5D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5D4) < 0x5
	.space 0x5 - (. - gText_Rom_2EA5D4)
	.endif
	.incbin "baserom.gba", 0x2ea5d9, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:15350 gen_1_families_line_15350
	.globl gText_Rom_2EA5DA
gText_Rom_2EA5DA: @ 0x082EA5DA
	.string "シードラ$"
	.if (. - gText_Rom_2EA5DA) > 0x5
	.error "gText_Rom_2EA5DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5DA) < 0x5
	.space 0x5 - (. - gText_Rom_2EA5DA)
	.endif
	.incbin "baserom.gba", 0x2ea5df, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:15510 gen_1_families_line_15510
	.globl gText_Rom_2EA5E0
gText_Rom_2EA5E0: @ 0x082EA5E0
	.string "トサキント$"
	.if (. - gText_Rom_2EA5E0) > 0x6
	.error "gText_Rom_2EA5E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5E0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5E0)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:15599 gen_1_families_line_15599
	.globl gText_Rom_2EA5E6
gText_Rom_2EA5E6: @ 0x082EA5E6
	.string "アズマオウ$"
	.if (. - gText_Rom_2EA5E6) > 0x6
	.error "gText_Rom_2EA5E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5E6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5E6)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:15686 gen_1_families_line_15686
	.globl gText_Rom_2EA5EC
gText_Rom_2EA5EC: @ 0x082EA5EC
	.string "ヒトデマン$"
	.if (. - gText_Rom_2EA5EC) > 0x6
	.error "gText_Rom_2EA5EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5EC) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5EC)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:15758 gen_1_families_line_15758 (+1 aliases)
	.globl gText_Rom_2EA5F2
gText_Rom_2EA5F2: @ 0x082EA5F2
	.string "スターミー$"
	.if (. - gText_Rom_2EA5F2) > 0x6
	.error "gText_Rom_2EA5F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5F2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5F2)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:15982 gen_1_families_line_15982 (+1 aliases)
	.globl gText_Rom_2EA5F8
gText_Rom_2EA5F8: @ 0x082EA5F8
	.string "バリヤード$"
	.if (. - gText_Rom_2EA5F8) > 0x6
	.error "gText_Rom_2EA5F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5F8) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5F8)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16192 gen_1_families_line_16192
	.globl gText_Rom_2EA5FE
gText_Rom_2EA5FE: @ 0x082EA5FE
	.string "ストライク$"
	.if (. - gText_Rom_2EA5FE) > 0x6
	.error "gText_Rom_2EA5FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5FE) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5FE)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16597 gen_1_families_line_16597
	.globl gText_Rom_2EA604
gText_Rom_2EA604: @ 0x082EA604
	.string "ルージュラ$"
	.if (. - gText_Rom_2EA604) > 0x6
	.error "gText_Rom_2EA604 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA604) < 0x6
	.space 0x6 - (. - gText_Rom_2EA604)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16743 gen_1_families_line_16743
	.globl gText_Rom_2EA60A
gText_Rom_2EA60A: @ 0x082EA60A
	.string "エレブー$"
	.if (. - gText_Rom_2EA60A) > 0x5
	.error "gText_Rom_2EA60A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA60A) < 0x5
	.space 0x5 - (. - gText_Rom_2EA60A)
	.endif
	.incbin "baserom.gba", 0x2ea60f, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:16969 gen_1_families_line_16969
	.globl gText_Rom_2EA610
gText_Rom_2EA610: @ 0x082EA610
	.string "ブーバー$"
	.if (. - gText_Rom_2EA610) > 0x5
	.error "gText_Rom_2EA610 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA610) < 0x5
	.space 0x5 - (. - gText_Rom_2EA610)
	.endif
	.incbin "baserom.gba", 0x2ea615, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:17121 gen_1_families_line_17121 (+1 aliases)
	.globl gText_Rom_2EA616
gText_Rom_2EA616: @ 0x082EA616
	.string "カイロス$"
	.if (. - gText_Rom_2EA616) > 0x5
	.error "gText_Rom_2EA616 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA616) < 0x5
	.space 0x5 - (. - gText_Rom_2EA616)
	.endif
	.incbin "baserom.gba", 0x2ea61b, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:17276 gen_1_families_line_17276 (+3 aliases)
	.globl gText_Rom_2EA61C
gText_Rom_2EA61C: @ 0x082EA61C
	.string "ケンタロス$"
	.if (. - gText_Rom_2EA61C) > 0x6
	.error "gText_Rom_2EA61C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA61C) < 0x6
	.space 0x6 - (. - gText_Rom_2EA61C)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:17548 gen_1_families_line_17548
	.globl gText_Rom_2EA622
gText_Rom_2EA622: @ 0x082EA622
	.string "コイキング$"
	.if (. - gText_Rom_2EA622) > 0x6
	.error "gText_Rom_2EA622 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA622) < 0x6
	.space 0x6 - (. - gText_Rom_2EA622)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:17636 gen_1_families_line_17636 (+1 aliases)
	.globl gText_Rom_2EA628
gText_Rom_2EA628: @ 0x082EA628
	.string "ギャラドス$"
	.if (. - gText_Rom_2EA628) > 0x6
	.error "gText_Rom_2EA628 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA628) < 0x6
	.space 0x6 - (. - gText_Rom_2EA628)
	.endif

