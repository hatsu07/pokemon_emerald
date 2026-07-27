	@ asm/field_specials.s:4112 sub_08139BD4 (+2 aliases)
	.globl gText_Rom_5CB077
gText_Rom_5CB077: @ 0x085CB077
	.string "1かい$"
	.if (. - gText_Rom_5CB077) > 0x4
	.error "gText_Rom_5CB077 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB077) < 0x4
	.space 0x4 - (. - gText_Rom_5CB077)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+2 aliases)
	.globl gText_Rom_5CB07B
gText_Rom_5CB07B: @ 0x085CB07B
	.string "2かい$"
	.if (. - gText_Rom_5CB07B) > 0x4
	.error "gText_Rom_5CB07B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB07B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB07B)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB07F
gText_Rom_5CB07F: @ 0x085CB07F
	.string "3かい$"
	.if (. - gText_Rom_5CB07F) > 0x4
	.error "gText_Rom_5CB07F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB07F) < 0x4
	.space 0x4 - (. - gText_Rom_5CB07F)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB083
gText_Rom_5CB083: @ 0x085CB083
	.string "4かい$"
	.if (. - gText_Rom_5CB083) > 0x4
	.error "gText_Rom_5CB083 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB083) < 0x4
	.space 0x4 - (. - gText_Rom_5CB083)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB087
gText_Rom_5CB087: @ 0x085CB087
	.string "5かい$"
	.if (. - gText_Rom_5CB087) > 0x4
	.error "gText_Rom_5CB087 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB087) < 0x4
	.space 0x4 - (. - gText_Rom_5CB087)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB08B
gText_Rom_5CB08B: @ 0x085CB08B
	.string "6かい$"
	.if (. - gText_Rom_5CB08B) > 0x4
	.error "gText_Rom_5CB08B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB08B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB08B)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB08F
gText_Rom_5CB08F: @ 0x085CB08F
	.string "7かい$"
	.if (. - gText_Rom_5CB08F) > 0x4
	.error "gText_Rom_5CB08F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB08F) < 0x4
	.space 0x4 - (. - gText_Rom_5CB08F)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB093
gText_Rom_5CB093: @ 0x085CB093
	.string "8かい$"
	.if (. - gText_Rom_5CB093) > 0x4
	.error "gText_Rom_5CB093 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB093) < 0x4
	.space 0x4 - (. - gText_Rom_5CB093)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB097
gText_Rom_5CB097: @ 0x085CB097
	.string "9かい$"
	.if (. - gText_Rom_5CB097) > 0x4
	.error "gText_Rom_5CB097 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB097) < 0x4
	.space 0x4 - (. - gText_Rom_5CB097)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB09B
gText_Rom_5CB09B: @ 0x085CB09B
	.string "10かい$"
	.if (. - gText_Rom_5CB09B) > 0x5
	.error "gText_Rom_5CB09B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB09B) < 0x5
	.space 0x5 - (. - gText_Rom_5CB09B)
	.endif

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0A0
gText_Rom_5CB0A0: @ 0x085CB0A0
	.string "11かい$"
	.if (. - gText_Rom_5CB0A0) != 0x5
	.error "gText_Rom_5CB0A0 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB0A1
	.set gText_Rom_5CB0A1, gText_Rom_5CB0A0 + 0x1

	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0A5
gText_Rom_5CB0A5: @ 0x085CB0A5
	.string "ビ1かい$"
	.if (. - gText_Rom_5CB0A5) != 0x5
	.error "gText_Rom_5CB0A5 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB0A6
	.set gText_Rom_5CB0A6, gText_Rom_5CB0A5 + 0x1

	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0AA
gText_Rom_5CB0AA: @ 0x085CB0AA
	.string "ビ2かい$"
	.if (. - gText_Rom_5CB0AA) != 0x5
	.error "gText_Rom_5CB0AA must retain its original byte length"
	.endif
	.globl gText_Rom_5CB0AB
	.set gText_Rom_5CB0AB, gText_Rom_5CB0AA + 0x1

	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0AF
gText_Rom_5CB0AF: @ 0x085CB0AF
	.string "ビ3かい$"
	.if (. - gText_Rom_5CB0AF) != 0x5
	.error "gText_Rom_5CB0AF must retain its original byte length"
	.endif
	.globl gText_Rom_5CB0B0
	.set gText_Rom_5CB0B0, gText_Rom_5CB0AF + 0x1

	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0B4
gText_Rom_5CB0B4: @ 0x085CB0B4
	.string "ビ4かい$"
	.if (. - gText_Rom_5CB0B4) != 0x5
	.error "gText_Rom_5CB0B4 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB0B5
	.set gText_Rom_5CB0B5, gText_Rom_5CB0B4 + 0x1

	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	.globl gText_Rom_5CB0B9
gText_Rom_5CB0B9: @ 0x085CB0B9
	.string "おくじょう$"
	.if (. - gText_Rom_5CB0B9) > 0x6
	.error "gText_Rom_5CB0B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0B9) < 0x6
	.space 0x6 - (. - gText_Rom_5CB0B9)
	.endif
	.globl gUnknown_85CB0BF
gUnknown_85CB0BF: @ 0x085CB0BF

	@ src/strings.c:528 gText_ElevatorNowOn
	.globl gText_Rom_5CB0BF
gText_Rom_5CB0BF: @ 0x085CB0BF
	.string "げんざいのフロア$"
	.if (. - gText_Rom_5CB0BF) > 0x9
	.error "gText_Rom_5CB0BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0BF) < 0x9
	.space 0x9 - (. - gText_Rom_5CB0BF)
	.endif
	.globl gUnknown_85CB0C8
gUnknown_85CB0C8: @ 0x085CB0C8

	@ asm/field_specials.s:5777 sub_0813A904
	.globl gText_Rom_5CB0C8
gText_Rom_5CB0C8: @ 0x085CB0C8
	.string "BP$"
	.if (. - gText_Rom_5CB0C8) > 0x3
	.error "gText_Rom_5CB0C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0C8) < 0x3
	.space 0x3 - (. - gText_Rom_5CB0C8)
	.endif

	@ src/field_specials.c:2592 field_specials_line_2592
	.globl gText_Rom_5CB0CB
gText_Rom_5CB0CB: @ 0x085CB0CB
	.string "ちからのこな  {FONT_SMALL}  50$"
	.if (. - gText_Rom_5CB0CB) > 0x10
	.error "gText_Rom_5CB0CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0CB) < 0x10
	.space 0x10 - (. - gText_Rom_5CB0CB)
	.endif

	@ src/field_specials.c:2593 field_specials_line_2593
	.globl gText_Rom_5CB0DB
gText_Rom_5CB0DB: @ 0x085CB0DB
	.string "ちからのねっこ {FONT_SMALL}  80$"
	.if (. - gText_Rom_5CB0DB) > 0x10
	.error "gText_Rom_5CB0DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0DB) < 0x10
	.space 0x10 - (. - gText_Rom_5CB0DB)
	.endif

	@ src/field_specials.c:2594 field_specials_line_2594
	.globl gText_Rom_5CB0EB
gText_Rom_5CB0EB: @ 0x085CB0EB
	.string "ばんのうごな  {FONT_SMALL}  50$"
	.if (. - gText_Rom_5CB0EB) > 0x10
	.error "gText_Rom_5CB0EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0EB) < 0x10
	.space 0x10 - (. - gText_Rom_5CB0EB)
	.endif

	@ src/field_specials.c:2595 field_specials_line_2595
	.globl gText_Rom_5CB0FB
gText_Rom_5CB0FB: @ 0x085CB0FB
	.string "ふっかつそう  {FONT_SMALL} 300$"
	.if (. - gText_Rom_5CB0FB) > 0x10
	.error "gText_Rom_5CB0FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0FB) < 0x10
	.space 0x10 - (. - gText_Rom_5CB0FB)
	.endif

	@ src/field_specials.c:2596 field_specials_line_2596
	.globl gText_Rom_5CB10B
gText_Rom_5CB10B: @ 0x085CB10B
	.string "タウリン    {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB10B) > 0x10
	.error "gText_Rom_5CB10B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB10B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB10B)
	.endif

	@ src/field_specials.c:2597 field_specials_line_2597
	.globl gText_Rom_5CB11B
gText_Rom_5CB11B: @ 0x085CB11B
	.string "ブロムヘキシン {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB11B) > 0x10
	.error "gText_Rom_5CB11B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB11B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB11B)
	.endif

	@ src/field_specials.c:2598 field_specials_line_2598
	.globl gText_Rom_5CB12B
gText_Rom_5CB12B: @ 0x085CB12B
	.string "インドメタシン {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB12B) > 0x10
	.error "gText_Rom_5CB12B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB12B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB12B)
	.endif

	@ src/field_specials.c:2599 field_specials_line_2599
	.globl gText_Rom_5CB13B
gText_Rom_5CB13B: @ 0x085CB13B
	.string "リゾチウム   {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB13B) > 0x10
	.error "gText_Rom_5CB13B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB13B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB13B)
	.endif

	@ src/field_specials.c:2600 field_specials_line_2600
	.globl gText_Rom_5CB14B
gText_Rom_5CB14B: @ 0x085CB14B
	.string "キトサン    {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB14B) > 0x10
	.error "gText_Rom_5CB14B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB14B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB14B)
	.endif

	@ src/field_specials.c:2601 field_specials_line_2601
	.globl gText_Rom_5CB15B
gText_Rom_5CB15B: @ 0x085CB15B
	.string "マックスアップ {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB15B) > 0x10
	.error "gText_Rom_5CB15B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB15B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB15B)
	.endif

	@ src/field_specials.c:2602 field_specials_line_2602
	.globl gText_Rom_5CB16B
gText_Rom_5CB16B: @ 0x085CB16B
	.string "ポイントアップ {FONT_SMALL}3000$"
	.if (. - gText_Rom_5CB16B) > 0x10
	.error "gText_Rom_5CB16B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB16B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB16B)
	.endif

	@ src/strings.c:530 gText_RankingHall
	.globl gText_Rom_5CB17B
gText_Rom_5CB17B: @ 0x085CB17B
	.string "ランキングホール$"
	.if (. - gText_Rom_5CB17B) > 0x9
	.error "gText_Rom_5CB17B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB17B) < 0x9
	.space 0x9 - (. - gText_Rom_5CB17B)
	.endif

	@ src/strings.c:531 gText_ExchangeService
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB184
gText_Rom_5CB184: @ 0x085CB184
	.string "ひきかえサービス$"
	.if (. - gText_Rom_5CB184) != 0x9
	.error "gText_Rom_5CB184 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB188
	.set gText_Rom_5CB188, gText_Rom_5CB184 + 0x4

	@ src/data/region_map/region_map_entries.h:98 region_map_entries_line_98 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB18D
gText_Rom_5CB18D: @ 0x085CB18D
	.string "ミナモシティ$"
	.if (. - gText_Rom_5CB18D) != 0x7
	.error "gText_Rom_5CB18D must retain its original byte length"
	.endif
	.globl gText_Rom_5CB190
	.set gText_Rom_5CB190, gText_Rom_5CB18D + 0x3

	@ src/data/region_map/region_map_entries.h:70 region_map_entries_line_70 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB194
gText_Rom_5CB194: @ 0x085CB194
	.string "カイナシティ$"
	.if (. - gText_Rom_5CB194) != 0x7
	.error "gText_Rom_5CB194 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB197
	.set gText_Rom_5CB197, gText_Rom_5CB194 + 0x3

	@ src/data/region_map/region_map_entries.h:518 region_map_entries_line_518 (+1 aliases)
	.globl gText_Rom_5CB19B
gText_Rom_5CB19B: @ 0x085CB19B
	.string "めざめのほこら$"
	.if (. - gText_Rom_5CB19B) > 0x8
	.error "gText_Rom_5CB19B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB19B) < 0x8
	.space 0x8 - (. - gText_Rom_5CB19B)
	.endif

	@ src/data/region_map/region_map_entries.h:469 region_map_entries_line_469 (+1 aliases)
	.globl gText_Rom_5CB1A3
gText_Rom_5CB1A3: @ 0x085CB1A3
	.string "おくりびやま$"
	.if (. - gText_Rom_5CB1A3) > 0x7
	.error "gText_Rom_5CB1A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1A3) < 0x7
	.space 0x7 - (. - gText_Rom_5CB1A3)
	.endif

	@ src/data/region_map/region_map_entries.h:609 region_map_entries_line_609 (+1 aliases)
	.globl gText_Rom_5CB1AA
gText_Rom_5CB1AA: @ 0x085CB1AA
	.string "そらのはしら$"
	.if (. - gText_Rom_5CB1AA) > 0x7
	.error "gText_Rom_5CB1AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1AA) < 0x7
	.space 0x7 - (. - gText_Rom_5CB1AA)
	.endif

