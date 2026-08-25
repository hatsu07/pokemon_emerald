@ ポケモン名

	.globl gSpeciesNames
gSpeciesNames: @ 0x082EA31C
	.string "？？？？？"
	.byte EOS

	@ src/data/pokemon/species_info/gen_1_families.h:27 gen_1_families_line_27
	.globl gSpeciesName_BULBASAUR
gSpeciesName_BULBASAUR: @ 0x082EA322
	.string "フシギダネ"
	.byte EOS
	.if (. - gSpeciesName_BULBASAUR) > 0x6
	.error "gSpeciesName_BULBASAUR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_BULBASAUR) < 0x6
	.space 0x6 - (. - gSpeciesName_BULBASAUR)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:98 gen_1_families_line_98
	.globl gSpeciesName_IVYSAUR
gSpeciesName_IVYSAUR: @ 0x082EA328
	.string "フシギソウ"
	.byte EOS
	.if (. - gSpeciesName_IVYSAUR) > 0x6
	.error "gSpeciesName_IVYSAUR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_IVYSAUR) < 0x6
	.space 0x6 - (. - gSpeciesName_IVYSAUR)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:175 gen_1_families_line_175 (+2 aliases)
	.globl gSpeciesName_VENUSAUR
gSpeciesName_VENUSAUR: @ 0x082EA32E
	.string "フシギバナ"
	.byte EOS
	.if (. - gSpeciesName_VENUSAUR) > 0x6
	.error "gSpeciesName_VENUSAUR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_VENUSAUR) < 0x6
	.space 0x6 - (. - gSpeciesName_VENUSAUR)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:393 gen_1_families_line_393
	.globl gSpeciesName_CHARMANDER
gSpeciesName_CHARMANDER: @ 0x082EA334
	.string "ヒトカゲ"
	.byte EOS
	.if (. - gSpeciesName_CHARMANDER) > 0x5
	.error "gSpeciesName_CHARMANDER may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CHARMANDER) < 0x5
	.space 0x5 - (. - gSpeciesName_CHARMANDER)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea339)

	@ src/data/pokemon/species_info/gen_1_families.h:463 gen_1_families_line_463
	.globl gSpeciesName_CHARMELEON
gSpeciesName_CHARMELEON: @ 0x082EA33A
	.string "リザード"
	.byte EOS
	.if (. - gSpeciesName_CHARMELEON) > 0x5
	.error "gSpeciesName_CHARMELEON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CHARMELEON) < 0x5
	.space 0x5 - (. - gSpeciesName_CHARMELEON)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea33f)

	@ src/data/pokemon/species_info/gen_1_families.h:541 gen_1_families_line_541 (+3 aliases)
	.globl gSpeciesName_CHARIZARD
gSpeciesName_CHARIZARD: @ 0x082EA340
	.string "リザードン"
	.byte EOS
	.if (. - gSpeciesName_CHARIZARD) > 0x6
	.error "gSpeciesName_CHARIZARD may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CHARIZARD) < 0x6
	.space 0x6 - (. - gSpeciesName_CHARIZARD)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:815 gen_1_families_line_815
	.globl gSpeciesName_SQUIRTLE
gSpeciesName_SQUIRTLE: @ 0x082EA346
	.string "ゼニガメ"
	.byte EOS
	.if (. - gSpeciesName_SQUIRTLE) > 0x5
	.error "gSpeciesName_SQUIRTLE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SQUIRTLE) < 0x5
	.space 0x5 - (. - gSpeciesName_SQUIRTLE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea34b)

	@ src/data/pokemon/species_info/gen_1_families.h:886 gen_1_families_line_886
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gSpeciesName_WARTORTLE
gSpeciesName_WARTORTLE: @ 0x082EA34C
	.string "カメール"
	.byte EOS
	.if (. - gSpeciesName_WARTORTLE) != 0x5
	.error "gSpeciesName_WARTORTLE must retain its original byte length"
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea351)

	@ src/data/pokemon/species_info/gen_1_families.h:964 gen_1_families_line_964 (+2 aliases)
	.globl gSpeciesName_BLASTOISE
gSpeciesName_BLASTOISE: @ 0x082EA352
	.string "カメックス"
	.byte EOS
	.if (. - gSpeciesName_BLASTOISE) > 0x6
	.error "gSpeciesName_BLASTOISE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_BLASTOISE) < 0x6
	.space 0x6 - (. - gSpeciesName_BLASTOISE)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:1170 gen_1_families_line_1170
	.globl gSpeciesName_CATERPIE
gSpeciesName_CATERPIE: @ 0x082EA358
	.string "キャタピー"
	.byte EOS
	.if (. - gSpeciesName_CATERPIE) > 0x6
	.error "gSpeciesName_CATERPIE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CATERPIE) < 0x6
	.space 0x6 - (. - gSpeciesName_CATERPIE)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:1244 gen_1_families_line_1244
	.globl gSpeciesName_METAPOD
gSpeciesName_METAPOD: @ 0x082EA35E
	.string "トランセル"
	.byte EOS
	.if (. - gSpeciesName_METAPOD) > 0x6
	.error "gSpeciesName_METAPOD may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_METAPOD) < 0x6
	.space 0x6 - (. - gSpeciesName_METAPOD)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:1324 gen_1_families_line_1324 (+1 aliases)
	.globl gSpeciesName_BUTTERFREE
gSpeciesName_BUTTERFREE: @ 0x082EA364
	.string "バタフリー"
	.byte EOS
	.if (. - gSpeciesName_BUTTERFREE) > 0x6
	.error "gSpeciesName_BUTTERFREE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_BUTTERFREE) < 0x6
	.space 0x6 - (. - gSpeciesName_BUTTERFREE)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:1481 gen_1_families_line_1481
	.globl gSpeciesName_WEEDLE
gSpeciesName_WEEDLE: @ 0x082EA36A
	.string "ビードル"
	.byte EOS
	.if (. - gSpeciesName_WEEDLE) > 0x5
	.error "gSpeciesName_WEEDLE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_WEEDLE) < 0x5
	.space 0x5 - (. - gSpeciesName_WEEDLE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea36f)

	@ src/data/pokemon/species_info/gen_1_families.h:1555 gen_1_families_line_1555
	.globl gSpeciesName_KAKUNA
gSpeciesName_KAKUNA: @ 0x082EA370
	.string "コクーン"
	.byte EOS
	.if (. - gSpeciesName_KAKUNA) > 0x5
	.error "gSpeciesName_KAKUNA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_KAKUNA) < 0x5
	.space 0x5 - (. - gSpeciesName_KAKUNA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea375)

	@ src/data/pokemon/species_info/gen_1_families.h:1643 gen_1_families_line_1643 (+1 aliases)
	.globl gSpeciesName_BEEDRILL
gSpeciesName_BEEDRILL: @ 0x082EA376
	.string "スピアー"
	.byte EOS
	.if (. - gSpeciesName_BEEDRILL) > 0x5
	.error "gSpeciesName_BEEDRILL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_BEEDRILL) < 0x5
	.space 0x5 - (. - gSpeciesName_BEEDRILL)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea37b)

	@ src/data/pokemon/species_info/gen_1_families.h:1800 gen_1_families_line_1800
	.globl gSpeciesName_PIDGEY
gSpeciesName_PIDGEY: @ 0x082EA37C
	.string "ポッポ"
	.byte EOS
	.if (. - gSpeciesName_PIDGEY) > 0x4
	.error "gSpeciesName_PIDGEY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PIDGEY) < 0x4
	.space 0x4 - (. - gSpeciesName_PIDGEY)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea380)

	@ src/data/pokemon/species_info/gen_1_families.h:1874 gen_1_families_line_1874
	.globl gSpeciesName_PIDGEOTTO
gSpeciesName_PIDGEOTTO: @ 0x082EA382
	.string "ピジョン"
	.byte EOS
	.if (. - gSpeciesName_PIDGEOTTO) > 0x5
	.error "gSpeciesName_PIDGEOTTO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PIDGEOTTO) < 0x5
	.space 0x5 - (. - gSpeciesName_PIDGEOTTO)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea387)

	@ src/data/pokemon/species_info/gen_1_families.h:1957 gen_1_families_line_1957 (+1 aliases)
	.globl gSpeciesName_PIDGEOT
gSpeciesName_PIDGEOT: @ 0x082EA388
	.string "ピジョット"
	.byte EOS
	.if (. - gSpeciesName_PIDGEOT) > 0x6
	.error "gSpeciesName_PIDGEOT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PIDGEOT) < 0x6
	.space 0x6 - (. - gSpeciesName_PIDGEOT)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:2102 gen_1_families_line_2102 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gSpeciesName_RATTATA
gSpeciesName_RATTATA: @ 0x082EA38E
	.string "コラッタ"
	.byte EOS
	.if (. - gSpeciesName_RATTATA) != 0x5
	.error "gSpeciesName_RATTATA must retain its original byte length"
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea393)

	@ src/data/pokemon/species_info/gen_1_families.h:2186 gen_1_families_line_2186 (+2 aliases)
	.globl gSpeciesName_RATICATE
gSpeciesName_RATICATE: @ 0x082EA394
	.string "ラッタ"
	.byte EOS
	.if (. - gSpeciesName_RATICATE) > 0x4
	.error "gSpeciesName_RATICATE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_RATICATE) < 0x4
	.space 0x4 - (. - gSpeciesName_RATICATE)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea398)

	@ src/data/pokemon/species_info/gen_1_families.h:2476 gen_1_families_line_2476
	.globl gSpeciesName_SPEAROW
gSpeciesName_SPEAROW: @ 0x082EA39A
	.string "オニスズメ"
	.byte EOS
	.if (. - gSpeciesName_SPEAROW) > 0x6
	.error "gSpeciesName_SPEAROW may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SPEAROW) < 0x6
	.space 0x6 - (. - gSpeciesName_SPEAROW)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:2548 gen_1_families_line_2548
	.globl gSpeciesName_FEAROW
gSpeciesName_FEAROW: @ 0x082EA3A0
	.string "オニドリル"
	.byte EOS
	.if (. - gSpeciesName_FEAROW) > 0x6
	.error "gSpeciesName_FEAROW may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_FEAROW) < 0x6
	.space 0x6 - (. - gSpeciesName_FEAROW)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:2624 gen_1_families_line_2624
	.globl gSpeciesName_EKANS
gSpeciesName_EKANS: @ 0x082EA3A6
	.string "アーボ"
	.byte EOS
	.if (. - gSpeciesName_EKANS) > 0x4
	.error "gSpeciesName_EKANS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_EKANS) < 0x4
	.space 0x4 - (. - gSpeciesName_EKANS)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea3aa)

	@ src/data/pokemon/species_info/gen_1_families.h:2703 gen_1_families_line_2703
	.globl gSpeciesName_ARBOK
gSpeciesName_ARBOK: @ 0x082EA3AC
	.string "アーボック"
	.byte EOS
	.if (. - gSpeciesName_ARBOK) > 0x6
	.error "gSpeciesName_ARBOK may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ARBOK) < 0x6
	.space 0x6 - (. - gSpeciesName_ARBOK)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:2924 gen_1_families_line_2924 (+16 aliases)
	.globl gSpeciesName_PIKACHU
gSpeciesName_PIKACHU: @ 0x082EA3B2
	.string "ピカチュウ"
	.byte EOS
	.if (. - gSpeciesName_PIKACHU) > 0x6
	.error "gSpeciesName_PIKACHU may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PIKACHU) < 0x6
	.space 0x6 - (. - gSpeciesName_PIKACHU)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:3932 gen_1_families_line_3932 (+3 aliases)
	.globl gSpeciesName_RAICHU
gSpeciesName_RAICHU: @ 0x082EA3B8
	.string "ライチュウ"
	.byte EOS
	.if (. - gSpeciesName_RAICHU) > 0x6
	.error "gSpeciesName_RAICHU may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_RAICHU) < 0x6
	.space 0x6 - (. - gSpeciesName_RAICHU)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4204 gen_1_families_line_4204 (+1 aliases)
	.globl gSpeciesName_SANDSHREW
gSpeciesName_SANDSHREW: @ 0x082EA3BE
	.string "サンド"
	.byte EOS
	.if (. - gSpeciesName_SANDSHREW) > 0x4
	.error "gSpeciesName_SANDSHREW may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SANDSHREW) < 0x4
	.space 0x4 - (. - gSpeciesName_SANDSHREW)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea3c2)

	@ src/data/pokemon/species_info/gen_1_families.h:4277 gen_1_families_line_4277 (+1 aliases)
	.globl gSpeciesName_SANDSLASH
gSpeciesName_SANDSLASH: @ 0x082EA3C4
	.string "サンドパン"
	.byte EOS
	.if (. - gSpeciesName_SANDSLASH) > 0x6
	.error "gSpeciesName_SANDSLASH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SANDSLASH) < 0x6
	.space 0x6 - (. - gSpeciesName_SANDSLASH)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4489 gen_1_families_line_4489
	.globl gSpeciesName_NIDORAN_F
gSpeciesName_NIDORAN_F: @ 0x082EA3CA
	.string "ニドラン♀"
	.byte EOS
	.if (. - gSpeciesName_NIDORAN_F) > 0x6
	.error "gSpeciesName_NIDORAN_F may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_NIDORAN_F) < 0x6
	.space 0x6 - (. - gSpeciesName_NIDORAN_F)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4569 gen_1_families_line_4569
	.globl gSpeciesName_NIDORINA
gSpeciesName_NIDORINA: @ 0x082EA3D0
	.string "ニドリーナ"
	.byte EOS
	.if (. - gSpeciesName_NIDORINA) > 0x6
	.error "gSpeciesName_NIDORINA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_NIDORINA) < 0x6
	.space 0x6 - (. - gSpeciesName_NIDORINA)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4648 gen_1_families_line_4648
	.globl gSpeciesName_NIDOQUEEN
gSpeciesName_NIDOQUEEN: @ 0x082EA3D6
	.string "ニドクイン"
	.byte EOS
	.if (. - gSpeciesName_NIDOQUEEN) > 0x6
	.error "gSpeciesName_NIDOQUEEN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_NIDOQUEEN) < 0x6
	.space 0x6 - (. - gSpeciesName_NIDOQUEEN)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4718 gen_1_families_line_4718
	.globl gSpeciesName_NIDORAN_M
gSpeciesName_NIDORAN_M: @ 0x082EA3DC
	.string "ニドラン♂"
	.byte EOS
	.if (. - gSpeciesName_NIDORAN_M) > 0x6
	.error "gSpeciesName_NIDORAN_M may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_NIDORAN_M) < 0x6
	.space 0x6 - (. - gSpeciesName_NIDORAN_M)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4791 gen_1_families_line_4791
	.globl gSpeciesName_NIDORINO
gSpeciesName_NIDORINO: @ 0x082EA3E2
	.string "ニドリーノ"
	.byte EOS
	.if (. - gSpeciesName_NIDORINO) > 0x6
	.error "gSpeciesName_NIDORINO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_NIDORINO) < 0x6
	.space 0x6 - (. - gSpeciesName_NIDORINO)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:4871 gen_1_families_line_4871
	.globl gSpeciesName_NIDOKING
gSpeciesName_NIDOKING: @ 0x082EA3E8
	.string "ニドキング"
	.byte EOS
	.if (. - gSpeciesName_NIDOKING) > 0x6
	.error "gSpeciesName_NIDOKING may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_NIDOKING) < 0x6
	.space 0x6 - (. - gSpeciesName_NIDOKING)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:5032 gen_1_families_line_5032
	.globl gSpeciesName_CLEFAIRY
gSpeciesName_CLEFAIRY: @ 0x082EA3EE
	.string "ピッピ"
	.byte EOS
	.if (. - gSpeciesName_CLEFAIRY) > 0x4
	.error "gSpeciesName_CLEFAIRY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CLEFAIRY) < 0x4
	.space 0x4 - (. - gSpeciesName_CLEFAIRY)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea3f2)

	@ src/data/pokemon/species_info/gen_1_families.h:5114 gen_1_families_line_5114 (+1 aliases)
	.globl gSpeciesName_CLEFABLE
gSpeciesName_CLEFABLE: @ 0x082EA3F4
	.string "ピクシー"
	.byte EOS
	.if (. - gSpeciesName_CLEFABLE) > 0x5
	.error "gSpeciesName_CLEFABLE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CLEFABLE) < 0x5
	.space 0x5 - (. - gSpeciesName_CLEFABLE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea3f9)

	@ src/data/pokemon/species_info/gen_1_families.h:5246 gen_1_families_line_5246 (+1 aliases)
	.globl gSpeciesName_VULPIX
gSpeciesName_VULPIX: @ 0x082EA3FA
	.string "ロコン"
	.byte EOS
	.if (. - gSpeciesName_VULPIX) > 0x4
	.error "gSpeciesName_VULPIX may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_VULPIX) < 0x4
	.space 0x4 - (. - gSpeciesName_VULPIX)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea3fe)

	@ src/data/pokemon/species_info/gen_1_families.h:5320 gen_1_families_line_5320 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gSpeciesName_NINETALES
gSpeciesName_NINETALES: @ 0x082EA400
	.string "キュウコン"
	.byte EOS
	.if (. - gSpeciesName_NINETALES) != 0x6
	.error "gSpeciesName_NINETALES must retain its original byte length"
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:5619 gen_1_families_line_5619
	.globl gSpeciesName_JIGGLYPUFF
gSpeciesName_JIGGLYPUFF: @ 0x082EA406
	.string "プリン"
	.byte EOS
	.if (. - gSpeciesName_JIGGLYPUFF) > 0x4
	.error "gSpeciesName_JIGGLYPUFF may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_JIGGLYPUFF) < 0x4
	.space 0x4 - (. - gSpeciesName_JIGGLYPUFF)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea40a)

	@ src/data/pokemon/species_info/gen_1_families.h:5711 gen_1_families_line_5711
	.globl gSpeciesName_WIGGLYTUFF
gSpeciesName_WIGGLYTUFF: @ 0x082EA40C
	.string "プクリン"
	.byte EOS
	.if (. - gSpeciesName_WIGGLYTUFF) > 0x5
	.error "gSpeciesName_WIGGLYTUFF may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_WIGGLYTUFF) < 0x5
	.space 0x5 - (. - gSpeciesName_WIGGLYTUFF)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea411)

	@ src/data/pokemon/species_info/gen_1_families.h:5782 gen_1_families_line_5782 (+2 aliases)
	.globl gSpeciesName_ZUBAT
gSpeciesName_ZUBAT: @ 0x082EA412
	.string "ズバット"
	.byte EOS
	.if (. - gSpeciesName_ZUBAT) > 0x5
	.error "gSpeciesName_ZUBAT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ZUBAT) < 0x5
	.space 0x5 - (. - gSpeciesName_ZUBAT)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea417)

	@ src/data/pokemon/species_info/gen_1_families.h:5875 gen_1_families_line_5875
	.globl gSpeciesName_GOLBAT
gSpeciesName_GOLBAT: @ 0x082EA418
	.string "ゴルバット"
	.byte EOS
	.if (. - gSpeciesName_GOLBAT) > 0x6
	.error "gSpeciesName_GOLBAT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GOLBAT) < 0x6
	.space 0x6 - (. - gSpeciesName_GOLBAT)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6068 gen_1_families_line_6068 (+1 aliases)
	.globl gSpeciesName_ODDISH
gSpeciesName_ODDISH: @ 0x082EA41E
	.string "ナゾノクサ"
	.byte EOS
	.if (. - gSpeciesName_ODDISH) > 0x6
	.error "gSpeciesName_ODDISH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ODDISH) < 0x6
	.space 0x6 - (. - gSpeciesName_ODDISH)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6143 gen_1_families_line_6143
	.globl gSpeciesName_GLOOM
gSpeciesName_GLOOM: @ 0x082EA424
	.string "クサイハナ"
	.byte EOS
	.if (. - gSpeciesName_GLOOM) > 0x6
	.error "gSpeciesName_GLOOM may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GLOOM) < 0x6
	.space 0x6 - (. - gSpeciesName_GLOOM)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6238 gen_1_families_line_6238
	.globl gSpeciesName_VILEPLUME
gSpeciesName_VILEPLUME: @ 0x082EA42A
	.string "ラフレシア"
	.byte EOS
	.if (. - gSpeciesName_VILEPLUME) > 0x6
	.error "gSpeciesName_VILEPLUME may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_VILEPLUME) < 0x6
	.space 0x6 - (. - gSpeciesName_VILEPLUME)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6416 gen_1_families_line_6416
	.globl gSpeciesName_PARAS
gSpeciesName_PARAS: @ 0x082EA430
	.string "パラス"
	.byte EOS
	.if (. - gSpeciesName_PARAS) > 0x4
	.error "gSpeciesName_PARAS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PARAS) < 0x4
	.space 0x4 - (. - gSpeciesName_PARAS)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea434)

	@ src/data/pokemon/species_info/gen_1_families.h:6506 gen_1_families_line_6506
	.globl gSpeciesName_PARASECT
gSpeciesName_PARASECT: @ 0x082EA436
	.string "パラセクト"
	.byte EOS
	.if (. - gSpeciesName_PARASECT) > 0x6
	.error "gSpeciesName_PARASECT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PARASECT) < 0x6
	.space 0x6 - (. - gSpeciesName_PARASECT)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6583 gen_1_families_line_6583
	.globl gSpeciesName_VENONAT
gSpeciesName_VENONAT: @ 0x082EA43C
	.string "コンパン"
	.byte EOS
	.if (. - gSpeciesName_VENONAT) > 0x5
	.error "gSpeciesName_VENONAT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_VENONAT) < 0x5
	.space 0x5 - (. - gSpeciesName_VENONAT)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea441)

	@ src/data/pokemon/species_info/gen_1_families.h:6662 gen_1_families_line_6662
	.globl gSpeciesName_VENOMOTH
gSpeciesName_VENOMOTH: @ 0x082EA442
	.string "モルフォン"
	.byte EOS
	.if (. - gSpeciesName_VENOMOTH) > 0x6
	.error "gSpeciesName_VENOMOTH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_VENOMOTH) < 0x6
	.space 0x6 - (. - gSpeciesName_VENOMOTH)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6752 gen_1_families_line_6752 (+1 aliases)
	.globl gSpeciesName_DIGLETT
gSpeciesName_DIGLETT: @ 0x082EA448
	.string "ディグダ"
	.byte EOS
	.if (. - gSpeciesName_DIGLETT) > 0x5
	.error "gSpeciesName_DIGLETT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DIGLETT) < 0x5
	.space 0x5 - (. - gSpeciesName_DIGLETT)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea44d)

	@ src/data/pokemon/species_info/gen_1_families.h:6831 gen_1_families_line_6831 (+1 aliases)
	.globl gSpeciesName_DUGTRIO
gSpeciesName_DUGTRIO: @ 0x082EA44E
	.string "ダグトリオ"
	.byte EOS
	.if (. - gSpeciesName_DUGTRIO) > 0x6
	.error "gSpeciesName_DUGTRIO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DUGTRIO) < 0x6
	.space 0x6 - (. - gSpeciesName_DUGTRIO)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:7056 gen_1_families_line_7056 (+3 aliases)
	.globl gSpeciesName_MEOWTH
gSpeciesName_MEOWTH: @ 0x082EA454
	.string "ニャース"
	.byte EOS
	.if (. - gSpeciesName_MEOWTH) > 0x5
	.error "gSpeciesName_MEOWTH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MEOWTH) < 0x5
	.space 0x5 - (. - gSpeciesName_MEOWTH)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea459)

	@ src/data/pokemon/species_info/gen_1_families.h:7136 gen_1_families_line_7136 (+1 aliases)
	.globl gSpeciesName_PERSIAN
gSpeciesName_PERSIAN: @ 0x082EA45A
	.string "ペルシアン"
	.byte EOS
	.if (. - gSpeciesName_PERSIAN) > 0x6
	.error "gSpeciesName_PERSIAN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PERSIAN) < 0x6
	.space 0x6 - (. - gSpeciesName_PERSIAN)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:7534 gen_1_families_line_7534
	.globl gSpeciesName_PSYDUCK
gSpeciesName_PSYDUCK: @ 0x082EA460
	.string "コダック"
	.byte EOS
	.if (. - gSpeciesName_PSYDUCK) > 0x5
	.error "gSpeciesName_PSYDUCK may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PSYDUCK) < 0x5
	.space 0x5 - (. - gSpeciesName_PSYDUCK)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea465)

	@ src/data/pokemon/species_info/gen_1_families.h:7605 gen_1_families_line_7605
	.globl gSpeciesName_GOLDUCK
gSpeciesName_GOLDUCK: @ 0x082EA466
	.string "ゴルダック"
	.byte EOS
	.if (. - gSpeciesName_GOLDUCK) > 0x6
	.error "gSpeciesName_GOLDUCK may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GOLDUCK) < 0x6
	.space 0x6 - (. - gSpeciesName_GOLDUCK)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:7680 gen_1_families_line_7680
	.globl gSpeciesName_MANKEY
gSpeciesName_MANKEY: @ 0x082EA46C
	.string "マンキー"
	.byte EOS
	.if (. - gSpeciesName_MANKEY) > 0x5
	.error "gSpeciesName_MANKEY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MANKEY) < 0x5
	.space 0x5 - (. - gSpeciesName_MANKEY)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea471)

	@ src/data/pokemon/species_info/gen_1_families.h:7758 gen_1_families_line_7758
	.globl gSpeciesName_PRIMEAPE
gSpeciesName_PRIMEAPE: @ 0x082EA472
	.string "オコリザル"
	.byte EOS
	.if (. - gSpeciesName_PRIMEAPE) > 0x6
	.error "gSpeciesName_PRIMEAPE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PRIMEAPE) < 0x6
	.space 0x6 - (. - gSpeciesName_PRIMEAPE)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:7900 gen_1_families_line_7900 (+1 aliases)
	.globl gSpeciesName_GROWLITHE
gSpeciesName_GROWLITHE: @ 0x082EA478
	.string "ガーディ"
	.byte EOS
	.if (. - gSpeciesName_GROWLITHE) > 0x5
	.error "gSpeciesName_GROWLITHE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GROWLITHE) < 0x5
	.space 0x5 - (. - gSpeciesName_GROWLITHE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea47d)

	@ src/data/pokemon/species_info/gen_1_families.h:7974 gen_1_families_line_7974 (+1 aliases)
	.globl gSpeciesName_ARCANINE
gSpeciesName_ARCANINE: @ 0x082EA47E
	.string "ウインディ"
	.byte EOS
	.if (. - gSpeciesName_ARCANINE) > 0x6
	.error "gSpeciesName_ARCANINE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ARCANINE) < 0x6
	.space 0x6 - (. - gSpeciesName_ARCANINE)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8179 gen_1_families_line_8179
	.globl gSpeciesName_POLIWAG
gSpeciesName_POLIWAG: @ 0x082EA484
	.string "ニョロモ"
	.byte EOS
	.if (. - gSpeciesName_POLIWAG) > 0x5
	.error "gSpeciesName_POLIWAG may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_POLIWAG) < 0x5
	.space 0x5 - (. - gSpeciesName_POLIWAG)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea489)

	@ src/data/pokemon/species_info/gen_1_families.h:8250 gen_1_families_line_8250
	.globl gSpeciesName_POLIWHIRL
gSpeciesName_POLIWHIRL: @ 0x082EA48A
	.string "ニョロゾ"
	.byte EOS
	.if (. - gSpeciesName_POLIWHIRL) > 0x5
	.error "gSpeciesName_POLIWHIRL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_POLIWHIRL) < 0x5
	.space 0x5 - (. - gSpeciesName_POLIWHIRL)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea48f)

	@ src/data/pokemon/species_info/gen_1_families.h:8336 gen_1_families_line_8336
	.globl gSpeciesName_POLIWRATH
gSpeciesName_POLIWRATH: @ 0x082EA490
	.string "ニョロボン"
	.byte EOS
	.if (. - gSpeciesName_POLIWRATH) > 0x6
	.error "gSpeciesName_POLIWRATH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_POLIWRATH) < 0x6
	.space 0x6 - (. - gSpeciesName_POLIWRATH)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8505 gen_1_families_line_8505
	.globl gSpeciesName_ABRA
gSpeciesName_ABRA: @ 0x082EA496
	.string "ケーシィ"
	.byte EOS
	.if (. - gSpeciesName_ABRA) > 0x5
	.error "gSpeciesName_ABRA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ABRA) < 0x5
	.space 0x5 - (. - gSpeciesName_ABRA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea49b)

	@ src/data/pokemon/species_info/gen_1_families.h:8578 gen_1_families_line_8578
	.globl gSpeciesName_KADABRA
gSpeciesName_KADABRA: @ 0x082EA49C
	.string "ユンゲラー"
	.byte EOS
	.if (. - gSpeciesName_KADABRA) > 0x6
	.error "gSpeciesName_KADABRA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_KADABRA) < 0x6
	.space 0x6 - (. - gSpeciesName_KADABRA)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8677 gen_1_families_line_8677 (+1 aliases)
	.globl gSpeciesName_ALAKAZAM
gSpeciesName_ALAKAZAM: @ 0x082EA4A2
	.string "フーディン"
	.byte EOS
	.if (. - gSpeciesName_ALAKAZAM) > 0x6
	.error "gSpeciesName_ALAKAZAM may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ALAKAZAM) < 0x6
	.space 0x6 - (. - gSpeciesName_ALAKAZAM)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8853 gen_1_families_line_8853
	.globl gSpeciesName_MACHOP
gSpeciesName_MACHOP: @ 0x082EA4A8
	.string "ワンリキー"
	.byte EOS
	.if (. - gSpeciesName_MACHOP) > 0x6
	.error "gSpeciesName_MACHOP may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MACHOP) < 0x6
	.space 0x6 - (. - gSpeciesName_MACHOP)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8930 gen_1_families_line_8930
	.globl gSpeciesName_MACHOKE
gSpeciesName_MACHOKE: @ 0x082EA4AE
	.string "ゴーリキー"
	.byte EOS
	.if (. - gSpeciesName_MACHOKE) > 0x6
	.error "gSpeciesName_MACHOKE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MACHOKE) < 0x6
	.space 0x6 - (. - gSpeciesName_MACHOKE)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9012 gen_1_families_line_9012 (+1 aliases)
	.globl gSpeciesName_MACHAMP
gSpeciesName_MACHAMP: @ 0x082EA4B4
	.string "カイリキー"
	.byte EOS
	.if (. - gSpeciesName_MACHAMP) > 0x6
	.error "gSpeciesName_MACHAMP may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MACHAMP) < 0x6
	.space 0x6 - (. - gSpeciesName_MACHAMP)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9151 gen_1_families_line_9151
	.globl gSpeciesName_BELLSPROUT
gSpeciesName_BELLSPROUT: @ 0x082EA4BA
	.string "マダツボミ"
	.byte EOS
	.if (. - gSpeciesName_BELLSPROUT) > 0x6
	.error "gSpeciesName_BELLSPROUT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_BELLSPROUT) < 0x6
	.space 0x6 - (. - gSpeciesName_BELLSPROUT)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9221 gen_1_families_line_9221
	.globl gSpeciesName_WEEPINBELL
gSpeciesName_WEEPINBELL: @ 0x082EA4C0
	.string "ウツドン"
	.byte EOS
	.if (. - gSpeciesName_WEEPINBELL) > 0x5
	.error "gSpeciesName_WEEPINBELL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_WEEPINBELL) < 0x5
	.space 0x5 - (. - gSpeciesName_WEEPINBELL)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea4c5)

	@ src/data/pokemon/species_info/gen_1_families.h:9311 gen_1_families_line_9311 (+1 aliases)
	.globl gSpeciesName_VICTREEBEL
gSpeciesName_VICTREEBEL: @ 0x082EA4C6
	.string "ウツボット"
	.byte EOS
	.if (. - gSpeciesName_VICTREEBEL) > 0x6
	.error "gSpeciesName_VICTREEBEL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_VICTREEBEL) < 0x6
	.space 0x6 - (. - gSpeciesName_VICTREEBEL)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9447 gen_1_families_line_9447
	.globl gSpeciesName_TENTACOOL
gSpeciesName_TENTACOOL: @ 0x082EA4CC
	.string "メノクラゲ"
	.byte EOS
	.if (. - gSpeciesName_TENTACOOL) > 0x6
	.error "gSpeciesName_TENTACOOL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TENTACOOL) < 0x6
	.space 0x6 - (. - gSpeciesName_TENTACOOL)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9519 gen_1_families_line_9519
	.globl gSpeciesName_TENTACRUEL
gSpeciesName_TENTACRUEL: @ 0x082EA4D2
	.string "ドククラゲ"
	.byte EOS
	.if (. - gSpeciesName_TENTACRUEL) > 0x6
	.error "gSpeciesName_TENTACRUEL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TENTACRUEL) < 0x6
	.space 0x6 - (. - gSpeciesName_TENTACRUEL)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9597 gen_1_families_line_9597 (+1 aliases)
	.globl gSpeciesName_GEODUDE
gSpeciesName_GEODUDE: @ 0x082EA4D8
	.string "イシツブテ"
	.byte EOS
	.if (. - gSpeciesName_GEODUDE) > 0x6
	.error "gSpeciesName_GEODUDE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GEODUDE) < 0x6
	.space 0x6 - (. - gSpeciesName_GEODUDE)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:9669 gen_1_families_line_9669 (+1 aliases)
	.globl gSpeciesName_GRAVELER
gSpeciesName_GRAVELER: @ 0x082EA4DE
	.string "ゴローン"
	.byte EOS
	.if (. - gSpeciesName_GRAVELER) > 0x5
	.error "gSpeciesName_GRAVELER may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GRAVELER) < 0x5
	.space 0x5 - (. - gSpeciesName_GRAVELER)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea4e3)

	@ src/data/pokemon/species_info/gen_1_families.h:9750 gen_1_families_line_9750 (+1 aliases)
	.globl gSpeciesName_GOLEM
gSpeciesName_GOLEM: @ 0x082EA4E4
	.string "ゴローニャ"
	.byte EOS
	.if (. - gSpeciesName_GOLEM) > 0x6
	.error "gSpeciesName_GOLEM may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GOLEM) < 0x6
	.space 0x6 - (. - gSpeciesName_GOLEM)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:10027 gen_1_families_line_10027 (+1 aliases)
	.globl gSpeciesName_PONYTA
gSpeciesName_PONYTA: @ 0x082EA4EA
	.string "ポニータ"
	.byte EOS
	.if (. - gSpeciesName_PONYTA) > 0x5
	.error "gSpeciesName_PONYTA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PONYTA) < 0x5
	.space 0x5 - (. - gSpeciesName_PONYTA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea4ef)

	@ src/data/pokemon/species_info/gen_1_families.h:10097 gen_1_families_line_10097 (+1 aliases)
	.globl gSpeciesName_RAPIDASH
gSpeciesName_RAPIDASH: @ 0x082EA4F0
	.string "ギャロップ"
	.byte EOS
	.if (. - gSpeciesName_RAPIDASH) > 0x6
	.error "gSpeciesName_RAPIDASH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_RAPIDASH) < 0x6
	.space 0x6 - (. - gSpeciesName_RAPIDASH)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:10302 gen_1_families_line_10302 (+1 aliases)
	.globl gSpeciesName_SLOWPOKE
gSpeciesName_SLOWPOKE: @ 0x082EA4F6
	.string "ヤドン"
	.byte EOS
	.if (. - gSpeciesName_SLOWPOKE) > 0x4
	.error "gSpeciesName_SLOWPOKE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SLOWPOKE) < 0x4
	.space 0x4 - (. - gSpeciesName_SLOWPOKE)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea4fa)

	@ src/data/pokemon/species_info/gen_1_families.h:10378 gen_1_families_line_10378 (+2 aliases)
	.globl gSpeciesName_SLOWBRO
gSpeciesName_SLOWBRO: @ 0x082EA4FC
	.string "ヤドラン"
	.byte EOS
	.if (. - gSpeciesName_SLOWBRO) > 0x5
	.error "gSpeciesName_SLOWBRO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SLOWBRO) < 0x5
	.space 0x5 - (. - gSpeciesName_SLOWBRO)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea501)

	@ src/data/pokemon/species_info/gen_1_families.h:10800 gen_1_families_line_10800
	.globl gSpeciesName_MAGNEMITE
gSpeciesName_MAGNEMITE: @ 0x082EA502
	.string "コイル"
	.byte EOS
	.if (. - gSpeciesName_MAGNEMITE) > 0x4
	.error "gSpeciesName_MAGNEMITE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MAGNEMITE) < 0x4
	.space 0x4 - (. - gSpeciesName_MAGNEMITE)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea506)

	@ src/data/pokemon/species_info/gen_1_families.h:10872 gen_1_families_line_10872
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gSpeciesName_MAGNETON
gSpeciesName_MAGNETON: @ 0x082EA508
	.string "レアコイル"
	.byte EOS
	.if (. - gSpeciesName_MAGNETON) != 0x6
	.error "gSpeciesName_MAGNETON must retain its original byte length"
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:11037 gen_1_families_line_11037 (+1 aliases)
	.globl gSpeciesName_FARFETCHD
gSpeciesName_FARFETCHD: @ 0x082EA50E
	.string "カモネギ"
	.byte EOS
	.if (. - gSpeciesName_FARFETCHD) > 0x5
	.error "gSpeciesName_FARFETCHD may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_FARFETCHD) < 0x5
	.space 0x5 - (. - gSpeciesName_FARFETCHD)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea513)

	@ src/data/pokemon/species_info/gen_1_families.h:11255 gen_1_families_line_11255
	.globl gSpeciesName_DODUO
gSpeciesName_DODUO: @ 0x082EA514
	.string "ドードー"
	.byte EOS
	.if (. - gSpeciesName_DODUO) > 0x5
	.error "gSpeciesName_DODUO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DODUO) < 0x5
	.space 0x5 - (. - gSpeciesName_DODUO)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea519)

	@ src/data/pokemon/species_info/gen_1_families.h:11348 gen_1_families_line_11348
	.globl gSpeciesName_DODRIO
gSpeciesName_DODRIO: @ 0x082EA51A
	.string "ドードリオ"
	.byte EOS
	.if (. - gSpeciesName_DODRIO) > 0x6
	.error "gSpeciesName_DODRIO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DODRIO) < 0x6
	.space 0x6 - (. - gSpeciesName_DODRIO)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:11439 gen_1_families_line_11439
	.globl gSpeciesName_SEEL
gSpeciesName_SEEL: @ 0x082EA520
	.string "パウワウ"
	.byte EOS
	.if (. - gSpeciesName_SEEL) > 0x5
	.error "gSpeciesName_SEEL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SEEL) < 0x5
	.space 0x5 - (. - gSpeciesName_SEEL)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea525)

	@ src/data/pokemon/species_info/gen_1_families.h:11513 gen_1_families_line_11513
	.globl gSpeciesName_DEWGONG
gSpeciesName_DEWGONG: @ 0x082EA526
	.string "ジュゴン"
	.byte EOS
	.if (. - gSpeciesName_DEWGONG) > 0x5
	.error "gSpeciesName_DEWGONG may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DEWGONG) < 0x5
	.space 0x5 - (. - gSpeciesName_DEWGONG)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea52b)

	@ src/data/pokemon/species_info/gen_1_families.h:11583 gen_1_families_line_11583 (+1 aliases)
	.globl gSpeciesName_GRIMER
gSpeciesName_GRIMER: @ 0x082EA52C
	.string "ベトベター"
	.byte EOS
	.if (. - gSpeciesName_GRIMER) > 0x6
	.error "gSpeciesName_GRIMER may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GRIMER) < 0x6
	.space 0x6 - (. - gSpeciesName_GRIMER)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:11657 gen_1_families_line_11657 (+1 aliases)
	.globl gSpeciesName_MUK
gSpeciesName_MUK: @ 0x082EA532
	.string "ベトベトン"
	.byte EOS
	.if (. - gSpeciesName_MUK) > 0x6
	.error "gSpeciesName_MUK may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MUK) < 0x6
	.space 0x6 - (. - gSpeciesName_MUK)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:11874 gen_1_families_line_11874
	.globl gSpeciesName_SHELLDER
gSpeciesName_SHELLDER: @ 0x082EA538
	.string "シェルダー"
	.byte EOS
	.if (. - gSpeciesName_SHELLDER) > 0x6
	.error "gSpeciesName_SHELLDER may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SHELLDER) < 0x6
	.space 0x6 - (. - gSpeciesName_SHELLDER)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:11951 gen_1_families_line_11951
	.globl gSpeciesName_CLOYSTER
gSpeciesName_CLOYSTER: @ 0x082EA53E
	.string "パルシェン"
	.byte EOS
	.if (. - gSpeciesName_CLOYSTER) > 0x6
	.error "gSpeciesName_CLOYSTER may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CLOYSTER) < 0x6
	.space 0x6 - (. - gSpeciesName_CLOYSTER)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:12021 gen_1_families_line_12021
	.globl gSpeciesName_GASTLY
gSpeciesName_GASTLY: @ 0x082EA544
	.string "ゴース"
	.byte EOS
	.if (. - gSpeciesName_GASTLY) > 0x4
	.error "gSpeciesName_GASTLY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GASTLY) < 0x4
	.space 0x4 - (. - gSpeciesName_GASTLY)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea548)

	@ src/data/easy_chat/easy_chat_group_status.h:190 easy_chat_group_status_line_190 (+3 aliases)
	.globl gSpeciesName_HAUNTER
gSpeciesName_HAUNTER: @ 0x082EA54A
	.string "ゴースト"
	.byte EOS
	.if (. - gSpeciesName_HAUNTER) > 0x5
	.error "gSpeciesName_HAUNTER may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_HAUNTER) < 0x5
	.space 0x5 - (. - gSpeciesName_HAUNTER)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea54f)

	@ src/data/pokemon/species_info/gen_1_families.h:12184 gen_1_families_line_12184 (+2 aliases)
	.globl gSpeciesName_GENGAR
gSpeciesName_GENGAR: @ 0x082EA550
	.string "ゲンガー"
	.byte EOS
	.if (. - gSpeciesName_GENGAR) > 0x5
	.error "gSpeciesName_GENGAR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GENGAR) < 0x5
	.space 0x5 - (. - gSpeciesName_GENGAR)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea555)

	@ src/data/pokemon/species_info/gen_1_families.h:12389 gen_1_families_line_12389
	.globl gSpeciesName_ONIX
gSpeciesName_ONIX: @ 0x082EA556
	.string "イワーク"
	.byte EOS
	.if (. - gSpeciesName_ONIX) > 0x5
	.error "gSpeciesName_ONIX may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ONIX) < 0x5
	.space 0x5 - (. - gSpeciesName_ONIX)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea55b)

	@ src/data/pokemon/species_info/gen_1_families.h:12629 gen_1_families_line_12629
	.globl gSpeciesName_DROWZEE
gSpeciesName_DROWZEE: @ 0x082EA55C
	.string "スリープ"
	.byte EOS
	.if (. - gSpeciesName_DROWZEE) > 0x5
	.error "gSpeciesName_DROWZEE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DROWZEE) < 0x5
	.space 0x5 - (. - gSpeciesName_DROWZEE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea561)

	@ src/data/pokemon/species_info/gen_1_families.h:12706 gen_1_families_line_12706
	.globl gSpeciesName_HYPNO
gSpeciesName_HYPNO: @ 0x082EA562
	.string "スリーパー"
	.byte EOS
	.if (. - gSpeciesName_HYPNO) > 0x6
	.error "gSpeciesName_HYPNO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_HYPNO) < 0x6
	.space 0x6 - (. - gSpeciesName_HYPNO)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:12793 gen_1_families_line_12793
	.globl gSpeciesName_KRABBY
gSpeciesName_KRABBY: @ 0x082EA568
	.string "クラブ"
	.byte EOS
	.if (. - gSpeciesName_KRABBY) > 0x4
	.error "gSpeciesName_KRABBY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_KRABBY) < 0x4
	.space 0x4 - (. - gSpeciesName_KRABBY)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea56c)

	@ src/data/pokemon/species_info/gen_1_families.h:12866 gen_1_families_line_12866 (+1 aliases)
	.globl gSpeciesName_KINGLER
gSpeciesName_KINGLER: @ 0x082EA56E
	.string "キングラー"
	.byte EOS
	.if (. - gSpeciesName_KINGLER) > 0x6
	.error "gSpeciesName_KINGLER may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_KINGLER) < 0x6
	.space 0x6 - (. - gSpeciesName_KINGLER)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:12997 gen_1_families_line_12997 (+1 aliases)
	.globl gSpeciesName_VOLTORB
gSpeciesName_VOLTORB: @ 0x082EA574
	.string "ビリリダマ"
	.byte EOS
	.if (. - gSpeciesName_VOLTORB) > 0x6
	.error "gSpeciesName_VOLTORB may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_VOLTORB) < 0x6
	.space 0x6 - (. - gSpeciesName_VOLTORB)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:13075 gen_1_families_line_13075 (+1 aliases)
	.globl gSpeciesName_ELECTRODE
gSpeciesName_ELECTRODE: @ 0x082EA57A
	.string "マルマイン"
	.byte EOS
	.if (. - gSpeciesName_ELECTRODE) > 0x6
	.error "gSpeciesName_ELECTRODE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ELECTRODE) < 0x6
	.space 0x6 - (. - gSpeciesName_ELECTRODE)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:13282 gen_1_families_line_13282
	.globl gSpeciesName_EXEGGCUTE
gSpeciesName_EXEGGCUTE: @ 0x082EA580
	.string "タマタマ"
	.byte EOS
	.if (. - gSpeciesName_EXEGGCUTE) > 0x5
	.error "gSpeciesName_EXEGGCUTE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_EXEGGCUTE) < 0x5
	.space 0x5 - (. - gSpeciesName_EXEGGCUTE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea585)

	@ src/data/pokemon/species_info/gen_1_families.h:13374 gen_1_families_line_13374 (+1 aliases)
	.globl gSpeciesName_EXEGGUTOR
gSpeciesName_EXEGGUTOR: @ 0x082EA586
	.string "ナッシー"
	.byte EOS
	.if (. - gSpeciesName_EXEGGUTOR) > 0x5
	.error "gSpeciesName_EXEGGUTOR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_EXEGGUTOR) < 0x5
	.space 0x5 - (. - gSpeciesName_EXEGGUTOR)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea58b)

	@ src/data/pokemon/species_info/gen_1_families.h:13513 gen_1_families_line_13513
	.globl gSpeciesName_CUBONE
gSpeciesName_CUBONE: @ 0x082EA58C
	.string "カラカラ"
	.byte EOS
	.if (. - gSpeciesName_CUBONE) > 0x5
	.error "gSpeciesName_CUBONE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CUBONE) < 0x5
	.space 0x5 - (. - gSpeciesName_CUBONE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea591)

	@ src/data/pokemon/species_info/gen_1_families.h:13593 gen_1_families_line_13593 (+2 aliases)
	.globl gSpeciesName_MAROWAK
gSpeciesName_MAROWAK: @ 0x082EA592
	.string "ガラガラ"
	.byte EOS
	.if (. - gSpeciesName_MAROWAK) > 0x5
	.error "gSpeciesName_MAROWAK may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MAROWAK) < 0x5
	.space 0x5 - (. - gSpeciesName_MAROWAK)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea597)

	@ src/data/pokemon/species_info/gen_1_families.h:13875 gen_1_families_line_13875
	.globl gSpeciesName_HITMONLEE
gSpeciesName_HITMONLEE: @ 0x082EA598
	.string "サワムラー"
	.byte EOS
	.if (. - gSpeciesName_HITMONLEE) > 0x6
	.error "gSpeciesName_HITMONLEE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_HITMONLEE) < 0x6
	.space 0x6 - (. - gSpeciesName_HITMONLEE)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:13946 gen_1_families_line_13946
	.globl gSpeciesName_HITMONCHAN
gSpeciesName_HITMONCHAN: @ 0x082EA59E
	.string "エビワラー"
	.byte EOS
	.if (. - gSpeciesName_HITMONCHAN) > 0x6
	.error "gSpeciesName_HITMONCHAN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_HITMONCHAN) < 0x6
	.space 0x6 - (. - gSpeciesName_HITMONCHAN)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:14099 gen_1_families_line_14099
	.globl gSpeciesName_LICKITUNG
gSpeciesName_LICKITUNG: @ 0x082EA5A4
	.string "ベロリンガ"
	.byte EOS
	.if (. - gSpeciesName_LICKITUNG) > 0x6
	.error "gSpeciesName_LICKITUNG may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LICKITUNG) < 0x6
	.space 0x6 - (. - gSpeciesName_LICKITUNG)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:14252 gen_1_families_line_14252
	.globl gSpeciesName_KOFFING
gSpeciesName_KOFFING: @ 0x082EA5AA
	.string "ドガース"
	.byte EOS
	.if (. - gSpeciesName_KOFFING) > 0x5
	.error "gSpeciesName_KOFFING may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_KOFFING) < 0x5
	.space 0x5 - (. - gSpeciesName_KOFFING)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea5af)

	@ src/data/pokemon/species_info/gen_1_families.h:14334 gen_1_families_line_14334 (+1 aliases)
	.globl gSpeciesName_WEEZING
gSpeciesName_WEEZING: @ 0x082EA5B0
	.string "マタドガス"
	.byte EOS
	.if (. - gSpeciesName_WEEZING) > 0x6
	.error "gSpeciesName_WEEZING may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_WEEZING) < 0x6
	.space 0x6 - (. - gSpeciesName_WEEZING)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:14477 gen_1_families_line_14477
	.globl gSpeciesName_RHYHORN
gSpeciesName_RHYHORN: @ 0x082EA5B6
	.string "サイホーン"
	.byte EOS
	.if (. - gSpeciesName_RHYHORN) > 0x6
	.error "gSpeciesName_RHYHORN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_RHYHORN) < 0x6
	.space 0x6 - (. - gSpeciesName_RHYHORN)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:14561 gen_1_families_line_14561
	.globl gSpeciesName_RHYDON
gSpeciesName_RHYDON: @ 0x082EA5BC
	.string "サイドン"
	.byte EOS
	.if (. - gSpeciesName_RHYDON) > 0x5
	.error "gSpeciesName_RHYDON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_RHYDON) < 0x5
	.space 0x5 - (. - gSpeciesName_RHYDON)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea5c1)

	@ src/data/pokemon/species_info/gen_1_families.h:14810 gen_1_families_line_14810
	.globl gSpeciesName_CHANSEY
gSpeciesName_CHANSEY: @ 0x082EA5C2
	.string "ラッキー"
	.byte EOS
	.if (. - gSpeciesName_CHANSEY) > 0x5
	.error "gSpeciesName_CHANSEY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CHANSEY) < 0x5
	.space 0x5 - (. - gSpeciesName_CHANSEY)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea5c7)

	@ src/data/pokemon/species_info/gen_1_families.h:14963 gen_1_families_line_14963
	.globl gSpeciesName_TANGELA
gSpeciesName_TANGELA: @ 0x082EA5C8
	.string "モンジャラ"
	.byte EOS
	.if (. - gSpeciesName_TANGELA) > 0x6
	.error "gSpeciesName_TANGELA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TANGELA) < 0x6
	.space 0x6 - (. - gSpeciesName_TANGELA)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:15120 gen_1_families_line_15120 (+1 aliases)
	.globl gSpeciesName_KANGASKHAN
gSpeciesName_KANGASKHAN: @ 0x082EA5CE
	.string "ガルーラ"
	.byte EOS
	.if (. - gSpeciesName_KANGASKHAN) > 0x5
	.error "gSpeciesName_KANGASKHAN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_KANGASKHAN) < 0x5
	.space 0x5 - (. - gSpeciesName_KANGASKHAN)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea5d3)

	@ src/data/pokemon/species_info/gen_1_families.h:15273 gen_1_families_line_15273
	.globl gSpeciesName_HORSEA
gSpeciesName_HORSEA: @ 0x082EA5D4
	.string "タッツー"
	.byte EOS
	.if (. - gSpeciesName_HORSEA) > 0x5
	.error "gSpeciesName_HORSEA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_HORSEA) < 0x5
	.space 0x5 - (. - gSpeciesName_HORSEA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea5d9)

	@ src/data/pokemon/species_info/gen_1_families.h:15350 gen_1_families_line_15350
	.globl gSpeciesName_SEADRA
gSpeciesName_SEADRA: @ 0x082EA5DA
	.string "シードラ"
	.byte EOS
	.if (. - gSpeciesName_SEADRA) > 0x5
	.error "gSpeciesName_SEADRA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SEADRA) < 0x5
	.space 0x5 - (. - gSpeciesName_SEADRA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea5df)

	@ src/data/pokemon/species_info/gen_1_families.h:15510 gen_1_families_line_15510
	.globl gSpeciesName_GOLDEEN
gSpeciesName_GOLDEEN: @ 0x082EA5E0
	.string "トサキント"
	.byte EOS
	.if (. - gSpeciesName_GOLDEEN) > 0x6
	.error "gSpeciesName_GOLDEEN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GOLDEEN) < 0x6
	.space 0x6 - (. - gSpeciesName_GOLDEEN)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:15599 gen_1_families_line_15599
	.globl gSpeciesName_SEAKING
gSpeciesName_SEAKING: @ 0x082EA5E6
	.string "アズマオウ"
	.byte EOS
	.if (. - gSpeciesName_SEAKING) > 0x6
	.error "gSpeciesName_SEAKING may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SEAKING) < 0x6
	.space 0x6 - (. - gSpeciesName_SEAKING)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:15686 gen_1_families_line_15686
	.globl gSpeciesName_STARYU
gSpeciesName_STARYU: @ 0x082EA5EC
	.string "ヒトデマン"
	.byte EOS
	.if (. - gSpeciesName_STARYU) > 0x6
	.error "gSpeciesName_STARYU may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_STARYU) < 0x6
	.space 0x6 - (. - gSpeciesName_STARYU)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:15758 gen_1_families_line_15758 (+1 aliases)
	.globl gSpeciesName_STARMIE
gSpeciesName_STARMIE: @ 0x082EA5F2
	.string "スターミー"
	.byte EOS
	.if (. - gSpeciesName_STARMIE) > 0x6
	.error "gSpeciesName_STARMIE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_STARMIE) < 0x6
	.space 0x6 - (. - gSpeciesName_STARMIE)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:15982 gen_1_families_line_15982 (+1 aliases)
	.globl gSpeciesName_MR_MIME
gSpeciesName_MR_MIME: @ 0x082EA5F8
	.string "バリヤード"
	.byte EOS
	.if (. - gSpeciesName_MR_MIME) > 0x6
	.error "gSpeciesName_MR_MIME may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MR_MIME) < 0x6
	.space 0x6 - (. - gSpeciesName_MR_MIME)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16192 gen_1_families_line_16192
	.globl gSpeciesName_SCYTHER
gSpeciesName_SCYTHER: @ 0x082EA5FE
	.string "ストライク"
	.byte EOS
	.if (. - gSpeciesName_SCYTHER) > 0x6
	.error "gSpeciesName_SCYTHER may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SCYTHER) < 0x6
	.space 0x6 - (. - gSpeciesName_SCYTHER)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16597 gen_1_families_line_16597
	.globl gSpeciesName_JYNX
gSpeciesName_JYNX: @ 0x082EA604
	.string "ルージュラ"
	.byte EOS
	.if (. - gSpeciesName_JYNX) > 0x6
	.error "gSpeciesName_JYNX may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_JYNX) < 0x6
	.space 0x6 - (. - gSpeciesName_JYNX)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16743 gen_1_families_line_16743
	.globl gSpeciesName_ELECTABUZZ
gSpeciesName_ELECTABUZZ: @ 0x082EA60A
	.string "エレブー"
	.byte EOS
	.if (. - gSpeciesName_ELECTABUZZ) > 0x5
	.error "gSpeciesName_ELECTABUZZ may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ELECTABUZZ) < 0x5
	.space 0x5 - (. - gSpeciesName_ELECTABUZZ)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea60f)

	@ src/data/pokemon/species_info/gen_1_families.h:16969 gen_1_families_line_16969
	.globl gSpeciesName_MAGMAR
gSpeciesName_MAGMAR: @ 0x082EA610
	.string "ブーバー"
	.byte EOS
	.if (. - gSpeciesName_MAGMAR) > 0x5
	.error "gSpeciesName_MAGMAR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MAGMAR) < 0x5
	.space 0x5 - (. - gSpeciesName_MAGMAR)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea615)

	@ src/data/pokemon/species_info/gen_1_families.h:17121 gen_1_families_line_17121 (+1 aliases)
	.globl gSpeciesName_PINSIR
gSpeciesName_PINSIR: @ 0x082EA616
	.string "カイロス"
	.byte EOS
	.if (. - gSpeciesName_PINSIR) > 0x5
	.error "gSpeciesName_PINSIR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PINSIR) < 0x5
	.space 0x5 - (. - gSpeciesName_PINSIR)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea61b)

	@ src/data/pokemon/species_info/gen_1_families.h:17276 gen_1_families_line_17276 (+3 aliases)
	.globl gSpeciesName_TAUROS
gSpeciesName_TAUROS: @ 0x082EA61C
	.string "ケンタロス"
	.byte EOS
	.if (. - gSpeciesName_TAUROS) > 0x6
	.error "gSpeciesName_TAUROS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TAUROS) < 0x6
	.space 0x6 - (. - gSpeciesName_TAUROS)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:17548 gen_1_families_line_17548
	.globl gSpeciesName_MAGIKARP
gSpeciesName_MAGIKARP: @ 0x082EA622
	.string "コイキング"
	.byte EOS
	.if (. - gSpeciesName_MAGIKARP) > 0x6
	.error "gSpeciesName_MAGIKARP may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MAGIKARP) < 0x6
	.space 0x6 - (. - gSpeciesName_MAGIKARP)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:17636 gen_1_families_line_17636 (+1 aliases)
	.globl gSpeciesName_GYARADOS
gSpeciesName_GYARADOS: @ 0x082EA628
	.string "ギャラドス"
	.byte EOS
	.if (. - gSpeciesName_GYARADOS) > 0x6
	.error "gSpeciesName_GYARADOS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GYARADOS) < 0x6
	.space 0x6 - (. - gSpeciesName_GYARADOS)
	.endif

	@ src/data/debug_trainers.h:119 debug_trainers_line_119 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gSpeciesName_LAPRAS
gSpeciesName_LAPRAS: @ 0x082EA62E
	.string "ラプラス"
	.byte EOS
	.if (. - gSpeciesName_LAPRAS) != 0x5
	.error "gSpeciesName_LAPRAS must retain its original byte length"
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea633)

	@ src/data/pokemon/species_info/gen_1_families.h:17932 gen_1_families_line_17932 (+1 aliases)
	.globl gSpeciesName_DITTO
gSpeciesName_DITTO: @ 0x082EA634
	.string "メタモン"
	.byte EOS
	.if (. - gSpeciesName_DITTO) > 0x5
	.error "gSpeciesName_DITTO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DITTO) < 0x5
	.space 0x5 - (. - gSpeciesName_DITTO)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea639)

	@ src/data/pokemon/species_info/gen_1_families.h:18011 gen_1_families_line_18011 (+3 aliases)
	.globl gSpeciesName_EEVEE
gSpeciesName_EEVEE: @ 0x082EA63A
	.string "イーブイ"
	.byte EOS
	.if (. - gSpeciesName_EEVEE) > 0x5
	.error "gSpeciesName_EEVEE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_EEVEE) < 0x5
	.space 0x5 - (. - gSpeciesName_EEVEE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea63f)

	@ src/data/pokemon/species_info/gen_1_families.h:18242 gen_1_families_line_18242 (+1 aliases)
	.globl gSpeciesName_VAPOREON
gSpeciesName_VAPOREON: @ 0x082EA640
	.string "シャワーズ"
	.byte EOS
	.if (. - gSpeciesName_VAPOREON) > 0x6
	.error "gSpeciesName_VAPOREON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_VAPOREON) < 0x6
	.space 0x6 - (. - gSpeciesName_VAPOREON)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:18308 gen_1_families_line_18308 (+1 aliases)
	.globl gSpeciesName_JOLTEON
gSpeciesName_JOLTEON: @ 0x082EA646
	.string "サンダース"
	.byte EOS
	.if (. - gSpeciesName_JOLTEON) > 0x6
	.error "gSpeciesName_JOLTEON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_JOLTEON) < 0x6
	.space 0x6 - (. - gSpeciesName_JOLTEON)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:18374 gen_1_families_line_18374 (+1 aliases)
	.globl gSpeciesName_FLAREON
gSpeciesName_FLAREON: @ 0x082EA64C
	.string "ブースター"
	.byte EOS
	.if (. - gSpeciesName_FLAREON) > 0x6
	.error "gSpeciesName_FLAREON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_FLAREON) < 0x6
	.space 0x6 - (. - gSpeciesName_FLAREON)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:18787 gen_1_families_line_18787
	.globl gSpeciesName_PORYGON
gSpeciesName_PORYGON: @ 0x082EA652
	.string "ポリゴン"
	.byte EOS
	.if (. - gSpeciesName_PORYGON) > 0x5
	.error "gSpeciesName_PORYGON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PORYGON) < 0x5
	.space 0x5 - (. - gSpeciesName_PORYGON)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea657)

	@ src/data/pokemon/species_info/gen_1_families.h:19024 gen_1_families_line_19024
	.globl gSpeciesName_OMANYTE
gSpeciesName_OMANYTE: @ 0x082EA658
	.string "オムナイト"
	.byte EOS
	.if (. - gSpeciesName_OMANYTE) > 0x6
	.error "gSpeciesName_OMANYTE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_OMANYTE) < 0x6
	.space 0x6 - (. - gSpeciesName_OMANYTE)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:19098 gen_1_families_line_19098
	.globl gSpeciesName_OMASTAR
gSpeciesName_OMASTAR: @ 0x082EA65E
	.string "オムスター"
	.byte EOS
	.if (. - gSpeciesName_OMASTAR) > 0x6
	.error "gSpeciesName_OMASTAR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_OMASTAR) < 0x6
	.space 0x6 - (. - gSpeciesName_OMASTAR)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:19174 gen_1_families_line_19174
	.globl gSpeciesName_KABUTO
gSpeciesName_KABUTO: @ 0x082EA664
	.string "カブト"
	.byte EOS
	.if (. - gSpeciesName_KABUTO) > 0x4
	.error "gSpeciesName_KABUTO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_KABUTO) < 0x4
	.space 0x4 - (. - gSpeciesName_KABUTO)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea668)

	@ src/data/pokemon/species_info/gen_1_families.h:19254 gen_1_families_line_19254
	.globl gSpeciesName_KABUTOPS
gSpeciesName_KABUTOPS: @ 0x082EA66A
	.string "カブトプス"
	.byte EOS
	.if (. - gSpeciesName_KABUTOPS) > 0x6
	.error "gSpeciesName_KABUTOPS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_KABUTOPS) < 0x6
	.space 0x6 - (. - gSpeciesName_KABUTOPS)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:19324 gen_1_families_line_19324 (+1 aliases)
	.globl gSpeciesName_AERODACTYL
gSpeciesName_AERODACTYL: @ 0x082EA670
	.string "プテラ"
	.byte EOS
	.if (. - gSpeciesName_AERODACTYL) > 0x4
	.error "gSpeciesName_AERODACTYL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_AERODACTYL) < 0x4
	.space 0x4 - (. - gSpeciesName_AERODACTYL)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea674)

	@ src/data/pokemon/species_info/gen_1_families.h:19548 gen_1_families_line_19548 (+1 aliases)
	.globl gSpeciesName_SNORLAX
gSpeciesName_SNORLAX: @ 0x082EA676
	.string "カビゴン"
	.byte EOS
	.if (. - gSpeciesName_SNORLAX) > 0x5
	.error "gSpeciesName_SNORLAX may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SNORLAX) < 0x5
	.space 0x5 - (. - gSpeciesName_SNORLAX)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea67b)

	@ src/data/pokemon/species_info/gen_1_families.h:19688 gen_1_families_line_19688 (+1 aliases)
	.globl gSpeciesName_ARTICUNO
gSpeciesName_ARTICUNO: @ 0x082EA67C
	.string "フリーザー"
	.byte EOS
	.if (. - gSpeciesName_ARTICUNO) > 0x6
	.error "gSpeciesName_ARTICUNO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ARTICUNO) < 0x6
	.space 0x6 - (. - gSpeciesName_ARTICUNO)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:19841 gen_1_families_line_19841 (+1 aliases)
	.globl gSpeciesName_ZAPDOS
gSpeciesName_ZAPDOS: @ 0x082EA682
	.string "サンダー"
	.byte EOS
	.if (. - gSpeciesName_ZAPDOS) > 0x5
	.error "gSpeciesName_ZAPDOS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ZAPDOS) < 0x5
	.space 0x5 - (. - gSpeciesName_ZAPDOS)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea687)

	@ src/data/pokemon/species_info/gen_1_families.h:19990 gen_1_families_line_19990 (+1 aliases)
	.globl gSpeciesName_MOLTRES
gSpeciesName_MOLTRES: @ 0x082EA688
	.string "ファイヤー"
	.byte EOS
	.if (. - gSpeciesName_MOLTRES) > 0x6
	.error "gSpeciesName_MOLTRES may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MOLTRES) < 0x6
	.space 0x6 - (. - gSpeciesName_MOLTRES)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:20162 gen_1_families_line_20162
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gSpeciesName_DRATINI
gSpeciesName_DRATINI: @ 0x082EA68E
	.string "ミニリュウ"
	.byte EOS
	.if (. - gSpeciesName_DRATINI) != 0x6
	.error "gSpeciesName_DRATINI must retain its original byte length"
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:20232 gen_1_families_line_20232
	.globl gSpeciesName_DRAGONAIR
gSpeciesName_DRAGONAIR: @ 0x082EA694
	.string "ハクリュー"
	.byte EOS
	.if (. - gSpeciesName_DRAGONAIR) > 0x6
	.error "gSpeciesName_DRAGONAIR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DRAGONAIR) < 0x6
	.space 0x6 - (. - gSpeciesName_DRAGONAIR)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:20308 gen_1_families_line_20308 (+1 aliases)
	.globl gSpeciesName_DRAGONITE
gSpeciesName_DRAGONITE: @ 0x082EA69A
	.string "カイリュー"
	.byte EOS
	.if (. - gSpeciesName_DRAGONITE) > 0x6
	.error "gSpeciesName_DRAGONITE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DRAGONITE) < 0x6
	.space 0x6 - (. - gSpeciesName_DRAGONITE)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:20447 gen_1_families_line_20447 (+2 aliases)
	.globl gSpeciesName_MEWTWO
gSpeciesName_MEWTWO: @ 0x082EA6A0
	.string "ミュウツー"
	.byte EOS
	.if (. - gSpeciesName_MEWTWO) > 0x6
	.error "gSpeciesName_MEWTWO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MEWTWO) < 0x6
	.space 0x6 - (. - gSpeciesName_MEWTWO)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:20681 gen_1_families_line_20681
	.globl gSpeciesName_MEW
gSpeciesName_MEW: @ 0x082EA6A6
	.string "ミュウ"
	.byte EOS
	.if (. - gSpeciesName_MEW) > 0x4
	.error "gSpeciesName_MEW may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MEW) < 0x4
	.space 0x4 - (. - gSpeciesName_MEW)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea6aa)

	@ src/data/pokemon/species_info/gen_2_families.h:26 gen_2_families_line_26
	.globl gSpeciesName_CHIKORITA
gSpeciesName_CHIKORITA: @ 0x082EA6AC
	.string "チコリータ"
	.byte EOS
	.if (. - gSpeciesName_CHIKORITA) > 0x6
	.error "gSpeciesName_CHIKORITA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CHIKORITA) < 0x6
	.space 0x6 - (. - gSpeciesName_CHIKORITA)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:96 gen_2_families_line_96
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gSpeciesName_BAYLEEF
gSpeciesName_BAYLEEF: @ 0x082EA6B2
	.string "ベイリーフ"
	.byte EOS
	.if (. - gSpeciesName_BAYLEEF) != 0x6
	.error "gSpeciesName_BAYLEEF must retain its original byte length"
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:170 gen_2_families_line_170 (+1 aliases)
	.globl gSpeciesName_MEGANIUM
gSpeciesName_MEGANIUM: @ 0x082EA6B8
	.string "メガニウム"
	.byte EOS
	.if (. - gSpeciesName_MEGANIUM) > 0x6
	.error "gSpeciesName_MEGANIUM may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MEGANIUM) < 0x6
	.space 0x6 - (. - gSpeciesName_MEGANIUM)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:313 gen_2_families_line_313
	.globl gSpeciesName_CYNDAQUIL
gSpeciesName_CYNDAQUIL: @ 0x082EA6BE
	.string "ヒノアラシ"
	.byte EOS
	.if (. - gSpeciesName_CYNDAQUIL) > 0x6
	.error "gSpeciesName_CYNDAQUIL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CYNDAQUIL) < 0x6
	.space 0x6 - (. - gSpeciesName_CYNDAQUIL)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:384 gen_2_families_line_384
	.globl gSpeciesName_QUILAVA
gSpeciesName_QUILAVA: @ 0x082EA6C4
	.string "マグマラシ"
	.byte EOS
	.if (. - gSpeciesName_QUILAVA) > 0x6
	.error "gSpeciesName_QUILAVA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_QUILAVA) < 0x6
	.space 0x6 - (. - gSpeciesName_QUILAVA)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:461 gen_2_families_line_461 (+1 aliases)
	.globl gSpeciesName_TYPHLOSION
gSpeciesName_TYPHLOSION: @ 0x082EA6CA
	.string "バクフーン"
	.byte EOS
	.if (. - gSpeciesName_TYPHLOSION) > 0x6
	.error "gSpeciesName_TYPHLOSION may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TYPHLOSION) < 0x6
	.space 0x6 - (. - gSpeciesName_TYPHLOSION)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:598 gen_2_families_line_598
	.globl gSpeciesName_TOTODILE
gSpeciesName_TOTODILE: @ 0x082EA6D0
	.string "ワニノコ"
	.byte EOS
	.if (. - gSpeciesName_TOTODILE) > 0x5
	.error "gSpeciesName_TOTODILE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TOTODILE) < 0x5
	.space 0x5 - (. - gSpeciesName_TOTODILE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea6d5)

	@ src/data/pokemon/species_info/gen_2_families.h:672 gen_2_families_line_672
	.globl gSpeciesName_CROCONAW
gSpeciesName_CROCONAW: @ 0x082EA6D6
	.string "アリゲイツ"
	.byte EOS
	.if (. - gSpeciesName_CROCONAW) > 0x6
	.error "gSpeciesName_CROCONAW may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CROCONAW) < 0x6
	.space 0x6 - (. - gSpeciesName_CROCONAW)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:746 gen_2_families_line_746 (+1 aliases)
	.globl gSpeciesName_FERALIGATR
gSpeciesName_FERALIGATR: @ 0x082EA6DC
	.string "オーダイル"
	.byte EOS
	.if (. - gSpeciesName_FERALIGATR) > 0x6
	.error "gSpeciesName_FERALIGATR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_FERALIGATR) < 0x6
	.space 0x6 - (. - gSpeciesName_FERALIGATR)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:879 gen_2_families_line_879
	.globl gSpeciesName_SENTRET
gSpeciesName_SENTRET: @ 0x082EA6E2
	.string "オタチ"
	.byte EOS
	.if (. - gSpeciesName_SENTRET) > 0x4
	.error "gSpeciesName_SENTRET may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SENTRET) < 0x4
	.space 0x4 - (. - gSpeciesName_SENTRET)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea6e6)

	@ src/data/pokemon/species_info/gen_2_families.h:949 gen_2_families_line_949
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gSpeciesName_FURRET
gSpeciesName_FURRET: @ 0x082EA6E8
	.string "オオタチ"
	.byte EOS
	.if (. - gSpeciesName_FURRET) != 0x5
	.error "gSpeciesName_FURRET must retain its original byte length"
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea6ed)

	@ src/data/pokemon/species_info/gen_2_families.h:1017 gen_2_families_line_1017
	.globl gSpeciesName_HOOTHOOT
gSpeciesName_HOOTHOOT: @ 0x082EA6EE
	.string "ホーホー"
	.byte EOS
	.if (. - gSpeciesName_HOOTHOOT) > 0x5
	.error "gSpeciesName_HOOTHOOT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_HOOTHOOT) < 0x5
	.space 0x5 - (. - gSpeciesName_HOOTHOOT)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea6f3)

	@ src/data/pokemon/species_info/gen_2_families.h:1102 gen_2_families_line_1102
	.globl gSpeciesName_NOCTOWL
gSpeciesName_NOCTOWL: @ 0x082EA6F4
	.string "ヨルノズク"
	.byte EOS
	.if (. - gSpeciesName_NOCTOWL) > 0x6
	.error "gSpeciesName_NOCTOWL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_NOCTOWL) < 0x6
	.space 0x6 - (. - gSpeciesName_NOCTOWL)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:1170 gen_2_families_line_1170
	.globl gSpeciesName_LEDYBA
gSpeciesName_LEDYBA: @ 0x082EA6FA
	.string "レディバ"
	.byte EOS
	.if (. - gSpeciesName_LEDYBA) > 0x5
	.error "gSpeciesName_LEDYBA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LEDYBA) < 0x5
	.space 0x5 - (. - gSpeciesName_LEDYBA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea6ff)

	@ src/data/pokemon/species_info/gen_2_families.h:1253 gen_2_families_line_1253
	.globl gSpeciesName_LEDIAN
gSpeciesName_LEDIAN: @ 0x082EA700
	.string "レディアン"
	.byte EOS
	.if (. - gSpeciesName_LEDIAN) > 0x6
	.error "gSpeciesName_LEDIAN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LEDIAN) < 0x6
	.space 0x6 - (. - gSpeciesName_LEDIAN)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:1337 gen_2_families_line_1337
	.globl gSpeciesName_SPINARAK
gSpeciesName_SPINARAK: @ 0x082EA706
	.string "イトマル"
	.byte EOS
	.if (. - gSpeciesName_SPINARAK) > 0x5
	.error "gSpeciesName_SPINARAK may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SPINARAK) < 0x5
	.space 0x5 - (. - gSpeciesName_SPINARAK)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea70b)

	@ src/data/pokemon/species_info/gen_2_families.h:1417 gen_2_families_line_1417
	.globl gSpeciesName_ARIADOS
gSpeciesName_ARIADOS: @ 0x082EA70C
	.string "アリアドス"
	.byte EOS
	.if (. - gSpeciesName_ARIADOS) > 0x6
	.error "gSpeciesName_ARIADOS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ARIADOS) < 0x6
	.space 0x6 - (. - gSpeciesName_ARIADOS)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:5982 gen_1_families_line_5982
	.globl gSpeciesName_CROBAT
gSpeciesName_CROBAT: @ 0x082EA712
	.string "クロバット"
	.byte EOS
	.if (. - gSpeciesName_CROBAT) > 0x6
	.error "gSpeciesName_CROBAT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CROBAT) < 0x6
	.space 0x6 - (. - gSpeciesName_CROBAT)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:1488 gen_2_families_line_1488
	.globl gSpeciesName_CHINCHOU
gSpeciesName_CHINCHOU: @ 0x082EA718
	.string "チョンチー"
	.byte EOS
	.if (. - gSpeciesName_CHINCHOU) > 0x6
	.error "gSpeciesName_CHINCHOU may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CHINCHOU) < 0x6
	.space 0x6 - (. - gSpeciesName_CHINCHOU)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:1560 gen_2_families_line_1560
	.globl gSpeciesName_LANTURN
gSpeciesName_LANTURN: @ 0x082EA71E
	.string "ランターン"
	.byte EOS
	.if (. - gSpeciesName_LANTURN) > 0x6
	.error "gSpeciesName_LANTURN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LANTURN) < 0x6
	.space 0x6 - (. - gSpeciesName_LANTURN)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:2773 gen_1_families_line_2773 (+1 aliases)
	.globl gSpeciesName_PICHU
gSpeciesName_PICHU: @ 0x082EA724
	.string "ピチュー"
	.byte EOS
	.if (. - gSpeciesName_PICHU) > 0x5
	.error "gSpeciesName_PICHU may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PICHU) < 0x5
	.space 0x5 - (. - gSpeciesName_PICHU)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea729)

	@ src/data/pokemon/species_info/gen_1_families.h:4955 gen_1_families_line_4955
	.globl gSpeciesName_CLEFFA
gSpeciesName_CLEFFA: @ 0x082EA72A
	.string "ピィ"
	.byte EOS
	.if (. - gSpeciesName_CLEFFA) > 0x3
	.error "gSpeciesName_CLEFFA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CLEFFA) < 0x3
	.space 0x3 - (. - gSpeciesName_CLEFFA)
	.endif
	.space 0x3, 0 @ name padding (was 0x2ea72d)

	@ src/data/pokemon/species_info/gen_1_families.h:5541 gen_1_families_line_5541
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gSpeciesName_IGGLYBUFF
gSpeciesName_IGGLYBUFF: @ 0x082EA730
	.string "ププリン"
	.byte EOS
	.if (. - gSpeciesName_IGGLYBUFF) != 0x5
	.error "gSpeciesName_IGGLYBUFF must retain its original byte length"
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea735)

	@ src/data/pokemon/species_info/gen_2_families.h:1634 gen_2_families_line_1634
	.globl gSpeciesName_TOGEPI
gSpeciesName_TOGEPI: @ 0x082EA736
	.string "トゲピー"
	.byte EOS
	.if (. - gSpeciesName_TOGEPI) > 0x5
	.error "gSpeciesName_TOGEPI may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TOGEPI) < 0x5
	.space 0x5 - (. - gSpeciesName_TOGEPI)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea73b)

	@ src/data/pokemon/species_info/gen_2_families.h:1704 gen_2_families_line_1704
	.globl gSpeciesName_TOGETIC
gSpeciesName_TOGETIC: @ 0x082EA73C
	.string "トゲチック"
	.byte EOS
	.if (. - gSpeciesName_TOGETIC) > 0x6
	.error "gSpeciesName_TOGETIC may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TOGETIC) < 0x6
	.space 0x6 - (. - gSpeciesName_TOGETIC)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:1858 gen_2_families_line_1858
	.globl gSpeciesName_NATU
gSpeciesName_NATU: @ 0x082EA742
	.string "ネイティ"
	.byte EOS
	.if (. - gSpeciesName_NATU) > 0x5
	.error "gSpeciesName_NATU may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_NATU) < 0x5
	.space 0x5 - (. - gSpeciesName_NATU)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea747)

	@ src/data/pokemon/species_info/gen_2_families.h:1932 gen_2_families_line_1932
	.globl gSpeciesName_XATU
gSpeciesName_XATU: @ 0x082EA748
	.string "ネイティオ"
	.byte EOS
	.if (. - gSpeciesName_XATU) > 0x6
	.error "gSpeciesName_XATU may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_XATU) < 0x6
	.space 0x6 - (. - gSpeciesName_XATU)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:2017 gen_2_families_line_2017
	.globl gSpeciesName_MAREEP
gSpeciesName_MAREEP: @ 0x082EA74E
	.string "メリープ"
	.byte EOS
	.if (. - gSpeciesName_MAREEP) > 0x5
	.error "gSpeciesName_MAREEP may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MAREEP) < 0x5
	.space 0x5 - (. - gSpeciesName_MAREEP)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea753)

	@ src/data/pokemon/species_info/gen_2_families.h:2090 gen_2_families_line_2090
	.globl gSpeciesName_FLAAFFY
gSpeciesName_FLAAFFY: @ 0x082EA754
	.string "モココ"
	.byte EOS
	.if (. - gSpeciesName_FLAAFFY) > 0x4
	.error "gSpeciesName_FLAAFFY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_FLAAFFY) < 0x4
	.space 0x4 - (. - gSpeciesName_FLAAFFY)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea758)

	@ src/data/pokemon/species_info/gen_2_families.h:2168 gen_2_families_line_2168 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gSpeciesName_AMPHAROS
gSpeciesName_AMPHAROS: @ 0x082EA75A
	.string "デンリュウ"
	.byte EOS
	.if (. - gSpeciesName_AMPHAROS) != 0x6
	.error "gSpeciesName_AMPHAROS must retain its original byte length"
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6327 gen_1_families_line_6327
	.globl gSpeciesName_BELLOSSOM
gSpeciesName_BELLOSSOM: @ 0x082EA760
	.string "キレイハナ"
	.byte EOS
	.if (. - gSpeciesName_BELLOSSOM) > 0x6
	.error "gSpeciesName_BELLOSSOM may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_BELLOSSOM) < 0x6
	.space 0x6 - (. - gSpeciesName_BELLOSSOM)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:2397 gen_2_families_line_2397
	.globl gSpeciesName_MARILL
gSpeciesName_MARILL: @ 0x082EA766
	.string "マリル"
	.byte EOS
	.if (. - gSpeciesName_MARILL) > 0x4
	.error "gSpeciesName_MARILL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MARILL) < 0x4
	.space 0x4 - (. - gSpeciesName_MARILL)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea76a)

	@ src/data/pokemon/species_info/gen_2_families.h:2479 gen_2_families_line_2479
	.globl gSpeciesName_AZUMARILL
gSpeciesName_AZUMARILL: @ 0x082EA76C
	.string "マリルリ"
	.byte EOS
	.if (. - gSpeciesName_AZUMARILL) > 0x5
	.error "gSpeciesName_AZUMARILL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_AZUMARILL) < 0x5
	.space 0x5 - (. - gSpeciesName_AZUMARILL)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea771)

	@ src/data/pokemon/species_info/gen_2_families.h:2623 gen_2_families_line_2623
	.globl gSpeciesName_SUDOWOODO
gSpeciesName_SUDOWOODO: @ 0x082EA772
	.string "ウソッキー"
	.byte EOS
	.if (. - gSpeciesName_SUDOWOODO) > 0x6
	.error "gSpeciesName_SUDOWOODO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SUDOWOODO) < 0x6
	.space 0x6 - (. - gSpeciesName_SUDOWOODO)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:8411 gen_1_families_line_8411
	.globl gSpeciesName_POLITOED
gSpeciesName_POLITOED: @ 0x082EA778
	.string "ニョロトノ"
	.byte EOS
	.if (. - gSpeciesName_POLITOED) > 0x6
	.error "gSpeciesName_POLITOED may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_POLITOED) < 0x6
	.space 0x6 - (. - gSpeciesName_POLITOED)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:2713 gen_2_families_line_2713
	.globl gSpeciesName_HOPPIP
gSpeciesName_HOPPIP: @ 0x082EA77E
	.string "ハネッコ"
	.byte EOS
	.if (. - gSpeciesName_HOPPIP) > 0x5
	.error "gSpeciesName_HOPPIP may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_HOPPIP) < 0x5
	.space 0x5 - (. - gSpeciesName_HOPPIP)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea783)

	@ src/data/pokemon/species_info/gen_2_families.h:2788 gen_2_families_line_2788
	.globl gSpeciesName_SKIPLOOM
gSpeciesName_SKIPLOOM: @ 0x082EA784
	.string "ポポッコ"
	.byte EOS
	.if (. - gSpeciesName_SKIPLOOM) > 0x5
	.error "gSpeciesName_SKIPLOOM may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SKIPLOOM) < 0x5
	.space 0x5 - (. - gSpeciesName_SKIPLOOM)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea789)

	@ src/data/pokemon/species_info/gen_2_families.h:2874 gen_2_families_line_2874
	.globl gSpeciesName_JUMPLUFF
gSpeciesName_JUMPLUFF: @ 0x082EA78A
	.string "ワタッコ"
	.byte EOS
	.if (. - gSpeciesName_JUMPLUFF) > 0x5
	.error "gSpeciesName_JUMPLUFF may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_JUMPLUFF) < 0x5
	.space 0x5 - (. - gSpeciesName_JUMPLUFF)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea78f)

	@ src/data/pokemon/species_info/gen_2_families.h:2947 gen_2_families_line_2947
	.globl gSpeciesName_AIPOM
gSpeciesName_AIPOM: @ 0x082EA790
	.string "エイパム"
	.byte EOS
	.if (. - gSpeciesName_AIPOM) > 0x5
	.error "gSpeciesName_AIPOM may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_AIPOM) < 0x5
	.space 0x5 - (. - gSpeciesName_AIPOM)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea795)

	@ src/data/pokemon/species_info/gen_2_families.h:3118 gen_2_families_line_3118
	.globl gSpeciesName_SUNKERN
gSpeciesName_SUNKERN: @ 0x082EA796
	.string "ヒマナッツ"
	.byte EOS
	.if (. - gSpeciesName_SUNKERN) > 0x6
	.error "gSpeciesName_SUNKERN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SUNKERN) < 0x6
	.space 0x6 - (. - gSpeciesName_SUNKERN)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:3194 gen_2_families_line_3194
	.globl gSpeciesName_SUNFLORA
gSpeciesName_SUNFLORA: @ 0x082EA79C
	.string "キマワリ"
	.byte EOS
	.if (. - gSpeciesName_SUNFLORA) > 0x5
	.error "gSpeciesName_SUNFLORA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SUNFLORA) < 0x5
	.space 0x5 - (. - gSpeciesName_SUNFLORA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea7a1)

	@ src/data/pokemon/species_info/gen_2_families.h:3264 gen_2_families_line_3264
	.globl gSpeciesName_YANMA
gSpeciesName_YANMA: @ 0x082EA7A2
	.string "ヤンヤンマ"
	.byte EOS
	.if (. - gSpeciesName_YANMA) > 0x6
	.error "gSpeciesName_YANMA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_YANMA) < 0x6
	.space 0x6 - (. - gSpeciesName_YANMA)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:3451 gen_2_families_line_3451 (+1 aliases)
	.globl gSpeciesName_WOOPER
gSpeciesName_WOOPER: @ 0x082EA7A8
	.string "ウパー"
	.byte EOS
	.if (. - gSpeciesName_WOOPER) > 0x4
	.error "gSpeciesName_WOOPER may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_WOOPER) < 0x4
	.space 0x4 - (. - gSpeciesName_WOOPER)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea7ac)

	@ src/data/pokemon/species_info/gen_2_families.h:3534 gen_2_families_line_3534
	.globl gSpeciesName_QUAGSIRE
gSpeciesName_QUAGSIRE: @ 0x082EA7AE
	.string "ヌオー"
	.byte EOS
	.if (. - gSpeciesName_QUAGSIRE) > 0x4
	.error "gSpeciesName_QUAGSIRE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_QUAGSIRE) < 0x4
	.space 0x4 - (. - gSpeciesName_QUAGSIRE)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea7b2)

	@ src/data/pokemon/species_info/gen_1_families.h:18441 gen_1_families_line_18441
	.globl gSpeciesName_ESPEON
gSpeciesName_ESPEON: @ 0x082EA7B4
	.string "エーフィ"
	.byte EOS
	.if (. - gSpeciesName_ESPEON) > 0x5
	.error "gSpeciesName_ESPEON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ESPEON) < 0x5
	.space 0x5 - (. - gSpeciesName_ESPEON)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea7b9)

	@ src/data/pokemon/species_info/gen_1_families.h:18508 gen_1_families_line_18508
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gSpeciesName_UMBREON
gSpeciesName_UMBREON: @ 0x082EA7BA
	.string "ブラッキー"
	.byte EOS
	.if (. - gSpeciesName_UMBREON) != 0x6
	.error "gSpeciesName_UMBREON must retain its original byte length"
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:3751 gen_2_families_line_3751
	.globl gSpeciesName_MURKROW
gSpeciesName_MURKROW: @ 0x082EA7C0
	.string "ヤミカラス"
	.byte EOS
	.if (. - gSpeciesName_MURKROW) > 0x6
	.error "gSpeciesName_MURKROW may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MURKROW) < 0x6
	.space 0x6 - (. - gSpeciesName_MURKROW)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:10448 gen_1_families_line_10448 (+1 aliases)
	.globl gSpeciesName_SLOWKING
gSpeciesName_SLOWKING: @ 0x082EA7C6
	.string "ヤドキング"
	.byte EOS
	.if (. - gSpeciesName_SLOWKING) > 0x6
	.error "gSpeciesName_SLOWKING may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SLOWKING) < 0x6
	.space 0x6 - (. - gSpeciesName_SLOWKING)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:3909 gen_2_families_line_3909
	.globl gSpeciesName_MISDREAVUS
gSpeciesName_MISDREAVUS: @ 0x082EA7CC
	.string "ムウマ"
	.byte EOS
	.if (. - gSpeciesName_MISDREAVUS) > 0x4
	.error "gSpeciesName_MISDREAVUS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MISDREAVUS) < 0x4
	.space 0x4 - (. - gSpeciesName_MISDREAVUS)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea7d0)

	@ src/data/pokemon/species_info/gen_2_families.h:4070 gen_2_families_line_4070
	.globl gSpeciesName_UNOWN
gSpeciesName_UNOWN: @ 0x082EA7D2
	.string "アンノーン"
	.byte EOS
	.if (. - gSpeciesName_UNOWN) > 0x6
	.error "gSpeciesName_UNOWN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_UNOWN) < 0x6
	.space 0x6 - (. - gSpeciesName_UNOWN)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4237 gen_2_families_line_4237
	.globl gSpeciesName_WOBBUFFET
gSpeciesName_WOBBUFFET: @ 0x082EA7D8
	.string "ソーナンス"
	.byte EOS
	.if (. - gSpeciesName_WOBBUFFET) > 0x6
	.error "gSpeciesName_WOBBUFFET may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_WOBBUFFET) < 0x6
	.space 0x6 - (. - gSpeciesName_WOBBUFFET)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4326 gen_2_families_line_4326
	.globl gSpeciesName_GIRAFARIG
gSpeciesName_GIRAFARIG: @ 0x082EA7DE
	.string "キリンリキ"
	.byte EOS
	.if (. - gSpeciesName_GIRAFARIG) > 0x6
	.error "gSpeciesName_GIRAFARIG may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GIRAFARIG) < 0x6
	.space 0x6 - (. - gSpeciesName_GIRAFARIG)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4477 gen_2_families_line_4477
	.globl gSpeciesName_PINECO
gSpeciesName_PINECO: @ 0x082EA7E4
	.string "クヌギダマ"
	.byte EOS
	.if (. - gSpeciesName_PINECO) > 0x6
	.error "gSpeciesName_PINECO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PINECO) < 0x6
	.space 0x6 - (. - gSpeciesName_PINECO)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4551 gen_2_families_line_4551
	.globl gSpeciesName_FORRETRESS
gSpeciesName_FORRETRESS: @ 0x082EA7EA
	.string "フォレトス"
	.byte EOS
	.if (. - gSpeciesName_FORRETRESS) > 0x6
	.error "gSpeciesName_FORRETRESS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_FORRETRESS) < 0x6
	.space 0x6 - (. - gSpeciesName_FORRETRESS)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4627 gen_2_families_line_4627
	.globl gSpeciesName_DUNSPARCE
gSpeciesName_DUNSPARCE: @ 0x082EA7F0
	.string "ノコッチ"
	.byte EOS
	.if (. - gSpeciesName_DUNSPARCE) > 0x5
	.error "gSpeciesName_DUNSPARCE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DUNSPARCE) < 0x5
	.space 0x5 - (. - gSpeciesName_DUNSPARCE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea7f5)

	@ src/data/pokemon/species_info/gen_2_families.h:4833 gen_2_families_line_4833
	.globl gSpeciesName_GLIGAR
gSpeciesName_GLIGAR: @ 0x082EA7F6
	.string "グライガー"
	.byte EOS
	.if (. - gSpeciesName_GLIGAR) > 0x6
	.error "gSpeciesName_GLIGAR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GLIGAR) < 0x6
	.space 0x6 - (. - gSpeciesName_GLIGAR)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:12462 gen_1_families_line_12462 (+1 aliases)
	.globl gSpeciesName_STEELIX
gSpeciesName_STEELIX: @ 0x082EA7FC
	.string "ハガネール"
	.byte EOS
	.if (. - gSpeciesName_STEELIX) > 0x6
	.error "gSpeciesName_STEELIX may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_STEELIX) < 0x6
	.space 0x6 - (. - gSpeciesName_STEELIX)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4995 gen_2_families_line_4995
	.globl gSpeciesName_SNUBBULL
gSpeciesName_SNUBBULL: @ 0x082EA802
	.string "ブルー"
	.byte EOS
	.if (. - gSpeciesName_SNUBBULL) > 0x4
	.error "gSpeciesName_SNUBBULL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SNUBBULL) < 0x4
	.space 0x4 - (. - gSpeciesName_SNUBBULL)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea806)

	@ src/data/pokemon/species_info/gen_2_families.h:5071 gen_2_families_line_5071
	.globl gSpeciesName_GRANBULL
gSpeciesName_GRANBULL: @ 0x082EA808
	.string "グランブル"
	.byte EOS
	.if (. - gSpeciesName_GRANBULL) > 0x6
	.error "gSpeciesName_GRANBULL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GRANBULL) < 0x6
	.space 0x6 - (. - gSpeciesName_GRANBULL)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:5146 gen_2_families_line_5146 (+1 aliases)
	.globl gSpeciesName_QWILFISH
gSpeciesName_QWILFISH: @ 0x082EA80E
	.string "ハリーセン"
	.byte EOS
	.if (. - gSpeciesName_QWILFISH) > 0x6
	.error "gSpeciesName_QWILFISH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_QWILFISH) < 0x6
	.space 0x6 - (. - gSpeciesName_QWILFISH)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16296 gen_1_families_line_16296 (+1 aliases)
	.globl gSpeciesName_SCIZOR
gSpeciesName_SCIZOR: @ 0x082EA814
	.string "ハッサム"
	.byte EOS
	.if (. - gSpeciesName_SCIZOR) > 0x5
	.error "gSpeciesName_SCIZOR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SCIZOR) < 0x5
	.space 0x5 - (. - gSpeciesName_SCIZOR)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea819)

	@ src/data/pokemon/species_info/gen_2_families.h:5365 gen_2_families_line_5365
	.globl gSpeciesName_SHUCKLE
gSpeciesName_SHUCKLE: @ 0x082EA81A
	.string "ツボツボ"
	.byte EOS
	.if (. - gSpeciesName_SHUCKLE) > 0x5
	.error "gSpeciesName_SHUCKLE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SHUCKLE) < 0x5
	.space 0x5 - (. - gSpeciesName_SHUCKLE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea81f)

	@ src/data/pokemon/species_info/gen_2_families.h:5435 gen_2_families_line_5435 (+1 aliases)
	.globl gSpeciesName_HERACROSS
gSpeciesName_HERACROSS: @ 0x082EA820
	.string "ヘラクロス"
	.byte EOS
	.if (. - gSpeciesName_HERACROSS) > 0x6
	.error "gSpeciesName_HERACROSS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_HERACROSS) < 0x6
	.space 0x6 - (. - gSpeciesName_HERACROSS)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:5599 gen_2_families_line_5599 (+1 aliases)
	.globl gSpeciesName_SNEASEL
gSpeciesName_SNEASEL: @ 0x082EA826
	.string "ニューラ"
	.byte EOS
	.if (. - gSpeciesName_SNEASEL) > 0x5
	.error "gSpeciesName_SNEASEL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SNEASEL) < 0x5
	.space 0x5 - (. - gSpeciesName_SNEASEL)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea82b)

	@ src/data/pokemon/species_info/gen_2_families.h:5928 gen_2_families_line_5928
	.globl gSpeciesName_TEDDIURSA
gSpeciesName_TEDDIURSA: @ 0x082EA82C
	.string "ヒメグマ"
	.byte EOS
	.if (. - gSpeciesName_TEDDIURSA) > 0x5
	.error "gSpeciesName_TEDDIURSA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TEDDIURSA) < 0x5
	.space 0x5 - (. - gSpeciesName_TEDDIURSA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea831)

	@ src/data/pokemon/species_info/gen_2_families.h:6000 gen_2_families_line_6000
	.globl gSpeciesName_URSARING
gSpeciesName_URSARING: @ 0x082EA832
	.string "リングマ"
	.byte EOS
	.if (. - gSpeciesName_URSARING) > 0x5
	.error "gSpeciesName_URSARING may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_URSARING) < 0x5
	.space 0x5 - (. - gSpeciesName_URSARING)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea837)

	@ src/data/pokemon/species_info/gen_2_families.h:6216 gen_2_families_line_6216
	.globl gSpeciesName_SLUGMA
gSpeciesName_SLUGMA: @ 0x082EA838
	.string "マグマッグ"
	.byte EOS
	.if (. - gSpeciesName_SLUGMA) > 0x6
	.error "gSpeciesName_SLUGMA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SLUGMA) < 0x6
	.space 0x6 - (. - gSpeciesName_SLUGMA)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:6294 gen_2_families_line_6294
	.globl gSpeciesName_MAGCARGO
gSpeciesName_MAGCARGO: @ 0x082EA83E
	.string "マグカルゴ"
	.byte EOS
	.if (. - gSpeciesName_MAGCARGO) > 0x6
	.error "gSpeciesName_MAGCARGO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MAGCARGO) < 0x6
	.space 0x6 - (. - gSpeciesName_MAGCARGO)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:6369 gen_2_families_line_6369
	.globl gSpeciesName_SWINUB
gSpeciesName_SWINUB: @ 0x082EA844
	.string "ウリムー"
	.byte EOS
	.if (. - gSpeciesName_SWINUB) > 0x5
	.error "gSpeciesName_SWINUB may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SWINUB) < 0x5
	.space 0x5 - (. - gSpeciesName_SWINUB)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea849)

	@ src/data/pokemon/species_info/gen_2_families.h:6444 gen_2_families_line_6444
	.globl gSpeciesName_PILOSWINE
gSpeciesName_PILOSWINE: @ 0x082EA84A
	.string "イノムー"
	.byte EOS
	.if (. - gSpeciesName_PILOSWINE) > 0x5
	.error "gSpeciesName_PILOSWINE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PILOSWINE) < 0x5
	.space 0x5 - (. - gSpeciesName_PILOSWINE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea84f)

	@ src/data/pokemon/species_info/gen_2_families.h:6624 gen_2_families_line_6624 (+1 aliases)
	.globl gSpeciesName_CORSOLA
gSpeciesName_CORSOLA: @ 0x082EA850
	.string "サニーゴ"
	.byte EOS
	.if (. - gSpeciesName_CORSOLA) > 0x5
	.error "gSpeciesName_CORSOLA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CORSOLA) < 0x5
	.space 0x5 - (. - gSpeciesName_CORSOLA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea855)

	@ src/data/pokemon/species_info/gen_2_families.h:6834 gen_2_families_line_6834
	.globl gSpeciesName_REMORAID
gSpeciesName_REMORAID: @ 0x082EA856
	.string "テッポウオ"
	.byte EOS
	.if (. - gSpeciesName_REMORAID) > 0x6
	.error "gSpeciesName_REMORAID may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_REMORAID) < 0x6
	.space 0x6 - (. - gSpeciesName_REMORAID)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:6908 gen_2_families_line_6908
	.globl gSpeciesName_OCTILLERY
gSpeciesName_OCTILLERY: @ 0x082EA85C
	.string "オクタン"
	.byte EOS
	.if (. - gSpeciesName_OCTILLERY) > 0x5
	.error "gSpeciesName_OCTILLERY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_OCTILLERY) < 0x5
	.space 0x5 - (. - gSpeciesName_OCTILLERY)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea861)

	@ src/data/pokemon/species_info/gen_2_families.h:6993 gen_2_families_line_6993
	.globl gSpeciesName_DELIBIRD
gSpeciesName_DELIBIRD: @ 0x082EA862
	.string "デリバード"
	.byte EOS
	.if (. - gSpeciesName_DELIBIRD) > 0x6
	.error "gSpeciesName_DELIBIRD may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DELIBIRD) < 0x6
	.space 0x6 - (. - gSpeciesName_DELIBIRD)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:7142 gen_2_families_line_7142
	.globl gSpeciesName_MANTINE
gSpeciesName_MANTINE: @ 0x082EA868
	.string "マンタイン"
	.byte EOS
	.if (. - gSpeciesName_MANTINE) > 0x6
	.error "gSpeciesName_MANTINE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MANTINE) < 0x6
	.space 0x6 - (. - gSpeciesName_MANTINE)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:7215 gen_2_families_line_7215 (+1 aliases)
	.globl gSpeciesName_SKARMORY
gSpeciesName_SKARMORY: @ 0x082EA86E
	.string "エアームド"
	.byte EOS
	.if (. - gSpeciesName_SKARMORY) > 0x6
	.error "gSpeciesName_SKARMORY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SKARMORY) < 0x6
	.space 0x6 - (. - gSpeciesName_SKARMORY)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:7347 gen_2_families_line_7347
	.globl gSpeciesName_HOUNDOUR
gSpeciesName_HOUNDOUR: @ 0x082EA874
	.string "デルビル"
	.byte EOS
	.if (. - gSpeciesName_HOUNDOUR) > 0x5
	.error "gSpeciesName_HOUNDOUR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_HOUNDOUR) < 0x5
	.space 0x5 - (. - gSpeciesName_HOUNDOUR)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea879)

	@ src/data/pokemon/species_info/gen_2_families.h:7415 gen_2_families_line_7415 (+1 aliases)
	.globl gSpeciesName_HOUNDOOM
gSpeciesName_HOUNDOOM: @ 0x082EA87A
	.string "ヘルガー"
	.byte EOS
	.if (. - gSpeciesName_HOUNDOOM) > 0x5
	.error "gSpeciesName_HOUNDOOM may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_HOUNDOOM) < 0x5
	.space 0x5 - (. - gSpeciesName_HOUNDOOM)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea87f)

	@ src/data/pokemon/species_info/gen_1_families.h:15437 gen_1_families_line_15437
	.globl gSpeciesName_KINGDRA
gSpeciesName_KINGDRA: @ 0x082EA880
	.string "キングドラ"
	.byte EOS
	.if (. - gSpeciesName_KINGDRA) > 0x6
	.error "gSpeciesName_KINGDRA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_KINGDRA) < 0x6
	.space 0x6 - (. - gSpeciesName_KINGDRA)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:7571 gen_2_families_line_7571
	.globl gSpeciesName_PHANPY
gSpeciesName_PHANPY: @ 0x082EA886
	.string "ゴマゾウ"
	.byte EOS
	.if (. - gSpeciesName_PHANPY) > 0x5
	.error "gSpeciesName_PHANPY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PHANPY) < 0x5
	.space 0x5 - (. - gSpeciesName_PHANPY)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea88b)

	@ src/data/pokemon/species_info/gen_2_families.h:7645 gen_2_families_line_7645
	.globl gSpeciesName_DONPHAN
gSpeciesName_DONPHAN: @ 0x082EA88C
	.string "ドンファン"
	.byte EOS
	.if (. - gSpeciesName_DONPHAN) > 0x6
	.error "gSpeciesName_DONPHAN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DONPHAN) < 0x6
	.space 0x6 - (. - gSpeciesName_DONPHAN)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:18864 gen_1_families_line_18864
	.globl gSpeciesName_PORYGON2
gSpeciesName_PORYGON2: @ 0x082EA892
	.string "ポリゴン2"
	.byte EOS
	.if (. - gSpeciesName_PORYGON2) > 0x6
	.error "gSpeciesName_PORYGON2 may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PORYGON2) < 0x6
	.space 0x6 - (. - gSpeciesName_PORYGON2)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:7731 gen_2_families_line_7731
	.globl gSpeciesName_STANTLER
gSpeciesName_STANTLER: @ 0x082EA898
	.string "オドシシ"
	.byte EOS
	.if (. - gSpeciesName_STANTLER) > 0x5
	.error "gSpeciesName_STANTLER may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_STANTLER) < 0x5
	.space 0x5 - (. - gSpeciesName_STANTLER)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea89d)

	@ src/data/pokemon/species_info/gen_2_families.h:7874 gen_2_families_line_7874
	.globl gSpeciesName_SMEARGLE
gSpeciesName_SMEARGLE: @ 0x082EA89E
	.string "ドーブル"
	.byte EOS
	.if (. - gSpeciesName_SMEARGLE) > 0x5
	.error "gSpeciesName_SMEARGLE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SMEARGLE) < 0x5
	.space 0x5 - (. - gSpeciesName_SMEARGLE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea8a3)

	@ src/data/pokemon/species_info/gen_1_families.h:13800 gen_1_families_line_13800
	.globl gSpeciesName_TYROGUE
gSpeciesName_TYROGUE: @ 0x082EA8A4
	.string "バルキー"
	.byte EOS
	.if (. - gSpeciesName_TYROGUE) > 0x5
	.error "gSpeciesName_TYROGUE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TYROGUE) < 0x5
	.space 0x5 - (. - gSpeciesName_TYROGUE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea8a9)

	@ src/data/pokemon/species_info/gen_1_families.h:14026 gen_1_families_line_14026
	.globl gSpeciesName_HITMONTOP
gSpeciesName_HITMONTOP: @ 0x082EA8AA
	.string "カポエラー"
	.byte EOS
	.if (. - gSpeciesName_HITMONTOP) > 0x6
	.error "gSpeciesName_HITMONTOP may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_HITMONTOP) < 0x6
	.space 0x6 - (. - gSpeciesName_HITMONTOP)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16523 gen_1_families_line_16523
	.globl gSpeciesName_SMOOCHUM
gSpeciesName_SMOOCHUM: @ 0x082EA8B0
	.string "ムチュール"
	.byte EOS
	.if (. - gSpeciesName_SMOOCHUM) > 0x6
	.error "gSpeciesName_SMOOCHUM may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SMOOCHUM) < 0x6
	.space 0x6 - (. - gSpeciesName_SMOOCHUM)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16671 gen_1_families_line_16671
	.globl gSpeciesName_ELEKID
gSpeciesName_ELEKID: @ 0x082EA8B6
	.string "エレキッド"
	.byte EOS
	.if (. - gSpeciesName_ELEKID) > 0x6
	.error "gSpeciesName_ELEKID may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ELEKID) < 0x6
	.space 0x6 - (. - gSpeciesName_ELEKID)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:16897 gen_1_families_line_16897
	.globl gSpeciesName_MAGBY
gSpeciesName_MAGBY: @ 0x082EA8BC
	.string "ブビィ"
	.byte EOS
	.if (. - gSpeciesName_MAGBY) > 0x4
	.error "gSpeciesName_MAGBY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MAGBY) < 0x4
	.space 0x4 - (. - gSpeciesName_MAGBY)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea8c0)

	@ src/data/pokemon/species_info/gen_2_families.h:7951 gen_2_families_line_7951
	.globl gSpeciesName_MILTANK
gSpeciesName_MILTANK: @ 0x082EA8C2
	.string "ミルタンク"
	.byte EOS
	.if (. - gSpeciesName_MILTANK) > 0x6
	.error "gSpeciesName_MILTANK may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MILTANK) < 0x6
	.space 0x6 - (. - gSpeciesName_MILTANK)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:14889 gen_1_families_line_14889
	.globl gSpeciesName_BLISSEY
gSpeciesName_BLISSEY: @ 0x082EA8C8
	.string "ハピナス"
	.byte EOS
	.if (. - gSpeciesName_BLISSEY) > 0x5
	.error "gSpeciesName_BLISSEY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_BLISSEY) < 0x5
	.space 0x5 - (. - gSpeciesName_BLISSEY)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea8cd)

	@ src/data/pokemon/species_info/gen_2_families.h:8031 gen_2_families_line_8031
	.globl gSpeciesName_RAIKOU
gSpeciesName_RAIKOU: @ 0x082EA8CE
	.string "ライコウ"
	.byte EOS
	.if (. - gSpeciesName_RAIKOU) > 0x5
	.error "gSpeciesName_RAIKOU may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_RAIKOU) < 0x5
	.space 0x5 - (. - gSpeciesName_RAIKOU)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea8d3)

	@ src/data/pokemon/species_info/gen_2_families.h:8113 gen_2_families_line_8113
	.globl gSpeciesName_ENTEI
gSpeciesName_ENTEI: @ 0x082EA8D4
	.string "エンテイ"
	.byte EOS
	.if (. - gSpeciesName_ENTEI) > 0x5
	.error "gSpeciesName_ENTEI may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ENTEI) < 0x5
	.space 0x5 - (. - gSpeciesName_ENTEI)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea8d9)

	@ src/data/pokemon/species_info/gen_2_families.h:8194 gen_2_families_line_8194
	.globl gSpeciesName_SUICUNE
gSpeciesName_SUICUNE: @ 0x082EA8DA
	.string "スイクン"
	.byte EOS
	.if (. - gSpeciesName_SUICUNE) > 0x5
	.error "gSpeciesName_SUICUNE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SUICUNE) < 0x5
	.space 0x5 - (. - gSpeciesName_SUICUNE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea8df)

	@ src/data/pokemon/species_info/gen_2_families.h:8264 gen_2_families_line_8264
	.globl gSpeciesName_LARVITAR
gSpeciesName_LARVITAR: @ 0x082EA8E0
	.string "ヨーギラス"
	.byte EOS
	.if (. - gSpeciesName_LARVITAR) > 0x6
	.error "gSpeciesName_LARVITAR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LARVITAR) < 0x6
	.space 0x6 - (. - gSpeciesName_LARVITAR)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:8334 gen_2_families_line_8334
	.globl gSpeciesName_PUPITAR
gSpeciesName_PUPITAR: @ 0x082EA8E6
	.string "サナギラス"
	.byte EOS
	.if (. - gSpeciesName_PUPITAR) > 0x6
	.error "gSpeciesName_PUPITAR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PUPITAR) < 0x6
	.space 0x6 - (. - gSpeciesName_PUPITAR)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:8407 gen_2_families_line_8407 (+1 aliases)
	.globl gSpeciesName_TYRANITAR
gSpeciesName_TYRANITAR: @ 0x082EA8EC
	.string "バンギラス"
	.byte EOS
	.if (. - gSpeciesName_TYRANITAR) > 0x6
	.error "gSpeciesName_TYRANITAR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TYRANITAR) < 0x6
	.space 0x6 - (. - gSpeciesName_TYRANITAR)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:8559 gen_2_families_line_8559
	.globl gSpeciesName_LUGIA
gSpeciesName_LUGIA: @ 0x082EA8F2
	.string "ルギア"
	.byte EOS
	.if (. - gSpeciesName_LUGIA) > 0x4
	.error "gSpeciesName_LUGIA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LUGIA) < 0x4
	.space 0x4 - (. - gSpeciesName_LUGIA)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea8f6)

	@ src/data/pokemon/species_info/gen_2_families.h:8650 gen_2_families_line_8650
	.globl gSpeciesName_HO_OH
gSpeciesName_HO_OH: @ 0x082EA8F8
	.string "ホウオウ"
	.byte EOS
	.if (. - gSpeciesName_HO_OH) > 0x5
	.error "gSpeciesName_HO_OH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_HO_OH) < 0x5
	.space 0x5 - (. - gSpeciesName_HO_OH)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea8fd)

	@ src/data/pokemon/species_info/gen_2_families.h:8730 gen_2_families_line_8730
	.globl gSpeciesName_CELEBI
gSpeciesName_CELEBI: @ 0x082EA8FE
	.string "セレビィ"
	.byte EOS
	.if (. - gSpeciesName_CELEBI) > 0x5
	.error "gSpeciesName_CELEBI may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CELEBI) < 0x5
	.space 0x5 - (. - gSpeciesName_CELEBI)
	.endif
	.byte 0 @ セレビィ名の末尾パディング
	.string "？" @ 未使用種族名
	.byte EOS
	.space 0x2, 0

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
	.space 0x2, 0 @ name padding (was 0x2ea90c)

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
	.space 0x2, 0 @ name padding (was 0x2ea912)

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
	.space 0x2, 0 @ name padding (was 0x2ea918)

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
	.space 0x2, 0 @ name padding (was 0x2ea91e)

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
	.space 0x2, 0 @ name padding (was 0x2ea924)

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
	.space 0x2, 0 @ name padding (was 0x2ea92a)

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
	.space 0x2, 0 @ name padding (was 0x2ea930)

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
	.space 0x2, 0 @ name padding (was 0x2ea936)

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
	.space 0x2, 0 @ name padding (was 0x2ea93c)

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
	.space 0x2, 0 @ name padding (was 0x2ea942)

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
	.space 0x2, 0 @ name padding (was 0x2ea948)

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
	.space 0x2, 0 @ name padding (was 0x2ea94e)

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
	.space 0x2, 0 @ name padding (was 0x2ea954)

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
	.space 0x2, 0 @ name padding (was 0x2ea95a)

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
	.space 0x2, 0 @ name padding (was 0x2ea960)

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
	.space 0x2, 0 @ name padding (was 0x2ea966)

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
	.space 0x2, 0 @ name padding (was 0x2ea96c)

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
	.space 0x2, 0 @ name padding (was 0x2ea972)

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
	.space 0x2, 0 @ name padding (was 0x2ea978)

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
	.space 0x2, 0 @ name padding (was 0x2ea97e)

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
	.space 0x2, 0 @ name padding (was 0x2ea984)

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
	.space 0x2, 0 @ name padding (was 0x2ea98a)

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
	.space 0x2, 0 @ name padding (was 0x2ea990)

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
	.space 0x4, 0 @ name padding (was 0x2ea996)

	@ src/data/pokemon/species_info/gen_3_families.h:26 gen_3_families_line_26
	.globl gSpeciesName_TREECKO
gSpeciesName_TREECKO: @ 0x082EA99A
	.string "キモリ"
	.byte EOS
	.if (. - gSpeciesName_TREECKO) > 0x4
	.error "gSpeciesName_TREECKO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TREECKO) < 0x4
	.space 0x4 - (. - gSpeciesName_TREECKO)
	.endif
	.space 0x2, 0 @ name padding (was 0x2ea99e)

	@ src/data/pokemon/species_info/gen_3_families.h:97 gen_3_families_line_97
	.globl gSpeciesName_GROVYLE
gSpeciesName_GROVYLE: @ 0x082EA9A0
	.string "ジュプトル"
	.byte EOS
	.if (. - gSpeciesName_GROVYLE) > 0x6
	.error "gSpeciesName_GROVYLE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GROVYLE) < 0x6
	.space 0x6 - (. - gSpeciesName_GROVYLE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:173 gen_3_families_line_173 (+1 aliases)
	.globl gSpeciesName_SCEPTILE
gSpeciesName_SCEPTILE: @ 0x082EA9A6
	.string "ジュカイン"
	.byte EOS
	.if (. - gSpeciesName_SCEPTILE) > 0x6
	.error "gSpeciesName_SCEPTILE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SCEPTILE) < 0x6
	.space 0x6 - (. - gSpeciesName_SCEPTILE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:318 gen_3_families_line_318
	.globl gSpeciesName_TORCHIC
gSpeciesName_TORCHIC: @ 0x082EA9AC
	.string "アチャモ"
	.byte EOS
	.if (. - gSpeciesName_TORCHIC) > 0x5
	.error "gSpeciesName_TORCHIC may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TORCHIC) < 0x5
	.space 0x5 - (. - gSpeciesName_TORCHIC)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea9b1)

	@ src/data/pokemon/species_info/gen_3_families.h:403 gen_3_families_line_403
	.globl gSpeciesName_COMBUSKEN
gSpeciesName_COMBUSKEN: @ 0x082EA9B2
	.string "ワカシャモ"
	.byte EOS
	.if (. - gSpeciesName_COMBUSKEN) > 0x6
	.error "gSpeciesName_COMBUSKEN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_COMBUSKEN) < 0x6
	.space 0x6 - (. - gSpeciesName_COMBUSKEN)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:490 gen_3_families_line_490 (+1 aliases)
	.globl gSpeciesName_BLAZIKEN
gSpeciesName_BLAZIKEN: @ 0x082EA9B8
	.string "バシャーモ"
	.byte EOS
	.if (. - gSpeciesName_BLAZIKEN) > 0x6
	.error "gSpeciesName_BLAZIKEN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_BLAZIKEN) < 0x6
	.space 0x6 - (. - gSpeciesName_BLAZIKEN)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:650 gen_3_families_line_650
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gSpeciesName_MUDKIP
gSpeciesName_MUDKIP: @ 0x082EA9BE
	.string "ミズゴロウ"
	.byte EOS
	.if (. - gSpeciesName_MUDKIP) != 0x6
	.error "gSpeciesName_MUDKIP must retain its original byte length"
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:721 gen_3_families_line_721
	.globl gSpeciesName_MARSHTOMP
gSpeciesName_MARSHTOMP: @ 0x082EA9C4
	.string "ヌマクロー"
	.byte EOS
	.if (. - gSpeciesName_MARSHTOMP) > 0x6
	.error "gSpeciesName_MARSHTOMP may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MARSHTOMP) < 0x6
	.space 0x6 - (. - gSpeciesName_MARSHTOMP)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:801 gen_3_families_line_801 (+1 aliases)
	.globl gSpeciesName_SWAMPERT
gSpeciesName_SWAMPERT: @ 0x082EA9CA
	.string "ラグラージ"
	.byte EOS
	.if (. - gSpeciesName_SWAMPERT) > 0x6
	.error "gSpeciesName_SWAMPERT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SWAMPERT) < 0x6
	.space 0x6 - (. - gSpeciesName_SWAMPERT)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:958 gen_3_families_line_958 (+3 aliases)
	.globl gSpeciesName_POOCHYENA
gSpeciesName_POOCHYENA: @ 0x082EA9D0
	.string "ポチエナ"
	.byte EOS
	.if (. - gSpeciesName_POOCHYENA) > 0x5
	.error "gSpeciesName_POOCHYENA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_POOCHYENA) < 0x5
	.space 0x5 - (. - gSpeciesName_POOCHYENA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea9d5)

	@ src/data/pokemon/species_info/gen_3_families.h:1031 gen_3_families_line_1031
	.globl gSpeciesName_MIGHTYENA
gSpeciesName_MIGHTYENA: @ 0x082EA9D6
	.string "グラエナ"
	.byte EOS
	.if (. - gSpeciesName_MIGHTYENA) > 0x5
	.error "gSpeciesName_MIGHTYENA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MIGHTYENA) < 0x5
	.space 0x5 - (. - gSpeciesName_MIGHTYENA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea9db)

	@ src/data/pokemon/species_info/gen_3_families.h:1114 gen_3_families_line_1114 (+3 aliases)
	.globl gSpeciesName_ZIGZAGOON
gSpeciesName_ZIGZAGOON: @ 0x082EA9DC
	.string "ジグザグマ"
	.byte EOS
	.if (. - gSpeciesName_ZIGZAGOON) > 0x6
	.error "gSpeciesName_ZIGZAGOON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ZIGZAGOON) < 0x6
	.space 0x6 - (. - gSpeciesName_ZIGZAGOON)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:1192 gen_3_families_line_1192 (+1 aliases)
	.globl gSpeciesName_LINOONE
gSpeciesName_LINOONE: @ 0x082EA9E2
	.string "マッスグマ"
	.byte EOS
	.if (. - gSpeciesName_LINOONE) > 0x6
	.error "gSpeciesName_LINOONE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LINOONE) < 0x6
	.space 0x6 - (. - gSpeciesName_LINOONE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:1470 gen_3_families_line_1470
	.globl gSpeciesName_WURMPLE
gSpeciesName_WURMPLE: @ 0x082EA9E8
	.string "ケムッソ"
	.byte EOS
	.if (. - gSpeciesName_WURMPLE) > 0x5
	.error "gSpeciesName_WURMPLE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_WURMPLE) < 0x5
	.space 0x5 - (. - gSpeciesName_WURMPLE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea9ed)

	@ src/data/pokemon/species_info/gen_3_families.h:1541 gen_3_families_line_1541
	.globl gSpeciesName_SILCOON
gSpeciesName_SILCOON: @ 0x082EA9EE
	.string "カラサリス"
	.byte EOS
	.if (. - gSpeciesName_SILCOON) > 0x6
	.error "gSpeciesName_SILCOON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SILCOON) < 0x6
	.space 0x6 - (. - gSpeciesName_SILCOON)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:1619 gen_3_families_line_1619
	.globl gSpeciesName_BEAUTIFLY
gSpeciesName_BEAUTIFLY: @ 0x082EA9F4
	.string "アゲハント"
	.byte EOS
	.if (. - gSpeciesName_BEAUTIFLY) > 0x6
	.error "gSpeciesName_BEAUTIFLY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_BEAUTIFLY) < 0x6
	.space 0x6 - (. - gSpeciesName_BEAUTIFLY)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:1713 gen_3_families_line_1713
	.globl gSpeciesName_CASCOON
gSpeciesName_CASCOON: @ 0x082EA9FA
	.string "マユルド"
	.byte EOS
	.if (. - gSpeciesName_CASCOON) > 0x5
	.error "gSpeciesName_CASCOON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CASCOON) < 0x5
	.space 0x5 - (. - gSpeciesName_CASCOON)
	.endif
	.space 0x1, 0 @ name padding (was 0x2ea9ff)

	@ src/data/pokemon/species_info/gen_3_families.h:1795 gen_3_families_line_1795 (+1 aliases)
	.globl gSpeciesName_DUSTOX
gSpeciesName_DUSTOX: @ 0x082EAA00
	.string "ドクケイル"
	.byte EOS
	.if (. - gSpeciesName_DUSTOX) > 0x6
	.error "gSpeciesName_DUSTOX may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DUSTOX) < 0x6
	.space 0x6 - (. - gSpeciesName_DUSTOX)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:1891 gen_3_families_line_1891 (+1 aliases)
	.globl gSpeciesName_LOTAD
gSpeciesName_LOTAD: @ 0x082EAA06
	.string "ハスボー"
	.byte EOS
	.if (. - gSpeciesName_LOTAD) > 0x5
	.error "gSpeciesName_LOTAD may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LOTAD) < 0x5
	.space 0x5 - (. - gSpeciesName_LOTAD)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaa0b)

	@ src/data/pokemon/species_info/gen_3_families.h:1962 gen_3_families_line_1962
	.globl gSpeciesName_LOMBRE
gSpeciesName_LOMBRE: @ 0x082EAA0C
	.string "ハスブレロ"
	.byte EOS
	.if (. - gSpeciesName_LOMBRE) > 0x6
	.error "gSpeciesName_LOMBRE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LOMBRE) < 0x6
	.space 0x6 - (. - gSpeciesName_LOMBRE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:2039 gen_3_families_line_2039
	.globl gSpeciesName_LUDICOLO
gSpeciesName_LUDICOLO: @ 0x082EAA12
	.string "ルンパッパ"
	.byte EOS
	.if (. - gSpeciesName_LUDICOLO) > 0x6
	.error "gSpeciesName_LUDICOLO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LUDICOLO) < 0x6
	.space 0x6 - (. - gSpeciesName_LUDICOLO)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:2126 gen_3_families_line_2126
	.globl gSpeciesName_SEEDOT
gSpeciesName_SEEDOT: @ 0x082EAA18
	.string "タネボー"
	.byte EOS
	.if (. - gSpeciesName_SEEDOT) > 0x5
	.error "gSpeciesName_SEEDOT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SEEDOT) < 0x5
	.space 0x5 - (. - gSpeciesName_SEEDOT)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaa1d)

	@ src/data/pokemon/species_info/gen_3_families.h:2202 gen_3_families_line_2202
	.globl gSpeciesName_NUZLEAF
gSpeciesName_NUZLEAF: @ 0x082EAA1E
	.string "コノハナ"
	.byte EOS
	.if (. - gSpeciesName_NUZLEAF) > 0x5
	.error "gSpeciesName_NUZLEAF may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_NUZLEAF) < 0x5
	.space 0x5 - (. - gSpeciesName_NUZLEAF)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaa23)

	@ src/data/pokemon/species_info/gen_3_families.h:2300 gen_3_families_line_2300
	.globl gSpeciesName_SHIFTRY
gSpeciesName_SHIFTRY: @ 0x082EAA24
	.string "ダーテング"
	.byte EOS
	.if (. - gSpeciesName_SHIFTRY) > 0x6
	.error "gSpeciesName_SHIFTRY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SHIFTRY) < 0x6
	.space 0x6 - (. - gSpeciesName_SHIFTRY)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3690 gen_3_families_line_3690 (+1 aliases)
	.globl gSpeciesName_NINCADA
gSpeciesName_NINCADA: @ 0x082EAA2A
	.string "ツチニン"
	.byte EOS
	.if (. - gSpeciesName_NINCADA) > 0x5
	.error "gSpeciesName_NINCADA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_NINCADA) < 0x5
	.space 0x5 - (. - gSpeciesName_NINCADA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaa2f)

	@ src/data/pokemon/species_info/gen_3_families.h:3766 gen_3_families_line_3766
	.globl gSpeciesName_NINJASK
gSpeciesName_NINJASK: @ 0x082EAA30
	.string "テッカニン"
	.byte EOS
	.if (. - gSpeciesName_NINJASK) > 0x6
	.error "gSpeciesName_NINJASK may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_NINJASK) < 0x6
	.space 0x6 - (. - gSpeciesName_NINJASK)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3849 gen_3_families_line_3849 (+2 aliases)
	.globl gSpeciesName_SHEDINJA
gSpeciesName_SHEDINJA: @ 0x082EAA36
	.string "ヌケニン"
	.byte EOS
	.if (. - gSpeciesName_SHEDINJA) > 0x5
	.error "gSpeciesName_SHEDINJA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SHEDINJA) < 0x5
	.space 0x5 - (. - gSpeciesName_SHEDINJA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaa3b)

	@ src/data/pokemon/species_info/gen_3_families.h:2382 gen_3_families_line_2382 (+1 aliases)
	.globl gSpeciesName_TAILLOW
gSpeciesName_TAILLOW: @ 0x082EAA3C
	.string "スバメ"
	.byte EOS
	.if (. - gSpeciesName_TAILLOW) > 0x4
	.error "gSpeciesName_TAILLOW may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TAILLOW) < 0x4
	.space 0x4 - (. - gSpeciesName_TAILLOW)
	.endif
	.space 0x2, 0 @ name padding (was 0x2eaa40)

	@ src/data/pokemon/species_info/gen_3_families.h:2464 gen_3_families_line_2464
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gSpeciesName_SWELLOW
gSpeciesName_SWELLOW: @ 0x082EAA42
	.string "オオスバメ"
	.byte EOS
	.if (. - gSpeciesName_SWELLOW) != 0x6
	.error "gSpeciesName_SWELLOW must retain its original byte length"
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3312 gen_3_families_line_3312 (+1 aliases)
	.globl gSpeciesName_SHROOMISH
gSpeciesName_SHROOMISH: @ 0x082EAA48
	.string "キノココ"
	.byte EOS
	.if (. - gSpeciesName_SHROOMISH) > 0x5
	.error "gSpeciesName_SHROOMISH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SHROOMISH) < 0x5
	.space 0x5 - (. - gSpeciesName_SHROOMISH)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaa4d)

	@ src/data/pokemon/species_info/gen_3_families.h:3395 gen_3_families_line_3395
	.globl gSpeciesName_BRELOOM
gSpeciesName_BRELOOM: @ 0x082EAA4E
	.string "キノガッサ"
	.byte EOS
	.if (. - gSpeciesName_BRELOOM) > 0x6
	.error "gSpeciesName_BRELOOM may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_BRELOOM) < 0x6
	.space 0x6 - (. - gSpeciesName_BRELOOM)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7267 gen_3_families_line_7267
	.globl gSpeciesName_SPINDA
gSpeciesName_SPINDA: @ 0x082EAA54
	.string "パッチール"
	.byte EOS
	.if (. - gSpeciesName_SPINDA) > 0x6
	.error "gSpeciesName_SPINDA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SPINDA) < 0x6
	.space 0x6 - (. - gSpeciesName_SPINDA)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:2538 gen_3_families_line_2538 (+1 aliases)
	.globl gSpeciesName_WINGULL
gSpeciesName_WINGULL: @ 0x082EAA5A
	.string "キャモメ"
	.byte EOS
	.if (. - gSpeciesName_WINGULL) > 0x5
	.error "gSpeciesName_WINGULL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_WINGULL) < 0x5
	.space 0x5 - (. - gSpeciesName_WINGULL)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaa5f)

	@ src/data/pokemon/species_info/gen_3_families.h:2619 gen_3_families_line_2619
	.globl gSpeciesName_PELIPPER
gSpeciesName_PELIPPER: @ 0x082EAA60
	.string "ペリッパー"
	.byte EOS
	.if (. - gSpeciesName_PELIPPER) > 0x6
	.error "gSpeciesName_PELIPPER may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PELIPPER) < 0x6
	.space 0x6 - (. - gSpeciesName_PELIPPER)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3150 gen_3_families_line_3150
	.globl gSpeciesName_SURSKIT
gSpeciesName_SURSKIT: @ 0x082EAA66
	.string "アメタマ"
	.byte EOS
	.if (. - gSpeciesName_SURSKIT) > 0x5
	.error "gSpeciesName_SURSKIT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SURSKIT) < 0x5
	.space 0x5 - (. - gSpeciesName_SURSKIT)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaa6b)

	@ src/data/pokemon/species_info/gen_3_families.h:3229 gen_3_families_line_3229
	.globl gSpeciesName_MASQUERAIN
gSpeciesName_MASQUERAIN: @ 0x082EAA6C
	.string "アメモース"
	.byte EOS
	.if (. - gSpeciesName_MASQUERAIN) > 0x6
	.error "gSpeciesName_MASQUERAIN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MASQUERAIN) < 0x6
	.space 0x6 - (. - gSpeciesName_MASQUERAIN)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:6637 gen_3_families_line_6637
	.globl gSpeciesName_WAILMER
gSpeciesName_WAILMER: @ 0x082EAA72
	.string "ホエルコ"
	.byte EOS
	.if (. - gSpeciesName_WAILMER) > 0x5
	.error "gSpeciesName_WAILMER may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_WAILMER) < 0x5
	.space 0x5 - (. - gSpeciesName_WAILMER)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaa77)

	@ src/data/pokemon/species_info/gen_3_families.h:6710 gen_3_families_line_6710
	.globl gSpeciesName_WAILORD
gSpeciesName_WAILORD: @ 0x082EAA78
	.string "ホエルオー"
	.byte EOS
	.if (. - gSpeciesName_WAILORD) > 0x6
	.error "gSpeciesName_WAILORD may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_WAILORD) < 0x6
	.space 0x6 - (. - gSpeciesName_WAILORD)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:4448 gen_3_families_line_4448
	.globl gSpeciesName_SKITTY
gSpeciesName_SKITTY: @ 0x082EAA7E
	.string "エネコ"
	.byte EOS
	.if (. - gSpeciesName_SKITTY) > 0x4
	.error "gSpeciesName_SKITTY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SKITTY) < 0x4
	.space 0x4 - (. - gSpeciesName_SKITTY)
	.endif
	.space 0x2, 0 @ name padding (was 0x2eaa82)

	@ src/data/pokemon/species_info/gen_3_families.h:4528 gen_3_families_line_4528
	.globl gSpeciesName_DELCATTY
gSpeciesName_DELCATTY: @ 0x082EAA84
	.string "エネコロロ"
	.byte EOS
	.if (. - gSpeciesName_DELCATTY) > 0x6
	.error "gSpeciesName_DELCATTY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DELCATTY) < 0x6
	.space 0x6 - (. - gSpeciesName_DELCATTY)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:9543 gen_3_families_line_9543
	.globl gSpeciesName_KECLEON
gSpeciesName_KECLEON: @ 0x082EAA8A
	.string "カクレオン"
	.byte EOS
	.if (. - gSpeciesName_KECLEON) > 0x6
	.error "gSpeciesName_KECLEON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_KECLEON) < 0x6
	.space 0x6 - (. - gSpeciesName_KECLEON)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8585 gen_3_families_line_8585
	.globl gSpeciesName_BALTOY
gSpeciesName_BALTOY: @ 0x082EAA90
	.string "ヤジロン"
	.byte EOS
	.if (. - gSpeciesName_BALTOY) > 0x5
	.error "gSpeciesName_BALTOY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_BALTOY) < 0x5
	.space 0x5 - (. - gSpeciesName_BALTOY)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaa95)

	@ src/data/pokemon/species_info/gen_3_families.h:8659 gen_3_families_line_8659
	.globl gSpeciesName_CLAYDOL
gSpeciesName_CLAYDOL: @ 0x082EAA96
	.string "ネンドール"
	.byte EOS
	.if (. - gSpeciesName_CLAYDOL) > 0x6
	.error "gSpeciesName_CLAYDOL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CLAYDOL) < 0x6
	.space 0x6 - (. - gSpeciesName_CLAYDOL)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:4292 gen_3_families_line_4292
	.globl gSpeciesName_NOSEPASS
gSpeciesName_NOSEPASS: @ 0x082EAA9C
	.string "ノズパス"
	.byte EOS
	.if (. - gSpeciesName_NOSEPASS) > 0x5
	.error "gSpeciesName_NOSEPASS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_NOSEPASS) < 0x5
	.space 0x5 - (. - gSpeciesName_NOSEPASS)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaaa1)

	@ src/data/pokemon/species_info/gen_3_families.h:7041 gen_3_families_line_7041
	.globl gSpeciesName_TORKOAL
gSpeciesName_TORKOAL: @ 0x082EAAA2
	.string "コータス"
	.byte EOS
	.if (. - gSpeciesName_TORKOAL) > 0x5
	.error "gSpeciesName_TORKOAL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TORKOAL) < 0x5
	.space 0x5 - (. - gSpeciesName_TORKOAL)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaaa7)

	@ src/data/pokemon/species_info/gen_3_families.h:4603 gen_3_families_line_4603 (+1 aliases)
	.globl gSpeciesName_SABLEYE
gSpeciesName_SABLEYE: @ 0x082EAAA8
	.string "ヤミラミ"
	.byte EOS
	.if (. - gSpeciesName_SABLEYE) > 0x5
	.error "gSpeciesName_SABLEYE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SABLEYE) < 0x5
	.space 0x5 - (. - gSpeciesName_SABLEYE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaaad)

	@ src/data/pokemon/species_info/gen_3_families.h:8277 gen_3_families_line_8277
	.globl gSpeciesName_BARBOACH
gSpeciesName_BARBOACH: @ 0x082EAAAE
	.string "ドジョッチ"
	.byte EOS
	.if (. - gSpeciesName_BARBOACH) > 0x6
	.error "gSpeciesName_BARBOACH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_BARBOACH) < 0x6
	.space 0x6 - (. - gSpeciesName_BARBOACH)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8361 gen_3_families_line_8361
	.globl gSpeciesName_WHISCASH
gSpeciesName_WHISCASH: @ 0x082EAAB4
	.string "ナマズン"
	.byte EOS
	.if (. - gSpeciesName_WHISCASH) > 0x5
	.error "gSpeciesName_WHISCASH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_WHISCASH) < 0x5
	.space 0x5 - (. - gSpeciesName_WHISCASH)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaab9)

	@ src/data/pokemon/species_info/gen_3_families.h:11534 gen_3_families_line_11534
	.globl gSpeciesName_LUVDISC
gSpeciesName_LUVDISC: @ 0x082EAABA
	.string "ラブカス"
	.byte EOS
	.if (. - gSpeciesName_LUVDISC) > 0x5
	.error "gSpeciesName_LUVDISC may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LUVDISC) < 0x5
	.space 0x5 - (. - gSpeciesName_LUVDISC)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaabf)

	@ src/data/pokemon/species_info/gen_3_families.h:8440 gen_3_families_line_8440
	.globl gSpeciesName_CORPHISH
gSpeciesName_CORPHISH: @ 0x082EAAC0
	.string "ヘイガニ"
	.byte EOS
	.if (. - gSpeciesName_CORPHISH) > 0x5
	.error "gSpeciesName_CORPHISH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CORPHISH) < 0x5
	.space 0x5 - (. - gSpeciesName_CORPHISH)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaac5)

	@ src/data/pokemon/species_info/gen_3_families.h:8513 gen_3_families_line_8513
	.globl gSpeciesName_CRAWDAUNT
gSpeciesName_CRAWDAUNT: @ 0x082EAAC6
	.string "シザリガー"
	.byte EOS
	.if (. - gSpeciesName_CRAWDAUNT) > 0x6
	.error "gSpeciesName_CRAWDAUNT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CRAWDAUNT) < 0x6
	.space 0x6 - (. - gSpeciesName_CRAWDAUNT)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:9052 gen_3_families_line_9052
	.globl gSpeciesName_FEEBAS
gSpeciesName_FEEBAS: @ 0x082EAACC
	.string "ヒンバス"
	.byte EOS
	.if (. - gSpeciesName_FEEBAS) > 0x5
	.error "gSpeciesName_FEEBAS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_FEEBAS) < 0x5
	.space 0x5 - (. - gSpeciesName_FEEBAS)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaad1)

	@ src/data/pokemon/species_info/gen_3_families.h:9131 gen_3_families_line_9131
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gSpeciesName_MILOTIC
gSpeciesName_MILOTIC: @ 0x082EAAD2
	.string "ミロカロス"
	.byte EOS
	.if (. - gSpeciesName_MILOTIC) != 0x6
	.error "gSpeciesName_MILOTIC must retain its original byte length"
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:6408 gen_3_families_line_6408 (+1 aliases)
	.globl gSpeciesName_CARVANHA
gSpeciesName_CARVANHA: @ 0x082EAAD8
	.string "キバニア"
	.byte EOS
	.if (. - gSpeciesName_CARVANHA) > 0x5
	.error "gSpeciesName_CARVANHA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CARVANHA) < 0x5
	.space 0x5 - (. - gSpeciesName_CARVANHA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaadd)

	@ src/data/pokemon/species_info/gen_3_families.h:6484 gen_3_families_line_6484 (+1 aliases)
	.globl gSpeciesName_SHARPEDO
gSpeciesName_SHARPEDO: @ 0x082EAADE
	.string "サメハダー"
	.byte EOS
	.if (. - gSpeciesName_SHARPEDO) > 0x6
	.error "gSpeciesName_SHARPEDO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SHARPEDO) < 0x6
	.space 0x6 - (. - gSpeciesName_SHARPEDO)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7350 gen_3_families_line_7350
	.globl gSpeciesName_TRAPINCH
gSpeciesName_TRAPINCH: @ 0x082EAAE4
	.string "ナックラー"
	.byte EOS
	.if (. - gSpeciesName_TRAPINCH) > 0x6
	.error "gSpeciesName_TRAPINCH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TRAPINCH) < 0x6
	.space 0x6 - (. - gSpeciesName_TRAPINCH)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7422 gen_3_families_line_7422
	.globl gSpeciesName_VIBRAVA
gSpeciesName_VIBRAVA: @ 0x082EAAEA
	.string "ビブラーバ"
	.byte EOS
	.if (. - gSpeciesName_VIBRAVA) > 0x6
	.error "gSpeciesName_VIBRAVA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_VIBRAVA) < 0x6
	.space 0x6 - (. - gSpeciesName_VIBRAVA)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7501 gen_3_families_line_7501
	.globl gSpeciesName_FLYGON
gSpeciesName_FLYGON: @ 0x082EAAF0
	.string "フライゴン"
	.byte EOS
	.if (. - gSpeciesName_FLYGON) > 0x6
	.error "gSpeciesName_FLYGON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_FLYGON) < 0x6
	.space 0x6 - (. - gSpeciesName_FLYGON)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:4145 gen_3_families_line_4145
	.globl gSpeciesName_MAKUHITA
gSpeciesName_MAKUHITA: @ 0x082EAAF6
	.string "マクノシタ"
	.byte EOS
	.if (. - gSpeciesName_MAKUHITA) > 0x6
	.error "gSpeciesName_MAKUHITA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MAKUHITA) < 0x6
	.space 0x6 - (. - gSpeciesName_MAKUHITA)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:4221 gen_3_families_line_4221
	.globl gSpeciesName_HARIYAMA
gSpeciesName_HARIYAMA: @ 0x082EAAFC
	.string "ハリテヤマ"
	.byte EOS
	.if (. - gSpeciesName_HARIYAMA) > 0x6
	.error "gSpeciesName_HARIYAMA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_HARIYAMA) < 0x6
	.space 0x6 - (. - gSpeciesName_HARIYAMA)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:5451 gen_3_families_line_5451
	.globl gSpeciesName_ELECTRIKE
gSpeciesName_ELECTRIKE: @ 0x082EAB02
	.string "ラクライ"
	.byte EOS
	.if (. - gSpeciesName_ELECTRIKE) > 0x5
	.error "gSpeciesName_ELECTRIKE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ELECTRIKE) < 0x5
	.space 0x5 - (. - gSpeciesName_ELECTRIKE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eab07)

	@ src/data/pokemon/species_info/gen_3_families.h:5522 gen_3_families_line_5522 (+1 aliases)
	.globl gSpeciesName_MANECTRIC
gSpeciesName_MANECTRIC: @ 0x082EAB08
	.string "ライボルト"
	.byte EOS
	.if (. - gSpeciesName_MANECTRIC) > 0x6
	.error "gSpeciesName_MANECTRIC may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MANECTRIC) < 0x6
	.space 0x6 - (. - gSpeciesName_MANECTRIC)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:6784 gen_3_families_line_6784
	.globl gSpeciesName_NUMEL
gSpeciesName_NUMEL: @ 0x082EAB0E
	.string "ドンメル"
	.byte EOS
	.if (. - gSpeciesName_NUMEL) > 0x5
	.error "gSpeciesName_NUMEL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_NUMEL) < 0x5
	.space 0x5 - (. - gSpeciesName_NUMEL)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eab13)

	@ src/data/pokemon/species_info/gen_3_families.h:6873 gen_3_families_line_6873 (+1 aliases)
	.globl gSpeciesName_CAMERUPT
gSpeciesName_CAMERUPT: @ 0x082EAB14
	.string "バクーダ"
	.byte EOS
	.if (. - gSpeciesName_CAMERUPT) > 0x5
	.error "gSpeciesName_CAMERUPT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CAMERUPT) < 0x5
	.space 0x5 - (. - gSpeciesName_CAMERUPT)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eab19)

	@ src/data/pokemon/species_info/gen_3_families.h:10997 gen_3_families_line_10997
	.globl gSpeciesName_SPHEAL
gSpeciesName_SPHEAL: @ 0x082EAB1A
	.string "タマザラシ"
	.byte EOS
	.if (. - gSpeciesName_SPHEAL) > 0x6
	.error "gSpeciesName_SPHEAL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SPHEAL) < 0x6
	.space 0x6 - (. - gSpeciesName_SPHEAL)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11076 gen_3_families_line_11076
	.globl gSpeciesName_SEALEO
gSpeciesName_SEALEO: @ 0x082EAB20
	.string "トドグラー"
	.byte EOS
	.if (. - gSpeciesName_SEALEO) > 0x6
	.error "gSpeciesName_SEALEO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SEALEO) < 0x6
	.space 0x6 - (. - gSpeciesName_SEALEO)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11156 gen_3_families_line_11156
	.globl gSpeciesName_WALREIN
gSpeciesName_WALREIN: @ 0x082EAB26
	.string "トドゼルガ"
	.byte EOS
	.if (. - gSpeciesName_WALREIN) > 0x6
	.error "gSpeciesName_WALREIN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_WALREIN) < 0x6
	.space 0x6 - (. - gSpeciesName_WALREIN)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7576 gen_3_families_line_7576
	.globl gSpeciesName_CACNEA
gSpeciesName_CACNEA: @ 0x082EAB2C
	.string "サボネア"
	.byte EOS
	.if (. - gSpeciesName_CACNEA) > 0x5
	.error "gSpeciesName_CACNEA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CACNEA) < 0x5
	.space 0x5 - (. - gSpeciesName_CACNEA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eab31)

	@ src/data/pokemon/species_info/gen_3_families.h:7655 gen_3_families_line_7655
	.globl gSpeciesName_CACTURNE
gSpeciesName_CACTURNE: @ 0x082EAB32
	.string "ノクタス"
	.byte EOS
	.if (. - gSpeciesName_CACTURNE) > 0x5
	.error "gSpeciesName_CACTURNE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CACTURNE) < 0x5
	.space 0x5 - (. - gSpeciesName_CACTURNE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eab37)

	@ src/data/pokemon/species_info/gen_3_families.h:10633 gen_3_families_line_10633
	.globl gSpeciesName_SNORUNT
gSpeciesName_SNORUNT: @ 0x082EAB38
	.string "ユキワラシ"
	.byte EOS
	.if (. - gSpeciesName_SNORUNT) > 0x6
	.error "gSpeciesName_SNORUNT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SNORUNT) < 0x6
	.space 0x6 - (. - gSpeciesName_SNORUNT)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:10713 gen_3_families_line_10713 (+1 aliases)
	.globl gSpeciesName_GLALIE
gSpeciesName_GLALIE: @ 0x082EAB3E
	.string "オニゴーリ"
	.byte EOS
	.if (. - gSpeciesName_GLALIE) > 0x6
	.error "gSpeciesName_GLALIE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GLALIE) < 0x6
	.space 0x6 - (. - gSpeciesName_GLALIE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8121 gen_3_families_line_8121
	.globl gSpeciesName_LUNATONE
gSpeciesName_LUNATONE: @ 0x082EAB44
	.string "ルナトーン"
	.byte EOS
	.if (. - gSpeciesName_LUNATONE) > 0x6
	.error "gSpeciesName_LUNATONE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LUNATONE) < 0x6
	.space 0x6 - (. - gSpeciesName_LUNATONE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8201 gen_3_families_line_8201
	.globl gSpeciesName_SOLROCK
gSpeciesName_SOLROCK: @ 0x082EAB4A
	.string "ソルロック"
	.byte EOS
	.if (. - gSpeciesName_SOLROCK) > 0x6
	.error "gSpeciesName_SOLROCK may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SOLROCK) < 0x6
	.space 0x6 - (. - gSpeciesName_SOLROCK)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:2319 gen_2_families_line_2319 (+1 aliases)
	.globl gSpeciesName_AZURILL
gSpeciesName_AZURILL: @ 0x082EAB50
	.string "ルリリ"
	.byte EOS
	.if (. - gSpeciesName_AZURILL) > 0x4
	.error "gSpeciesName_AZURILL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_AZURILL) < 0x4
	.space 0x4 - (. - gSpeciesName_AZURILL)
	.endif
	.space 0x2, 0 @ name padding (was 0x2eab54)

	@ src/data/pokemon/species_info/gen_3_families.h:7113 gen_3_families_line_7113
	.globl gSpeciesName_SPOINK
gSpeciesName_SPOINK: @ 0x082EAB56
	.string "バネブー"
	.byte EOS
	.if (. - gSpeciesName_SPOINK) > 0x5
	.error "gSpeciesName_SPOINK may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SPOINK) < 0x5
	.space 0x5 - (. - gSpeciesName_SPOINK)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eab5b)

	@ src/data/pokemon/species_info/gen_3_families.h:7190 gen_3_families_line_7190
	.globl gSpeciesName_GRUMPIG
gSpeciesName_GRUMPIG: @ 0x082EAB5C
	.string "ブーピッグ"
	.byte EOS
	.if (. - gSpeciesName_GRUMPIG) > 0x6
	.error "gSpeciesName_GRUMPIG may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GRUMPIG) < 0x6
	.space 0x6 - (. - gSpeciesName_GRUMPIG)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:5673 gen_3_families_line_5673
	.globl gSpeciesName_PLUSLE
gSpeciesName_PLUSLE: @ 0x082EAB62
	.string "プラスル"
	.byte EOS
	.if (. - gSpeciesName_PLUSLE) > 0x5
	.error "gSpeciesName_PLUSLE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_PLUSLE) < 0x5
	.space 0x5 - (. - gSpeciesName_PLUSLE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eab67)

	@ src/data/pokemon/species_info/gen_3_families.h:5750 gen_3_families_line_5750
	.globl gSpeciesName_MINUN
gSpeciesName_MINUN: @ 0x082EAB68
	.string "マイナン"
	.byte EOS
	.if (. - gSpeciesName_MINUN) > 0x5
	.error "gSpeciesName_MINUN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MINUN) < 0x5
	.space 0x5 - (. - gSpeciesName_MINUN)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eab6d)

	@ src/data/pokemon/species_info/gen_3_families.h:4759 gen_3_families_line_4759 (+1 aliases)
	.globl gSpeciesName_MAWILE
gSpeciesName_MAWILE: @ 0x082EAB6E
	.string "クチート"
	.byte EOS
	.if (. - gSpeciesName_MAWILE) > 0x5
	.error "gSpeciesName_MAWILE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MAWILE) < 0x5
	.space 0x5 - (. - gSpeciesName_MAWILE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eab73)

	@ src/data/pokemon/species_info/gen_3_families.h:5207 gen_3_families_line_5207
	.globl gSpeciesName_MEDITITE
gSpeciesName_MEDITITE: @ 0x082EAB74
	.string "アサナン"
	.byte EOS
	.if (. - gSpeciesName_MEDITITE) > 0x5
	.error "gSpeciesName_MEDITITE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MEDITITE) < 0x5
	.space 0x5 - (. - gSpeciesName_MEDITITE)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eab79)

	@ src/data/pokemon/species_info/gen_3_families.h:5289 gen_3_families_line_5289 (+1 aliases)
	.globl gSpeciesName_MEDICHAM
gSpeciesName_MEDICHAM: @ 0x082EAB7A
	.string "チャーレム"
	.byte EOS
	.if (. - gSpeciesName_MEDICHAM) > 0x6
	.error "gSpeciesName_MEDICHAM may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_MEDICHAM) < 0x6
	.space 0x6 - (. - gSpeciesName_MEDICHAM)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7737 gen_3_families_line_7737
	.globl gSpeciesName_SWABLU
gSpeciesName_SWABLU: @ 0x082EAB80
	.string "チルット"
	.byte EOS
	.if (. - gSpeciesName_SWABLU) > 0x5
	.error "gSpeciesName_SWABLU may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SWABLU) < 0x5
	.space 0x5 - (. - gSpeciesName_SWABLU)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eab85)

	@ src/data/pokemon/species_info/gen_3_families.h:7811 gen_3_families_line_7811 (+1 aliases)
	.globl gSpeciesName_ALTARIA
gSpeciesName_ALTARIA: @ 0x082EAB86
	.string "チルタリス"
	.byte EOS
	.if (. - gSpeciesName_ALTARIA) > 0x6
	.error "gSpeciesName_ALTARIA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ALTARIA) < 0x6
	.space 0x6 - (. - gSpeciesName_ALTARIA)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:4164 gen_2_families_line_4164
	.globl gSpeciesName_WYNAUT
gSpeciesName_WYNAUT: @ 0x082EAB8C
	.string "ソーナノ"
	.byte EOS
	.if (. - gSpeciesName_WYNAUT) > 0x5
	.error "gSpeciesName_WYNAUT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_WYNAUT) < 0x5
	.space 0x5 - (. - gSpeciesName_WYNAUT)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eab91)

	@ src/data/pokemon/species_info/gen_3_families.h:9859 gen_3_families_line_9859
	.globl gSpeciesName_DUSKULL
gSpeciesName_DUSKULL: @ 0x082EAB92
	.string "ヨマワル"
	.byte EOS
	.if (. - gSpeciesName_DUSKULL) > 0x5
	.error "gSpeciesName_DUSKULL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DUSKULL) < 0x5
	.space 0x5 - (. - gSpeciesName_DUSKULL)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eab97)

	@ src/data/pokemon/species_info/gen_3_families.h:9937 gen_3_families_line_9937
	.globl gSpeciesName_DUSCLOPS
gSpeciesName_DUSCLOPS: @ 0x082EAB98
	.string "サマヨール"
	.byte EOS
	.if (. - gSpeciesName_DUSCLOPS) > 0x6
	.error "gSpeciesName_DUSCLOPS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DUSCLOPS) < 0x6
	.space 0x6 - (. - gSpeciesName_DUSCLOPS)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:6059 gen_3_families_line_6059
	.globl gSpeciesName_ROSELIA
gSpeciesName_ROSELIA: @ 0x082EAB9E
	.string "ロゼリア"
	.byte EOS
	.if (. - gSpeciesName_ROSELIA) > 0x5
	.error "gSpeciesName_ROSELIA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ROSELIA) < 0x5
	.space 0x5 - (. - gSpeciesName_ROSELIA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaba3)

	@ src/data/pokemon/species_info/gen_3_families.h:3466 gen_3_families_line_3466 (+1 aliases)
	.globl gSpeciesName_SLAKOTH
gSpeciesName_SLAKOTH: @ 0x082EABA4
	.string "ナマケロ"
	.byte EOS
	.if (. - gSpeciesName_SLAKOTH) > 0x5
	.error "gSpeciesName_SLAKOTH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SLAKOTH) < 0x5
	.space 0x5 - (. - gSpeciesName_SLAKOTH)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eaba9)

	@ src/data/pokemon/species_info/gen_3_families.h:3538 gen_3_families_line_3538
	.globl gSpeciesName_VIGOROTH
gSpeciesName_VIGOROTH: @ 0x082EABAA
	.string "ヤルキモノ"
	.byte EOS
	.if (. - gSpeciesName_VIGOROTH) > 0x6
	.error "gSpeciesName_VIGOROTH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_VIGOROTH) < 0x6
	.space 0x6 - (. - gSpeciesName_VIGOROTH)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3616 gen_3_families_line_3616
	.globl gSpeciesName_SLAKING
gSpeciesName_SLAKING: @ 0x082EABB0
	.string "ケッキング"
	.byte EOS
	.if (. - gSpeciesName_SLAKING) > 0x6
	.error "gSpeciesName_SLAKING may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SLAKING) < 0x6
	.space 0x6 - (. - gSpeciesName_SLAKING)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:6238 gen_3_families_line_6238
	.globl gSpeciesName_GULPIN
gSpeciesName_GULPIN: @ 0x082EABB6
	.string "ゴクリン"
	.byte EOS
	.if (. - gSpeciesName_GULPIN) > 0x5
	.error "gSpeciesName_GULPIN may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GULPIN) < 0x5
	.space 0x5 - (. - gSpeciesName_GULPIN)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eabbb)

	@ src/data/pokemon/species_info/gen_3_families.h:6324 gen_3_families_line_6324
	.globl gSpeciesName_SWALOT
gSpeciesName_SWALOT: @ 0x082EABBC
	.string "マルノーム"
	.byte EOS
	.if (. - gSpeciesName_SWALOT) > 0x6
	.error "gSpeciesName_SWALOT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SWALOT) < 0x6
	.space 0x6 - (. - gSpeciesName_SWALOT)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:10106 gen_3_families_line_10106
	.globl gSpeciesName_TROPIUS
gSpeciesName_TROPIUS: @ 0x082EABC2
	.string "トロピウス"
	.byte EOS
	.if (. - gSpeciesName_TROPIUS) > 0x6
	.error "gSpeciesName_TROPIUS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_TROPIUS) < 0x6
	.space 0x6 - (. - gSpeciesName_TROPIUS)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3921 gen_3_families_line_3921
	.globl gSpeciesName_WHISMUR
gSpeciesName_WHISMUR: @ 0x082EABC8
	.string "ゴニョニョ"
	.byte EOS
	.if (. - gSpeciesName_WHISMUR) > 0x6
	.error "gSpeciesName_WHISMUR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_WHISMUR) < 0x6
	.space 0x6 - (. - gSpeciesName_WHISMUR)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:3997 gen_3_families_line_3997
	.globl gSpeciesName_LOUDRED
gSpeciesName_LOUDRED: @ 0x082EABCE
	.string "ドゴーム"
	.byte EOS
	.if (. - gSpeciesName_LOUDRED) > 0x5
	.error "gSpeciesName_LOUDRED may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LOUDRED) < 0x5
	.space 0x5 - (. - gSpeciesName_LOUDRED)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eabd3)

	@ src/data/pokemon/species_info/gen_3_families.h:4075 gen_3_families_line_4075
	.globl gSpeciesName_EXPLOUD
gSpeciesName_EXPLOUD: @ 0x082EABD4
	.string "バクオング"
	.byte EOS
	.if (. - gSpeciesName_EXPLOUD) > 0x6
	.error "gSpeciesName_EXPLOUD may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_EXPLOUD) < 0x6
	.space 0x6 - (. - gSpeciesName_EXPLOUD)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11229 gen_3_families_line_11229
	.globl gSpeciesName_CLAMPERL
gSpeciesName_CLAMPERL: @ 0x082EABDA
	.string "パールル"
	.byte EOS
	.if (. - gSpeciesName_CLAMPERL) > 0x5
	.error "gSpeciesName_CLAMPERL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CLAMPERL) < 0x5
	.space 0x5 - (. - gSpeciesName_CLAMPERL)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eabdf)

	@ src/data/pokemon/species_info/gen_3_families.h:11305 gen_3_families_line_11305
	.globl gSpeciesName_HUNTAIL
gSpeciesName_HUNTAIL: @ 0x082EABE0
	.string "ハンテール"
	.byte EOS
	.if (. - gSpeciesName_HUNTAIL) > 0x6
	.error "gSpeciesName_HUNTAIL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_HUNTAIL) < 0x6
	.space 0x6 - (. - gSpeciesName_HUNTAIL)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11375 gen_3_families_line_11375
	.globl gSpeciesName_GOREBYSS
gSpeciesName_GOREBYSS: @ 0x082EABE6
	.string "サクラビス"
	.byte EOS
	.if (. - gSpeciesName_GOREBYSS) > 0x6
	.error "gSpeciesName_GOREBYSS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GOREBYSS) < 0x6
	.space 0x6 - (. - gSpeciesName_GOREBYSS)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:10416 gen_3_families_line_10416 (+2 aliases)
	.globl gSpeciesName_ABSOL
gSpeciesName_ABSOL: @ 0x082EABEC
	.string "アブソル"
	.byte EOS
	.if (. - gSpeciesName_ABSOL) > 0x5
	.error "gSpeciesName_ABSOL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ABSOL) < 0x5
	.space 0x5 - (. - gSpeciesName_ABSOL)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eabf1)

	@ src/data/pokemon/species_info/gen_3_families.h:9621 gen_3_families_line_9621
	.globl gSpeciesName_SHUPPET
gSpeciesName_SHUPPET: @ 0x082EABF2
	.string "カゲボウズ"
	.byte EOS
	.if (. - gSpeciesName_SHUPPET) > 0x6
	.error "gSpeciesName_SHUPPET may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SHUPPET) < 0x6
	.space 0x6 - (. - gSpeciesName_SHUPPET)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:9701 gen_3_families_line_9701 (+1 aliases)
	.globl gSpeciesName_BANETTE
gSpeciesName_BANETTE: @ 0x082EABF8
	.string "ジュペッタ"
	.byte EOS
	.if (. - gSpeciesName_BANETTE) > 0x6
	.error "gSpeciesName_BANETTE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_BANETTE) < 0x6
	.space 0x6 - (. - gSpeciesName_BANETTE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8039 gen_3_families_line_8039
	.globl gSpeciesName_SEVIPER
gSpeciesName_SEVIPER: @ 0x082EABFE
	.string "ハブネーク"
	.byte EOS
	.if (. - gSpeciesName_SEVIPER) > 0x6
	.error "gSpeciesName_SEVIPER may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SEVIPER) < 0x6
	.space 0x6 - (. - gSpeciesName_SEVIPER)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:7962 gen_3_families_line_7962
	.globl gSpeciesName_ZANGOOSE
gSpeciesName_ZANGOOSE: @ 0x082EAC04
	.string "ザングース"
	.byte EOS
	.if (. - gSpeciesName_ZANGOOSE) > 0x6
	.error "gSpeciesName_ZANGOOSE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ZANGOOSE) < 0x6
	.space 0x6 - (. - gSpeciesName_ZANGOOSE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11448 gen_3_families_line_11448
	.globl gSpeciesName_RELICANTH
gSpeciesName_RELICANTH: @ 0x082EAC0A
	.string "ジーランス"
	.byte EOS
	.if (. - gSpeciesName_RELICANTH) > 0x6
	.error "gSpeciesName_RELICANTH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_RELICANTH) < 0x6
	.space 0x6 - (. - gSpeciesName_RELICANTH)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:4912 gen_3_families_line_4912
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gSpeciesName_ARON
gSpeciesName_ARON: @ 0x082EAC10
	.string "ココドラ"
	.byte EOS
	.if (. - gSpeciesName_ARON) != 0x5
	.error "gSpeciesName_ARON must retain its original byte length"
	.endif
	.space 0x1, 0 @ name padding (was 0x2eac15)

	@ src/data/pokemon/species_info/gen_3_families.h:4984 gen_3_families_line_4984
	.globl gSpeciesName_LAIRON
gSpeciesName_LAIRON: @ 0x082EAC16
	.string "コドラ"
	.byte EOS
	.if (. - gSpeciesName_LAIRON) > 0x4
	.error "gSpeciesName_LAIRON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LAIRON) < 0x4
	.space 0x4 - (. - gSpeciesName_LAIRON)
	.endif
	.space 0x2, 0 @ name padding (was 0x2eac1a)

	@ src/data/pokemon/species_info/gen_3_families.h:5061 gen_3_families_line_5061 (+1 aliases)
	.globl gSpeciesName_AGGRON
gSpeciesName_AGGRON: @ 0x082EAC1C
	.string "ボスゴドラ"
	.byte EOS
	.if (. - gSpeciesName_AGGRON) > 0x6
	.error "gSpeciesName_AGGRON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_AGGRON) < 0x6
	.space 0x6 - (. - gSpeciesName_AGGRON)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:9220 gen_3_families_line_9220 (+3 aliases)
	.globl gSpeciesName_CASTFORM_NORMAL
gSpeciesName_CASTFORM_NORMAL: @ 0x082EAC22
	.string "ポワルン"
	.byte EOS
	.if (. - gSpeciesName_CASTFORM_NORMAL) > 0x5
	.error "gSpeciesName_CASTFORM_NORMAL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CASTFORM_NORMAL) < 0x5
	.space 0x5 - (. - gSpeciesName_CASTFORM_NORMAL)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eac27)

	@ src/data/pokemon/species_info/gen_3_families.h:5829 gen_3_families_line_5829
	.globl gSpeciesName_VOLBEAT
gSpeciesName_VOLBEAT: @ 0x082EAC28
	.string "バルビート"
	.byte EOS
	.if (. - gSpeciesName_VOLBEAT) > 0x6
	.error "gSpeciesName_VOLBEAT may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_VOLBEAT) < 0x6
	.space 0x6 - (. - gSpeciesName_VOLBEAT)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:5912 gen_3_families_line_5912
	.globl gSpeciesName_ILLUMISE
gSpeciesName_ILLUMISE: @ 0x082EAC2E
	.string "イルミーゼ"
	.byte EOS
	.if (. - gSpeciesName_ILLUMISE) > 0x6
	.error "gSpeciesName_ILLUMISE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ILLUMISE) < 0x6
	.space 0x6 - (. - gSpeciesName_ILLUMISE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8740 gen_3_families_line_8740
	.globl gSpeciesName_LILEEP
gSpeciesName_LILEEP: @ 0x082EAC34
	.string "リリーラ"
	.byte EOS
	.if (. - gSpeciesName_LILEEP) > 0x5
	.error "gSpeciesName_LILEEP may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LILEEP) < 0x5
	.space 0x5 - (. - gSpeciesName_LILEEP)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eac39)

	@ src/data/pokemon/species_info/gen_3_families.h:8818 gen_3_families_line_8818
	.globl gSpeciesName_CRADILY
gSpeciesName_CRADILY: @ 0x082EAC3A
	.string "ユレイドル"
	.byte EOS
	.if (. - gSpeciesName_CRADILY) > 0x6
	.error "gSpeciesName_CRADILY may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CRADILY) < 0x6
	.space 0x6 - (. - gSpeciesName_CRADILY)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:8897 gen_3_families_line_8897
	.globl gSpeciesName_ANORITH
gSpeciesName_ANORITH: @ 0x082EAC40
	.string "アノプス"
	.byte EOS
	.if (. - gSpeciesName_ANORITH) > 0x5
	.error "gSpeciesName_ANORITH may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ANORITH) < 0x5
	.space 0x5 - (. - gSpeciesName_ANORITH)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eac45)

	@ src/data/pokemon/species_info/gen_3_families.h:8976 gen_3_families_line_8976
	.globl gSpeciesName_ARMALDO
gSpeciesName_ARMALDO: @ 0x082EAC46
	.string "アーマルド"
	.byte EOS
	.if (. - gSpeciesName_ARMALDO) > 0x6
	.error "gSpeciesName_ARMALDO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_ARMALDO) < 0x6
	.space 0x6 - (. - gSpeciesName_ARMALDO)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:2703 gen_3_families_line_2703 (+1 aliases)
	.globl gSpeciesName_RALTS
gSpeciesName_RALTS: @ 0x082EAC4C
	.string "ラルトス"
	.byte EOS
	.if (. - gSpeciesName_RALTS) > 0x5
	.error "gSpeciesName_RALTS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_RALTS) < 0x5
	.space 0x5 - (. - gSpeciesName_RALTS)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eac51)

	@ src/data/pokemon/species_info/gen_3_families.h:2772 gen_3_families_line_2772
	.globl gSpeciesName_KIRLIA
gSpeciesName_KIRLIA: @ 0x082EAC52
	.string "キルリア"
	.byte EOS
	.if (. - gSpeciesName_KIRLIA) > 0x5
	.error "gSpeciesName_KIRLIA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_KIRLIA) < 0x5
	.space 0x5 - (. - gSpeciesName_KIRLIA)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eac57)

	@ src/data/pokemon/species_info/gen_3_families.h:2850 gen_3_families_line_2850 (+1 aliases)
	.globl gSpeciesName_GARDEVOIR
gSpeciesName_GARDEVOIR: @ 0x082EAC58
	.string "サーナイト"
	.byte EOS
	.if (. - gSpeciesName_GARDEVOIR) > 0x6
	.error "gSpeciesName_GARDEVOIR may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GARDEVOIR) < 0x6
	.space 0x6 - (. - gSpeciesName_GARDEVOIR)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11607 gen_3_families_line_11607
	.globl gSpeciesName_BAGON
gSpeciesName_BAGON: @ 0x082EAC5E
	.string "タツベイ"
	.byte EOS
	.if (. - gSpeciesName_BAGON) > 0x5
	.error "gSpeciesName_BAGON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_BAGON) < 0x5
	.space 0x5 - (. - gSpeciesName_BAGON)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eac63)

	@ src/data/pokemon/species_info/gen_3_families.h:11679 gen_3_families_line_11679
	.globl gSpeciesName_SHELGON
gSpeciesName_SHELGON: @ 0x082EAC64
	.string "コモルー"
	.byte EOS
	.if (. - gSpeciesName_SHELGON) > 0x5
	.error "gSpeciesName_SHELGON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SHELGON) < 0x5
	.space 0x5 - (. - gSpeciesName_SHELGON)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eac69)

	@ src/data/pokemon/species_info/gen_3_families.h:11756 gen_3_families_line_11756 (+1 aliases)
	.globl gSpeciesName_SALAMENCE
gSpeciesName_SALAMENCE: @ 0x082EAC6A
	.string "ボーマンダ"
	.byte EOS
	.if (. - gSpeciesName_SALAMENCE) > 0x6
	.error "gSpeciesName_SALAMENCE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_SALAMENCE) < 0x6
	.space 0x6 - (. - gSpeciesName_SALAMENCE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:11907 gen_3_families_line_11907
	.globl gSpeciesName_BELDUM
gSpeciesName_BELDUM: @ 0x082EAC70
	.string "ダンバル"
	.byte EOS
	.if (. - gSpeciesName_BELDUM) > 0x5
	.error "gSpeciesName_BELDUM may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_BELDUM) < 0x5
	.space 0x5 - (. - gSpeciesName_BELDUM)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eac75)

	@ src/data/pokemon/species_info/gen_3_families.h:11980 gen_3_families_line_11980
	.globl gSpeciesName_METANG
gSpeciesName_METANG: @ 0x082EAC76
	.string "メタング"
	.byte EOS
	.if (. - gSpeciesName_METANG) > 0x5
	.error "gSpeciesName_METANG may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_METANG) < 0x5
	.space 0x5 - (. - gSpeciesName_METANG)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eac7b)

	@ src/data/pokemon/species_info/gen_3_families.h:12057 gen_3_families_line_12057 (+1 aliases)
	.globl gSpeciesName_METAGROSS
gSpeciesName_METAGROSS: @ 0x082EAC7C
	.string "メタグロス"
	.byte EOS
	.if (. - gSpeciesName_METAGROSS) > 0x6
	.error "gSpeciesName_METAGROSS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_METAGROSS) < 0x6
	.space 0x6 - (. - gSpeciesName_METAGROSS)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12212 gen_3_families_line_12212
	.globl gSpeciesName_REGIROCK
gSpeciesName_REGIROCK: @ 0x082EAC82
	.string "レジロック"
	.byte EOS
	.if (. - gSpeciesName_REGIROCK) > 0x6
	.error "gSpeciesName_REGIROCK may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_REGIROCK) < 0x6
	.space 0x6 - (. - gSpeciesName_REGIROCK)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12291 gen_3_families_line_12291
	.globl gSpeciesName_REGICE
gSpeciesName_REGICE: @ 0x082EAC88
	.string "レジアイス"
	.byte EOS
	.if (. - gSpeciesName_REGICE) > 0x6
	.error "gSpeciesName_REGICE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_REGICE) < 0x6
	.space 0x6 - (. - gSpeciesName_REGICE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12371 gen_3_families_line_12371
	.globl gSpeciesName_REGISTEEL
gSpeciesName_REGISTEEL: @ 0x082EAC8E
	.string "レジスチル"
	.byte EOS
	.if (. - gSpeciesName_REGISTEEL) > 0x6
	.error "gSpeciesName_REGISTEEL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_REGISTEEL) < 0x6
	.space 0x6 - (. - gSpeciesName_REGISTEEL)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12768 gen_3_families_line_12768 (+2 aliases)
	.globl gSpeciesName_KYOGRE
gSpeciesName_KYOGRE: @ 0x082EAC94
	.string "カイオーガ"
	.byte EOS
	.if (. - gSpeciesName_KYOGRE) > 0x6
	.error "gSpeciesName_KYOGRE may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_KYOGRE) < 0x6
	.space 0x6 - (. - gSpeciesName_KYOGRE)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12923 gen_3_families_line_12923 (+2 aliases)
	.globl gSpeciesName_GROUDON
gSpeciesName_GROUDON: @ 0x082EAC9A
	.string "グラードン"
	.byte EOS
	.if (. - gSpeciesName_GROUDON) > 0x6
	.error "gSpeciesName_GROUDON may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_GROUDON) < 0x6
	.space 0x6 - (. - gSpeciesName_GROUDON)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:13079 gen_3_families_line_13079 (+1 aliases)
	.globl gSpeciesName_RAYQUAZA
gSpeciesName_RAYQUAZA: @ 0x082EACA0
	.string "レックウザ"
	.byte EOS
	.if (. - gSpeciesName_RAYQUAZA) > 0x6
	.error "gSpeciesName_RAYQUAZA may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_RAYQUAZA) < 0x6
	.space 0x6 - (. - gSpeciesName_RAYQUAZA)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12450 gen_3_families_line_12450 (+1 aliases)
	.globl gSpeciesName_LATIAS
gSpeciesName_LATIAS: @ 0x082EACA6
	.string "ラティアス"
	.byte EOS
	.if (. - gSpeciesName_LATIAS) > 0x6
	.error "gSpeciesName_LATIAS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LATIAS) < 0x6
	.space 0x6 - (. - gSpeciesName_LATIAS)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12609 gen_3_families_line_12609 (+1 aliases)
	.globl gSpeciesName_LATIOS
gSpeciesName_LATIOS: @ 0x082EACAC
	.string "ラティオス"
	.byte EOS
	.if (. - gSpeciesName_LATIOS) > 0x6
	.error "gSpeciesName_LATIOS may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_LATIOS) < 0x6
	.space 0x6 - (. - gSpeciesName_LATIOS)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:13240 gen_3_families_line_13240
	.globl gSpeciesName_JIRACHI
gSpeciesName_JIRACHI: @ 0x082EACB2
	.string "ジラーチ"
	.byte EOS
	.if (. - gSpeciesName_JIRACHI) > 0x5
	.error "gSpeciesName_JIRACHI may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_JIRACHI) < 0x5
	.space 0x5 - (. - gSpeciesName_JIRACHI)
	.endif
	.space 0x1, 0 @ name padding (was 0x2eacb7)

	@ src/data/pokemon/species_info/gen_3_families.h:13330 gen_3_families_line_13330 (+3 aliases)
	.globl gSpeciesName_DEOXYS_NORMAL
gSpeciesName_DEOXYS_NORMAL: @ 0x082EACB8
	.string "デオキシス"
	.byte EOS
	.if (. - gSpeciesName_DEOXYS_NORMAL) > 0x6
	.error "gSpeciesName_DEOXYS_NORMAL may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_DEOXYS_NORMAL) < 0x6
	.space 0x6 - (. - gSpeciesName_DEOXYS_NORMAL)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:10263 gen_3_families_line_10263 (+1 aliases)
	.globl gSpeciesName_CHIMECHO
gSpeciesName_CHIMECHO: @ 0x082EACBE
	.string "チリーン"
	.byte EOS
	.if (. - gSpeciesName_CHIMECHO) > 0x5
	.error "gSpeciesName_CHIMECHO may not grow beyond its original slot"
	.endif
	.if (. - gSpeciesName_CHIMECHO) < 0x5
	.space 0x5 - (. - gSpeciesName_CHIMECHO)
	.endif

	.balign 4, 0
