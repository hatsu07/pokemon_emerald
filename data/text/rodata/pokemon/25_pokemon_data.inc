@ ポケモン名

	.globl gSpeciesNames
gSpeciesNames: @ 0x082EA31C
	.string "？？？？？"
	.byte EOS

	@ src/data/pokemon/species_info/gen_1_families.h:27 gen_1_families_line_27
	.globl gText_Rom_2EA322
gText_Rom_2EA322: @ 0x082EA322
	.string "フシギダネ"
	.byte EOS
	.if (. - gText_Rom_2EA322) > 0x6
	.error "gText_Rom_2EA322 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA322) < 0x6
	.space 0x6 - (. - gText_Rom_2EA322)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:98 gen_1_families_line_98
	.globl gText_Rom_2EA328
gText_Rom_2EA328: @ 0x082EA328
	.string "フシギソウ"
	.byte EOS
	.if (. - gText_Rom_2EA328) > 0x6
	.error "gText_Rom_2EA328 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA328) < 0x6
	.space 0x6 - (. - gText_Rom_2EA328)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:175 gen_1_families_line_175 (+2 aliases)
	.globl gText_Rom_2EA32E
gText_Rom_2EA32E: @ 0x082EA32E
	.string "フシギバナ"
	.byte EOS
	.if (. - gText_Rom_2EA32E) > 0x6
	.error "gText_Rom_2EA32E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA32E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA32E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:393 gen_1_families_line_393
	.globl gText_Rom_2EA334
gText_Rom_2EA334: @ 0x082EA334
	.string "ヒトカゲ"
	.byte EOS
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
	.string "リザード"
	.byte EOS
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
	.string "リザードン"
	.byte EOS
	.if (. - gText_Rom_2EA340) > 0x6
	.error "gText_Rom_2EA340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA340) < 0x6
	.space 0x6 - (. - gText_Rom_2EA340)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:815 gen_1_families_line_815
	.globl gText_Rom_2EA346
gText_Rom_2EA346: @ 0x082EA346
	.string "ゼニガメ"
	.byte EOS
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
	.string "カメール"
	.byte EOS
	.if (. - gText_Rom_2EA34C) != 0x5
	.error "gText_Rom_2EA34C must retain its original byte length"
	.endif
	.globl gText_Rom_2EA34D
	.set gText_Rom_2EA34D, gText_Rom_2EA34C + 0x1
	.incbin "baserom.gba", 0x2ea351, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:964 gen_1_families_line_964 (+2 aliases)
	.globl gText_Rom_2EA352
gText_Rom_2EA352: @ 0x082EA352
	.string "カメックス"
	.byte EOS
	.if (. - gText_Rom_2EA352) > 0x6
	.error "gText_Rom_2EA352 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA352) < 0x6
	.space 0x6 - (. - gText_Rom_2EA352)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:1170 gen_1_families_line_1170
	.globl gText_Rom_2EA358
gText_Rom_2EA358: @ 0x082EA358
	.string "キャタピー"
	.byte EOS
	.if (. - gText_Rom_2EA358) > 0x6
	.error "gText_Rom_2EA358 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA358) < 0x6
	.space 0x6 - (. - gText_Rom_2EA358)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:1244 gen_1_families_line_1244
	.globl gText_Rom_2EA35E
gText_Rom_2EA35E: @ 0x082EA35E
	.string "トランセル"
	.byte EOS
	.if (. - gText_Rom_2EA35E) > 0x6
	.error "gText_Rom_2EA35E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA35E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA35E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:1324 gen_1_families_line_1324 (+1 aliases)
	.globl gText_Rom_2EA364
gText_Rom_2EA364: @ 0x082EA364
	.string "バタフリー"
	.byte EOS
	.if (. - gText_Rom_2EA364) > 0x6
	.error "gText_Rom_2EA364 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA364) < 0x6
	.space 0x6 - (. - gText_Rom_2EA364)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:1481 gen_1_families_line_1481
	.globl gText_Rom_2EA36A
gText_Rom_2EA36A: @ 0x082EA36A
	.string "ビードル"
	.byte EOS
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
	.string "コクーン"
	.byte EOS
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
	.string "スピアー"
	.byte EOS
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
	.string "ポッポ"
	.byte EOS
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
	.string "ピジョン"
	.byte EOS
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
	.string "ピジョット"
	.byte EOS
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
	.string "コラッタ"
	.byte EOS
	.if (. - gText_Rom_2EA38E) != 0x5
	.error "gText_Rom_2EA38E must retain its original byte length"
	.endif
	.globl gText_Rom_2EA38F
	.set gText_Rom_2EA38F, gText_Rom_2EA38E + 0x1
	.incbin "baserom.gba", 0x2ea393, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:2186 gen_1_families_line_2186 (+2 aliases)
	.globl gText_Rom_2EA394
gText_Rom_2EA394: @ 0x082EA394
	.string "ラッタ"
	.byte EOS
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
	.string "オニスズメ"
	.byte EOS
	.if (. - gText_Rom_2EA39A) > 0x6
	.error "gText_Rom_2EA39A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA39A) < 0x6
	.space 0x6 - (. - gText_Rom_2EA39A)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:2548 gen_1_families_line_2548
	.globl gText_Rom_2EA3A0
gText_Rom_2EA3A0: @ 0x082EA3A0
	.string "オニドリル"
	.byte EOS
	.if (. - gText_Rom_2EA3A0) > 0x6
	.error "gText_Rom_2EA3A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3A0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3A0)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:2624 gen_1_families_line_2624
	.globl gText_Rom_2EA3A6
gText_Rom_2EA3A6: @ 0x082EA3A6
	.string "アーボ"
	.byte EOS
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
	.string "アーボック"
	.byte EOS
	.if (. - gText_Rom_2EA3AC) > 0x6
	.error "gText_Rom_2EA3AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3AC) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3AC)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:2924 gen_1_families_line_2924 (+16 aliases)
	.globl gText_Rom_2EA3B2
gText_Rom_2EA3B2: @ 0x082EA3B2
	.string "ピカチュウ"
	.byte EOS
	.if (. - gText_Rom_2EA3B2) > 0x6
	.error "gText_Rom_2EA3B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3B2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3B2)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:3932 gen_1_families_line_3932 (+3 aliases)
	.globl gText_Rom_2EA3B8
gText_Rom_2EA3B8: @ 0x082EA3B8
	.string "ライチュウ"
	.byte EOS
	.if (. - gText_Rom_2EA3B8) > 0x6
	.error "gText_Rom_2EA3B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3B8) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3B8)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4204 gen_1_families_line_4204 (+1 aliases)
	.globl gText_Rom_2EA3BE
gText_Rom_2EA3BE: @ 0x082EA3BE
	.string "サンド"
	.byte EOS
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
	.string "サンドパン"
	.byte EOS
	.if (. - gText_Rom_2EA3C4) > 0x6
	.error "gText_Rom_2EA3C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3C4) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3C4)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4489 gen_1_families_line_4489
	.globl gText_Rom_2EA3CA
gText_Rom_2EA3CA: @ 0x082EA3CA
	.string "ニドラン♀"
	.byte EOS
	.if (. - gText_Rom_2EA3CA) > 0x6
	.error "gText_Rom_2EA3CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3CA) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3CA)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4569 gen_1_families_line_4569
	.globl gText_Rom_2EA3D0
gText_Rom_2EA3D0: @ 0x082EA3D0
	.string "ニドリーナ"
	.byte EOS
	.if (. - gText_Rom_2EA3D0) > 0x6
	.error "gText_Rom_2EA3D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3D0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3D0)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4648 gen_1_families_line_4648
	.globl gText_Rom_2EA3D6
gText_Rom_2EA3D6: @ 0x082EA3D6
	.string "ニドクイン"
	.byte EOS
	.if (. - gText_Rom_2EA3D6) > 0x6
	.error "gText_Rom_2EA3D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3D6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3D6)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4718 gen_1_families_line_4718
	.globl gText_Rom_2EA3DC
gText_Rom_2EA3DC: @ 0x082EA3DC
	.string "ニドラン♂"
	.byte EOS
	.if (. - gText_Rom_2EA3DC) > 0x6
	.error "gText_Rom_2EA3DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3DC) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3DC)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4791 gen_1_families_line_4791
	.globl gText_Rom_2EA3E2
gText_Rom_2EA3E2: @ 0x082EA3E2
	.string "ニドリーノ"
	.byte EOS
	.if (. - gText_Rom_2EA3E2) > 0x6
	.error "gText_Rom_2EA3E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3E2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3E2)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4871 gen_1_families_line_4871
	.globl gText_Rom_2EA3E8
gText_Rom_2EA3E8: @ 0x082EA3E8
	.string "ニドキング"
	.byte EOS
	.if (. - gText_Rom_2EA3E8) > 0x6
	.error "gText_Rom_2EA3E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA3E8) < 0x6
	.space 0x6 - (. - gText_Rom_2EA3E8)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:5032 gen_1_families_line_5032
	.globl gText_Rom_2EA3EE
gText_Rom_2EA3EE: @ 0x082EA3EE
	.string "ピッピ"
	.byte EOS
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
	.string "ピクシー"
	.byte EOS
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
	.string "ロコン"
	.byte EOS
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
	.string "キュウコン"
	.byte EOS
	.if (. - gText_Rom_2EA400) != 0x6
	.error "gText_Rom_2EA400 must retain its original byte length"
	.endif
	.globl gText_Rom_2EA402
	.set gText_Rom_2EA402, gText_Rom_2EA400 + 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:5619 gen_1_families_line_5619
	.globl gText_Rom_2EA406
gText_Rom_2EA406: @ 0x082EA406
	.string "プリン"
	.byte EOS
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
	.string "プクリン"
	.byte EOS
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
	.string "ズバット"
	.byte EOS
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
	.string "ゴルバット"
	.byte EOS
	.if (. - gText_Rom_2EA418) > 0x6
	.error "gText_Rom_2EA418 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA418) < 0x6
	.space 0x6 - (. - gText_Rom_2EA418)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6068 gen_1_families_line_6068 (+1 aliases)
	.globl gText_Rom_2EA41E
gText_Rom_2EA41E: @ 0x082EA41E
	.string "ナゾノクサ"
	.byte EOS
	.if (. - gText_Rom_2EA41E) > 0x6
	.error "gText_Rom_2EA41E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA41E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA41E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6143 gen_1_families_line_6143
	.globl gText_Rom_2EA424
gText_Rom_2EA424: @ 0x082EA424
	.string "クサイハナ"
	.byte EOS
	.if (. - gText_Rom_2EA424) > 0x6
	.error "gText_Rom_2EA424 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA424) < 0x6
	.space 0x6 - (. - gText_Rom_2EA424)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6238 gen_1_families_line_6238
	.globl gText_Rom_2EA42A
gText_Rom_2EA42A: @ 0x082EA42A
	.string "ラフレシア"
	.byte EOS
	.if (. - gText_Rom_2EA42A) > 0x6
	.error "gText_Rom_2EA42A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA42A) < 0x6
	.space 0x6 - (. - gText_Rom_2EA42A)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6416 gen_1_families_line_6416
	.globl gText_Rom_2EA430
gText_Rom_2EA430: @ 0x082EA430
	.string "パラス"
	.byte EOS
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
	.string "パラセクト"
	.byte EOS
	.if (. - gText_Rom_2EA436) > 0x6
	.error "gText_Rom_2EA436 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA436) < 0x6
	.space 0x6 - (. - gText_Rom_2EA436)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6583 gen_1_families_line_6583
	.globl gText_Rom_2EA43C
gText_Rom_2EA43C: @ 0x082EA43C
	.string "コンパン"
	.byte EOS
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
	.string "モルフォン"
	.byte EOS
	.if (. - gText_Rom_2EA442) > 0x6
	.error "gText_Rom_2EA442 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA442) < 0x6
	.space 0x6 - (. - gText_Rom_2EA442)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6752 gen_1_families_line_6752 (+1 aliases)
	.globl gText_Rom_2EA448
gText_Rom_2EA448: @ 0x082EA448
	.string "ディグダ"
	.byte EOS
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
	.string "ダグトリオ"
	.byte EOS
	.if (. - gText_Rom_2EA44E) > 0x6
	.error "gText_Rom_2EA44E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA44E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA44E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:7056 gen_1_families_line_7056 (+3 aliases)
	.globl gText_Rom_2EA454
gText_Rom_2EA454: @ 0x082EA454
	.string "ニャース"
	.byte EOS
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
	.string "ペルシアン"
	.byte EOS
	.if (. - gText_Rom_2EA45A) > 0x6
	.error "gText_Rom_2EA45A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA45A) < 0x6
	.space 0x6 - (. - gText_Rom_2EA45A)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:7534 gen_1_families_line_7534
	.globl gText_Rom_2EA460
gText_Rom_2EA460: @ 0x082EA460
	.string "コダック"
	.byte EOS
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
	.string "ゴルダック"
	.byte EOS
	.if (. - gText_Rom_2EA466) > 0x6
	.error "gText_Rom_2EA466 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA466) < 0x6
	.space 0x6 - (. - gText_Rom_2EA466)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:7680 gen_1_families_line_7680
	.globl gText_Rom_2EA46C
gText_Rom_2EA46C: @ 0x082EA46C
	.string "マンキー"
	.byte EOS
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
	.string "オコリザル"
	.byte EOS
	.if (. - gText_Rom_2EA472) > 0x6
	.error "gText_Rom_2EA472 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA472) < 0x6
	.space 0x6 - (. - gText_Rom_2EA472)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:7900 gen_1_families_line_7900 (+1 aliases)
	.globl gText_Rom_2EA478
gText_Rom_2EA478: @ 0x082EA478
	.string "ガーディ"
	.byte EOS
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
	.string "ウインディ"
	.byte EOS
	.if (. - gText_Rom_2EA47E) > 0x6
	.error "gText_Rom_2EA47E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA47E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA47E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8179 gen_1_families_line_8179
	.globl gText_Rom_2EA484
gText_Rom_2EA484: @ 0x082EA484
	.string "ニョロモ"
	.byte EOS
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
	.string "ニョロゾ"
	.byte EOS
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
	.string "ニョロボン"
	.byte EOS
	.if (. - gText_Rom_2EA490) > 0x6
	.error "gText_Rom_2EA490 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA490) < 0x6
	.space 0x6 - (. - gText_Rom_2EA490)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8505 gen_1_families_line_8505
	.globl gText_Rom_2EA496
gText_Rom_2EA496: @ 0x082EA496
	.string "ケーシィ"
	.byte EOS
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
	.string "ユンゲラー"
	.byte EOS
	.if (. - gText_Rom_2EA49C) > 0x6
	.error "gText_Rom_2EA49C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA49C) < 0x6
	.space 0x6 - (. - gText_Rom_2EA49C)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8677 gen_1_families_line_8677 (+1 aliases)
	.globl gText_Rom_2EA4A2
gText_Rom_2EA4A2: @ 0x082EA4A2
	.string "フーディン"
	.byte EOS
	.if (. - gText_Rom_2EA4A2) > 0x6
	.error "gText_Rom_2EA4A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4A2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4A2)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8853 gen_1_families_line_8853
	.globl gText_Rom_2EA4A8
gText_Rom_2EA4A8: @ 0x082EA4A8
	.string "ワンリキー"
	.byte EOS
	.if (. - gText_Rom_2EA4A8) > 0x6
	.error "gText_Rom_2EA4A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4A8) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4A8)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8930 gen_1_families_line_8930
	.globl gText_Rom_2EA4AE
gText_Rom_2EA4AE: @ 0x082EA4AE
	.string "ゴーリキー"
	.byte EOS
	.if (. - gText_Rom_2EA4AE) > 0x6
	.error "gText_Rom_2EA4AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4AE) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4AE)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9012 gen_1_families_line_9012 (+1 aliases)
	.globl gText_Rom_2EA4B4
gText_Rom_2EA4B4: @ 0x082EA4B4
	.string "カイリキー"
	.byte EOS
	.if (. - gText_Rom_2EA4B4) > 0x6
	.error "gText_Rom_2EA4B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4B4) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4B4)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9151 gen_1_families_line_9151
	.globl gText_Rom_2EA4BA
gText_Rom_2EA4BA: @ 0x082EA4BA
	.string "マダツボミ"
	.byte EOS
	.if (. - gText_Rom_2EA4BA) > 0x6
	.error "gText_Rom_2EA4BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4BA) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4BA)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9221 gen_1_families_line_9221
	.globl gText_Rom_2EA4C0
gText_Rom_2EA4C0: @ 0x082EA4C0
	.string "ウツドン"
	.byte EOS
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
	.string "ウツボット"
	.byte EOS
	.if (. - gText_Rom_2EA4C6) > 0x6
	.error "gText_Rom_2EA4C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4C6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4C6)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9447 gen_1_families_line_9447
	.globl gText_Rom_2EA4CC
gText_Rom_2EA4CC: @ 0x082EA4CC
	.string "メノクラゲ"
	.byte EOS
	.if (. - gText_Rom_2EA4CC) > 0x6
	.error "gText_Rom_2EA4CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4CC) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4CC)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9519 gen_1_families_line_9519
	.globl gText_Rom_2EA4D2
gText_Rom_2EA4D2: @ 0x082EA4D2
	.string "ドククラゲ"
	.byte EOS
	.if (. - gText_Rom_2EA4D2) > 0x6
	.error "gText_Rom_2EA4D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4D2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4D2)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9597 gen_1_families_line_9597 (+1 aliases)
	.globl gText_Rom_2EA4D8
gText_Rom_2EA4D8: @ 0x082EA4D8
	.string "イシツブテ"
	.byte EOS
	.if (. - gText_Rom_2EA4D8) > 0x6
	.error "gText_Rom_2EA4D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4D8) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4D8)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9669 gen_1_families_line_9669 (+1 aliases)
	.globl gText_Rom_2EA4DE
gText_Rom_2EA4DE: @ 0x082EA4DE
	.string "ゴローン"
	.byte EOS
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
	.string "ゴローニャ"
	.byte EOS
	.if (. - gText_Rom_2EA4E4) > 0x6
	.error "gText_Rom_2EA4E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4E4) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4E4)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:10027 gen_1_families_line_10027 (+1 aliases)
	.globl gText_Rom_2EA4EA
gText_Rom_2EA4EA: @ 0x082EA4EA
	.string "ポニータ"
	.byte EOS
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
	.string "ギャロップ"
	.byte EOS
	.if (. - gText_Rom_2EA4F0) > 0x6
	.error "gText_Rom_2EA4F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA4F0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA4F0)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:10302 gen_1_families_line_10302 (+1 aliases)
	.globl gText_Rom_2EA4F6
gText_Rom_2EA4F6: @ 0x082EA4F6
	.string "ヤドン"
	.byte EOS
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
	.string "ヤドラン"
	.byte EOS
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
	.string "コイル"
	.byte EOS
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
	.string "レアコイル"
	.byte EOS
	.if (. - gText_Rom_2EA508) != 0x6
	.error "gText_Rom_2EA508 must retain its original byte length"
	.endif
	.globl gText_Rom_2EA50A
	.set gText_Rom_2EA50A, gText_Rom_2EA508 + 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:11037 gen_1_families_line_11037 (+1 aliases)
	.globl gText_Rom_2EA50E
gText_Rom_2EA50E: @ 0x082EA50E
	.string "カモネギ"
	.byte EOS
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
	.string "ドードー"
	.byte EOS
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
	.string "ドードリオ"
	.byte EOS
	.if (. - gText_Rom_2EA51A) > 0x6
	.error "gText_Rom_2EA51A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA51A) < 0x6
	.space 0x6 - (. - gText_Rom_2EA51A)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:11439 gen_1_families_line_11439
	.globl gText_Rom_2EA520
gText_Rom_2EA520: @ 0x082EA520
	.string "パウワウ"
	.byte EOS
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
	.string "ジュゴン"
	.byte EOS
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
	.string "ベトベター"
	.byte EOS
	.if (. - gText_Rom_2EA52C) > 0x6
	.error "gText_Rom_2EA52C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA52C) < 0x6
	.space 0x6 - (. - gText_Rom_2EA52C)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:11657 gen_1_families_line_11657 (+1 aliases)
	.globl gText_Rom_2EA532
gText_Rom_2EA532: @ 0x082EA532
	.string "ベトベトン"
	.byte EOS
	.if (. - gText_Rom_2EA532) > 0x6
	.error "gText_Rom_2EA532 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA532) < 0x6
	.space 0x6 - (. - gText_Rom_2EA532)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:11874 gen_1_families_line_11874
	.globl gText_Rom_2EA538
gText_Rom_2EA538: @ 0x082EA538
	.string "シェルダー"
	.byte EOS
	.if (. - gText_Rom_2EA538) > 0x6
	.error "gText_Rom_2EA538 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA538) < 0x6
	.space 0x6 - (. - gText_Rom_2EA538)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:11951 gen_1_families_line_11951
	.globl gText_Rom_2EA53E
gText_Rom_2EA53E: @ 0x082EA53E
	.string "パルシェン"
	.byte EOS
	.if (. - gText_Rom_2EA53E) > 0x6
	.error "gText_Rom_2EA53E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA53E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA53E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:12021 gen_1_families_line_12021
	.globl gText_Rom_2EA544
gText_Rom_2EA544: @ 0x082EA544
	.string "ゴース"
	.byte EOS
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
	.string "ゴースト"
	.byte EOS
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
	.string "ゲンガー"
	.byte EOS
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
	.string "イワーク"
	.byte EOS
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
	.string "スリープ"
	.byte EOS
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
	.string "スリーパー"
	.byte EOS
	.if (. - gText_Rom_2EA562) > 0x6
	.error "gText_Rom_2EA562 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA562) < 0x6
	.space 0x6 - (. - gText_Rom_2EA562)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:12793 gen_1_families_line_12793
	.globl gText_Rom_2EA568
gText_Rom_2EA568: @ 0x082EA568
	.string "クラブ"
	.byte EOS
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
	.string "キングラー"
	.byte EOS
	.if (. - gText_Rom_2EA56E) > 0x6
	.error "gText_Rom_2EA56E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA56E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA56E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:12997 gen_1_families_line_12997 (+1 aliases)
	.globl gText_Rom_2EA574
gText_Rom_2EA574: @ 0x082EA574
	.string "ビリリダマ"
	.byte EOS
	.if (. - gText_Rom_2EA574) > 0x6
	.error "gText_Rom_2EA574 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA574) < 0x6
	.space 0x6 - (. - gText_Rom_2EA574)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:13075 gen_1_families_line_13075 (+1 aliases)
	.globl gText_Rom_2EA57A
gText_Rom_2EA57A: @ 0x082EA57A
	.string "マルマイン"
	.byte EOS
	.if (. - gText_Rom_2EA57A) > 0x6
	.error "gText_Rom_2EA57A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA57A) < 0x6
	.space 0x6 - (. - gText_Rom_2EA57A)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:13282 gen_1_families_line_13282
	.globl gText_Rom_2EA580
gText_Rom_2EA580: @ 0x082EA580
	.string "タマタマ"
	.byte EOS
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
	.string "ナッシー"
	.byte EOS
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
	.string "カラカラ"
	.byte EOS
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
	.string "ガラガラ"
	.byte EOS
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
	.string "サワムラー"
	.byte EOS
	.if (. - gText_Rom_2EA598) > 0x6
	.error "gText_Rom_2EA598 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA598) < 0x6
	.space 0x6 - (. - gText_Rom_2EA598)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:13946 gen_1_families_line_13946
	.globl gText_Rom_2EA59E
gText_Rom_2EA59E: @ 0x082EA59E
	.string "エビワラー"
	.byte EOS
	.if (. - gText_Rom_2EA59E) > 0x6
	.error "gText_Rom_2EA59E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA59E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA59E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:14099 gen_1_families_line_14099
	.globl gText_Rom_2EA5A4
gText_Rom_2EA5A4: @ 0x082EA5A4
	.string "ベロリンガ"
	.byte EOS
	.if (. - gText_Rom_2EA5A4) > 0x6
	.error "gText_Rom_2EA5A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5A4) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5A4)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:14252 gen_1_families_line_14252
	.globl gText_Rom_2EA5AA
gText_Rom_2EA5AA: @ 0x082EA5AA
	.string "ドガース"
	.byte EOS
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
	.string "マタドガス"
	.byte EOS
	.if (. - gText_Rom_2EA5B0) > 0x6
	.error "gText_Rom_2EA5B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5B0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5B0)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:14477 gen_1_families_line_14477
	.globl gText_Rom_2EA5B6
gText_Rom_2EA5B6: @ 0x082EA5B6
	.string "サイホーン"
	.byte EOS
	.if (. - gText_Rom_2EA5B6) > 0x6
	.error "gText_Rom_2EA5B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5B6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5B6)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:14561 gen_1_families_line_14561
	.globl gText_Rom_2EA5BC
gText_Rom_2EA5BC: @ 0x082EA5BC
	.string "サイドン"
	.byte EOS
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
	.string "ラッキー"
	.byte EOS
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
	.string "モンジャラ"
	.byte EOS
	.if (. - gText_Rom_2EA5C8) > 0x6
	.error "gText_Rom_2EA5C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5C8) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5C8)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:15120 gen_1_families_line_15120 (+1 aliases)
	.globl gText_Rom_2EA5CE
gText_Rom_2EA5CE: @ 0x082EA5CE
	.string "ガルーラ"
	.byte EOS
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
	.string "タッツー"
	.byte EOS
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
	.string "シードラ"
	.byte EOS
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
	.string "トサキント"
	.byte EOS
	.if (. - gText_Rom_2EA5E0) > 0x6
	.error "gText_Rom_2EA5E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5E0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5E0)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:15599 gen_1_families_line_15599
	.globl gText_Rom_2EA5E6
gText_Rom_2EA5E6: @ 0x082EA5E6
	.string "アズマオウ"
	.byte EOS
	.if (. - gText_Rom_2EA5E6) > 0x6
	.error "gText_Rom_2EA5E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5E6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5E6)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:15686 gen_1_families_line_15686
	.globl gText_Rom_2EA5EC
gText_Rom_2EA5EC: @ 0x082EA5EC
	.string "ヒトデマン"
	.byte EOS
	.if (. - gText_Rom_2EA5EC) > 0x6
	.error "gText_Rom_2EA5EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5EC) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5EC)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:15758 gen_1_families_line_15758 (+1 aliases)
	.globl gText_Rom_2EA5F2
gText_Rom_2EA5F2: @ 0x082EA5F2
	.string "スターミー"
	.byte EOS
	.if (. - gText_Rom_2EA5F2) > 0x6
	.error "gText_Rom_2EA5F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5F2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5F2)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:15982 gen_1_families_line_15982 (+1 aliases)
	.globl gText_Rom_2EA5F8
gText_Rom_2EA5F8: @ 0x082EA5F8
	.string "バリヤード"
	.byte EOS
	.if (. - gText_Rom_2EA5F8) > 0x6
	.error "gText_Rom_2EA5F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5F8) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5F8)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16192 gen_1_families_line_16192
	.globl gText_Rom_2EA5FE
gText_Rom_2EA5FE: @ 0x082EA5FE
	.string "ストライク"
	.byte EOS
	.if (. - gText_Rom_2EA5FE) > 0x6
	.error "gText_Rom_2EA5FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA5FE) < 0x6
	.space 0x6 - (. - gText_Rom_2EA5FE)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16597 gen_1_families_line_16597
	.globl gText_Rom_2EA604
gText_Rom_2EA604: @ 0x082EA604
	.string "ルージュラ"
	.byte EOS
	.if (. - gText_Rom_2EA604) > 0x6
	.error "gText_Rom_2EA604 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA604) < 0x6
	.space 0x6 - (. - gText_Rom_2EA604)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16743 gen_1_families_line_16743
	.globl gText_Rom_2EA60A
gText_Rom_2EA60A: @ 0x082EA60A
	.string "エレブー"
	.byte EOS
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
	.string "ブーバー"
	.byte EOS
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
	.string "カイロス"
	.byte EOS
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
	.string "ケンタロス"
	.byte EOS
	.if (. - gText_Rom_2EA61C) > 0x6
	.error "gText_Rom_2EA61C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA61C) < 0x6
	.space 0x6 - (. - gText_Rom_2EA61C)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:17548 gen_1_families_line_17548
	.globl gText_Rom_2EA622
gText_Rom_2EA622: @ 0x082EA622
	.string "コイキング"
	.byte EOS
	.if (. - gText_Rom_2EA622) > 0x6
	.error "gText_Rom_2EA622 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA622) < 0x6
	.space 0x6 - (. - gText_Rom_2EA622)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:17636 gen_1_families_line_17636 (+1 aliases)
	.globl gText_Rom_2EA628
gText_Rom_2EA628: @ 0x082EA628
	.string "ギャラドス"
	.byte EOS
	.if (. - gText_Rom_2EA628) > 0x6
	.error "gText_Rom_2EA628 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA628) < 0x6
	.space 0x6 - (. - gText_Rom_2EA628)
	.endif

	@ src/data/debug_trainers.h:119 debug_trainers_line_119 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EA62E
gText_Rom_2EA62E: @ 0x082EA62E
	.string "ラプラス"
	.byte EOS
	.if (. - gText_Rom_2EA62E) != 0x5
	.error "gText_Rom_2EA62E must retain its original byte length"
	.endif
	.globl gText_Rom_2EA62F
	.set gText_Rom_2EA62F, gText_Rom_2EA62E + 0x1
	.incbin "baserom.gba", 0x2ea633, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:17932 gen_1_families_line_17932 (+1 aliases)
	.globl gText_Rom_2EA634
gText_Rom_2EA634: @ 0x082EA634
	.string "メタモン"
	.byte EOS
	.if (. - gText_Rom_2EA634) > 0x5
	.error "gText_Rom_2EA634 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA634) < 0x5
	.space 0x5 - (. - gText_Rom_2EA634)
	.endif
	.incbin "baserom.gba", 0x2ea639, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:18011 gen_1_families_line_18011 (+3 aliases)
	.globl gText_Rom_2EA63A
gText_Rom_2EA63A: @ 0x082EA63A
	.string "イーブイ"
	.byte EOS
	.if (. - gText_Rom_2EA63A) > 0x5
	.error "gText_Rom_2EA63A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA63A) < 0x5
	.space 0x5 - (. - gText_Rom_2EA63A)
	.endif
	.incbin "baserom.gba", 0x2ea63f, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:18242 gen_1_families_line_18242 (+1 aliases)
	.globl gText_Rom_2EA640
gText_Rom_2EA640: @ 0x082EA640
	.string "シャワーズ"
	.byte EOS
	.if (. - gText_Rom_2EA640) > 0x6
	.error "gText_Rom_2EA640 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA640) < 0x6
	.space 0x6 - (. - gText_Rom_2EA640)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:18308 gen_1_families_line_18308 (+1 aliases)
	.globl gText_Rom_2EA646
gText_Rom_2EA646: @ 0x082EA646
	.string "サンダース"
	.byte EOS
	.if (. - gText_Rom_2EA646) > 0x6
	.error "gText_Rom_2EA646 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA646) < 0x6
	.space 0x6 - (. - gText_Rom_2EA646)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:18374 gen_1_families_line_18374 (+1 aliases)
	.globl gText_Rom_2EA64C
gText_Rom_2EA64C: @ 0x082EA64C
	.string "ブースター"
	.byte EOS
	.if (. - gText_Rom_2EA64C) > 0x6
	.error "gText_Rom_2EA64C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA64C) < 0x6
	.space 0x6 - (. - gText_Rom_2EA64C)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:18787 gen_1_families_line_18787
	.globl gText_Rom_2EA652
gText_Rom_2EA652: @ 0x082EA652
	.string "ポリゴン"
	.byte EOS
	.if (. - gText_Rom_2EA652) > 0x5
	.error "gText_Rom_2EA652 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA652) < 0x5
	.space 0x5 - (. - gText_Rom_2EA652)
	.endif
	.incbin "baserom.gba", 0x2ea657, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:19024 gen_1_families_line_19024
	.globl gText_Rom_2EA658
gText_Rom_2EA658: @ 0x082EA658
	.string "オムナイト"
	.byte EOS
	.if (. - gText_Rom_2EA658) > 0x6
	.error "gText_Rom_2EA658 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA658) < 0x6
	.space 0x6 - (. - gText_Rom_2EA658)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:19098 gen_1_families_line_19098
	.globl gText_Rom_2EA65E
gText_Rom_2EA65E: @ 0x082EA65E
	.string "オムスター"
	.byte EOS
	.if (. - gText_Rom_2EA65E) > 0x6
	.error "gText_Rom_2EA65E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA65E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA65E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:19174 gen_1_families_line_19174
	.globl gText_Rom_2EA664
gText_Rom_2EA664: @ 0x082EA664
	.string "カブト"
	.byte EOS
	.if (. - gText_Rom_2EA664) > 0x4
	.error "gText_Rom_2EA664 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA664) < 0x4
	.space 0x4 - (. - gText_Rom_2EA664)
	.endif
	.incbin "baserom.gba", 0x2ea668, 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:19254 gen_1_families_line_19254
	.globl gText_Rom_2EA66A
gText_Rom_2EA66A: @ 0x082EA66A
	.string "カブトプス"
	.byte EOS
	.if (. - gText_Rom_2EA66A) > 0x6
	.error "gText_Rom_2EA66A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA66A) < 0x6
	.space 0x6 - (. - gText_Rom_2EA66A)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:19324 gen_1_families_line_19324 (+1 aliases)
	.globl gText_Rom_2EA670
gText_Rom_2EA670: @ 0x082EA670
	.string "プテラ"
	.byte EOS
	.if (. - gText_Rom_2EA670) > 0x4
	.error "gText_Rom_2EA670 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA670) < 0x4
	.space 0x4 - (. - gText_Rom_2EA670)
	.endif
	.incbin "baserom.gba", 0x2ea674, 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:19548 gen_1_families_line_19548 (+1 aliases)
	.globl gText_Rom_2EA676
gText_Rom_2EA676: @ 0x082EA676
	.string "カビゴン"
	.byte EOS
	.if (. - gText_Rom_2EA676) > 0x5
	.error "gText_Rom_2EA676 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA676) < 0x5
	.space 0x5 - (. - gText_Rom_2EA676)
	.endif
	.incbin "baserom.gba", 0x2ea67b, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:19688 gen_1_families_line_19688 (+1 aliases)
	.globl gText_Rom_2EA67C
gText_Rom_2EA67C: @ 0x082EA67C
	.string "フリーザー"
	.byte EOS
	.if (. - gText_Rom_2EA67C) > 0x6
	.error "gText_Rom_2EA67C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA67C) < 0x6
	.space 0x6 - (. - gText_Rom_2EA67C)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:19841 gen_1_families_line_19841 (+1 aliases)
	.globl gText_Rom_2EA682
gText_Rom_2EA682: @ 0x082EA682
	.string "サンダー"
	.byte EOS
	.if (. - gText_Rom_2EA682) > 0x5
	.error "gText_Rom_2EA682 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA682) < 0x5
	.space 0x5 - (. - gText_Rom_2EA682)
	.endif
	.incbin "baserom.gba", 0x2ea687, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:19990 gen_1_families_line_19990 (+1 aliases)
	.globl gText_Rom_2EA688
gText_Rom_2EA688: @ 0x082EA688
	.string "ファイヤー"
	.byte EOS
	.if (. - gText_Rom_2EA688) > 0x6
	.error "gText_Rom_2EA688 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA688) < 0x6
	.space 0x6 - (. - gText_Rom_2EA688)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:20162 gen_1_families_line_20162
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EA68E
gText_Rom_2EA68E: @ 0x082EA68E
	.string "ミニリュウ"
	.byte EOS
	.if (. - gText_Rom_2EA68E) != 0x6
	.error "gText_Rom_2EA68E must retain its original byte length"
	.endif
	.globl gText_Rom_2EA690
	.set gText_Rom_2EA690, gText_Rom_2EA68E + 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:20232 gen_1_families_line_20232
	.globl gText_Rom_2EA694
gText_Rom_2EA694: @ 0x082EA694
	.string "ハクリュー"
	.byte EOS
	.if (. - gText_Rom_2EA694) > 0x6
	.error "gText_Rom_2EA694 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA694) < 0x6
	.space 0x6 - (. - gText_Rom_2EA694)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:20308 gen_1_families_line_20308 (+1 aliases)
	.globl gText_Rom_2EA69A
gText_Rom_2EA69A: @ 0x082EA69A
	.string "カイリュー"
	.byte EOS
	.if (. - gText_Rom_2EA69A) > 0x6
	.error "gText_Rom_2EA69A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA69A) < 0x6
	.space 0x6 - (. - gText_Rom_2EA69A)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:20447 gen_1_families_line_20447 (+2 aliases)
	.globl gText_Rom_2EA6A0
gText_Rom_2EA6A0: @ 0x082EA6A0
	.string "ミュウツー"
	.byte EOS
	.if (. - gText_Rom_2EA6A0) > 0x6
	.error "gText_Rom_2EA6A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA6A0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA6A0)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:20681 gen_1_families_line_20681
	.globl gText_Rom_2EA6A6
gText_Rom_2EA6A6: @ 0x082EA6A6
	.string "ミュウ"
	.byte EOS
	.if (. - gText_Rom_2EA6A6) > 0x4
	.error "gText_Rom_2EA6A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA6A6) < 0x4
	.space 0x4 - (. - gText_Rom_2EA6A6)
	.endif
	.incbin "baserom.gba", 0x2ea6aa, 0x2

	@ src/data/pokemon/species_info/gen_2_families.h:26 gen_2_families_line_26
	.globl gText_Rom_2EA6AC
gText_Rom_2EA6AC: @ 0x082EA6AC
	.string "チコリータ"
	.byte EOS
	.if (. - gText_Rom_2EA6AC) > 0x6
	.error "gText_Rom_2EA6AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA6AC) < 0x6
	.space 0x6 - (. - gText_Rom_2EA6AC)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:96 gen_2_families_line_96
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EA6B2
gText_Rom_2EA6B2: @ 0x082EA6B2
	.string "ベイリーフ"
	.byte EOS
	.if (. - gText_Rom_2EA6B2) != 0x6
	.error "gText_Rom_2EA6B2 must retain its original byte length"
	.endif
	.globl gText_Rom_2EA6B4
	.set gText_Rom_2EA6B4, gText_Rom_2EA6B2 + 0x2

	@ src/data/pokemon/species_info/gen_2_families.h:170 gen_2_families_line_170 (+1 aliases)
	.globl gText_Rom_2EA6B8
gText_Rom_2EA6B8: @ 0x082EA6B8
	.string "メガニウム"
	.byte EOS
	.if (. - gText_Rom_2EA6B8) > 0x6
	.error "gText_Rom_2EA6B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA6B8) < 0x6
	.space 0x6 - (. - gText_Rom_2EA6B8)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:313 gen_2_families_line_313
	.globl gText_Rom_2EA6BE
gText_Rom_2EA6BE: @ 0x082EA6BE
	.string "ヒノアラシ"
	.byte EOS
	.if (. - gText_Rom_2EA6BE) > 0x6
	.error "gText_Rom_2EA6BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA6BE) < 0x6
	.space 0x6 - (. - gText_Rom_2EA6BE)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:384 gen_2_families_line_384
	.globl gText_Rom_2EA6C4
gText_Rom_2EA6C4: @ 0x082EA6C4
	.string "マグマラシ"
	.byte EOS
	.if (. - gText_Rom_2EA6C4) > 0x6
	.error "gText_Rom_2EA6C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA6C4) < 0x6
	.space 0x6 - (. - gText_Rom_2EA6C4)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:461 gen_2_families_line_461 (+1 aliases)
	.globl gText_Rom_2EA6CA
gText_Rom_2EA6CA: @ 0x082EA6CA
	.string "バクフーン"
	.byte EOS
	.if (. - gText_Rom_2EA6CA) > 0x6
	.error "gText_Rom_2EA6CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA6CA) < 0x6
	.space 0x6 - (. - gText_Rom_2EA6CA)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:598 gen_2_families_line_598
	.globl gText_Rom_2EA6D0
gText_Rom_2EA6D0: @ 0x082EA6D0
	.string "ワニノコ"
	.byte EOS
	.if (. - gText_Rom_2EA6D0) > 0x5
	.error "gText_Rom_2EA6D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA6D0) < 0x5
	.space 0x5 - (. - gText_Rom_2EA6D0)
	.endif
	.incbin "baserom.gba", 0x2ea6d5, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:672 gen_2_families_line_672
	.globl gText_Rom_2EA6D6
gText_Rom_2EA6D6: @ 0x082EA6D6
	.string "アリゲイツ"
	.byte EOS
	.if (. - gText_Rom_2EA6D6) > 0x6
	.error "gText_Rom_2EA6D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA6D6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA6D6)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:746 gen_2_families_line_746 (+1 aliases)
	.globl gText_Rom_2EA6DC
gText_Rom_2EA6DC: @ 0x082EA6DC
	.string "オーダイル"
	.byte EOS
	.if (. - gText_Rom_2EA6DC) > 0x6
	.error "gText_Rom_2EA6DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA6DC) < 0x6
	.space 0x6 - (. - gText_Rom_2EA6DC)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:879 gen_2_families_line_879
	.globl gText_Rom_2EA6E2
gText_Rom_2EA6E2: @ 0x082EA6E2
	.string "オタチ"
	.byte EOS
	.if (. - gText_Rom_2EA6E2) > 0x4
	.error "gText_Rom_2EA6E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA6E2) < 0x4
	.space 0x4 - (. - gText_Rom_2EA6E2)
	.endif
	.incbin "baserom.gba", 0x2ea6e6, 0x2

	@ src/data/pokemon/species_info/gen_2_families.h:949 gen_2_families_line_949
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EA6E8
gText_Rom_2EA6E8: @ 0x082EA6E8
	.string "オオタチ"
	.byte EOS
	.if (. - gText_Rom_2EA6E8) != 0x5
	.error "gText_Rom_2EA6E8 must retain its original byte length"
	.endif
	.globl gText_Rom_2EA6E9
	.set gText_Rom_2EA6E9, gText_Rom_2EA6E8 + 0x1
	.incbin "baserom.gba", 0x2ea6ed, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:1017 gen_2_families_line_1017
	.globl gText_Rom_2EA6EE
gText_Rom_2EA6EE: @ 0x082EA6EE
	.string "ホーホー"
	.byte EOS
	.if (. - gText_Rom_2EA6EE) > 0x5
	.error "gText_Rom_2EA6EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA6EE) < 0x5
	.space 0x5 - (. - gText_Rom_2EA6EE)
	.endif
	.incbin "baserom.gba", 0x2ea6f3, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:1102 gen_2_families_line_1102
	.globl gText_Rom_2EA6F4
gText_Rom_2EA6F4: @ 0x082EA6F4
	.string "ヨルノズク"
	.byte EOS
	.if (. - gText_Rom_2EA6F4) > 0x6
	.error "gText_Rom_2EA6F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA6F4) < 0x6
	.space 0x6 - (. - gText_Rom_2EA6F4)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:1170 gen_2_families_line_1170
	.globl gText_Rom_2EA6FA
gText_Rom_2EA6FA: @ 0x082EA6FA
	.string "レディバ"
	.byte EOS
	.if (. - gText_Rom_2EA6FA) > 0x5
	.error "gText_Rom_2EA6FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA6FA) < 0x5
	.space 0x5 - (. - gText_Rom_2EA6FA)
	.endif
	.incbin "baserom.gba", 0x2ea6ff, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:1253 gen_2_families_line_1253
	.globl gText_Rom_2EA700
gText_Rom_2EA700: @ 0x082EA700
	.string "レディアン"
	.byte EOS
	.if (. - gText_Rom_2EA700) > 0x6
	.error "gText_Rom_2EA700 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA700) < 0x6
	.space 0x6 - (. - gText_Rom_2EA700)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:1337 gen_2_families_line_1337
	.globl gText_Rom_2EA706
gText_Rom_2EA706: @ 0x082EA706
	.string "イトマル"
	.byte EOS
	.if (. - gText_Rom_2EA706) > 0x5
	.error "gText_Rom_2EA706 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA706) < 0x5
	.space 0x5 - (. - gText_Rom_2EA706)
	.endif
	.incbin "baserom.gba", 0x2ea70b, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:1417 gen_2_families_line_1417
	.globl gText_Rom_2EA70C
gText_Rom_2EA70C: @ 0x082EA70C
	.string "アリアドス"
	.byte EOS
	.if (. - gText_Rom_2EA70C) > 0x6
	.error "gText_Rom_2EA70C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA70C) < 0x6
	.space 0x6 - (. - gText_Rom_2EA70C)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:5982 gen_1_families_line_5982
	.globl gText_Rom_2EA712
gText_Rom_2EA712: @ 0x082EA712
	.string "クロバット"
	.byte EOS
	.if (. - gText_Rom_2EA712) > 0x6
	.error "gText_Rom_2EA712 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA712) < 0x6
	.space 0x6 - (. - gText_Rom_2EA712)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:1488 gen_2_families_line_1488
	.globl gText_Rom_2EA718
gText_Rom_2EA718: @ 0x082EA718
	.string "チョンチー"
	.byte EOS
	.if (. - gText_Rom_2EA718) > 0x6
	.error "gText_Rom_2EA718 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA718) < 0x6
	.space 0x6 - (. - gText_Rom_2EA718)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:1560 gen_2_families_line_1560
	.globl gText_Rom_2EA71E
gText_Rom_2EA71E: @ 0x082EA71E
	.string "ランターン"
	.byte EOS
	.if (. - gText_Rom_2EA71E) > 0x6
	.error "gText_Rom_2EA71E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA71E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA71E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:2773 gen_1_families_line_2773 (+1 aliases)
	.globl gText_Rom_2EA724
gText_Rom_2EA724: @ 0x082EA724
	.string "ピチュー"
	.byte EOS
	.if (. - gText_Rom_2EA724) > 0x5
	.error "gText_Rom_2EA724 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA724) < 0x5
	.space 0x5 - (. - gText_Rom_2EA724)
	.endif
	.incbin "baserom.gba", 0x2ea729, 0x1

	@ src/data/pokemon/species_info/gen_1_families.h:4955 gen_1_families_line_4955
	.globl gText_Rom_2EA72A
gText_Rom_2EA72A: @ 0x082EA72A
	.string "ピィ"
	.byte EOS
	.if (. - gText_Rom_2EA72A) > 0x3
	.error "gText_Rom_2EA72A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA72A) < 0x3
	.space 0x3 - (. - gText_Rom_2EA72A)
	.endif
	.incbin "baserom.gba", 0x2ea72d, 0x3

	@ src/data/pokemon/species_info/gen_1_families.h:5541 gen_1_families_line_5541
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EA730
gText_Rom_2EA730: @ 0x082EA730
	.string "ププリン"
	.byte EOS
	.if (. - gText_Rom_2EA730) != 0x5
	.error "gText_Rom_2EA730 must retain its original byte length"
	.endif
	.globl gText_Rom_2EA731
	.set gText_Rom_2EA731, gText_Rom_2EA730 + 0x1
	.incbin "baserom.gba", 0x2ea735, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:1634 gen_2_families_line_1634
	.globl gText_Rom_2EA736
gText_Rom_2EA736: @ 0x082EA736
	.string "トゲピー"
	.byte EOS
	.if (. - gText_Rom_2EA736) > 0x5
	.error "gText_Rom_2EA736 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA736) < 0x5
	.space 0x5 - (. - gText_Rom_2EA736)
	.endif
	.incbin "baserom.gba", 0x2ea73b, 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:1704 gen_2_families_line_1704
	.globl gText_Rom_2EA73C
gText_Rom_2EA73C: @ 0x082EA73C
	.string "トゲチック"
	.byte EOS
	.if (. - gText_Rom_2EA73C) > 0x6
	.error "gText_Rom_2EA73C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA73C) < 0x6
	.space 0x6 - (. - gText_Rom_2EA73C)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:1858 gen_2_families_line_1858
	.globl gText_Rom_2EA742
gText_Rom_2EA742: @ 0x082EA742
	.string "ネイティ"
	.byte EOS
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
	.string "ネイティオ"
	.byte EOS
	.if (. - gText_Rom_2EA748) > 0x6
	.error "gText_Rom_2EA748 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA748) < 0x6
	.space 0x6 - (. - gText_Rom_2EA748)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:2017 gen_2_families_line_2017
	.globl gText_Rom_2EA74E
gText_Rom_2EA74E: @ 0x082EA74E
	.string "メリープ"
	.byte EOS
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
	.string "モココ"
	.byte EOS
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
	.string "デンリュウ"
	.byte EOS
	.if (. - gText_Rom_2EA75A) != 0x6
	.error "gText_Rom_2EA75A must retain its original byte length"
	.endif
	.globl gText_Rom_2EA75C
	.set gText_Rom_2EA75C, gText_Rom_2EA75A + 0x2

	@ src/data/pokemon/species_info/gen_1_families.h:6327 gen_1_families_line_6327
	.globl gText_Rom_2EA760
gText_Rom_2EA760: @ 0x082EA760
	.string "キレイハナ"
	.byte EOS
	.if (. - gText_Rom_2EA760) > 0x6
	.error "gText_Rom_2EA760 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA760) < 0x6
	.space 0x6 - (. - gText_Rom_2EA760)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:2397 gen_2_families_line_2397
	.globl gText_Rom_2EA766
gText_Rom_2EA766: @ 0x082EA766
	.string "マリル"
	.byte EOS
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
	.string "マリルリ"
	.byte EOS
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
	.string "ウソッキー"
	.byte EOS
	.if (. - gText_Rom_2EA772) > 0x6
	.error "gText_Rom_2EA772 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA772) < 0x6
	.space 0x6 - (. - gText_Rom_2EA772)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8411 gen_1_families_line_8411
	.globl gText_Rom_2EA778
gText_Rom_2EA778: @ 0x082EA778
	.string "ニョロトノ"
	.byte EOS
	.if (. - gText_Rom_2EA778) > 0x6
	.error "gText_Rom_2EA778 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA778) < 0x6
	.space 0x6 - (. - gText_Rom_2EA778)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:2713 gen_2_families_line_2713
	.globl gText_Rom_2EA77E
gText_Rom_2EA77E: @ 0x082EA77E
	.string "ハネッコ"
	.byte EOS
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
	.string "ポポッコ"
	.byte EOS
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
	.string "ワタッコ"
	.byte EOS
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
	.string "エイパム"
	.byte EOS
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
	.string "ヒマナッツ"
	.byte EOS
	.if (. - gText_Rom_2EA796) > 0x6
	.error "gText_Rom_2EA796 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA796) < 0x6
	.space 0x6 - (. - gText_Rom_2EA796)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:3194 gen_2_families_line_3194
	.globl gText_Rom_2EA79C
gText_Rom_2EA79C: @ 0x082EA79C
	.string "キマワリ"
	.byte EOS
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
	.string "ヤンヤンマ"
	.byte EOS
	.if (. - gText_Rom_2EA7A2) > 0x6
	.error "gText_Rom_2EA7A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7A2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7A2)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:3451 gen_2_families_line_3451 (+1 aliases)
	.globl gText_Rom_2EA7A8
gText_Rom_2EA7A8: @ 0x082EA7A8
	.string "ウパー"
	.byte EOS
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
	.string "ヌオー"
	.byte EOS
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
	.string "エーフィ"
	.byte EOS
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
	.string "ブラッキー"
	.byte EOS
	.if (. - gText_Rom_2EA7BA) != 0x6
	.error "gText_Rom_2EA7BA must retain its original byte length"
	.endif
	.globl gText_Rom_2EA7BB
	.set gText_Rom_2EA7BB, gText_Rom_2EA7BA + 0x1

	@ src/data/pokemon/species_info/gen_2_families.h:3751 gen_2_families_line_3751
	.globl gText_Rom_2EA7C0
gText_Rom_2EA7C0: @ 0x082EA7C0
	.string "ヤミカラス"
	.byte EOS
	.if (. - gText_Rom_2EA7C0) > 0x6
	.error "gText_Rom_2EA7C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7C0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7C0)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:10448 gen_1_families_line_10448 (+1 aliases)
	.globl gText_Rom_2EA7C6
gText_Rom_2EA7C6: @ 0x082EA7C6
	.string "ヤドキング"
	.byte EOS
	.if (. - gText_Rom_2EA7C6) > 0x6
	.error "gText_Rom_2EA7C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7C6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7C6)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:3909 gen_2_families_line_3909
	.globl gText_Rom_2EA7CC
gText_Rom_2EA7CC: @ 0x082EA7CC
	.string "ムウマ"
	.byte EOS
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
	.string "アンノーン"
	.byte EOS
	.if (. - gText_Rom_2EA7D2) > 0x6
	.error "gText_Rom_2EA7D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7D2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7D2)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4237 gen_2_families_line_4237
	.globl gText_Rom_2EA7D8
gText_Rom_2EA7D8: @ 0x082EA7D8
	.string "ソーナンス"
	.byte EOS
	.if (. - gText_Rom_2EA7D8) > 0x6
	.error "gText_Rom_2EA7D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7D8) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7D8)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4326 gen_2_families_line_4326
	.globl gText_Rom_2EA7DE
gText_Rom_2EA7DE: @ 0x082EA7DE
	.string "キリンリキ"
	.byte EOS
	.if (. - gText_Rom_2EA7DE) > 0x6
	.error "gText_Rom_2EA7DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7DE) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7DE)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4477 gen_2_families_line_4477
	.globl gText_Rom_2EA7E4
gText_Rom_2EA7E4: @ 0x082EA7E4
	.string "クヌギダマ"
	.byte EOS
	.if (. - gText_Rom_2EA7E4) > 0x6
	.error "gText_Rom_2EA7E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7E4) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7E4)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4551 gen_2_families_line_4551
	.globl gText_Rom_2EA7EA
gText_Rom_2EA7EA: @ 0x082EA7EA
	.string "フォレトス"
	.byte EOS
	.if (. - gText_Rom_2EA7EA) > 0x6
	.error "gText_Rom_2EA7EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7EA) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7EA)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4627 gen_2_families_line_4627
	.globl gText_Rom_2EA7F0
gText_Rom_2EA7F0: @ 0x082EA7F0
	.string "ノコッチ"
	.byte EOS
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
	.string "グライガー"
	.byte EOS
	.if (. - gText_Rom_2EA7F6) > 0x6
	.error "gText_Rom_2EA7F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7F6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7F6)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:12462 gen_1_families_line_12462 (+1 aliases)
	.globl gText_Rom_2EA7FC
gText_Rom_2EA7FC: @ 0x082EA7FC
	.string "ハガネール"
	.byte EOS
	.if (. - gText_Rom_2EA7FC) > 0x6
	.error "gText_Rom_2EA7FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA7FC) < 0x6
	.space 0x6 - (. - gText_Rom_2EA7FC)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4995 gen_2_families_line_4995
	.globl gText_Rom_2EA802
gText_Rom_2EA802: @ 0x082EA802
	.string "ブルー"
	.byte EOS
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
	.string "グランブル"
	.byte EOS
	.if (. - gText_Rom_2EA808) > 0x6
	.error "gText_Rom_2EA808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA808) < 0x6
	.space 0x6 - (. - gText_Rom_2EA808)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:5146 gen_2_families_line_5146 (+1 aliases)
	.globl gText_Rom_2EA80E
gText_Rom_2EA80E: @ 0x082EA80E
	.string "ハリーセン"
	.byte EOS
	.if (. - gText_Rom_2EA80E) > 0x6
	.error "gText_Rom_2EA80E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA80E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA80E)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16296 gen_1_families_line_16296 (+1 aliases)
	.globl gText_Rom_2EA814
gText_Rom_2EA814: @ 0x082EA814
	.string "ハッサム"
	.byte EOS
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
	.string "ツボツボ"
	.byte EOS
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
	.string "ヘラクロス"
	.byte EOS
	.if (. - gText_Rom_2EA820) > 0x6
	.error "gText_Rom_2EA820 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA820) < 0x6
	.space 0x6 - (. - gText_Rom_2EA820)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:5599 gen_2_families_line_5599 (+1 aliases)
	.globl gText_Rom_2EA826
gText_Rom_2EA826: @ 0x082EA826
	.string "ニューラ"
	.byte EOS
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
	.string "ヒメグマ"
	.byte EOS
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
	.string "リングマ"
	.byte EOS
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
	.string "マグマッグ"
	.byte EOS
	.if (. - gText_Rom_2EA838) > 0x6
	.error "gText_Rom_2EA838 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA838) < 0x6
	.space 0x6 - (. - gText_Rom_2EA838)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:6294 gen_2_families_line_6294
	.globl gText_Rom_2EA83E
gText_Rom_2EA83E: @ 0x082EA83E
	.string "マグカルゴ"
	.byte EOS
	.if (. - gText_Rom_2EA83E) > 0x6
	.error "gText_Rom_2EA83E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA83E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA83E)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:6369 gen_2_families_line_6369
	.globl gText_Rom_2EA844
gText_Rom_2EA844: @ 0x082EA844
	.string "ウリムー"
	.byte EOS
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
	.string "イノムー"
	.byte EOS
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
	.string "サニーゴ"
	.byte EOS
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
	.string "テッポウオ"
	.byte EOS
	.if (. - gText_Rom_2EA856) > 0x6
	.error "gText_Rom_2EA856 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA856) < 0x6
	.space 0x6 - (. - gText_Rom_2EA856)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:6908 gen_2_families_line_6908
	.globl gText_Rom_2EA85C
gText_Rom_2EA85C: @ 0x082EA85C
	.string "オクタン"
	.byte EOS
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
	.string "デリバード"
	.byte EOS
	.if (. - gText_Rom_2EA862) > 0x6
	.error "gText_Rom_2EA862 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA862) < 0x6
	.space 0x6 - (. - gText_Rom_2EA862)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:7142 gen_2_families_line_7142
	.globl gText_Rom_2EA868
gText_Rom_2EA868: @ 0x082EA868
	.string "マンタイン"
	.byte EOS
	.if (. - gText_Rom_2EA868) > 0x6
	.error "gText_Rom_2EA868 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA868) < 0x6
	.space 0x6 - (. - gText_Rom_2EA868)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:7215 gen_2_families_line_7215 (+1 aliases)
	.globl gText_Rom_2EA86E
gText_Rom_2EA86E: @ 0x082EA86E
	.string "エアームド"
	.byte EOS
	.if (. - gText_Rom_2EA86E) > 0x6
	.error "gText_Rom_2EA86E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA86E) < 0x6
	.space 0x6 - (. - gText_Rom_2EA86E)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:7347 gen_2_families_line_7347
	.globl gText_Rom_2EA874
gText_Rom_2EA874: @ 0x082EA874
	.string "デルビル"
	.byte EOS
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
	.string "ヘルガー"
	.byte EOS
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
	.string "キングドラ"
	.byte EOS
	.if (. - gText_Rom_2EA880) > 0x6
	.error "gText_Rom_2EA880 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA880) < 0x6
	.space 0x6 - (. - gText_Rom_2EA880)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:7571 gen_2_families_line_7571
	.globl gText_Rom_2EA886
gText_Rom_2EA886: @ 0x082EA886
	.string "ゴマゾウ"
	.byte EOS
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
	.string "ドンファン"
	.byte EOS
	.if (. - gText_Rom_2EA88C) > 0x6
	.error "gText_Rom_2EA88C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA88C) < 0x6
	.space 0x6 - (. - gText_Rom_2EA88C)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:18864 gen_1_families_line_18864
	.globl gText_Rom_2EA892
gText_Rom_2EA892: @ 0x082EA892
	.string "ポリゴン2"
	.byte EOS
	.if (. - gText_Rom_2EA892) > 0x6
	.error "gText_Rom_2EA892 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA892) < 0x6
	.space 0x6 - (. - gText_Rom_2EA892)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:7731 gen_2_families_line_7731
	.globl gText_Rom_2EA898
gText_Rom_2EA898: @ 0x082EA898
	.string "オドシシ"
	.byte EOS
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
	.string "ドーブル"
	.byte EOS
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
	.string "バルキー"
	.byte EOS
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
	.string "カポエラー"
	.byte EOS
	.if (. - gText_Rom_2EA8AA) > 0x6
	.error "gText_Rom_2EA8AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8AA) < 0x6
	.space 0x6 - (. - gText_Rom_2EA8AA)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16523 gen_1_families_line_16523
	.globl gText_Rom_2EA8B0
gText_Rom_2EA8B0: @ 0x082EA8B0
	.string "ムチュール"
	.byte EOS
	.if (. - gText_Rom_2EA8B0) > 0x6
	.error "gText_Rom_2EA8B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8B0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA8B0)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16671 gen_1_families_line_16671
	.globl gText_Rom_2EA8B6
gText_Rom_2EA8B6: @ 0x082EA8B6
	.string "エレキッド"
	.byte EOS
	.if (. - gText_Rom_2EA8B6) > 0x6
	.error "gText_Rom_2EA8B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8B6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA8B6)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16897 gen_1_families_line_16897
	.globl gText_Rom_2EA8BC
gText_Rom_2EA8BC: @ 0x082EA8BC
	.string "ブビィ"
	.byte EOS
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
	.string "ミルタンク"
	.byte EOS
	.if (. - gText_Rom_2EA8C2) > 0x6
	.error "gText_Rom_2EA8C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8C2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA8C2)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:14889 gen_1_families_line_14889
	.globl gText_Rom_2EA8C8
gText_Rom_2EA8C8: @ 0x082EA8C8
	.string "ハピナス"
	.byte EOS
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
	.string "ライコウ"
	.byte EOS
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
	.string "エンテイ"
	.byte EOS
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
	.string "スイクン"
	.byte EOS
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
	.string "ヨーギラス"
	.byte EOS
	.if (. - gText_Rom_2EA8E0) > 0x6
	.error "gText_Rom_2EA8E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8E0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA8E0)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:8334 gen_2_families_line_8334
	.globl gText_Rom_2EA8E6
gText_Rom_2EA8E6: @ 0x082EA8E6
	.string "サナギラス"
	.byte EOS
	.if (. - gText_Rom_2EA8E6) > 0x6
	.error "gText_Rom_2EA8E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8E6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA8E6)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:8407 gen_2_families_line_8407 (+1 aliases)
	.globl gText_Rom_2EA8EC
gText_Rom_2EA8EC: @ 0x082EA8EC
	.string "バンギラス"
	.byte EOS
	.if (. - gText_Rom_2EA8EC) > 0x6
	.error "gText_Rom_2EA8EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA8EC) < 0x6
	.space 0x6 - (. - gText_Rom_2EA8EC)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:8559 gen_2_families_line_8559
	.globl gText_Rom_2EA8F2
gText_Rom_2EA8F2: @ 0x082EA8F2
	.string "ルギア"
	.byte EOS
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
	.string "ホウオウ"
	.byte EOS
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
	.string "セレビィ"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "  ？"
	.byte EOS
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
	.string "キモリ"
	.byte EOS
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
	.string "ジュプトル"
	.byte EOS
	.if (. - gText_Rom_2EA9A0) > 0x6
	.error "gText_Rom_2EA9A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9A0) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9A0)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:173 gen_3_families_line_173 (+1 aliases)
	.globl gText_Rom_2EA9A6
gText_Rom_2EA9A6: @ 0x082EA9A6
	.string "ジュカイン"
	.byte EOS
	.if (. - gText_Rom_2EA9A6) > 0x6
	.error "gText_Rom_2EA9A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9A6) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9A6)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:318 gen_3_families_line_318
	.globl gText_Rom_2EA9AC
gText_Rom_2EA9AC: @ 0x082EA9AC
	.string "アチャモ"
	.byte EOS
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
	.string "ワカシャモ"
	.byte EOS
	.if (. - gText_Rom_2EA9B2) > 0x6
	.error "gText_Rom_2EA9B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9B2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9B2)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:490 gen_3_families_line_490 (+1 aliases)
	.globl gText_Rom_2EA9B8
gText_Rom_2EA9B8: @ 0x082EA9B8
	.string "バシャーモ"
	.byte EOS
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
	.string "ミズゴロウ"
	.byte EOS
	.if (. - gText_Rom_2EA9BE) != 0x6
	.error "gText_Rom_2EA9BE must retain its original byte length"
	.endif
	.globl gText_Rom_2EA9C0
	.set gText_Rom_2EA9C0, gText_Rom_2EA9BE + 0x2

	@ src/data/pokemon/species_info/gen_3_families.h:721 gen_3_families_line_721
	.globl gText_Rom_2EA9C4
gText_Rom_2EA9C4: @ 0x082EA9C4
	.string "ヌマクロー"
	.byte EOS
	.if (. - gText_Rom_2EA9C4) > 0x6
	.error "gText_Rom_2EA9C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9C4) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9C4)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:801 gen_3_families_line_801 (+1 aliases)
	.globl gText_Rom_2EA9CA
gText_Rom_2EA9CA: @ 0x082EA9CA
	.string "ラグラージ"
	.byte EOS
	.if (. - gText_Rom_2EA9CA) > 0x6
	.error "gText_Rom_2EA9CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9CA) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9CA)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:958 gen_3_families_line_958 (+3 aliases)
	.globl gText_Rom_2EA9D0
gText_Rom_2EA9D0: @ 0x082EA9D0
	.string "ポチエナ"
	.byte EOS
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
	.string "グラエナ"
	.byte EOS
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
	.string "ジグザグマ"
	.byte EOS
	.if (. - gText_Rom_2EA9DC) > 0x6
	.error "gText_Rom_2EA9DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9DC) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9DC)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:1192 gen_3_families_line_1192 (+1 aliases)
	.globl gText_Rom_2EA9E2
gText_Rom_2EA9E2: @ 0x082EA9E2
	.string "マッスグマ"
	.byte EOS
	.if (. - gText_Rom_2EA9E2) > 0x6
	.error "gText_Rom_2EA9E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9E2) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9E2)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:1470 gen_3_families_line_1470
	.globl gText_Rom_2EA9E8
gText_Rom_2EA9E8: @ 0x082EA9E8
	.string "ケムッソ"
	.byte EOS
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
	.string "カラサリス"
	.byte EOS
	.if (. - gText_Rom_2EA9EE) > 0x6
	.error "gText_Rom_2EA9EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9EE) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9EE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:1619 gen_3_families_line_1619
	.globl gText_Rom_2EA9F4
gText_Rom_2EA9F4: @ 0x082EA9F4
	.string "アゲハント"
	.byte EOS
	.if (. - gText_Rom_2EA9F4) > 0x6
	.error "gText_Rom_2EA9F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA9F4) < 0x6
	.space 0x6 - (. - gText_Rom_2EA9F4)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:1713 gen_3_families_line_1713
	.globl gText_Rom_2EA9FA
gText_Rom_2EA9FA: @ 0x082EA9FA
	.string "マユルド"
	.byte EOS
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
	.string "ドクケイル"
	.byte EOS
	.if (. - gText_Rom_2EAA00) > 0x6
	.error "gText_Rom_2EAA00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA00) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA00)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:1891 gen_3_families_line_1891 (+1 aliases)
	.globl gText_Rom_2EAA06
gText_Rom_2EAA06: @ 0x082EAA06
	.string "ハスボー"
	.byte EOS
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
	.string "ハスブレロ"
	.byte EOS
	.if (. - gText_Rom_2EAA0C) > 0x6
	.error "gText_Rom_2EAA0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA0C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA0C)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:2039 gen_3_families_line_2039
	.globl gText_Rom_2EAA12
gText_Rom_2EAA12: @ 0x082EAA12
	.string "ルンパッパ"
	.byte EOS
	.if (. - gText_Rom_2EAA12) > 0x6
	.error "gText_Rom_2EAA12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA12) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA12)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:2126 gen_3_families_line_2126
	.globl gText_Rom_2EAA18
gText_Rom_2EAA18: @ 0x082EAA18
	.string "タネボー"
	.byte EOS
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
	.string "コノハナ"
	.byte EOS
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
	.string "ダーテング"
	.byte EOS
	.if (. - gText_Rom_2EAA24) > 0x6
	.error "gText_Rom_2EAA24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA24) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA24)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3690 gen_3_families_line_3690 (+1 aliases)
	.globl gText_Rom_2EAA2A
gText_Rom_2EAA2A: @ 0x082EAA2A
	.string "ツチニン"
	.byte EOS
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
	.string "テッカニン"
	.byte EOS
	.if (. - gText_Rom_2EAA30) > 0x6
	.error "gText_Rom_2EAA30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA30) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA30)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3849 gen_3_families_line_3849 (+2 aliases)
	.globl gText_Rom_2EAA36
gText_Rom_2EAA36: @ 0x082EAA36
	.string "ヌケニン"
	.byte EOS
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
	.string "スバメ"
	.byte EOS
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
	.string "オオスバメ"
	.byte EOS
	.if (. - gText_Rom_2EAA42) != 0x6
	.error "gText_Rom_2EAA42 must retain its original byte length"
	.endif
	.globl gText_Rom_2EAA44
	.set gText_Rom_2EAA44, gText_Rom_2EAA42 + 0x2

	@ src/data/pokemon/species_info/gen_3_families.h:3312 gen_3_families_line_3312 (+1 aliases)
	.globl gText_Rom_2EAA48
gText_Rom_2EAA48: @ 0x082EAA48
	.string "キノココ"
	.byte EOS
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
	.string "キノガッサ"
	.byte EOS
	.if (. - gText_Rom_2EAA4E) > 0x6
	.error "gText_Rom_2EAA4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA4E) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA4E)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7267 gen_3_families_line_7267
	.globl gText_Rom_2EAA54
gText_Rom_2EAA54: @ 0x082EAA54
	.string "パッチール"
	.byte EOS
	.if (. - gText_Rom_2EAA54) > 0x6
	.error "gText_Rom_2EAA54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA54) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA54)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:2538 gen_3_families_line_2538 (+1 aliases)
	.globl gText_Rom_2EAA5A
gText_Rom_2EAA5A: @ 0x082EAA5A
	.string "キャモメ"
	.byte EOS
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
	.string "ペリッパー"
	.byte EOS
	.if (. - gText_Rom_2EAA60) > 0x6
	.error "gText_Rom_2EAA60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA60) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA60)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3150 gen_3_families_line_3150
	.globl gText_Rom_2EAA66
gText_Rom_2EAA66: @ 0x082EAA66
	.string "アメタマ"
	.byte EOS
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
	.string "アメモース"
	.byte EOS
	.if (. - gText_Rom_2EAA6C) > 0x6
	.error "gText_Rom_2EAA6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA6C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA6C)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:6637 gen_3_families_line_6637
	.globl gText_Rom_2EAA72
gText_Rom_2EAA72: @ 0x082EAA72
	.string "ホエルコ"
	.byte EOS
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
	.string "ホエルオー"
	.byte EOS
	.if (. - gText_Rom_2EAA78) > 0x6
	.error "gText_Rom_2EAA78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA78) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA78)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:4448 gen_3_families_line_4448
	.globl gText_Rom_2EAA7E
gText_Rom_2EAA7E: @ 0x082EAA7E
	.string "エネコ"
	.byte EOS
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
	.string "エネコロロ"
	.byte EOS
	.if (. - gText_Rom_2EAA84) > 0x6
	.error "gText_Rom_2EAA84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA84) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA84)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:9543 gen_3_families_line_9543
	.globl gText_Rom_2EAA8A
gText_Rom_2EAA8A: @ 0x082EAA8A
	.string "カクレオン"
	.byte EOS
	.if (. - gText_Rom_2EAA8A) > 0x6
	.error "gText_Rom_2EAA8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA8A) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA8A)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8585 gen_3_families_line_8585
	.globl gText_Rom_2EAA90
gText_Rom_2EAA90: @ 0x082EAA90
	.string "ヤジロン"
	.byte EOS
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
	.string "ネンドール"
	.byte EOS
	.if (. - gText_Rom_2EAA96) > 0x6
	.error "gText_Rom_2EAA96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAA96) < 0x6
	.space 0x6 - (. - gText_Rom_2EAA96)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:4292 gen_3_families_line_4292
	.globl gText_Rom_2EAA9C
gText_Rom_2EAA9C: @ 0x082EAA9C
	.string "ノズパス"
	.byte EOS
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
	.string "コータス"
	.byte EOS
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
	.string "ヤミラミ"
	.byte EOS
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
	.string "ドジョッチ"
	.byte EOS
	.if (. - gText_Rom_2EAAAE) > 0x6
	.error "gText_Rom_2EAAAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAAE) < 0x6
	.space 0x6 - (. - gText_Rom_2EAAAE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8361 gen_3_families_line_8361
	.globl gText_Rom_2EAAB4
gText_Rom_2EAAB4: @ 0x082EAAB4
	.string "ナマズン"
	.byte EOS
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
	.string "ラブカス"
	.byte EOS
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
	.string "ヘイガニ"
	.byte EOS
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
	.string "シザリガー"
	.byte EOS
	.if (. - gText_Rom_2EAAC6) > 0x6
	.error "gText_Rom_2EAAC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAC6) < 0x6
	.space 0x6 - (. - gText_Rom_2EAAC6)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:9052 gen_3_families_line_9052
	.globl gText_Rom_2EAACC
gText_Rom_2EAACC: @ 0x082EAACC
	.string "ヒンバス"
	.byte EOS
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
	.string "ミロカロス"
	.byte EOS
	.if (. - gText_Rom_2EAAD2) != 0x6
	.error "gText_Rom_2EAAD2 must retain its original byte length"
	.endif
	.globl gText_Rom_2EAAD4
	.set gText_Rom_2EAAD4, gText_Rom_2EAAD2 + 0x2

	@ src/data/pokemon/species_info/gen_3_families.h:6408 gen_3_families_line_6408 (+1 aliases)
	.globl gText_Rom_2EAAD8
gText_Rom_2EAAD8: @ 0x082EAAD8
	.string "キバニア"
	.byte EOS
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
	.string "サメハダー"
	.byte EOS
	.if (. - gText_Rom_2EAADE) > 0x6
	.error "gText_Rom_2EAADE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAADE) < 0x6
	.space 0x6 - (. - gText_Rom_2EAADE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7350 gen_3_families_line_7350
	.globl gText_Rom_2EAAE4
gText_Rom_2EAAE4: @ 0x082EAAE4
	.string "ナックラー"
	.byte EOS
	.if (. - gText_Rom_2EAAE4) > 0x6
	.error "gText_Rom_2EAAE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAE4) < 0x6
	.space 0x6 - (. - gText_Rom_2EAAE4)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7422 gen_3_families_line_7422
	.globl gText_Rom_2EAAEA
gText_Rom_2EAAEA: @ 0x082EAAEA
	.string "ビブラーバ"
	.byte EOS
	.if (. - gText_Rom_2EAAEA) > 0x6
	.error "gText_Rom_2EAAEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAEA) < 0x6
	.space 0x6 - (. - gText_Rom_2EAAEA)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7501 gen_3_families_line_7501
	.globl gText_Rom_2EAAF0
gText_Rom_2EAAF0: @ 0x082EAAF0
	.string "フライゴン"
	.byte EOS
	.if (. - gText_Rom_2EAAF0) > 0x6
	.error "gText_Rom_2EAAF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAF0) < 0x6
	.space 0x6 - (. - gText_Rom_2EAAF0)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:4145 gen_3_families_line_4145
	.globl gText_Rom_2EAAF6
gText_Rom_2EAAF6: @ 0x082EAAF6
	.string "マクノシタ"
	.byte EOS
	.if (. - gText_Rom_2EAAF6) > 0x6
	.error "gText_Rom_2EAAF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAF6) < 0x6
	.space 0x6 - (. - gText_Rom_2EAAF6)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:4221 gen_3_families_line_4221
	.globl gText_Rom_2EAAFC
gText_Rom_2EAAFC: @ 0x082EAAFC
	.string "ハリテヤマ"
	.byte EOS
	.if (. - gText_Rom_2EAAFC) > 0x6
	.error "gText_Rom_2EAAFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAAFC) < 0x6
	.space 0x6 - (. - gText_Rom_2EAAFC)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:5451 gen_3_families_line_5451
	.globl gText_Rom_2EAB02
gText_Rom_2EAB02: @ 0x082EAB02
	.string "ラクライ"
	.byte EOS
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
	.string "ライボルト"
	.byte EOS
	.if (. - gText_Rom_2EAB08) > 0x6
	.error "gText_Rom_2EAB08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB08) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB08)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:6784 gen_3_families_line_6784
	.globl gText_Rom_2EAB0E
gText_Rom_2EAB0E: @ 0x082EAB0E
	.string "ドンメル"
	.byte EOS
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
	.string "バクーダ"
	.byte EOS
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
	.string "タマザラシ"
	.byte EOS
	.if (. - gText_Rom_2EAB1A) > 0x6
	.error "gText_Rom_2EAB1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB1A) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB1A)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11076 gen_3_families_line_11076
	.globl gText_Rom_2EAB20
gText_Rom_2EAB20: @ 0x082EAB20
	.string "トドグラー"
	.byte EOS
	.if (. - gText_Rom_2EAB20) > 0x6
	.error "gText_Rom_2EAB20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB20) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB20)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11156 gen_3_families_line_11156
	.globl gText_Rom_2EAB26
gText_Rom_2EAB26: @ 0x082EAB26
	.string "トドゼルガ"
	.byte EOS
	.if (. - gText_Rom_2EAB26) > 0x6
	.error "gText_Rom_2EAB26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB26) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB26)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7576 gen_3_families_line_7576
	.globl gText_Rom_2EAB2C
gText_Rom_2EAB2C: @ 0x082EAB2C
	.string "サボネア"
	.byte EOS
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
	.string "ノクタス"
	.byte EOS
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
	.string "ユキワラシ"
	.byte EOS
	.if (. - gText_Rom_2EAB38) > 0x6
	.error "gText_Rom_2EAB38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB38) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB38)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:10713 gen_3_families_line_10713 (+1 aliases)
	.globl gText_Rom_2EAB3E
gText_Rom_2EAB3E: @ 0x082EAB3E
	.string "オニゴーリ"
	.byte EOS
	.if (. - gText_Rom_2EAB3E) > 0x6
	.error "gText_Rom_2EAB3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB3E) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB3E)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8121 gen_3_families_line_8121
	.globl gText_Rom_2EAB44
gText_Rom_2EAB44: @ 0x082EAB44
	.string "ルナトーン"
	.byte EOS
	.if (. - gText_Rom_2EAB44) > 0x6
	.error "gText_Rom_2EAB44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB44) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB44)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8201 gen_3_families_line_8201
	.globl gText_Rom_2EAB4A
gText_Rom_2EAB4A: @ 0x082EAB4A
	.string "ソルロック"
	.byte EOS
	.if (. - gText_Rom_2EAB4A) > 0x6
	.error "gText_Rom_2EAB4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB4A) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB4A)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:2319 gen_2_families_line_2319 (+1 aliases)
	.globl gText_Rom_2EAB50
gText_Rom_2EAB50: @ 0x082EAB50
	.string "ルリリ"
	.byte EOS
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
	.string "バネブー"
	.byte EOS
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
	.string "ブーピッグ"
	.byte EOS
	.if (. - gText_Rom_2EAB5C) > 0x6
	.error "gText_Rom_2EAB5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB5C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB5C)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:5673 gen_3_families_line_5673
	.globl gText_Rom_2EAB62
gText_Rom_2EAB62: @ 0x082EAB62
	.string "プラスル"
	.byte EOS
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
	.string "マイナン"
	.byte EOS
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
	.string "クチート"
	.byte EOS
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
	.string "アサナン"
	.byte EOS
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
	.string "チャーレム"
	.byte EOS
	.if (. - gText_Rom_2EAB7A) > 0x6
	.error "gText_Rom_2EAB7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB7A) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB7A)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7737 gen_3_families_line_7737
	.globl gText_Rom_2EAB80
gText_Rom_2EAB80: @ 0x082EAB80
	.string "チルット"
	.byte EOS
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
	.string "チルタリス"
	.byte EOS
	.if (. - gText_Rom_2EAB86) > 0x6
	.error "gText_Rom_2EAB86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB86) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB86)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4164 gen_2_families_line_4164
	.globl gText_Rom_2EAB8C
gText_Rom_2EAB8C: @ 0x082EAB8C
	.string "ソーナノ"
	.byte EOS
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
	.string "ヨマワル"
	.byte EOS
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
	.string "サマヨール"
	.byte EOS
	.if (. - gText_Rom_2EAB98) > 0x6
	.error "gText_Rom_2EAB98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAB98) < 0x6
	.space 0x6 - (. - gText_Rom_2EAB98)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:6059 gen_3_families_line_6059
	.globl gText_Rom_2EAB9E
gText_Rom_2EAB9E: @ 0x082EAB9E
	.string "ロゼリア"
	.byte EOS
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
	.string "ナマケロ"
	.byte EOS
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
	.string "ヤルキモノ"
	.byte EOS
	.if (. - gText_Rom_2EABAA) > 0x6
	.error "gText_Rom_2EABAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABAA) < 0x6
	.space 0x6 - (. - gText_Rom_2EABAA)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3616 gen_3_families_line_3616
	.globl gText_Rom_2EABB0
gText_Rom_2EABB0: @ 0x082EABB0
	.string "ケッキング"
	.byte EOS
	.if (. - gText_Rom_2EABB0) > 0x6
	.error "gText_Rom_2EABB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABB0) < 0x6
	.space 0x6 - (. - gText_Rom_2EABB0)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:6238 gen_3_families_line_6238
	.globl gText_Rom_2EABB6
gText_Rom_2EABB6: @ 0x082EABB6
	.string "ゴクリン"
	.byte EOS
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
	.string "マルノーム"
	.byte EOS
	.if (. - gText_Rom_2EABBC) > 0x6
	.error "gText_Rom_2EABBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABBC) < 0x6
	.space 0x6 - (. - gText_Rom_2EABBC)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:10106 gen_3_families_line_10106
	.globl gText_Rom_2EABC2
gText_Rom_2EABC2: @ 0x082EABC2
	.string "トロピウス"
	.byte EOS
	.if (. - gText_Rom_2EABC2) > 0x6
	.error "gText_Rom_2EABC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABC2) < 0x6
	.space 0x6 - (. - gText_Rom_2EABC2)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3921 gen_3_families_line_3921
	.globl gText_Rom_2EABC8
gText_Rom_2EABC8: @ 0x082EABC8
	.string "ゴニョニョ"
	.byte EOS
	.if (. - gText_Rom_2EABC8) > 0x6
	.error "gText_Rom_2EABC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABC8) < 0x6
	.space 0x6 - (. - gText_Rom_2EABC8)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3997 gen_3_families_line_3997
	.globl gText_Rom_2EABCE
gText_Rom_2EABCE: @ 0x082EABCE
	.string "ドゴーム"
	.byte EOS
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
	.string "バクオング"
	.byte EOS
	.if (. - gText_Rom_2EABD4) > 0x6
	.error "gText_Rom_2EABD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABD4) < 0x6
	.space 0x6 - (. - gText_Rom_2EABD4)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11229 gen_3_families_line_11229
	.globl gText_Rom_2EABDA
gText_Rom_2EABDA: @ 0x082EABDA
	.string "パールル"
	.byte EOS
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
	.string "ハンテール"
	.byte EOS
	.if (. - gText_Rom_2EABE0) > 0x6
	.error "gText_Rom_2EABE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABE0) < 0x6
	.space 0x6 - (. - gText_Rom_2EABE0)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11375 gen_3_families_line_11375
	.globl gText_Rom_2EABE6
gText_Rom_2EABE6: @ 0x082EABE6
	.string "サクラビス"
	.byte EOS
	.if (. - gText_Rom_2EABE6) > 0x6
	.error "gText_Rom_2EABE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABE6) < 0x6
	.space 0x6 - (. - gText_Rom_2EABE6)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:10416 gen_3_families_line_10416 (+2 aliases)
	.globl gText_Rom_2EABEC
gText_Rom_2EABEC: @ 0x082EABEC
	.string "アブソル"
	.byte EOS
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
	.string "カゲボウズ"
	.byte EOS
	.if (. - gText_Rom_2EABF2) > 0x6
	.error "gText_Rom_2EABF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABF2) < 0x6
	.space 0x6 - (. - gText_Rom_2EABF2)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:9701 gen_3_families_line_9701 (+1 aliases)
	.globl gText_Rom_2EABF8
gText_Rom_2EABF8: @ 0x082EABF8
	.string "ジュペッタ"
	.byte EOS
	.if (. - gText_Rom_2EABF8) > 0x6
	.error "gText_Rom_2EABF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABF8) < 0x6
	.space 0x6 - (. - gText_Rom_2EABF8)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8039 gen_3_families_line_8039
	.globl gText_Rom_2EABFE
gText_Rom_2EABFE: @ 0x082EABFE
	.string "ハブネーク"
	.byte EOS
	.if (. - gText_Rom_2EABFE) > 0x6
	.error "gText_Rom_2EABFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EABFE) < 0x6
	.space 0x6 - (. - gText_Rom_2EABFE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7962 gen_3_families_line_7962
	.globl gText_Rom_2EAC04
gText_Rom_2EAC04: @ 0x082EAC04
	.string "ザングース"
	.byte EOS
	.if (. - gText_Rom_2EAC04) > 0x6
	.error "gText_Rom_2EAC04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC04) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC04)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11448 gen_3_families_line_11448
	.globl gText_Rom_2EAC0A
gText_Rom_2EAC0A: @ 0x082EAC0A
	.string "ジーランス"
	.byte EOS
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
	.string "ココドラ"
	.byte EOS
	.if (. - gText_Rom_2EAC10) != 0x5
	.error "gText_Rom_2EAC10 must retain its original byte length"
	.endif
	.globl gText_Rom_2EAC11
	.set gText_Rom_2EAC11, gText_Rom_2EAC10 + 0x1
	.incbin "baserom.gba", 0x2eac15, 0x1

	@ src/data/pokemon/species_info/gen_3_families.h:4984 gen_3_families_line_4984
	.globl gText_Rom_2EAC16
gText_Rom_2EAC16: @ 0x082EAC16
	.string "コドラ"
	.byte EOS
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
	.string "ボスゴドラ"
	.byte EOS
	.if (. - gText_Rom_2EAC1C) > 0x6
	.error "gText_Rom_2EAC1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC1C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC1C)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:9220 gen_3_families_line_9220 (+3 aliases)
	.globl gText_Rom_2EAC22
gText_Rom_2EAC22: @ 0x082EAC22
	.string "ポワルン"
	.byte EOS
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
	.string "バルビート"
	.byte EOS
	.if (. - gText_Rom_2EAC28) > 0x6
	.error "gText_Rom_2EAC28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC28) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC28)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:5912 gen_3_families_line_5912
	.globl gText_Rom_2EAC2E
gText_Rom_2EAC2E: @ 0x082EAC2E
	.string "イルミーゼ"
	.byte EOS
	.if (. - gText_Rom_2EAC2E) > 0x6
	.error "gText_Rom_2EAC2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC2E) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC2E)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8740 gen_3_families_line_8740
	.globl gText_Rom_2EAC34
gText_Rom_2EAC34: @ 0x082EAC34
	.string "リリーラ"
	.byte EOS
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
	.string "ユレイドル"
	.byte EOS
	.if (. - gText_Rom_2EAC3A) > 0x6
	.error "gText_Rom_2EAC3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC3A) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC3A)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8897 gen_3_families_line_8897
	.globl gText_Rom_2EAC40
gText_Rom_2EAC40: @ 0x082EAC40
	.string "アノプス"
	.byte EOS
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
	.string "アーマルド"
	.byte EOS
	.if (. - gText_Rom_2EAC46) > 0x6
	.error "gText_Rom_2EAC46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC46) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC46)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:2703 gen_3_families_line_2703 (+1 aliases)
	.globl gText_Rom_2EAC4C
gText_Rom_2EAC4C: @ 0x082EAC4C
	.string "ラルトス"
	.byte EOS
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
	.string "キルリア"
	.byte EOS
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
	.string "サーナイト"
	.byte EOS
	.if (. - gText_Rom_2EAC58) > 0x6
	.error "gText_Rom_2EAC58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC58) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC58)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11607 gen_3_families_line_11607
	.globl gText_Rom_2EAC5E
gText_Rom_2EAC5E: @ 0x082EAC5E
	.string "タツベイ"
	.byte EOS
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
	.string "コモルー"
	.byte EOS
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
	.string "ボーマンダ"
	.byte EOS
	.if (. - gText_Rom_2EAC6A) > 0x6
	.error "gText_Rom_2EAC6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC6A) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC6A)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11907 gen_3_families_line_11907
	.globl gText_Rom_2EAC70
gText_Rom_2EAC70: @ 0x082EAC70
	.string "ダンバル"
	.byte EOS
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
	.string "メタング"
	.byte EOS
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
	.string "メタグロス"
	.byte EOS
	.if (. - gText_Rom_2EAC7C) > 0x6
	.error "gText_Rom_2EAC7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC7C) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC7C)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12212 gen_3_families_line_12212
	.globl gText_Rom_2EAC82
gText_Rom_2EAC82: @ 0x082EAC82
	.string "レジロック"
	.byte EOS
	.if (. - gText_Rom_2EAC82) > 0x6
	.error "gText_Rom_2EAC82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC82) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC82)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12291 gen_3_families_line_12291
	.globl gText_Rom_2EAC88
gText_Rom_2EAC88: @ 0x082EAC88
	.string "レジアイス"
	.byte EOS
	.if (. - gText_Rom_2EAC88) > 0x6
	.error "gText_Rom_2EAC88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC88) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC88)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12371 gen_3_families_line_12371
	.globl gText_Rom_2EAC8E
gText_Rom_2EAC8E: @ 0x082EAC8E
	.string "レジスチル"
	.byte EOS
	.if (. - gText_Rom_2EAC8E) > 0x6
	.error "gText_Rom_2EAC8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC8E) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC8E)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12768 gen_3_families_line_12768 (+2 aliases)
	.globl gText_Rom_2EAC94
gText_Rom_2EAC94: @ 0x082EAC94
	.string "カイオーガ"
	.byte EOS
	.if (. - gText_Rom_2EAC94) > 0x6
	.error "gText_Rom_2EAC94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC94) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC94)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12923 gen_3_families_line_12923 (+2 aliases)
	.globl gText_Rom_2EAC9A
gText_Rom_2EAC9A: @ 0x082EAC9A
	.string "グラードン"
	.byte EOS
	.if (. - gText_Rom_2EAC9A) > 0x6
	.error "gText_Rom_2EAC9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EAC9A) < 0x6
	.space 0x6 - (. - gText_Rom_2EAC9A)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:13079 gen_3_families_line_13079 (+1 aliases)
	.globl gText_Rom_2EACA0
gText_Rom_2EACA0: @ 0x082EACA0
	.string "レックウザ"
	.byte EOS
	.if (. - gText_Rom_2EACA0) > 0x6
	.error "gText_Rom_2EACA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACA0) < 0x6
	.space 0x6 - (. - gText_Rom_2EACA0)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12450 gen_3_families_line_12450 (+1 aliases)
	.globl gText_Rom_2EACA6
gText_Rom_2EACA6: @ 0x082EACA6
	.string "ラティアス"
	.byte EOS
	.if (. - gText_Rom_2EACA6) > 0x6
	.error "gText_Rom_2EACA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACA6) < 0x6
	.space 0x6 - (. - gText_Rom_2EACA6)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12609 gen_3_families_line_12609 (+1 aliases)
	.globl gText_Rom_2EACAC
gText_Rom_2EACAC: @ 0x082EACAC
	.string "ラティオス"
	.byte EOS
	.if (. - gText_Rom_2EACAC) > 0x6
	.error "gText_Rom_2EACAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACAC) < 0x6
	.space 0x6 - (. - gText_Rom_2EACAC)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:13240 gen_3_families_line_13240
	.globl gText_Rom_2EACB2
gText_Rom_2EACB2: @ 0x082EACB2
	.string "ジラーチ"
	.byte EOS
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
	.string "デオキシス"
	.byte EOS
	.if (. - gText_Rom_2EACB8) > 0x6
	.error "gText_Rom_2EACB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACB8) < 0x6
	.space 0x6 - (. - gText_Rom_2EACB8)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:10263 gen_3_families_line_10263 (+1 aliases)
	.globl gText_Rom_2EACBE
gText_Rom_2EACBE: @ 0x082EACBE
	.string "チリーン"
	.byte EOS
	.if (. - gText_Rom_2EACBE) > 0x5
	.error "gText_Rom_2EACBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EACBE) < 0x5
	.space 0x5 - (. - gText_Rom_2EACBE)
	.endif

	.balign 4, 0
	