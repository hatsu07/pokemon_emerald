	@ src/data/text/gift_ribbon_descriptions.h:15 gGiftRibbonDescriptionPart1_PokemonLeague
	.globl gText_Rom_5F60F9
gText_Rom_5F60F9: @ 0x085F60F9
	.string "ポケモン リーグ$"
	.if (. - gText_Rom_5F60F9) > 0x9
	.error "gText_Rom_5F60F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F60F9) < 0x9
	.space 0x9 - (. - gText_Rom_5F60F9)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:16 gGiftRibbonDescriptionPart1_AdvanceCup
	.globl gText_Rom_5F6102
gText_Rom_5F6102: @ 0x085F6102
	.string "アドバンス カップ$"
	.if (. - gText_Rom_5F6102) > 0xa
	.error "gText_Rom_5F6102 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6102) < 0xa
	.space 0xa - (. - gText_Rom_5F6102)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:17 gGiftRibbonDescriptionPart1_PokemonTournament
	.globl gText_Rom_5F610C
gText_Rom_5F610C: @ 0x085F610C
	.string "ポケモンの たいかいに$"
	.if (. - gText_Rom_5F610C) > 0xc
	.error "gText_Rom_5F610C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F610C) < 0xc
	.space 0xc - (. - gText_Rom_5F610C)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:18 gGiftRibbonDescriptionPart2_Participation2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6118
gText_Rom_5F6118: @ 0x085F6118
	.string "さんかした きねんリボン$"
	.if (. - gText_Rom_5F6118) != 0xd
	.error "gText_Rom_5F6118 must retain its original byte length"
	.endif
	.globl gText_Rom_5F611E
	.set gText_Rom_5F611E, gText_Rom_5F6118 + 0x6
	.globl gText_Rom_5F6121
	.set gText_Rom_5F6121, gText_Rom_5F6118 + 0x9

	@ src/data/text/gift_ribbon_descriptions.h:19 gGiftRibbonDescriptionPart1_PokemonEvent
	.globl gText_Rom_5F6125
gText_Rom_5F6125: @ 0x085F6125
	.string "ポケモンの イベントに$"
	.if (. - gText_Rom_5F6125) > 0xc
	.error "gText_Rom_5F6125 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6125) < 0xc
	.space 0xc - (. - gText_Rom_5F6125)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:20 gGiftRibbonDescriptionPart1_PokemonFestival
	.globl gText_Rom_5F6131
gText_Rom_5F6131: @ 0x085F6131
	.string "ポケモンの おまつりに$"
	.if (. - gText_Rom_5F6131) > 0xc
	.error "gText_Rom_5F6131 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6131) < 0xc
	.space 0xc - (. - gText_Rom_5F6131)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:21 gGiftRibbonDescriptionPart1_DifficultyClearing
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F613D
gText_Rom_5F613D: @ 0x085F613D
	.string "こんなんに うちかった$"
	.if (. - gText_Rom_5F613D) != 0xc
	.error "gText_Rom_5F613D must retain its original byte length"
	.endif
	.globl gText_Rom_5F6145
	.set gText_Rom_5F6145, gText_Rom_5F613D + 0x8

	@ src/data/text/gift_ribbon_descriptions.h:22 gGiftRibbonDescriptionPart2_Commemorative
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6149
gText_Rom_5F6149: @ 0x085F6149
	.string "きねんリボン$"
	.if (. - gText_Rom_5F6149) != 0x7
	.error "gText_Rom_5F6149 must retain its original byte length"
	.endif
	.globl gText_Rom_5F614C
	.set gText_Rom_5F614C, gText_Rom_5F6149 + 0x3

	@ src/data/text/gift_ribbon_descriptions.h:23 gGiftRibbonDescriptionPart1_ClearingAllChallenges
	.globl gText_Rom_5F6150
gText_Rom_5F6150: @ 0x085F6150
	.string "すべての こんなんを$"
	.if (. - gText_Rom_5F6150) > 0xb
	.error "gText_Rom_5F6150 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6150) < 0xb
	.space 0xb - (. - gText_Rom_5F6150)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:24 gGiftRibbonDescriptionPart2_ClearingAllChallenges
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F615B
gText_Rom_5F615B: @ 0x085F615B
	.string "のりこえた きねんリボン$"
	.if (. - gText_Rom_5F615B) != 0xd
	.error "gText_Rom_5F615B must retain its original byte length"
	.endif
	.globl gText_Rom_5F6161
	.set gText_Rom_5F6161, gText_Rom_5F615B + 0x6
	.globl gText_Rom_5F6164
	.set gText_Rom_5F6164, gText_Rom_5F615B + 0x9

	@ src/data/text/gift_ribbon_descriptions.h:25 gGiftRibbonDescriptionPart1_100StraightWin
	.globl gText_Rom_5F6168
gText_Rom_5F6168: @ 0x085F6168
	.string "100にんぬき たっせい$"
	.if (. - gText_Rom_5F6168) > 0xd
	.error "gText_Rom_5F6168 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6168) < 0xd
	.space 0xd - (. - gText_Rom_5F6168)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:26 gGiftRibbonDescriptionPart1_DarknessTower
	.globl gText_Rom_5F6175
gText_Rom_5F6175: @ 0x085F6175
	.string "くらやみのとう クリア$"
	.if (. - gText_Rom_5F6175) > 0xc
	.error "gText_Rom_5F6175 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6175) < 0xc
	.space 0xc - (. - gText_Rom_5F6175)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:27 gGiftRibbonDescriptionPart1_RedTower
	.globl gText_Rom_5F6181
gText_Rom_5F6181: @ 0x085F6181
	.string "くれないのとう クリア$"
	.if (. - gText_Rom_5F6181) > 0xc
	.error "gText_Rom_5F6181 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6181) < 0xc
	.space 0xc - (. - gText_Rom_5F6181)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:28 gGiftRibbonDescriptionPart1_BlackironTower
	.globl gText_Rom_5F618D
gText_Rom_5F618D: @ 0x085F618D
	.string "くろがねのとう クリア$"
	.if (. - gText_Rom_5F618D) > 0xc
	.error "gText_Rom_5F618D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F618D) < 0xc
	.space 0xc - (. - gText_Rom_5F618D)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:29 gGiftRibbonDescriptionPart1_FinalTower
	.globl gText_Rom_5F6199
gText_Rom_5F6199: @ 0x085F6199
	.string "さいごのとう クリア$"
	.if (. - gText_Rom_5F6199) > 0xb
	.error "gText_Rom_5F6199 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6199) < 0xb
	.space 0xb - (. - gText_Rom_5F6199)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:30 gGiftRibbonDescriptionPart1_LegendMaking
	.globl gText_Rom_5F61A4
gText_Rom_5F61A4: @ 0x085F61A4
	.string "でんせつを つくった$"
	.if (. - gText_Rom_5F61A4) > 0xb
	.error "gText_Rom_5F61A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F61A4) < 0xb
	.space 0xb - (. - gText_Rom_5F61A4)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:31 gGiftRibbonDescriptionPart1_PokemonCenterTokyo
	.globl gText_Rom_5F61AF
gText_Rom_5F61AF: @ 0x085F61AF
	.string "ポケモンセンタートウキョー$"
	.if (. - gText_Rom_5F61AF) > 0xe
	.error "gText_Rom_5F61AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F61AF) < 0xe
	.space 0xe - (. - gText_Rom_5F61AF)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:32 gGiftRibbonDescriptionPart1_PokemonCenterOsaka
	.globl gText_Rom_5F61BD
gText_Rom_5F61BD: @ 0x085F61BD
	.string "ポケモンセンターオーサカ$"
	.if (. - gText_Rom_5F61BD) > 0xd
	.error "gText_Rom_5F61BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F61BD) < 0xd
	.space 0xd - (. - gText_Rom_5F61BD)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:33 gGiftRibbonDescriptionPart1_PokemonCenterNagoya
	.globl gText_Rom_5F61CA
gText_Rom_5F61CA: @ 0x085F61CA
	.string "ポケモンセンターナゴヤ$"
	.if (. - gText_Rom_5F61CA) > 0xc
	.error "gText_Rom_5F61CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F61CA) < 0xc
	.space 0xc - (. - gText_Rom_5F61CA)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:34 gGiftRibbonDescriptionPart1_PokemonCenterNY
	.globl gText_Rom_5F61D6
gText_Rom_5F61D6: @ 0x085F61D6
	.string "ポケモンセンターニューヨーク$"
	.if (. - gText_Rom_5F61D6) > 0xf
	.error "gText_Rom_5F61D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F61D6) < 0xf
	.space 0xf - (. - gText_Rom_5F61D6)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:35 gGiftRibbonDescriptionPart1_SummerHolidays
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F61E5
gText_Rom_5F61E5: @ 0x085F61E5
	.string "なつやすみ きねんリボン$"
	.if (. - gText_Rom_5F61E5) != 0xd
	.error "gText_Rom_5F61E5 must retain its original byte length"
	.endif
	.globl gText_Rom_5F61EB
	.set gText_Rom_5F61EB, gText_Rom_5F61E5 + 0x6
	.globl gText_Rom_5F61EE
	.set gText_Rom_5F61EE, gText_Rom_5F61E5 + 0x9
	.incbin "baserom.gba", 0x5f61f2, 0x1

	@ src/data/text/gift_ribbon_descriptions.h:37 gGiftRibbonDescriptionPart1_WinterHolidays (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F61F3
gText_Rom_5F61F3: @ 0x085F61F3
	.string "ふゆやすみ きねんリボン$"
	.if (. - gText_Rom_5F61F3) != 0xd
	.error "gText_Rom_5F61F3 must retain its original byte length"
	.endif
	.globl gText_Rom_5F61F9
	.set gText_Rom_5F61F9, gText_Rom_5F61F3 + 0x6
	.globl gText_Rom_5F61FC
	.set gText_Rom_5F61FC, gText_Rom_5F61F3 + 0x9
	.incbin "baserom.gba", 0x5f6200, 0x6

	@ src/data/text/gift_ribbon_descriptions.h:22 gGiftRibbonDescriptionPart2_Commemorative
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6206
gText_Rom_5F6206: @ 0x085F6206
	.string "きねんリボン$"
	.if (. - gText_Rom_5F6206) != 0x7
	.error "gText_Rom_5F6206 must retain its original byte length"
	.endif
	.globl gText_Rom_5F6209
	.set gText_Rom_5F6209, gText_Rom_5F6206 + 0x3

	@ src/data/text/gift_ribbon_descriptions.h:39 gGiftRibbonDescriptionPart1_Evergreen
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F620D
gText_Rom_5F620D: @ 0x085F620D
	.string "クリスマス きねんリボン$"
	.if (. - gText_Rom_5F620D) != 0xd
	.error "gText_Rom_5F620D must retain its original byte length"
	.endif
	.globl gText_Rom_5F6213
	.set gText_Rom_5F6213, gText_Rom_5F620D + 0x6
	.globl gText_Rom_5F6216
	.set gText_Rom_5F6216, gText_Rom_5F620D + 0x9

	@ src/data/text/gift_ribbon_descriptions.h:40 gGiftRibbonDescriptionPart1_SpecialHoliday
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F621A
gText_Rom_5F621A: @ 0x085F621A
	.string "きねんび きねんリボン$"
	.if (. - gText_Rom_5F621A) != 0xc
	.error "gText_Rom_5F621A must retain its original byte length"
	.endif
	.globl gText_Rom_5F621F
	.set gText_Rom_5F621F, gText_Rom_5F621A + 0x5
	.globl gText_Rom_5F6222
	.set gText_Rom_5F6222, gText_Rom_5F621A + 0x8

	@ src/data/text/gift_ribbon_descriptions.h:41 gGiftRibbonDescriptionPart1_HardWorker
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6226
gText_Rom_5F6226: @ 0x085F6226
	.string "がんばった きねんの リボン$"
	.if (. - gText_Rom_5F6226) != 0xf
	.error "gText_Rom_5F6226 must retain its original byte length"
	.endif
	.globl gText_Rom_5F6231
	.set gText_Rom_5F6231, gText_Rom_5F6226 + 0xb

	@ src/data/text/gift_ribbon_descriptions.h:42 gGiftRibbonDescriptionPart1_LotsOfFriends
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6235
gText_Rom_5F6235: @ 0x085F6235
	.string "ともだち いっぱい きねんリボン$"
	.if (. - gText_Rom_5F6235) != 0x11
	.error "gText_Rom_5F6235 must retain its original byte length"
	.endif
	.globl gText_Rom_5F623F
	.set gText_Rom_5F623F, gText_Rom_5F6235 + 0xa
	.globl gText_Rom_5F6242
	.set gText_Rom_5F6242, gText_Rom_5F6235 + 0xd

	@ src/data/text/gift_ribbon_descriptions.h:43 gGiftRibbonDescriptionPart1_FullOfEnergy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6246
gText_Rom_5F6246: @ 0x085F6246
	.string "げんき いっぱい きねんリボン$"
	.if (. - gText_Rom_5F6246) != 0x10
	.error "gText_Rom_5F6246 must retain its original byte length"
	.endif
	.globl gText_Rom_5F624F
	.set gText_Rom_5F624F, gText_Rom_5F6246 + 0x9
	.globl gText_Rom_5F6252
	.set gText_Rom_5F6252, gText_Rom_5F6246 + 0xc

	@ src/data/text/gift_ribbon_descriptions.h:44 gGiftRibbonDescriptionPart1_LovedPokemon
	.globl gText_Rom_5F6256
gText_Rom_5F6256: @ 0x085F6256
	.string "だいすきな ポケモンに$"
	.if (. - gText_Rom_5F6256) > 0xc
	.error "gText_Rom_5F6256 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6256) < 0xc
	.space 0xc - (. - gText_Rom_5F6256)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:45 gGiftRibbonDescriptionPart2_LovedPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6262
gText_Rom_5F6262: @ 0x085F6262
	.string "つけてあげる きねんリボン$"
	.if (. - gText_Rom_5F6262) != 0xe
	.error "gText_Rom_5F6262 must retain its original byte length"
	.endif
	.globl gText_Rom_5F6269
	.set gText_Rom_5F6269, gText_Rom_5F6262 + 0x7
	.globl gText_Rom_5F626C
	.set gText_Rom_5F626C, gText_Rom_5F6262 + 0xa

	@ src/data/text/gift_ribbon_descriptions.h:46 gGiftRibbonDescriptionPart1_LoveForPokemon
	.globl gText_Rom_5F6270
gText_Rom_5F6270: @ 0x085F6270
	.string "ポケモンが だいすきな ことを$"
	.if (. - gText_Rom_5F6270) > 0x10
	.error "gText_Rom_5F6270 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6270) < 0x10
	.space 0x10 - (. - gText_Rom_5F6270)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:47 gGiftRibbonDescriptionPart2_LoveForPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6280
gText_Rom_5F6280: @ 0x085F6280
	.string "しょうめいする リボン$"
	.if (. - gText_Rom_5F6280) != 0xc
	.error "gText_Rom_5F6280 must retain its original byte length"
	.endif
	.globl gText_Rom_5F6288
	.set gText_Rom_5F6288, gText_Rom_5F6280 + 0x8
	.globl gUnknown_85F628C
gUnknown_85F628C: @ 0x085F628C
	.incbin "baserom.gba", 0x5f628c, 0x200
	.globl gUnknown_85F648C
gUnknown_85F648C: @ 0x085F648C
	.incbin "baserom.gba", 0x5f648c, 0x20
	.globl gUnknown_85F64AC
gUnknown_85F64AC: @ 0x085F64AC
	.incbin "baserom.gba", 0x5f64ac, 0xfc
	.globl gUnknown_85F65A8
gUnknown_85F65A8: @ 0x085F65A8
	.incbin "baserom.gba", 0x5f65a8, 0xcc
	.globl gUnknown_85F6674
gUnknown_85F6674: @ 0x085F6674
	.incbin "baserom.gba", 0x5f6674, 0xa0
	.globl gUnknown_85F6714
gUnknown_85F6714: @ 0x085F6714
	.incbin "baserom.gba", 0x5f6714, 0x20
	.globl gUnknown_85F6734
gUnknown_85F6734: @ 0x085F6734
	.incbin "baserom.gba", 0x5f6734, 0xae0
	.globl gUnknown_85F7214
gUnknown_85F7214: @ 0x085F7214
	.incbin "baserom.gba", 0x5f7214, 0x8
	.globl gUnknown_85F721C
gUnknown_85F721C: @ 0x085F721C
	.incbin "baserom.gba", 0x5f721c, 0x18
	.globl gUnknown_85F7234
gUnknown_85F7234: @ 0x085F7234
	.incbin "baserom.gba", 0x5f7234, 0x8
	.globl gUnknown_85F723C
gUnknown_85F723C: @ 0x085F723C
	.incbin "baserom.gba", 0x5f723c, 0x4
	.globl gUnknown_85F7240
gUnknown_85F7240: @ 0x085F7240
	.incbin "baserom.gba", 0x5f7240, 0x8
	.globl gUnknown_85F7248
gUnknown_85F7248: @ 0x085F7248
	.incbin "baserom.gba", 0x5f7248, 0x10
	.globl gUnknown_85F7258
gUnknown_85F7258: @ 0x085F7258
	.incbin "baserom.gba", 0x5f7258, 0x80
	.globl gUnknown_85F72D8
gUnknown_85F72D8: @ 0x085F72D8
	.incbin "baserom.gba", 0x5f72d8, 0x8
	.globl gUnknown_85F72E0
gUnknown_85F72E0: @ 0x085F72E0
	.incbin "baserom.gba", 0x5f72e0, 0x84
	.globl gUnknown_85F7364
gUnknown_85F7364: @ 0x085F7364
	.incbin "baserom.gba", 0x5f7364, 0x18

	@ src/pokenav_match_call_data.c:184 pokenav_match_call_data_line_184
	.globl gText_Rom_5F737C
gText_Rom_5F737C: @ 0x085F737C
	.string "デボンしゃちょう$"
	.if (. - gText_Rom_5F737C) > 0x9
	.error "gText_Rom_5F737C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F737C) < 0x9
	.space 0x9 - (. - gText_Rom_5F737C)
	.endif

	@ src/pokenav_match_call_data.c:185 pokenav_match_call_data_line_185
	.globl gText_Rom_5F7385
gText_Rom_5F7385: @ 0x085F7385
	.string "ツワブキ$"
	.if (. - gText_Rom_5F7385) > 0x5
	.error "gText_Rom_5F7385 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7385) < 0x5
	.space 0x5 - (. - gText_Rom_5F7385)
	.endif

	@ src/pokenav_match_call_data.c:260 pokenav_match_call_data_line_260
	.globl gText_Rom_5F738A
gText_Rom_5F738A: @ 0x085F738A
	.string "いしがかたいひと$"
	.if (. - gText_Rom_5F738A) > 0x9
	.error "gText_Rom_5F738A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F738A) < 0x9
	.space 0x9 - (. - gText_Rom_5F738A)
	.endif

	@ src/data/trainers.h:43075 trainers_line_43075 (+4 aliases)
	.globl gText_Rom_5F7393
gText_Rom_5F7393: @ 0x085F7393
	.string "ダイゴ$"
	.if (. - gText_Rom_5F7393) > 0x4
	.error "gText_Rom_5F7393 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7393) < 0x4
	.space 0x4 - (. - gText_Rom_5F7393)
	.endif

	@ src/pokenav_match_call_data.c:274 gText_MayBrendanMatchCallDesc
	.globl gText_Rom_5F7397
gText_Rom_5F7397: @ 0x085F7397
	.string "おとなりさん$"
	.if (. - gText_Rom_5F7397) > 0x7
	.error "gText_Rom_5F7397 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7397) < 0x7
	.space 0x7 - (. - gText_Rom_5F7397)
	.endif

	@ src/pokenav_match_call_data.c:208 pokenav_match_call_data_line_208
	.globl gText_Rom_5F739E
gText_Rom_5F739E: @ 0x085F739E
	.string "つよくてたのもしい$"
	.if (. - gText_Rom_5F739E) > 0xa
	.error "gText_Rom_5F739E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F739E) < 0xa
	.space 0xa - (. - gText_Rom_5F739E)
	.endif

	@ src/pokenav_match_call_data.c:245 pokenav_match_call_data_line_245
	.globl gText_Rom_5F73A8
gText_Rom_5F73A8: @ 0x085F73A8
	.string "やさしくてきれい$"
	.if (. - gText_Rom_5F73A8) > 0x9
	.error "gText_Rom_5F73A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73A8) < 0x9
	.space 0x9 - (. - gText_Rom_5F73A8)
	.endif

	@ src/pokenav_match_call_data.c:336 pokenav_match_call_data_line_336
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F73B1
gText_Rom_5F73B1: @ 0x085F73B1
	.string "ポケモンがだいすき$"
	.if (. - gText_Rom_5F73B1) != 0xa
	.error "gText_Rom_5F73B1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F73B6
	.set gText_Rom_5F73B6, gText_Rom_5F73B1 + 0x5
	.incbin "baserom.gba", 0x5f73bb, 0x6

	@ src/pokenav_match_call_data.c:360 pokenav_match_call_data_line_360
	.globl gText_Rom_5F73C1
gText_Rom_5F73C1: @ 0x085F73C1
	.string "しんしゅつきぼつ$"
	.if (. - gText_Rom_5F73C1) > 0x9
	.error "gText_Rom_5F73C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73C1) < 0x9
	.space 0x9 - (. - gText_Rom_5F73C1)
	.endif

	@ src/fame_checker.c:517 sText_FameCheckerName_Scott (+1 aliases)
	.globl gText_Rom_5F73CA
gText_Rom_5F73CA: @ 0x085F73CA
	.string "エニシダ$"
	.if (. - gText_Rom_5F73CA) > 0x5
	.error "gText_Rom_5F73CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73CA) < 0x5
	.space 0x5 - (. - gText_Rom_5F73CA)
	.endif

	@ src/pokenav_match_call_data.c:380 pokenav_match_call_data_line_380
	.globl gText_Rom_5F73CF
gText_Rom_5F73CF: @ 0x085F73CF
	.string "いわのゆうとうせい$"
	.if (. - gText_Rom_5F73CF) > 0xa
	.error "gText_Rom_5F73CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73CF) < 0xa
	.space 0xa - (. - gText_Rom_5F73CF)
	.endif

	@ src/pokenav_match_call_data.c:397 pokenav_match_call_data_line_397
	.globl gText_Rom_5F73D9
gText_Rom_5F73D9: @ 0x085F73D9
	.string "ビッグなウェーブ$"
	.if (. - gText_Rom_5F73D9) > 0x9
	.error "gText_Rom_5F73D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73D9) < 0x9
	.space 0x9 - (. - gText_Rom_5F73D9)
	.endif

	@ src/pokenav_match_call_data.c:414 pokenav_match_call_data_line_414
	.globl gText_Rom_5F73E2
gText_Rom_5F73E2: @ 0x085F73E2
	.string "でんげきおやじ$"
	.if (. - gText_Rom_5F73E2) > 0x8
	.error "gText_Rom_5F73E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73E2) < 0x8
	.space 0x8 - (. - gText_Rom_5F73E2)
	.endif

	@ src/pokenav_match_call_data.c:431 pokenav_match_call_data_line_431
	.globl gText_Rom_5F73EA
gText_Rom_5F73EA: @ 0x085F73EA
	.string "じょうねつのひと$"
	.if (. - gText_Rom_5F73EA) > 0x9
	.error "gText_Rom_5F73EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73EA) < 0x9
	.space 0x9 - (. - gText_Rom_5F73EA)
	.endif

	@ src/pokenav_match_call_data.c:448 pokenav_match_call_data_line_448
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F73F3
gText_Rom_5F73F3: @ 0x085F73F3
	.string "せかいのとりつかい$"
	.if (. - gText_Rom_5F73F3) != 0xa
	.error "gText_Rom_5F73F3 must retain its original byte length"
	.endif
	.globl gText_Rom_5F73F7
	.set gText_Rom_5F73F7, gText_Rom_5F73F3 + 0x4

	@ src/pokenav_match_call_data.c:465 pokenav_match_call_data_line_465
	.globl gText_Rom_5F73FD
gText_Rom_5F73FD: @ 0x085F73FD
	.string "しんぴてきなコンビ$"
	.if (. - gText_Rom_5F73FD) > 0xa
	.error "gText_Rom_5F73FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73FD) < 0xa
	.space 0xa - (. - gText_Rom_5F73FD)
	.endif

	@ src/pokenav_match_call_data.c:482 pokenav_match_call_data_line_482
	.globl gText_Rom_5F7407
gText_Rom_5F7407: @ 0x085F7407
	.string "みわくのダンディ$"
	.if (. - gText_Rom_5F7407) > 0x9
	.error "gText_Rom_5F7407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7407) < 0x9
	.space 0x9 - (. - gText_Rom_5F7407)
	.endif

	@ src/battle_main.c:333 battle_main_line_333 (+2 aliases)
	.globl gText_Rom_5F7410
gText_Rom_5F7410: @ 0x085F7410
	.string "してんのう$"
	.if (. - gText_Rom_5F7410) > 0x6
	.error "gText_Rom_5F7410 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7410) < 0x6
	.space 0x6 - (. - gText_Rom_5F7410)
	.endif

	@ src/battle_main.c:340 battle_main_line_340 (+2 aliases)
	.globl gText_Rom_5F7416
gText_Rom_5F7416: @ 0x085F7416
	.string "チャンピオン$"
	.if (. - gText_Rom_5F7416) > 0x7
	.error "gText_Rom_5F7416 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7416) < 0x7
	.space 0x7 - (. - gText_Rom_5F7416)
	.endif

	@ src/battle_main.c:409 battle_main_line_409 (+1 aliases)
	.globl gText_Rom_5F741D
gText_Rom_5F741D: @ 0x085F741D
	.string "ポケモンはかせ$"
	.if (. - gText_Rom_5F741D) > 0x8
	.error "gText_Rom_5F741D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F741D) < 0x8
	.space 0x8 - (. - gText_Rom_5F741D)
	.endif
	.incbin "baserom.gba", 0x5f7425, 0x58f
	.globl gUnknown_85F79B4
gUnknown_85F79B4: @ 0x085F79B4
	.incbin "baserom.gba", 0x5f79b4, 0x54
	.globl gUnknown_85F7A08
gUnknown_85F7A08: @ 0x085F7A08
	.incbin "baserom.gba", 0x5f7a08, 0x14
	.globl gUnknown_85F7A1C
gUnknown_85F7A1C: @ 0x085F7A1C
	.incbin "baserom.gba", 0x5f7a1c, 0x14
	.globl gUnknown_85F7A30
gUnknown_85F7A30: @ 0x085F7A30
	.incbin "baserom.gba", 0x5f7a30, 0x14
	.globl gUnknown_85F7A44
gUnknown_85F7A44: @ 0x085F7A44
	.incbin "baserom.gba", 0x5f7a44, 0x14
	.globl gUnknown_85F7A58
gUnknown_85F7A58: @ 0x085F7A58
	.incbin "baserom.gba", 0x5f7a58, 0x14
	.globl gUnknown_85F7A6C
gUnknown_85F7A6C: @ 0x085F7A6C
	.incbin "baserom.gba", 0x5f7a6c, 0x14
	.globl gUnknown_85F7A80
gUnknown_85F7A80: @ 0x085F7A80
	.incbin "baserom.gba", 0x5f7a80, 0x14
	.globl gUnknown_85F7A94
gUnknown_85F7A94: @ 0x085F7A94
	.incbin "baserom.gba", 0x5f7a94, 0x60
	.globl gUnknown_85F7AF4
gUnknown_85F7AF4: @ 0x085F7AF4
	.incbin "baserom.gba", 0x5f7af4, 0x18
	.globl gUnknown_85F7B0C
gUnknown_85F7B0C: @ 0x085F7B0C
	.incbin "baserom.gba", 0x5f7b0c, 0xc
	.globl gUnknown_85F7B18
gUnknown_85F7B18: @ 0x085F7B18
	.incbin "baserom.gba", 0x5f7b18, 0x100
	.globl gUnknown_85F7C18
gUnknown_85F7C18: @ 0x085F7C18
	.incbin "baserom.gba", 0x5f7c18, 0x30
	.globl gUnknown_85F7C48
gUnknown_85F7C48: @ 0x085F7C48
	.incbin "baserom.gba", 0x5f7c48, 0x8
	.globl gUnknown_85F7C50
gUnknown_85F7C50: @ 0x085F7C50

	@ src/strings.c:391 gText_BattleMoves
	.globl gText_Rom_5F7C50
gText_Rom_5F7C50: @ 0x085F7C50
	.string "たたかうわざ$"
	.if (. - gText_Rom_5F7C50) > 0x7
	.error "gText_Rom_5F7C50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C50) < 0x7
	.space 0x7 - (. - gText_Rom_5F7C50)
	.endif
	.globl gUnknown_85F7C57
gUnknown_85F7C57: @ 0x085F7C57

	@ src/strings.c:392 gText_ContestMoves (+1 aliases)
	.globl gText_Rom_5F7C57
gText_Rom_5F7C57: @ 0x085F7C57
	.string "コンテストわざ$"
	.if (. - gText_Rom_5F7C57) > 0x8
	.error "gText_Rom_5F7C57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C57) < 0x8
	.space 0x8 - (. - gText_Rom_5F7C57)
	.endif
	.globl gUnknown_85F7C5F
gUnknown_85F7C5F: @ 0x085F7C5F

	@ src/battle_message.c:1465 gText_MoveInterfaceType (+2 aliases)
	.globl gText_Rom_5F7C5F
gText_Rom_5F7C5F: @ 0x085F7C5F
	.string "タイプ/$"
	.if (. - gText_Rom_5F7C5F) > 0x5
	.error "gText_Rom_5F7C5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C5F) < 0x5
	.space 0x5 - (. - gText_Rom_5F7C5F)
	.endif
	.globl gUnknown_85F7C64
gUnknown_85F7C64: @ 0x085F7C64

	@ src/strings.c:1135 gText_MoveRelearnerPP
	.globl gText_Rom_5F7C64
gText_Rom_5F7C64: @ 0x085F7C64
	.string "PP/$"
	.if (. - gText_Rom_5F7C64) > 0x4
	.error "gText_Rom_5F7C64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C64) < 0x4
	.space 0x4 - (. - gText_Rom_5F7C64)
	.endif
	.globl gUnknown_85F7C68
gUnknown_85F7C68: @ 0x085F7C68

	@ src/strings.c:1136 gText_MoveRelearnerPower
	.globl gText_Rom_5F7C68
gText_Rom_5F7C68: @ 0x085F7C68
	.string "いりょく/$"
	.if (. - gText_Rom_5F7C68) > 0x6
	.error "gText_Rom_5F7C68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C68) < 0x6
	.space 0x6 - (. - gText_Rom_5F7C68)
	.endif
	.globl gUnknown_85F7C6E
gUnknown_85F7C6E: @ 0x085F7C6E

	@ src/strings.c:1137 gText_MoveRelearnerAccuracy
	.globl gText_Rom_5F7C6E
gText_Rom_5F7C6E: @ 0x085F7C6E
	.string "めいちゅう/$"
	.if (. - gText_Rom_5F7C6E) > 0x7
	.error "gText_Rom_5F7C6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C6E) < 0x7
	.space 0x7 - (. - gText_Rom_5F7C6E)
	.endif
	.globl gUnknown_85F7C75
gUnknown_85F7C75: @ 0x085F7C75

	@ src/data/easy_chat/easy_chat_group_events.h:1 gEasyChatWord_Appeal (+3 aliases)
	.globl gText_Rom_5F7C75
gText_Rom_5F7C75: @ 0x085F7C75
	.string "アピール$"
	.if (. - gText_Rom_5F7C75) > 0x5
	.error "gText_Rom_5F7C75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C75) < 0x5
	.space 0x5 - (. - gText_Rom_5F7C75)
	.endif
	.globl gUnknown_85F7C7A
gUnknown_85F7C7A: @ 0x085F7C7A

	@ src/strings.c:381 gText_Jam (+1 aliases)
	.globl gText_Rom_5F7C7A
gText_Rom_5F7C7A: @ 0x085F7C7A
	.string "ぼうがい$"
	.if (. - gText_Rom_5F7C7A) > 0x5
	.error "gText_Rom_5F7C7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C7A) < 0x5
	.space 0x5 - (. - gText_Rom_5F7C7A)
	.endif
	.incbin "baserom.gba", 0x5f7c7f, 0x1
	.globl gUnknown_85F7C80
gUnknown_85F7C80: @ 0x085F7C80
	.incbin "baserom.gba", 0x5f7c80, 0x2c18
	.globl gUnknown_85FA898
gUnknown_85FA898: @ 0x085FA898
	.incbin "baserom.gba", 0x5fa898, 0x8
	.globl gUnknown_85FA8A0
gUnknown_85FA8A0: @ 0x085FA8A0
	.incbin "baserom.gba", 0x5fa8a0, 0x18
	.globl gUnknown_85FA8B8
gUnknown_85FA8B8: @ 0x085FA8B8
	.incbin "baserom.gba", 0x5fa8b8, 0x8
	.globl gUnknown_85FA8C0
gUnknown_85FA8C0: @ 0x085FA8C0
	.incbin "baserom.gba", 0x5fa8c0, 0x20
	.globl gUnknown_85FA8E0
gUnknown_85FA8E0: @ 0x085FA8E0
	.incbin "baserom.gba", 0x5fa8e0, 0x18
	.globl gUnknown_85FA8F8
gUnknown_85FA8F8: @ 0x085FA8F8
	.incbin "baserom.gba", 0x5fa8f8, 0x18
	.globl gUnknown_85FA910
gUnknown_85FA910: @ 0x085FA910
	.incbin "baserom.gba", 0x5fa910, 0x8
	.globl gUnknown_85FA918
gUnknown_85FA918: @ 0x085FA918
	.incbin "baserom.gba", 0x5fa918, 0x4c
	.globl gUnknown_85FA964
gUnknown_85FA964: @ 0x085FA964
	.incbin "baserom.gba", 0x5fa964, 0x18
	.globl gUnknown_85FA97C
gUnknown_85FA97C: @ 0x085FA97C
	.incbin "baserom.gba", 0x5fa97c, 0x28

	@ src/battle_debug.c:336 battle_debug_line_336 (+1 aliases)
	.globl gText_Rom_5FA9A4
gText_Rom_5FA9A4: @ 0x085FA9A4
	.string "さいだいHP$"
	.if (. - gText_Rom_5FA9A4) > 0x7
	.error "gText_Rom_5FA9A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9A4) < 0x7
	.space 0x7 - (. - gText_Rom_5FA9A4)
	.endif

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5FA9AB
gText_Rom_5FA9AB: @ 0x085FA9AB
	.string "こうげき$"
	.if (. - gText_Rom_5FA9AB) > 0x5
	.error "gText_Rom_5FA9AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9AB) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9AB)
	.endif

	@ src/battle_debug.c:338 battle_debug_line_338 (+4 aliases)
	.globl gText_Rom_5FA9B0
gText_Rom_5FA9B0: @ 0x085FA9B0
	.string "ぼうぎょ$"
	.if (. - gText_Rom_5FA9B0) > 0x5
	.error "gText_Rom_5FA9B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9B0) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9B0)
	.endif

	@ src/battle_debug.c:339 battle_debug_line_339 (+4 aliases)
	.globl gText_Rom_5FA9B5
gText_Rom_5FA9B5: @ 0x085FA9B5
	.string "すばやさ$"
	.if (. - gText_Rom_5FA9B5) > 0x5
	.error "gText_Rom_5FA9B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9B5) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9B5)
	.endif

	@ src/battle_debug.c:340 battle_debug_line_340 (+5 aliases)
	.globl gText_Rom_5FA9BA
gText_Rom_5FA9BA: @ 0x085FA9BA
	.string "とくこう$"
	.if (. - gText_Rom_5FA9BA) > 0x5
	.error "gText_Rom_5FA9BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9BA) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9BA)
	.endif

	@ src/battle_debug.c:341 battle_debug_line_341 (+5 aliases)
	.globl gText_Rom_5FA9BF
gText_Rom_5FA9BF: @ 0x085FA9BF
	.string "とくぼう$"
	.if (. - gText_Rom_5FA9BF) > 0x5
	.error "gText_Rom_5FA9BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FA9BF) < 0x5
	.space 0x5 - (. - gText_Rom_5FA9BF)
	.endif
	.globl gUnknown_85FA9C4
gUnknown_85FA9C4: @ 0x085FA9C4
	.incbin "baserom.gba", 0x5fa9c4, 0x3
	.globl gUnknown_85FA9C7
gUnknown_85FA9C7: @ 0x085FA9C7
	.incbin "baserom.gba", 0x5fa9c7, 0x5
	.globl gUnknown_85FA9CC
gUnknown_85FA9CC: @ 0x085FA9CC
	.incbin "baserom.gba", 0x5fa9cc, 0x18
	.globl gUnknown_85FA9E4
gUnknown_85FA9E4: @ 0x085FA9E4
	.incbin "baserom.gba", 0x5fa9e4, 0xe0

	@ src/ereader_helpers.c:85 ereader_helpers_line_85
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAAC4
gText_Rom_5FAAC4: @ 0x085FAAC4
	.string "マルノーム$$$$$$"
	.if (. - gText_Rom_5FAAC4) != 0xb
	.error "gText_Rom_5FAAC4 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5faacf, 0x21

	@ src/ereader_helpers.c:107 ereader_helpers_line_107
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAAF0
gText_Rom_5FAAF0: @ 0x085FAAF0
	.string "ドクケイル$$$$$$"
	.if (. - gText_Rom_5FAAF0) != 0xb
	.error "gText_Rom_5FAAF0 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5faafb, 0x21

	@ src/ereader_helpers.c:129 ereader_helpers_line_129
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAB1C
gText_Rom_5FAB1C: @ 0x085FAB1C
	.string "ジーランス$$$$$$"
	.if (. - gText_Rom_5FAB1C) != 0xb
	.error "gText_Rom_5FAB1C must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fab27, 0xe1

	@ src/ereader_helpers.c:165 ereader_helpers_line_165
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAC08
gText_Rom_5FAC08: @ 0x085FAC08
	.string "ノクタス$$$$$$$"
	.if (. - gText_Rom_5FAC08) != 0xb
	.error "gText_Rom_5FAC08 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fac13, 0x21

	@ src/ereader_helpers.c:187 ereader_helpers_line_187
	@ Preserve exact byte length: semantic suffix text pointer, internal terminator.
	.globl gText_Rom_5FAC34
gText_Rom_5FAC34: @ 0x085FAC34
	.string "オオスバメ$$$$$$"
	.if (. - gText_Rom_5FAC34) != 0xb
	.error "gText_Rom_5FAC34 must retain its original byte length"
	.endif
	.globl gText_Rom_5FAC36
	.set gText_Rom_5FAC36, gText_Rom_5FAC34 + 0x2
	.incbin "baserom.gba", 0x5fac3f, 0x21

	@ src/ereader_helpers.c:209 ereader_helpers_line_209
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAC60
gText_Rom_5FAC60: @ 0x085FAC60
	.string "ナマズン$$$$$$$"
	.if (. - gText_Rom_5FAC60) != 0xb
	.error "gText_Rom_5FAC60 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fac6b, 0xe1

	@ src/ereader_helpers.c:245 ereader_helpers_line_245
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAD4C
gText_Rom_5FAD4C: @ 0x085FAD4C
	.string "エネコロロ$$$$$$"
	.if (. - gText_Rom_5FAD4C) != 0xb
	.error "gText_Rom_5FAD4C must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fad57, 0x21

	@ src/ereader_helpers.c:267 ereader_helpers_line_267
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAD78
gText_Rom_5FAD78: @ 0x085FAD78
	.string "ロゼリア$$$$$$$"
	.if (. - gText_Rom_5FAD78) != 0xb
	.error "gText_Rom_5FAD78 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fad83, 0x21

	@ src/ereader_helpers.c:289 ereader_helpers_line_289
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FADA4
gText_Rom_5FADA4: @ 0x085FADA4
	.string "アゲハント$$$$$$"
	.if (. - gText_Rom_5FADA4) != 0xb
	.error "gText_Rom_5FADA4 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fadaf, 0xe1

	@ src/ereader_helpers.c:325 ereader_helpers_line_325
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAE90
gText_Rom_5FAE90: @ 0x085FAE90
	.string "クチート$$$$$$$"
	.if (. - gText_Rom_5FAE90) != 0xb
	.error "gText_Rom_5FAE90 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fae9b, 0x21

	@ src/ereader_helpers.c:347 ereader_helpers_line_347
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAEBC
gText_Rom_5FAEBC: @ 0x085FAEBC
	.string "サメハダー$$$$$$"
	.if (. - gText_Rom_5FAEBC) != 0xb
	.error "gText_Rom_5FAEBC must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5faec7, 0x21

	@ src/ereader_helpers.c:369 ereader_helpers_line_369
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAEE8
gText_Rom_5FAEE8: @ 0x085FAEE8
	.string "ジュペッタ$$$$$$"
	.if (. - gText_Rom_5FAEE8) != 0xb
	.error "gText_Rom_5FAEE8 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5faef3, 0x1
	.globl gUnknown_85FAEF4
gUnknown_85FAEF4: @ 0x085FAEF4
	.incbin "baserom.gba", 0x5faef4, 0x10
	.globl gUnknown_85FAF04
gUnknown_85FAF04: @ 0x085FAF04
	.incbin "baserom.gba", 0x5faf04, 0x14
	.globl gUnknown_85FAF18
gUnknown_85FAF18: @ 0x085FAF18
	.incbin "baserom.gba", 0x5faf18, 0x10
	.globl gUnknown_85FAF28
gUnknown_85FAF28: @ 0x085FAF28
	.incbin "baserom.gba", 0x5faf28, 0x2
	.globl gUnknown_85FAF2A
gUnknown_85FAF2A: @ 0x085FAF2A
	.incbin "baserom.gba", 0x5faf2a, 0xe
	.globl gUnknown_85FAF38
gUnknown_85FAF38: @ 0x085FAF38
	.incbin "baserom.gba", 0x5faf38, 0x68

	@ src/data/battle_frontier/trainer_hill.h:52 trainer_hill_line_52
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAFA0
gText_Rom_5FAFA0: @ 0x085FAFA0
	.string "ジグザグマ$$$$$$"
	.if (. - gText_Rom_5FAFA0) != 0xb
	.error "gText_Rom_5FAFA0 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fafab, 0x21

	@ src/data/battle_frontier/trainer_hill.h:72 trainer_hill_line_72
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAFCC
gText_Rom_5FAFCC: @ 0x085FAFCC
	.string "キノココ$$$$$$$"
	.if (. - gText_Rom_5FAFCC) != 0xb
	.error "gText_Rom_5FAFCC must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fafd7, 0x21

	@ src/data/battle_frontier/trainer_hill.h:92 trainer_hill_line_92
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAFF8
gText_Rom_5FAFF8: @ 0x085FAFF8
	.string "サンド$$$$$$$$"
	.if (. - gText_Rom_5FAFF8) != 0xb
	.error "gText_Rom_5FAFF8 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb003, 0x165

	@ src/data/battle_frontier/trainer_hill.h:130 trainer_hill_line_130
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB168
gText_Rom_5FB168: @ 0x085FB168
	.string "キャモメ$$$$$$$"
	.if (. - gText_Rom_5FB168) != 0xb
	.error "gText_Rom_5FB168 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb173, 0x21

	@ src/data/battle_frontier/trainer_hill.h:151 trainer_hill_line_151
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB194
gText_Rom_5FB194: @ 0x085FB194
	.string "ドンメル$$$$$$$"
	.if (. - gText_Rom_5FB194) != 0xb
	.error "gText_Rom_5FB194 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb19f, 0x21

	@ src/data/battle_frontier/trainer_hill.h:172 trainer_hill_line_172
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB1C0
gText_Rom_5FB1C0: @ 0x085FB1C0
	.string "アメタマ$$$$$$$"
	.if (. - gText_Rom_5FB1C0) != 0xb
	.error "gText_Rom_5FB1C0 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb1cb, 0x185

	@ src/data/battle_frontier/trainer_hill.h:216 trainer_hill_line_216
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB350
gText_Rom_5FB350: @ 0x085FB350
	.string "ラクライ$$$$$$$"
	.if (. - gText_Rom_5FB350) != 0xb
	.error "gText_Rom_5FB350 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb35b, 0x21

	@ src/data/battle_frontier/trainer_hill.h:237 trainer_hill_line_237
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB37C
gText_Rom_5FB37C: @ 0x085FB37C
	.string "ヘイガニ$$$$$$$"
	.if (. - gText_Rom_5FB37C) != 0xb
	.error "gText_Rom_5FB37C must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb387, 0x21

	@ src/data/battle_frontier/trainer_hill.h:258 trainer_hill_line_258
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB3A8
gText_Rom_5FB3A8: @ 0x085FB3A8
	.string "ヤジロン$$$$$$$"
	.if (. - gText_Rom_5FB3A8) != 0xb
	.error "gText_Rom_5FB3A8 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb3b3, 0x165

	@ src/data/battle_frontier/trainer_hill.h:296 trainer_hill_line_296
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB518
gText_Rom_5FB518: @ 0x085FB518
	.string "タマザラシ$$$$$$"
	.if (. - gText_Rom_5FB518) != 0xb
	.error "gText_Rom_5FB518 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb523, 0x21

	@ src/data/battle_frontier/trainer_hill.h:317 trainer_hill_line_317
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB544
gText_Rom_5FB544: @ 0x085FB544
	.string "バネブー$$$$$$$"
	.if (. - gText_Rom_5FB544) != 0xb
	.error "gText_Rom_5FB544 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb54f, 0x21

	@ src/data/battle_frontier/trainer_hill.h:339 trainer_hill_line_339
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FB570
gText_Rom_5FB570: @ 0x085FB570
	.string "ポチエナ$$$$$$$"
	.if (. - gText_Rom_5FB570) != 0xb
	.error "gText_Rom_5FB570 must retain its original byte length"
	.endif
	.incbin "baserom.gba", 0x5fb57b, 0x125
	.globl gUnknown_85FB6A0
gUnknown_85FB6A0: @ 0x085FB6A0
	.incbin "baserom.gba", 0x5fb6a0, 0x218
	.globl gUnknown_85FB8B8
gUnknown_85FB8B8: @ 0x085FB8B8
	.incbin "baserom.gba", 0x5fb8b8, 0x8
	.globl gUnknown_85FB8C0
gUnknown_85FB8C0: @ 0x085FB8C0
	.incbin "baserom.gba", 0x5fb8c0, 0x20
	.globl gUnknown_85FB8E0
gUnknown_85FB8E0: @ 0x085FB8E0
	.incbin "baserom.gba", 0x5fb8e0, 0x3
	.globl gUnknown_85FB8E3
gUnknown_85FB8E3: @ 0x085FB8E3

	@ src/strings.c:1113 gText_TimeBoard
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5FB8E3
gText_Rom_5FB8E3: @ 0x085FB8E3
	.string "タイムボード$"
	.if (. - gText_Rom_5FB8E3) != 0x7
	.error "gText_Rom_5FB8E3 must retain its original byte length"
	.endif
	.globl gText_Rom_5FB8E6
	.set gText_Rom_5FB8E6, gText_Rom_5FB8E3 + 0x3
	.globl gUnknown_85FB8EA
gUnknown_85FB8EA: @ 0x085FB8EA
	.incbin "baserom.gba", 0x5fb8ea, 0x7
	.globl gUnknown_85FB8F1
gUnknown_85FB8F1: @ 0x085FB8F1

	@ data/maps/TrainerHill_Entrance/scripts.inc:358 TrainerHill_Entrance_Text_ChallengeTime
	.globl gText_Rom_5FB8F1
gText_Rom_5FB8F1: @ 0x085FB8F1
	.string "{STR_VAR_1}ふん {STR_VAR_2}びょう {STR_VAR_3}$"
	.if (. - gText_Rom_5FB8F1) > 0xe
	.error "gText_Rom_5FB8F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FB8F1) < 0xe
	.space 0xe - (. - gText_Rom_5FB8F1)
	.endif
	.incbin "baserom.gba", 0x5fb8ff, 0x3

	@ src/data/script_menu.h:958 script_menu_line_958 (+1 aliases)
	.globl gText_Rom_5FB902
gText_Rom_5FB902: @ 0x085FB902
	.string "2F$"
	.if (. - gText_Rom_5FB902) > 0x3
	.error "gText_Rom_5FB902 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FB902) < 0x3
	.space 0x3 - (. - gText_Rom_5FB902)
	.endif

	@ src/data/script_menu.h:957 script_menu_line_957 (+1 aliases)
	.globl gText_Rom_5FB905
gText_Rom_5FB905: @ 0x085FB905
	.string "3F$"
	.if (. - gText_Rom_5FB905) > 0x3
	.error "gText_Rom_5FB905 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FB905) < 0x3
	.space 0x3 - (. - gText_Rom_5FB905)
	.endif
	.incbin "baserom.gba", 0x5fb908, 0x4
	.globl gUnknown_85FB90C
gUnknown_85FB90C: @ 0x085FB90C
	.incbin "baserom.gba", 0x5fb90c, 0x10
	.globl gUnknown_85FB91C
gUnknown_85FB91C: @ 0x085FB91C
	.incbin "baserom.gba", 0x5fb91c, 0x44
	.globl gUnknown_85FB960
gUnknown_85FB960: @ 0x085FB960
	.incbin "baserom.gba", 0x5fb960, 0x1

	@ src/dexnav.c:183 sText_DexNav_NoInfo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5FB961
gText_Rom_5FB961: @ 0x085FB961
	.string "--------$"
	.if (. - gText_Rom_5FB961) != 0x9
	.error "gText_Rom_5FB961 must retain its original byte length"
	.endif
	.globl gText_Rom_5FB962
	.set gText_Rom_5FB962, gText_Rom_5FB961 + 0x1
	.globl gText_Rom_5FB965
	.set gText_Rom_5FB965, gText_Rom_5FB961 + 0x4
	.globl gText_Rom_5FB966
	.set gText_Rom_5FB966, gText_Rom_5FB961 + 0x5
	.incbin "baserom.gba", 0x5fb96a, 0x2
	.globl gUnknown_85FB96C
gUnknown_85FB96C: @ 0x085FB96C
	.incbin "baserom.gba", 0x5fb96c, 0x18
	.globl gUnknown_85FB984
gUnknown_85FB984: @ 0x085FB984
	.incbin "baserom.gba", 0x5fb984, 0x10
	.globl gUnknown_85FB994
gUnknown_85FB994: @ 0x085FB994
	.incbin "baserom.gba", 0x5fb994, 0x8
	.globl gUnknown_85FB99C
gUnknown_85FB99C: @ 0x085FB99C
	.incbin "baserom.gba", 0x5fb99c, 0x8c
	.globl gUnknown_85FBA28
gUnknown_85FBA28: @ 0x085FBA28
	.incbin "baserom.gba", 0x5fba28, 0x24
	.globl gUnknown_85FBA4C
gUnknown_85FBA4C: @ 0x085FBA4C
	.incbin "baserom.gba", 0x5fba4c, 0x24
	.globl gUnknown_85FBA70
gUnknown_85FBA70: @ 0x085FBA70
	.incbin "baserom.gba", 0x5fba70, 0xa8
	.globl gUnknown_85FBB18
gUnknown_85FBB18: @ 0x085FBB18
	.incbin "baserom.gba", 0x5fbb18, 0x30
	.globl gUnknown_85FBB48
gUnknown_85FBB48: @ 0x085FBB48
	.incbin "baserom.gba", 0x5fbb48, 0x18
	.globl gUnknown_85FBB60
gUnknown_85FBB60: @ 0x085FBB60
	.incbin "baserom.gba", 0x5fbb60, 0x18
	.globl gUnknown_85FBB78
gUnknown_85FBB78: @ 0x085FBB78
	.incbin "baserom.gba", 0x5fbb78, 0xc
	.globl gUnknown_85FBB84
gUnknown_85FBB84: @ 0x085FBB84
	.incbin "baserom.gba", 0x5fbb84, 0x3c
	.globl gUnknown_85FBBC0
gUnknown_85FBBC0: @ 0x085FBBC0
	.incbin "baserom.gba", 0x5fbbc0, 0x8
	.globl gUnknown_85FBBC8
gUnknown_85FBBC8: @ 0x085FBBC8
	.incbin "baserom.gba", 0x5fbbc8, 0x8
	.globl gUnknown_85FBBD0
gUnknown_85FBBD0: @ 0x085FBBD0
	.incbin "baserom.gba", 0x5fbbd0, 0x24
	.globl gUnknown_85FBBF4
gUnknown_85FBBF4: @ 0x085FBBF4
	.incbin "baserom.gba", 0x5fbbf4, 0x8
	.globl gUnknown_85FBBFC
gUnknown_85FBBFC: @ 0x085FBBFC
	.incbin "baserom.gba", 0x5fbbfc, 0x24
	.globl gUnknown_85FBC20
gUnknown_85FBC20: @ 0x085FBC20
	.incbin "baserom.gba", 0x5fbc20, 0x8
	.globl gUnknown_85FBC28
gUnknown_85FBC28: @ 0x085FBC28
	.incbin "baserom.gba", 0x5fbc28, 0xa8
	.globl gUnknown_85FBCD0
gUnknown_85FBCD0: @ 0x085FBCD0
	.incbin "baserom.gba", 0x5fbcd0, 0x8
	.globl gUnknown_85FBCD8
gUnknown_85FBCD8: @ 0x085FBCD8
	.incbin "baserom.gba", 0x5fbcd8, 0x8
	.globl gUnknown_85FBCE0
gUnknown_85FBCE0: @ 0x085FBCE0
	.incbin "baserom.gba", 0x5fbce0, 0x30
	.globl gUnknown_85FBD10
gUnknown_85FBD10: @ 0x085FBD10
	.incbin "baserom.gba", 0x5fbd10, 0x8
	.globl gUnknown_85FBD18
gUnknown_85FBD18: @ 0x085FBD18
	.incbin "baserom.gba", 0x5fbd18, 0x18
	.globl gUnknown_85FBD30
gUnknown_85FBD30: @ 0x085FBD30
	.incbin "baserom.gba", 0x5fbd30, 0x8
	.globl gUnknown_85FBD38
gUnknown_85FBD38: @ 0x085FBD38
	.incbin "baserom.gba", 0x5fbd38, 0x18
	.globl gUnknown_85FBD50
gUnknown_85FBD50: @ 0x085FBD50
	.incbin "baserom.gba", 0x5fbd50, 0x3c
	.globl gUnknown_85FBD8C
gUnknown_85FBD8C: @ 0x085FBD8C
	.incbin "baserom.gba", 0x5fbd8c, 0x8
	.globl gUnknown_85FBD94
gUnknown_85FBD94: @ 0x085FBD94
	.incbin "baserom.gba", 0x5fbd94, 0x8
	.globl gUnknown_85FBD9C
gUnknown_85FBD9C: @ 0x085FBD9C
	.incbin "baserom.gba", 0x5fbd9c, 0x18
	.globl gUnknown_85FBDB4
gUnknown_85FBDB4: @ 0x085FBDB4
	.incbin "baserom.gba", 0x5fbdb4, 0x14
	.globl gUnknown_85FBDC8
gUnknown_85FBDC8: @ 0x085FBDC8
	.incbin "baserom.gba", 0x5fbdc8, 0x30
	.globl gUnknown_85FBDF8
gUnknown_85FBDF8: @ 0x085FBDF8
	.incbin "baserom.gba", 0x5fbdf8, 0x8
	.globl gUnknown_85FBE00
gUnknown_85FBE00: @ 0x085FBE00
	.incbin "baserom.gba", 0x5fbe00, 0x8
	.globl gUnknown_85FBE08
gUnknown_85FBE08: @ 0x085FBE08
	.incbin "baserom.gba", 0x5fbe08, 0x8
	.globl gUnknown_85FBE10
gUnknown_85FBE10: @ 0x085FBE10
	.incbin "baserom.gba", 0x5fbe10, 0x18
	.globl gUnknown_85FBE28
gUnknown_85FBE28: @ 0x085FBE28
	.incbin "baserom.gba", 0x5fbe28, 0x18
	.globl gUnknown_85FBE40
gUnknown_85FBE40: @ 0x085FBE40
	.incbin "baserom.gba", 0x5fbe40, 0xe4
	.globl gUnknown_85FBF24
gUnknown_85FBF24: @ 0x085FBF24
	.incbin "baserom.gba", 0x5fbf24, 0x8
	.globl gUnknown_85FBF2C
gUnknown_85FBF2C: @ 0x085FBF2C
	.incbin "baserom.gba", 0x5fbf2c, 0x8
	.globl gUnknown_85FBF34
gUnknown_85FBF34: @ 0x085FBF34
	.incbin "baserom.gba", 0x5fbf34, 0x8
	.globl gUnknown_85FBF3C
gUnknown_85FBF3C: @ 0x085FBF3C
	.incbin "baserom.gba", 0x5fbf3c, 0x8
	.globl gUnknown_85FBF44
gUnknown_85FBF44: @ 0x085FBF44
	.incbin "baserom.gba", 0x5fbf44, 0x8
	.globl gUnknown_85FBF4C
gUnknown_85FBF4C: @ 0x085FBF4C
	.incbin "baserom.gba", 0x5fbf4c, 0x8
	.globl gUnknown_85FBF54
gUnknown_85FBF54: @ 0x085FBF54
	.incbin "baserom.gba", 0x5fbf54, 0x8
	.globl gUnknown_85FBF5C
gUnknown_85FBF5C: @ 0x085FBF5C
	.incbin "baserom.gba", 0x5fbf5c, 0x8
	.globl gUnknown_85FBF64
gUnknown_85FBF64: @ 0x085FBF64
	.incbin "baserom.gba", 0x5fbf64, 0x8
	.globl gUnknown_85FBF6C
gUnknown_85FBF6C: @ 0x085FBF6C
	.incbin "baserom.gba", 0x5fbf6c, 0x8
	.globl gUnknown_85FBF74
gUnknown_85FBF74: @ 0x085FBF74
	.incbin "baserom.gba", 0x5fbf74, 0x18
	.globl gUnknown_85FBF8C
gUnknown_85FBF8C: @ 0x085FBF8C
	.incbin "baserom.gba", 0x5fbf8c, 0x18
	.globl gUnknown_85FBFA4
gUnknown_85FBFA4: @ 0x085FBFA4
	.incbin "baserom.gba", 0x5fbfa4, 0x18
	.globl gUnknown_85FBFBC
gUnknown_85FBFBC: @ 0x085FBFBC
	.incbin "baserom.gba", 0x5fbfbc, 0x18
	.globl gUnknown_85FBFD4
gUnknown_85FBFD4: @ 0x085FBFD4
	.incbin "baserom.gba", 0x5fbfd4, 0x18
	.globl gUnknown_85FBFEC
gUnknown_85FBFEC: @ 0x085FBFEC
	.incbin "baserom.gba", 0x5fbfec, 0x18
	.globl gUnknown_85FC004
gUnknown_85FC004: @ 0x085FC004
	.incbin "baserom.gba", 0x5fc004, 0xc
	.globl gUnknown_85FC010
gUnknown_85FC010: @ 0x085FC010
	.incbin "baserom.gba", 0x5fc010, 0xc
	.globl gUnknown_85FC01C
gUnknown_85FC01C: @ 0x085FC01C
	.incbin "baserom.gba", 0x5fc01c, 0x10
	.globl gUnknown_85FC02C
gUnknown_85FC02C: @ 0x085FC02C
	.incbin "baserom.gba", 0x5fc02c, 0x10
	.globl gUnknown_85FC03C
gUnknown_85FC03C: @ 0x085FC03C
	.incbin "baserom.gba", 0x5fc03c, 0x1dc
	.globl gUnknown_85FC218
gUnknown_85FC218: @ 0x085FC218
	.incbin "baserom.gba", 0x5fc218, 0x60c
	.globl gUnknown_85FC824
gUnknown_85FC824: @ 0x085FC824
	.incbin "baserom.gba", 0x5fc824, 0x1e8
	.globl gUnknown_85FCA0C
gUnknown_85FCA0C: @ 0x085FCA0C
	.incbin "baserom.gba", 0x5fca0c, 0x8
	.globl gUnknown_85FCA14
gUnknown_85FCA14: @ 0x085FCA14
	.incbin "baserom.gba", 0x5fca14, 0x2c
	.globl gUnknown_85FCA40
gUnknown_85FCA40: @ 0x085FCA40
	.incbin "baserom.gba", 0x5fca40, 0x18
	.globl gUnknown_85FCA58
gUnknown_85FCA58: @ 0x085FCA58
	.incbin "baserom.gba", 0x5fca58, 0x14
	.globl gUnknown_85FCA6C
gUnknown_85FCA6C: @ 0x085FCA6C
	.incbin "baserom.gba", 0x5fca6c, 0x14
	.globl gUnknown_85FCA80
gUnknown_85FCA80: @ 0x085FCA80
	.incbin "baserom.gba", 0x5fca80, 0x14
	.globl gUnknown_85FCA94
gUnknown_85FCA94: @ 0x085FCA94
	.incbin "baserom.gba", 0x5fca94, 0x14
	.globl gUnknown_85FCAA8
gUnknown_85FCAA8: @ 0x085FCAA8
	.incbin "baserom.gba", 0x5fcaa8, 0x14
	.globl gUnknown_85FCABC
gUnknown_85FCABC: @ 0x085FCABC
	.incbin "baserom.gba", 0x5fcabc, 0x14
	.globl gUnknown_85FCAD0
gUnknown_85FCAD0: @ 0x085FCAD0
	.incbin "baserom.gba", 0x5fcad0, 0x14
	.globl gUnknown_85FCAE4
gUnknown_85FCAE4: @ 0x085FCAE4
	.incbin "baserom.gba", 0x5fcae4, 0x14
	.globl gUnknown_85FCAF8
gUnknown_85FCAF8: @ 0x085FCAF8
	.incbin "baserom.gba", 0x5fcaf8, 0x21
	.globl gUnknown_85FCB19
gUnknown_85FCB19: @ 0x085FCB19
	.incbin "baserom.gba", 0x5fcb19, 0x13
	.globl gUnknown_85FCB2C
gUnknown_85FCB2C: @ 0x085FCB2C
	.incbin "baserom.gba", 0x5fcb2c, 0x11
	.globl gUnknown_85FCB3D
gUnknown_85FCB3D: @ 0x085FCB3D

	@ asm/mystery_event_script.s:553 MEScrCmd_giveribbon
	.globl gText_Rom_5FCB3D
gText_Rom_5FCB3D: @ 0x085FCB3D
	.string "てもちのポケモンに\nとくべつなリボンが　あたえられた！$"
	.if (. - gText_Rom_5FCB3D) > 0x1c
	.error "gText_Rom_5FCB3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB3D) < 0x1c
	.space 0x1c - (. - gText_Rom_5FCB3D)
	.endif
	.globl gUnknown_85FCB59
gUnknown_85FCB59: @ 0x085FCB59

	@ asm/mystery_event_script.s:625 MEScrCmd_enableresetrtc
	.globl gText_Rom_5FCB59
gText_Rom_5FCB59: @ 0x085FCB59
	.string "ずかんに　ぜんこくモードが\nついか　された！$"
	.if (. - gText_Rom_5FCB59) > 0x17
	.error "gText_Rom_5FCB59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB59) < 0x17
	.space 0x17 - (. - gText_Rom_5FCB59)
	.endif
	.globl gUnknown_85FCB70
gUnknown_85FCB70: @ 0x085FCB70

	@ asm/mystery_event_script.s:648 MEScrCmd_addrareword
	.globl gText_Rom_5FCB70
gText_Rom_5FCB70: @ 0x085FCB70
	.string "めずらしい　ことばを　ついかしました$"
	.if (. - gText_Rom_5FCB70) > 0x13
	.error "gText_Rom_5FCB70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB70) < 0x13
	.space 0x13 - (. - gText_Rom_5FCB70)
	.endif
	.globl gUnknown_85FCB83
gUnknown_85FCB83: @ 0x085FCB83

	@ asm/mystery_event_script.s:785 MEScrCmd_givepokemon
	.globl gText_Rom_5FCB83
gText_Rom_5FCB83: @ 0x085FCB83
	.string "{0xFD}{0x02}が　おくられてきた！$"
	.if (. - gText_Rom_5FCB83) > 0xd
	.error "gText_Rom_5FCB83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB83) < 0xd
	.space 0xd - (. - gText_Rom_5FCB83)
	.endif
	.globl gUnknown_85FCB90
gUnknown_85FCB90: @ 0x085FCB90

	@ asm/mystery_event_script.s:733 MEScrCmd_givepokemon
	.globl gText_Rom_5FCB90
gText_Rom_5FCB90: @ 0x085FCB90
	.string "てもちが　いっぱいなので\n{0xFD}{0x02}は　もらえなかった…$"
	.if (. - gText_Rom_5FCB90) > 0x1a
	.error "gText_Rom_5FCB90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCB90) < 0x1a
	.space 0x1a - (. - gText_Rom_5FCB90)
	.endif
	.globl gUnknown_85FCBAA
gUnknown_85FCBAA: @ 0x085FCBAA

	@ asm/mystery_event_script.s:821 MEScrCmd_addtrainer
	.globl gText_Rom_5FCBAA
gText_Rom_5FCBAA: @ 0x085FCBAA
	.string "あらたな　トレーナーが\nホウエンに　やってきた$"
	.if (. - gText_Rom_5FCBAA) > 0x18
	.error "gText_Rom_5FCBAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FCBAA) < 0x18
	.space 0x18 - (. - gText_Rom_5FCBAA)
	.endif
	.incbin "baserom.gba", 0x5fcbc2, 0x1c
	.globl gUnknown_85FCBDE
gUnknown_85FCBDE: @ 0x085FCBDE

	@ asm/mystery_event_script.s:44 SetIncompatible
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5FCBDE
gText_Rom_5FCBDE: @ 0x085FCBDE
	.string "このデータは　このバージョンでは\nしよう　できません$"
	.if (. - gText_Rom_5FCBDE) != 0x1b
	.error "gText_Rom_5FCBDE must retain its original byte length"
	.endif
	.globl gText_Rom_5FCBF5
	.set gText_Rom_5FCBF5, gText_Rom_5FCBDE + 0x17
	.incbin "baserom.gba", 0x5fcbf9, 0x552

	@ data/text/questionnaire.inc:42 MysteryGift_Text_TryUsingItAtLilycovePort
	.globl gText_Rom_5FD14B
gText_Rom_5FD14B: @ 0x085FD14B
	.string "ミナモシティの ふなつきば で\nつかえる ようですね\pぜひ ごりよう してみては\nいかがでしょうか?$"
	.if (. - gText_Rom_5FD14B) > 0x33
	.error "gText_Rom_5FD14B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FD14B) < 0x33
	.space 0x33 - (. - gText_Rom_5FD14B)
	.endif
	.incbin "baserom.gba", 0x5fd17e, 0x115

	@ data/text/questionnaire.inc:42 MysteryGift_Text_TryUsingItAtLilycovePort
	.globl gText_Rom_5FD293
gText_Rom_5FD293: @ 0x085FD293
	.string "ミナモシティの ふなつきば で\nつかえる ようですね\pぜひ ごりよう してみては\nいかがでしょうか?$"
	.if (. - gText_Rom_5FD293) > 0x33
	.error "gText_Rom_5FD293 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FD293) < 0x33
	.space 0x33 - (. - gText_Rom_5FD293)
	.endif
	.incbin "baserom.gba", 0x5fd2c6, 0x1af

	@ data/text/questionnaire.inc:42 MysteryGift_Text_TryUsingItAtLilycovePort
	.globl gText_Rom_5FD475
gText_Rom_5FD475: @ 0x085FD475
	.string "ミナモシティの ふなつきば で\nつかえる ようですね\pぜひ ごりよう してみては\nいかがでしょうか?$"
	.if (. - gText_Rom_5FD475) > 0x33
	.error "gText_Rom_5FD475 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FD475) < 0x33
	.space 0x33 - (. - gText_Rom_5FD475)
	.endif
	.incbin "baserom.gba", 0x5fd4a8, 0x58
	.globl gUnknown_85FD500
gUnknown_85FD500: @ 0x085FD500
	.incbin "baserom.gba", 0x5fd500, 0x90
	.globl gUnknown_85FD590
gUnknown_85FD590: @ 0x085FD590
	.incbin "baserom.gba", 0x5fd590, 0x10
	.globl gUnknown_85FD5A0
gUnknown_85FD5A0: @ 0x085FD5A0
	.incbin "baserom.gba", 0x5fd5a0, 0xb4
	.globl gUnknown_85FD654
gUnknown_85FD654: @ 0x085FD654
	.incbin "baserom.gba", 0x5fd654, 0x30
	.globl gUnknown_85FD684
gUnknown_85FD684: @ 0x085FD684
	.incbin "baserom.gba", 0x5fd684, 0x18
	.globl gUnknown_85FD69C
gUnknown_85FD69C: @ 0x085FD69C
	.incbin "baserom.gba", 0x5fd69c, 0x84
	.globl gUnknown_85FD720
gUnknown_85FD720: @ 0x085FD720
	.incbin "baserom.gba", 0x5fd720, 0x18
	.globl gUnknown_85FD738
gUnknown_85FD738: @ 0x085FD738
	.incbin "baserom.gba", 0x5fd738, 0x3c
	.globl gUnknown_85FD774
gUnknown_85FD774: @ 0x085FD774
	.incbin "baserom.gba", 0x5fd774, 0x10
	.globl gUnknown_85FD784
gUnknown_85FD784: @ 0x085FD784
	.incbin "baserom.gba", 0x5fd784, 0x34
	.globl gUnknown_85FD7B8
gUnknown_85FD7B8: @ 0x085FD7B8
	.incbin "baserom.gba", 0x5fd7b8, 0x34
	.globl gUnknown_85FD7EC
gUnknown_85FD7EC: @ 0x085FD7EC
	.incbin "baserom.gba", 0x5fd7ec, 0x28028
	.globl gUnknown_8625814
gUnknown_8625814: @ 0x08625814
	.incbin "baserom.gba", 0x625814, 0x600
	.globl gUnknown_8625E14
gUnknown_8625E14: @ 0x08625E14
	.incbin "baserom.gba", 0x625e14, 0x600
	.globl gUnknown_8626414
gUnknown_8626414: @ 0x08626414
	.incbin "baserom.gba", 0x626414, 0x600
	.globl gUnknown_8626A14
gUnknown_8626A14: @ 0x08626A14
	.incbin "baserom.gba", 0x626a14, 0x30
	.globl gUnknown_8626A44
gUnknown_8626A44: @ 0x08626A44
	.incbin "baserom.gba", 0x626a44, 0x600
	.globl gUnknown_8627044
gUnknown_8627044: @ 0x08627044
	.incbin "baserom.gba", 0x627044, 0x600
	.globl gUnknown_8627644
gUnknown_8627644: @ 0x08627644
	.incbin "baserom.gba", 0x627644, 0x600
	.globl gUnknown_8627C44
gUnknown_8627C44: @ 0x08627C44
	.incbin "baserom.gba", 0x627c44, 0x14638
	.globl gUnknown_863C27C
gUnknown_863C27C: @ 0x0863C27C
	.incbin "baserom.gba", 0x63c27c, 0x30
	.globl gUnknown_863C2AC
gUnknown_863C2AC: @ 0x0863C2AC
	.incbin "baserom.gba", 0x63c2ac, 0x8a5d

	@ src/rtc.c:22 sText_AM
	.globl gText_Rom_644D09
gText_Rom_644D09: @ 0x08644D09
	.string "AM$"
	.if (. - gText_Rom_644D09) > 0x3
	.error "gText_Rom_644D09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_644D09) < 0x3
	.space 0x3 - (. - gText_Rom_644D09)
	.endif
	.incbin "baserom.gba", 0x644d0c, 0x436

	@ src/data/easy_chat/easy_chat_group_people.h:184 easy_chat_group_people_line_184
	.globl gText_Rom_645142
gText_Rom_645142: @ 0x08645142
	.string "きみは$"
	.if (. - gText_Rom_645142) > 0x4
	.error "gText_Rom_645142 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_645142) < 0x4
	.space 0x4 - (. - gText_Rom_645142)
	.endif
	.incbin "baserom.gba", 0x645146, 0x77b6

	@ src/pokemon_summary_screen.c:3874 sTextNatureUp
	.globl gText_Rom_64C8FC
gText_Rom_64C8FC: @ 0x0864C8FC
	.string "{COLOR}{05}$"
	.if (. - gText_Rom_64C8FC) > 0x4
	.error "gText_Rom_64C8FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_64C8FC) < 0x4
	.space 0x4 - (. - gText_Rom_64C8FC)
	.endif
	.incbin "baserom.gba", 0x64c900, 0x1dc96

	@ src/data/easy_chat/easy_chat_group_battle.h:82 easy_chat_group_battle_line_82
	.globl gText_Rom_66A596
gText_Rom_66A596: @ 0x0866A596
	.string "きあい$"
	.if (. - gText_Rom_66A596) > 0x4
	.error "gText_Rom_66A596 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_66A596) < 0x4
	.space 0x4 - (. - gText_Rom_66A596)
	.endif
	.incbin "baserom.gba", 0x66a59a, 0x120a7

	@ src/data/easy_chat/easy_chat_group_battle.h:82 easy_chat_group_battle_line_82
	.globl gText_Rom_67C641
gText_Rom_67C641: @ 0x0867C641
	.string "きあい$"
	.if (. - gText_Rom_67C641) > 0x4
	.error "gText_Rom_67C641 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_67C641) < 0x4
	.space 0x4 - (. - gText_Rom_67C641)
	.endif
	.incbin "baserom.gba", 0x67c645, 0x4222

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName
	.globl gText_Rom_680867
gText_Rom_680867: @ 0x08680867
	.string "くねもめとすてせÖM70…Mk{0xF8}{0x12}るよけwjkrÜけるぼセチニムメチぱぎらと\npK？356/Zjjnz$"
	.if (. - gText_Rom_680867) > 0x34
	.error "gText_Rom_680867 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_680867) < 0x34
	.space 0x34 - (. - gText_Rom_680867)
	.endif
	.incbin "baserom.gba", 0x68089b, 0x2cb9b

	@ src/pokemon_sprite_visualizer.c:527 textL
	.globl gText_Rom_6AD436
gText_Rom_6AD436: @ 0x086AD436
	.string "{L_BUTTON}$"
	.if (. - gText_Rom_6AD436) > 0x3
	.error "gText_Rom_6AD436 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_6AD436) < 0x3
	.space 0x3 - (. - gText_Rom_6AD436)
	.endif
	.incbin "baserom.gba", 0x6ad439, 0x1e970

	@ src/data/moves_info.h:48 moves_info_line_48
	.globl gText_Rom_6CBDA9
gText_Rom_6CBDA9: @ 0x086CBDA9
	.string "はたく$"
	.if (. - gText_Rom_6CBDA9) > 0x4
	.error "gText_Rom_6CBDA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_6CBDA9) < 0x4
	.space 0x4 - (. - gText_Rom_6CBDA9)
	.endif
	.incbin "baserom.gba", 0x6cbdad, 0x15279

	@ src/data/easy_chat/easy_chat_group_voices.h:298 easy_chat_group_voices_line_298
	.globl gText_Rom_6E1026
gText_Rom_6E1026: @ 0x086E1026
	.string "ほほほ$"
	.if (. - gText_Rom_6E1026) > 0x4
	.error "gText_Rom_6E1026 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_6E1026) < 0x4
	.space 0x4 - (. - gText_Rom_6E1026)
	.endif
	.incbin "baserom.gba", 0x6e102a, 0x4b0a8

	@ src/battle_debug.c:417 battle_debug_line_417
	.globl gText_Rom_72C0D2
gText_Rom_72C0D2: @ 0x0872C0D2
	.string "にじ$"
	.if (. - gText_Rom_72C0D2) > 0x3
	.error "gText_Rom_72C0D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_72C0D2) < 0x3
	.space 0x3 - (. - gText_Rom_72C0D2)
	.endif
	.incbin "baserom.gba", 0x72c0d5, 0x87ff5

	@ src/battle_debug.c:440 battle_debug_line_440
	.globl gText_Rom_7B40CA
gText_Rom_7B40CA: @ 0x087B40CA
	.string "ぜんち$"
	.if (. - gText_Rom_7B40CA) > 0x4
	.error "gText_Rom_7B40CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_7B40CA) < 0x4
	.space 0x4 - (. - gText_Rom_7B40CA)
	.endif
	.incbin "baserom.gba", 0x7b40ce, 0x65fa0

	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_81A06E
gText_Rom_81A06E: @ 0x0881A06E
	.string "ちゃん$"
	.if (. - gText_Rom_81A06E) > 0x4
	.error "gText_Rom_81A06E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_81A06E) < 0x4
	.space 0x4 - (. - gText_Rom_81A06E)
	.endif
	.incbin "baserom.gba", 0x81a072, 0x5b441

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_8754B3
gText_Rom_8754B3: @ 0x088754B3
	.string "………$"
	.if (. - gText_Rom_8754B3) > 0x4
	.error "gText_Rom_8754B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8754B3) < 0x4
	.space 0x4 - (. - gText_Rom_8754B3)
	.endif
	.incbin "baserom.gba", 0x8754b7, 0x1f

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_8754D6
gText_Rom_8754D6: @ 0x088754D6
	.string "………$"
	.if (. - gText_Rom_8754D6) > 0x4
	.error "gText_Rom_8754D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8754D6) < 0x4
	.space 0x4 - (. - gText_Rom_8754D6)
	.endif
	.incbin "baserom.gba", 0x8754da, 0xb5b

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_876035
gText_Rom_876035: @ 0x08876035
	.string "………$"
	.if (. - gText_Rom_876035) > 0x4
	.error "gText_Rom_876035 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_876035) < 0x4
	.space 0x4 - (. - gText_Rom_876035)
	.endif
	.incbin "baserom.gba", 0x876039, 0x5

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_87603E
gText_Rom_87603E: @ 0x0887603E
	.string "………$"
	.if (. - gText_Rom_87603E) > 0x4
	.error "gText_Rom_87603E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_87603E) < 0x4
	.space 0x4 - (. - gText_Rom_87603E)
	.endif
	.incbin "baserom.gba", 0x876042, 0x5

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_876047
gText_Rom_876047: @ 0x08876047
	.string "………$"
	.if (. - gText_Rom_876047) > 0x4
	.error "gText_Rom_876047 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_876047) < 0x4
	.space 0x4 - (. - gText_Rom_876047)
	.endif
	.incbin "baserom.gba", 0x87604b, 0x2b92a

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_8A1975
gText_Rom_8A1975: @ 0x088A1975
	.string "………$"
	.if (. - gText_Rom_8A1975) > 0x4
	.error "gText_Rom_8A1975 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8A1975) < 0x4
	.space 0x4 - (. - gText_Rom_8A1975)
	.endif
	.incbin "baserom.gba", 0x8a1979, 0xee06

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_8B077F
gText_Rom_8B077F: @ 0x088B077F
	.string "………$"
	.if (. - gText_Rom_8B077F) > 0x4
	.error "gText_Rom_8B077F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8B077F) < 0x4
	.space 0x4 - (. - gText_Rom_8B077F)
	.endif
	.incbin "baserom.gba", 0x8b0783, 0x9de5
	.globl gUnknown_88BA568
gUnknown_88BA568: @ 0x088BA568
	.incbin "baserom.gba", 0x8ba568, 0x14e48

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_8CF3B0
gText_Rom_8CF3B0: @ 0x088CF3B0
	.string "………$"
	.if (. - gText_Rom_8CF3B0) > 0x4
	.error "gText_Rom_8CF3B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8CF3B0) < 0x4
	.space 0x4 - (. - gText_Rom_8CF3B0)
	.endif
	.incbin "baserom.gba", 0x8cf3b4, 0x26d12

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_8F60C6
gText_Rom_8F60C6: @ 0x088F60C6
	.string "………$"
	.if (. - gText_Rom_8F60C6) > 0x4
	.error "gText_Rom_8F60C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8F60C6) < 0x4
	.space 0x4 - (. - gText_Rom_8F60C6)
	.endif
	.incbin "baserom.gba", 0x8f60ca, 0x18c8a
	.globl gUnknown_890ED54
gUnknown_890ED54: @ 0x0890ED54
	.incbin "baserom.gba", 0x90ed54, 0x150
	.globl gUnknown_890EEA4
gUnknown_890EEA4: @ 0x0890EEA4
	.incbin "baserom.gba", 0x90eea4, 0x2c
	.globl gUnknown_890EED0
gUnknown_890EED0: @ 0x0890EED0
	.incbin "baserom.gba", 0x90eed0, 0xc
	.globl gUnknown_890EEDC
gUnknown_890EEDC: @ 0x0890EEDC
	.incbin "baserom.gba", 0x90eedc, 0x18
	.globl gUnknown_890EEF4
gUnknown_890EEF4: @ 0x0890EEF4
	.incbin "baserom.gba", 0x90eef4, 0x34
	.globl gUnknown_890EF28
gUnknown_890EF28: @ 0x0890EF28
	.incbin "baserom.gba", 0x90ef28, 0x30
	.globl gUnknown_890EF58
gUnknown_890EF58: @ 0x0890EF58
	.incbin "baserom.gba", 0x90ef58, 0x100
	.globl gUnknown_890F058
gUnknown_890F058: @ 0x0890F058
	.incbin "baserom.gba", 0x90f058, 0x104
	.globl gUnknown_890F15C
gUnknown_890F15C: @ 0x0890F15C
	.incbin "baserom.gba", 0x90f15c, 0x10
	.globl gUnknown_890F16C
gUnknown_890F16C: @ 0x0890F16C
	.incbin "baserom.gba", 0x90f16c, 0x10
	.globl gUnknown_890F17C
gUnknown_890F17C: @ 0x0890F17C
	.incbin "baserom.gba", 0x90f17c, 0x4
	.globl gUnknown_890F180
gUnknown_890F180: @ 0x0890F180
	.incbin "baserom.gba", 0x90f180, 0x4
	.globl gUnknown_890F184
gUnknown_890F184: @ 0x0890F184
	.incbin "baserom.gba", 0x90f184, 0x14
	.globl gUnknown_890F198
gUnknown_890F198: @ 0x0890F198
	.incbin "baserom.gba", 0x90f198, 0x8
	.globl gUnknown_890F1A0
gUnknown_890F1A0: @ 0x0890F1A0
	.incbin "baserom.gba", 0x90f1a0, 0x14
	.globl gUnknown_890F1B4
gUnknown_890F1B4: @ 0x0890F1B4
	.incbin "baserom.gba", 0x90f1b4, 0x1c
	.globl gUnknown_890F1D0
gUnknown_890F1D0: @ 0x0890F1D0
	.incbin "baserom.gba", 0x90f1d0, 0x4
	.globl gUnknown_890F1D4
gUnknown_890F1D4: @ 0x0890F1D4
	.incbin "baserom.gba", 0x90f1d4, 0x4
	.globl gUnknown_890F1D8
gUnknown_890F1D8: @ 0x0890F1D8
	.incbin "baserom.gba", 0x90f1d8, 0xc
	.globl gUnknown_890F1E4
gUnknown_890F1E4: @ 0x0890F1E4
	.incbin "baserom.gba", 0x90f1e4, 0x4
	.globl gUnknown_890F1E8
gUnknown_890F1E8: @ 0x0890F1E8
	.incbin "baserom.gba", 0x90f1e8, 0x4
	.globl gUnknown_890F1EC
gUnknown_890F1EC: @ 0x0890F1EC
	.incbin "baserom.gba", 0x90f1ec, 0x30
	.globl gUnknown_890F21C
gUnknown_890F21C: @ 0x0890F21C
	.incbin "baserom.gba", 0x90f21c, 0x8
	.globl gUnknown_890F224
gUnknown_890F224: @ 0x0890F224
	.incbin "baserom.gba", 0x90f224, 0x4
	.globl gUnknown_890F228
gUnknown_890F228: @ 0x0890F228
	.incbin "baserom.gba", 0x90f228, 0xc
	.globl gUnknown_890F234
gUnknown_890F234: @ 0x0890F234
	.incbin "baserom.gba", 0x90f234, 0xc8
	.globl gUnknown_890F2FC
gUnknown_890F2FC: @ 0x0890F2FC
	.incbin "baserom.gba", 0x90f2fc, 0x50
	.globl gUnknown_890F34C
gUnknown_890F34C: @ 0x0890F34C
	.incbin "baserom.gba", 0x90f34c, 0x4
	.globl gUnknown_890F350
gUnknown_890F350: @ 0x0890F350
	.incbin "baserom.gba", 0x90f350, 0x24
	.globl gUnknown_890F374
gUnknown_890F374: @ 0x0890F374
	.incbin "baserom.gba", 0x90f374, 0x30e0
	.globl gUnknown_8912454
gUnknown_8912454: @ 0x08912454
	.incbin "baserom.gba", 0x912454, 0x348c
	.globl gUnknown_89158E0
gUnknown_89158E0: @ 0x089158E0
	.incbin "baserom.gba", 0x9158e0, 0x1fc616

	@ src/data/moves_info.h:48 moves_info_line_48
	.globl gText_Rom_B11EF6
gText_Rom_B11EF6: @ 0x08B11EF6
	.string "はたく$"
	.if (. - gText_Rom_B11EF6) > 0x4
	.error "gText_Rom_B11EF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_B11EF6) < 0x4
	.space 0x4 - (. - gText_Rom_B11EF6)
	.endif
	.incbin "baserom.gba", 0xb11efa, 0x7404

	@ src/debug.c:1292 sColor_Green
	.globl gText_Rom_B192FE
gText_Rom_B192FE: @ 0x08B192FE
	.string "{COLOR GREEN}$"
	.if (. - gText_Rom_B192FE) > 0x4
	.error "gText_Rom_B192FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_B192FE) < 0x4
	.space 0x4 - (. - gText_Rom_B192FE)
	.endif
	.incbin "baserom.gba", 0xb19302, 0x21208

	@ src/battle_controller_player.c:2517 immuneIcon
	.globl gText_Rom_B3A50A
gText_Rom_B3A50A: @ 0x08B3A50A
	.string "{BIG_MULT_X}$"
	.if (. - gText_Rom_B3A50A) > 0x3
	.error "gText_Rom_B3A50A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_B3A50A) < 0x3
	.space 0x3 - (. - gText_Rom_B3A50A)
	.endif
	.incbin "baserom.gba", 0xb3a50d, 0xc5fdf
	.globl gUnknown_8C004EC
gUnknown_8C004EC: @ 0x08C004EC
	.incbin "baserom.gba", 0xc004ec, 0x44
	.globl gUnknown_8C00530
gUnknown_8C00530: @ 0x08C00530
	.incbin "baserom.gba", 0xc00530, 0x1dd8
	.globl gUnknown_8C02308
gUnknown_8C02308: @ 0x08C02308
	.incbin "baserom.gba", 0xc02308, 0x70f0
	.globl gUnknown_8C093F8
gUnknown_8C093F8: @ 0x08C093F8
	.incbin "baserom.gba", 0xc093f8, 0x87ec
	.globl gUnknown_8C11BE4
gUnknown_8C11BE4: @ 0x08C11BE4
	.incbin "baserom.gba", 0xc11be4, 0x52b4
	.globl gUnknown_8C16E98
gUnknown_8C16E98: @ 0x08C16E98
	.incbin "baserom.gba", 0xc16e98, 0x118
	.globl gUnknown_8C16FB0
gUnknown_8C16FB0: @ 0x08C16FB0
	.incbin "baserom.gba", 0xc16fb0, 0x1c8
	.globl gUnknown_8C17178
gUnknown_8C17178: @ 0x08C17178
	.incbin "baserom.gba", 0xc17178, 0x810
	.globl gUnknown_8C17988
gUnknown_8C17988: @ 0x08C17988
	.incbin "baserom.gba", 0xc17988, 0x130
	.globl gUnknown_8C17AB8
gUnknown_8C17AB8: @ 0x08C17AB8
	.incbin "baserom.gba", 0xc17ab8, 0xb98
	.globl gUnknown_8C18650
gUnknown_8C18650: @ 0x08C18650
	.incbin "baserom.gba", 0xc18650, 0x107c
	.globl gUnknown_8C196CC
gUnknown_8C196CC: @ 0x08C196CC
	.incbin "baserom.gba", 0xc196cc, 0x868
	.globl gUnknown_8C19F34
gUnknown_8C19F34: @ 0x08C19F34
	.incbin "baserom.gba", 0xc19f34, 0x114
	.globl gUnknown_8C1A048
gUnknown_8C1A048: @ 0x08C1A048
	.incbin "baserom.gba", 0xc1a048, 0x12c
	.globl gUnknown_8C1A174
gUnknown_8C1A174: @ 0x08C1A174
	.incbin "baserom.gba", 0xc1a174, 0x188
	.globl gUnknown_8C1A2FC
gUnknown_8C1A2FC: @ 0x08C1A2FC
	.incbin "baserom.gba", 0xc1a2fc, 0x2404
	.globl gUnknown_8C1C700
gUnknown_8C1C700: @ 0x08C1C700
	.incbin "baserom.gba", 0xc1c700, 0x9f4
	.globl gUnknown_8C1D0F4
gUnknown_8C1D0F4: @ 0x08C1D0F4
	.incbin "baserom.gba", 0xc1d0f4, 0x13c
	.globl gUnknown_8C1D230
gUnknown_8C1D230: @ 0x08C1D230
	.incbin "baserom.gba", 0xc1d230, 0x28
	.globl gUnknown_8C1D258
gUnknown_8C1D258: @ 0x08C1D258
	.incbin "baserom.gba", 0xc1d258, 0x34b4
	.globl gUnknown_8C2070C
gUnknown_8C2070C: @ 0x08C2070C
	.incbin "baserom.gba", 0xc2070c, 0x1c
	.globl gUnknown_8C20728
gUnknown_8C20728: @ 0x08C20728
	.incbin "baserom.gba", 0xc20728, 0x1f8c
	.globl gUnknown_8C226B4
gUnknown_8C226B4: @ 0x08C226B4
	.incbin "baserom.gba", 0xc226b4, 0xcd0
	.globl gUnknown_8C23384
gUnknown_8C23384: @ 0x08C23384
	.incbin "baserom.gba", 0xc23384, 0xa70
	.globl gUnknown_8C23DF4
gUnknown_8C23DF4: @ 0x08C23DF4
	.incbin "baserom.gba", 0xc23df4, 0x28
	.globl gUnknown_8C23E1C
gUnknown_8C23E1C: @ 0x08C23E1C
	.incbin "baserom.gba", 0xc23e1c, 0xc58
	.globl gUnknown_8C24A74
gUnknown_8C24A74: @ 0x08C24A74
	.incbin "baserom.gba", 0xc24a74, 0x28
	.globl gUnknown_8C24A9C
gUnknown_8C24A9C: @ 0x08C24A9C
	.incbin "baserom.gba", 0xc24a9c, 0x5c3c
	.globl gUnknown_8C2A6D8
gUnknown_8C2A6D8: @ 0x08C2A6D8
	.incbin "baserom.gba", 0xc2a6d8, 0xa0
	.globl gUnknown_8C2A778
gUnknown_8C2A778: @ 0x08C2A778
	.incbin "baserom.gba", 0xc2a778, 0x18
	.globl gUnknown_8C2A790
gUnknown_8C2A790: @ 0x08C2A790
	.incbin "baserom.gba", 0xc2a790, 0x27d0
	.globl gUnknown_8C2CF60
gUnknown_8C2CF60: @ 0x08C2CF60
	.incbin "baserom.gba", 0xc2cf60, 0x24
	.globl gUnknown_8C2CF84
gUnknown_8C2CF84: @ 0x08C2CF84
	.incbin "baserom.gba", 0xc2cf84, 0x240
	.globl gUnknown_8C2D1C4
gUnknown_8C2D1C4: @ 0x08C2D1C4
	.incbin "baserom.gba", 0xc2d1c4, 0x600
	.globl gUnknown_8C2D7C4
gUnknown_8C2D7C4: @ 0x08C2D7C4
	.incbin "baserom.gba", 0xc2d7c4, 0x210
	.globl gUnknown_8C2D9D4
gUnknown_8C2D9D4: @ 0x08C2D9D4
	.incbin "baserom.gba", 0xc2d9d4, 0x11c
	.globl gUnknown_8C2DAF0
gUnknown_8C2DAF0: @ 0x08C2DAF0
	.incbin "baserom.gba", 0xc2daf0, 0x11c
	.globl gUnknown_8C2DC0C
gUnknown_8C2DC0C: @ 0x08C2DC0C
	.incbin "baserom.gba", 0xc2dc0c, 0x20
	.globl gUnknown_8C2DC2C
gUnknown_8C2DC2C: @ 0x08C2DC2C
	.incbin "baserom.gba", 0xc2dc2c, 0x20
	.globl gUnknown_8C2DC4C
gUnknown_8C2DC4C: @ 0x08C2DC4C
	.incbin "baserom.gba", 0xc2dc4c, 0x20
	.globl gUnknown_8C2DC6C
gUnknown_8C2DC6C: @ 0x08C2DC6C
	.incbin "baserom.gba", 0xc2dc6c, 0x20
	.globl gUnknown_8C2DC8C
gUnknown_8C2DC8C: @ 0x08C2DC8C
	.incbin "baserom.gba", 0xc2dc8c, 0x20
	.globl gUnknown_8C2DCAC
gUnknown_8C2DCAC: @ 0x08C2DCAC
	.incbin "baserom.gba", 0xc2dcac, 0x20
	.globl gUnknown_8C2DCCC
gUnknown_8C2DCCC: @ 0x08C2DCCC
	.incbin "baserom.gba", 0xc2dccc, 0x20
	.globl gUnknown_8C2DCEC
gUnknown_8C2DCEC: @ 0x08C2DCEC
	.incbin "baserom.gba", 0xc2dcec, 0x20
	.globl gUnknown_8C2DD0C
gUnknown_8C2DD0C: @ 0x08C2DD0C
	.incbin "baserom.gba", 0xc2dd0c, 0x13c
	.globl gUnknown_8C2DE48
gUnknown_8C2DE48: @ 0x08C2DE48
	.incbin "baserom.gba", 0xc2de48, 0x20
	.globl gUnknown_8C2DE68
gUnknown_8C2DE68: @ 0x08C2DE68
	.incbin "baserom.gba", 0xc2de68, 0xc8c
	.globl gUnknown_8C2EAF4
gUnknown_8C2EAF4: @ 0x08C2EAF4
	.incbin "baserom.gba", 0xc2eaf4, 0x4c
	.globl gUnknown_8C2EB40
gUnknown_8C2EB40: @ 0x08C2EB40
	.incbin "baserom.gba", 0xc2eb40, 0x114c0
	.globl gUnknown_8C40000
gUnknown_8C40000: @ 0x08C40000
	.incbin "baserom.gba", 0xc40000, 0xe177

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_C4E177
gText_Rom_C4E177: @ 0x08C4E177
	.string "ラララ$"
	.if (. - gText_Rom_C4E177) > 0x4
	.error "gText_Rom_C4E177 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_C4E177) < 0x4
	.space 0x4 - (. - gText_Rom_C4E177)
	.endif
	.incbin "baserom.gba", 0xc4e17b, 0x144b

	@ src/data/moves_info.h:48 moves_info_line_48
	.globl gText_Rom_C4F5C6
gText_Rom_C4F5C6: @ 0x08C4F5C6
	.string "はたく$"
	.if (. - gText_Rom_C4F5C6) > 0x4
	.error "gText_Rom_C4F5C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_C4F5C6) < 0x4
	.space 0x4 - (. - gText_Rom_C4F5C6)
	.endif
	.incbin "baserom.gba", 0xc4f5ca, 0xa36
	.globl gUnknown_8C50000
gUnknown_8C50000: @ 0x08C50000
	.incbin "baserom.gba", 0xc50000, 0xc832

	@ src/debug.c:1292 sColor_Green
	.globl gText_Rom_C5C832
gText_Rom_C5C832: @ 0x08C5C832
	.string "{COLOR GREEN}$"
	.if (. - gText_Rom_C5C832) > 0x4
	.error "gText_Rom_C5C832 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_C5C832) < 0x4
	.space 0x4 - (. - gText_Rom_C5C832)
	.endif
	.incbin "baserom.gba", 0xc5c836, 0x10e9

	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_C5D91F
gText_Rom_C5D91F: @ 0x08C5D91F
	.string "z    $"
	.if (. - gText_Rom_C5D91F) > 0x6
	.error "gText_Rom_C5D91F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_C5D91F) < 0x6
	.space 0x6 - (. - gText_Rom_C5D91F)
	.endif
	.incbin "baserom.gba", 0xc5d925, 0x1fa

	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_C5DB1F
gText_Rom_C5DB1F: @ 0x08C5DB1F
	.string "z    $"
	.if (. - gText_Rom_C5DB1F) > 0x6
	.error "gText_Rom_C5DB1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_C5DB1F) < 0x6
	.space 0x6 - (. - gText_Rom_C5DB1F)
	.endif
	.incbin "baserom.gba", 0xc5db25, 0x62d2

	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_C63DF7
gText_Rom_C63DF7: @ 0x08C63DF7
	.string "z    $"
	.if (. - gText_Rom_C63DF7) > 0x6
	.error "gText_Rom_C63DF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_C63DF7) < 0x6
	.space 0x6 - (. - gText_Rom_C63DF7)
	.endif
	.incbin "baserom.gba", 0xc63dfd, 0x312a

	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_C66F27
gText_Rom_C66F27: @ 0x08C66F27
	.string "z    $"
	.if (. - gText_Rom_C66F27) > 0x6
	.error "gText_Rom_C66F27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_C66F27) < 0x6
	.space 0x6 - (. - gText_Rom_C66F27)
	.endif
	.incbin "baserom.gba", 0xc66f2d, 0x12a9c

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_C799C9
gText_Rom_C799C9: @ 0x08C799C9
	.string "ラララ$"
	.if (. - gText_Rom_C799C9) > 0x4
	.error "gText_Rom_C799C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_C799C9) < 0x4
	.space 0x4 - (. - gText_Rom_C799C9)
	.endif
	.incbin "baserom.gba", 0xc799cd, 0x200

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_C79BCD
gText_Rom_C79BCD: @ 0x08C79BCD
	.string "ラララ$"
	.if (. - gText_Rom_C79BCD) > 0x4
	.error "gText_Rom_C79BCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_C79BCD) < 0x4
	.space 0x4 - (. - gText_Rom_C79BCD)
	.endif
	.incbin "baserom.gba", 0xc79bd1, 0x17699

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_C9126A
gText_Rom_C9126A: @ 0x08C9126A
	.string "ラララ$"
	.if (. - gText_Rom_C9126A) > 0x4
	.error "gText_Rom_C9126A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_C9126A) < 0x4
	.space 0x4 - (. - gText_Rom_C9126A)
	.endif
	.incbin "baserom.gba", 0xc9126e, 0x30b59

	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_CC1DC7
gText_Rom_CC1DC7: @ 0x08CC1DC7
	.string "z    $"
	.if (. - gText_Rom_CC1DC7) > 0x6
	.error "gText_Rom_CC1DC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_CC1DC7) < 0x6
	.space 0x6 - (. - gText_Rom_CC1DC7)
	.endif
	.incbin "baserom.gba", 0xcc1dcd, 0x534c

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_CC7119
gText_Rom_CC7119: @ 0x08CC7119
	.string "ラララ$"
	.if (. - gText_Rom_CC7119) > 0x4
	.error "gText_Rom_CC7119 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_CC7119) < 0x4
	.space 0x4 - (. - gText_Rom_CC7119)
	.endif
	.incbin "baserom.gba", 0xcc711d, 0x1872a

	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_CDF847
gText_Rom_CDF847: @ 0x08CDF847
	.string "z    $"
	.if (. - gText_Rom_CDF847) > 0x6
	.error "gText_Rom_CDF847 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_CDF847) < 0x6
	.space 0x6 - (. - gText_Rom_CDF847)
	.endif
	.incbin "baserom.gba", 0xcdf84d, 0xbb0

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_CE03FD
gText_Rom_CE03FD: @ 0x08CE03FD
	.string "ラララ$"
	.if (. - gText_Rom_CE03FD) > 0x4
	.error "gText_Rom_CE03FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_CE03FD) < 0x4
	.space 0x4 - (. - gText_Rom_CE03FD)
	.endif
	.incbin "baserom.gba", 0xce0401, 0x8f76

	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_CE9377
gText_Rom_CE9377: @ 0x08CE9377
	.string "z    $"
	.if (. - gText_Rom_CE9377) > 0x6
	.error "gText_Rom_CE9377 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_CE9377) < 0x6
	.space 0x6 - (. - gText_Rom_CE9377)
	.endif
	.incbin "baserom.gba", 0xce937d, 0x1fcd8

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_D09055
gText_Rom_D09055: @ 0x08D09055
	.string "ラララ$"
	.if (. - gText_Rom_D09055) > 0x4
	.error "gText_Rom_D09055 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_D09055) < 0x4
	.space 0x4 - (. - gText_Rom_D09055)
	.endif
	.incbin "baserom.gba", 0xd09059, 0x200

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_D09259
gText_Rom_D09259: @ 0x08D09259
	.string "ラララ$"
	.if (. - gText_Rom_D09259) > 0x4
	.error "gText_Rom_D09259 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_D09259) < 0x4
	.space 0x4 - (. - gText_Rom_D09259)
	.endif
	.incbin "baserom.gba", 0xd0925d, 0xadce

	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_D1402B
gText_Rom_D1402B: @ 0x08D1402B
	.string "z    $"
	.if (. - gText_Rom_D1402B) > 0x6
	.error "gText_Rom_D1402B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_D1402B) < 0x6
	.space 0x6 - (. - gText_Rom_D1402B)
	.endif
	.incbin "baserom.gba", 0xd14031, 0x5a90

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_D19AC1
gText_Rom_D19AC1: @ 0x08D19AC1
	.string "ラララ$"
	.if (. - gText_Rom_D19AC1) > 0x4
	.error "gText_Rom_D19AC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_D19AC1) < 0x4
	.space 0x4 - (. - gText_Rom_D19AC1)
	.endif
	.incbin "baserom.gba", 0xd19ac5, 0x2e59e

	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_D48063
gText_Rom_D48063: @ 0x08D48063
	.string "z    $"
	.if (. - gText_Rom_D48063) > 0x6
	.error "gText_Rom_D48063 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_D48063) < 0x6
	.space 0x6 - (. - gText_Rom_D48063)
	.endif
	.incbin "baserom.gba", 0xd48069, 0x385a

	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_D4B8C3
gText_Rom_D4B8C3: @ 0x08D4B8C3
	.string "z    $"
	.if (. - gText_Rom_D4B8C3) > 0x6
	.error "gText_Rom_D4B8C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_D4B8C3) < 0x6
	.space 0x6 - (. - gText_Rom_D4B8C3)
	.endif
	.incbin "baserom.gba", 0xd4b8c9, 0x2b423

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_D76CEC
gText_Rom_D76CEC: @ 0x08D76CEC
	.string "ラララ$"
	.if (. - gText_Rom_D76CEC) > 0x4
	.error "gText_Rom_D76CEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_D76CEC) < 0x4
	.space 0x4 - (. - gText_Rom_D76CEC)
	.endif
	.incbin "baserom.gba", 0xd76cf0, 0xca4
	.globl gUnknown_8D77994
gUnknown_8D77994: @ 0x08D77994
	.incbin "baserom.gba", 0xd77994, 0xe8
	.globl gUnknown_8D77A7C
gUnknown_8D77A7C: @ 0x08D77A7C
	.incbin "baserom.gba", 0xd77a7c, 0x10c
	.globl gUnknown_8D77B88
gUnknown_8D77B88: @ 0x08D77B88
	.incbin "baserom.gba", 0xd77b88, 0x28
	.globl gUnknown_8D77BB0
gUnknown_8D77BB0: @ 0x08D77BB0
	.incbin "baserom.gba", 0xd77bb0, 0x25fc
	.globl gUnknown_8D7A1AC
gUnknown_8D7A1AC: @ 0x08D7A1AC
	.incbin "baserom.gba", 0xd7a1ac, 0x618
	.globl gUnknown_8D7A7C4
gUnknown_8D7A7C4: @ 0x08D7A7C4
	.incbin "baserom.gba", 0xd7a7c4, 0x13f4
	.globl gUnknown_8D7BBB8
gUnknown_8D7BBB8: @ 0x08D7BBB8
	.incbin "baserom.gba", 0xd7bbb8, 0x640
	.globl gUnknown_8D7C1F8
gUnknown_8D7C1F8: @ 0x08D7C1F8
	.incbin "baserom.gba", 0xd7c1f8, 0x2ec
	.globl gUnknown_8D7C4E4
gUnknown_8D7C4E4: @ 0x08D7C4E4
	.incbin "baserom.gba", 0xd7c4e4, 0x5ac
	.globl gUnknown_8D7CA90
gUnknown_8D7CA90: @ 0x08D7CA90
	.incbin "baserom.gba", 0xd7ca90, 0x3c
	.globl gUnknown_8D7CACC
gUnknown_8D7CACC: @ 0x08D7CACC
	.incbin "baserom.gba", 0xd7cacc, 0x2b0
	.globl gUnknown_8D7CD7C
gUnknown_8D7CD7C: @ 0x08D7CD7C
	.incbin "baserom.gba", 0xd7cd7c, 0x608
	.globl gUnknown_8D7D384
gUnknown_8D7D384: @ 0x08D7D384
	.incbin "baserom.gba", 0xd7d384, 0x2b0
	.globl gUnknown_8D7D634
gUnknown_8D7D634: @ 0x08D7D634
	.incbin "baserom.gba", 0xd7d634, 0x674
	.globl gUnknown_8D7DCA8
gUnknown_8D7DCA8: @ 0x08D7DCA8
	.incbin "baserom.gba", 0xd7dca8, 0x2f0
	.globl gUnknown_8D7DF98
gUnknown_8D7DF98: @ 0x08D7DF98
	.incbin "baserom.gba", 0xd7df98, 0x3c
	.globl gUnknown_8D7DFD4
gUnknown_8D7DFD4: @ 0x08D7DFD4
	.incbin "baserom.gba", 0xd7dfd4, 0x58
	.globl gUnknown_8D7E02C
gUnknown_8D7E02C: @ 0x08D7E02C
	.incbin "baserom.gba", 0xd7e02c, 0x3c
	.globl gUnknown_8D7E068
gUnknown_8D7E068: @ 0x08D7E068
	.incbin "baserom.gba", 0xd7e068, 0x3c
	.globl gUnknown_8D7E0A4
gUnknown_8D7E0A4: @ 0x08D7E0A4
	.incbin "baserom.gba", 0xd7e0a4, 0x60
	.globl gUnknown_8D7E104
gUnknown_8D7E104: @ 0x08D7E104
	.incbin "baserom.gba", 0xd7e104, 0x6c
	.globl gUnknown_8D7E170
gUnknown_8D7E170: @ 0x08D7E170
	.incbin "baserom.gba", 0xd7e170, 0x50
	.globl gUnknown_8D7E1C0
gUnknown_8D7E1C0: @ 0x08D7E1C0
	.incbin "baserom.gba", 0xd7e1c0, 0x48
	.globl gUnknown_8D7E208
gUnknown_8D7E208: @ 0x08D7E208
	.incbin "baserom.gba", 0xd7e208, 0x44
	.globl gUnknown_8D7E24C
gUnknown_8D7E24C: @ 0x08D7E24C
	.incbin "baserom.gba", 0xd7e24c, 0x50
	.globl gUnknown_8D7E29C
gUnknown_8D7E29C: @ 0x08D7E29C
	.incbin "baserom.gba", 0xd7e29c, 0x3c
	.globl gUnknown_8D7E2D8
gUnknown_8D7E2D8: @ 0x08D7E2D8
	.incbin "baserom.gba", 0xd7e2d8, 0x17c4
	.globl gUnknown_8D7FA9C
gUnknown_8D7FA9C: @ 0x08D7FA9C
	.incbin "baserom.gba", 0xd7fa9c, 0x4cc
	.globl gUnknown_8D7FF68
gUnknown_8D7FF68: @ 0x08D7FF68
	.incbin "baserom.gba", 0xd7ff68, 0x174c
	.globl gUnknown_8D816B4
gUnknown_8D816B4: @ 0x08D816B4
	.incbin "baserom.gba", 0xd816b4, 0x81c
	.globl gUnknown_8D81ED0
gUnknown_8D81ED0: @ 0x08D81ED0
	.incbin "baserom.gba", 0xd81ed0, 0x2a8
	.globl gUnknown_8D82178
gUnknown_8D82178: @ 0x08D82178
	.incbin "baserom.gba", 0xd82178, 0x410
	.globl gUnknown_8D82588
gUnknown_8D82588: @ 0x08D82588
	.incbin "baserom.gba", 0xd82588, 0x124
	.globl gUnknown_8D826AC
gUnknown_8D826AC: @ 0x08D826AC
	.incbin "baserom.gba", 0xd826ac, 0x668
	.globl gUnknown_8D82D14
gUnknown_8D82D14: @ 0x08D82D14
	.incbin "baserom.gba", 0xd82d14, 0x2a0
	.globl gUnknown_8D82FB4
gUnknown_8D82FB4: @ 0x08D82FB4
	.incbin "baserom.gba", 0xd82fb4, 0x5ec
	.globl gUnknown_8D835A0
gUnknown_8D835A0: @ 0x08D835A0
	.incbin "baserom.gba", 0xd835a0, 0x404
	.globl gUnknown_8D839A4
gUnknown_8D839A4: @ 0x08D839A4
	.incbin "baserom.gba", 0xd839a4, 0x22c
	.globl gUnknown_8D83BD0
gUnknown_8D83BD0: @ 0x08D83BD0
	.incbin "baserom.gba", 0xd83bd0, 0x110
	.globl gUnknown_8D83CE0
gUnknown_8D83CE0: @ 0x08D83CE0
	.incbin "baserom.gba", 0xd83ce0, 0x114
	.globl gUnknown_8D83DF4
gUnknown_8D83DF4: @ 0x08D83DF4
	.incbin "baserom.gba", 0xd83df4, 0xc14
	.globl gUnknown_8D84A08
gUnknown_8D84A08: @ 0x08D84A08
	.incbin "baserom.gba", 0xd84a08, 0x590
	.globl gUnknown_8D84F98
gUnknown_8D84F98: @ 0x08D84F98
	.incbin "baserom.gba", 0xd84f98, 0x3a4
	.globl gUnknown_8D8533C
gUnknown_8D8533C: @ 0x08D8533C
	.incbin "baserom.gba", 0xd8533c, 0xec
	.globl gUnknown_8D85428
gUnknown_8D85428: @ 0x08D85428
	.incbin "baserom.gba", 0xd85428, 0x84
	.globl gUnknown_8D854AC
gUnknown_8D854AC: @ 0x08D854AC
	.incbin "baserom.gba", 0xd854ac, 0x120
	.globl gUnknown_8D855CC
gUnknown_8D855CC: @ 0x08D855CC
	.incbin "baserom.gba", 0xd855cc, 0x18
	.globl gUnknown_8D855E4
gUnknown_8D855E4: @ 0x08D855E4
	.incbin "baserom.gba", 0xd855e4, 0x20
	.globl gUnknown_8D85604
gUnknown_8D85604: @ 0x08D85604
	.incbin "baserom.gba", 0xd85604, 0x2
	.globl gUnknown_8D85606
gUnknown_8D85606: @ 0x08D85606
	.incbin "baserom.gba", 0xd85606, 0xa6
	.globl gUnknown_8D856AC
gUnknown_8D856AC: @ 0x08D856AC
	.incbin "baserom.gba", 0xd856ac, 0xe0
	.globl gUnknown_8D8578C
gUnknown_8D8578C: @ 0x08D8578C
	.incbin "baserom.gba", 0xd8578c, 0x274
	.globl gUnknown_8D85A00
gUnknown_8D85A00: @ 0x08D85A00
	.incbin "baserom.gba", 0xd85a00, 0x234
	.globl gUnknown_8D85C34
gUnknown_8D85C34: @ 0x08D85C34
	.incbin "baserom.gba", 0xd85c34, 0x20
	.globl gUnknown_8D85C54
gUnknown_8D85C54: @ 0x08D85C54
	.incbin "baserom.gba", 0xd85c54, 0x20
	.globl gUnknown_8D85C74
gUnknown_8D85C74: @ 0x08D85C74
	.incbin "baserom.gba", 0xd85c74, 0x40
	.globl gUnknown_8D85CB4
gUnknown_8D85CB4: @ 0x08D85CB4
	.incbin "baserom.gba", 0xd85cb4, 0x182
	.globl gUnknown_8D85E36
gUnknown_8D85E36: @ 0x08D85E36
	.incbin "baserom.gba", 0xd85e36, 0xa
	.globl gUnknown_8D85E40
gUnknown_8D85E40: @ 0x08D85E40
	.incbin "baserom.gba", 0xd85e40, 0x16
	.globl gUnknown_8D85E56
gUnknown_8D85E56: @ 0x08D85E56
	.incbin "baserom.gba", 0xd85e56, 0xa
	.globl gUnknown_8D85E60
gUnknown_8D85E60: @ 0x08D85E60
	.incbin "baserom.gba", 0xd85e60, 0x2618
	.globl gUnknown_8D88478
gUnknown_8D88478: @ 0x08D88478
	.incbin "baserom.gba", 0xd88478, 0x8ac
	.globl gUnknown_8D88D24
gUnknown_8D88D24: @ 0x08D88D24
	.incbin "baserom.gba", 0xd88d24, 0x4e4
	.globl gUnknown_8D89208
gUnknown_8D89208: @ 0x08D89208
	.incbin "baserom.gba", 0xd89208, 0x898
	.globl gUnknown_8D89AA0
gUnknown_8D89AA0: @ 0x08D89AA0
	.incbin "baserom.gba", 0xd89aa0, 0x4c0
	.globl gUnknown_8D89F60
gUnknown_8D89F60: @ 0x08D89F60
	.incbin "baserom.gba", 0xd89f60, 0x89c
	.globl gUnknown_8D8A7FC
gUnknown_8D8A7FC: @ 0x08D8A7FC
	.incbin "baserom.gba", 0xd8a7fc, 0x11c
	.globl gUnknown_8D8A918
gUnknown_8D8A918: @ 0x08D8A918
	.incbin "baserom.gba", 0xd8a918, 0x120
	.globl gUnknown_8D8AA38
gUnknown_8D8AA38: @ 0x08D8AA38
	.incbin "baserom.gba", 0xd8aa38, 0x72c
	.globl gUnknown_8D8B164
gUnknown_8D8B164: @ 0x08D8B164
	.incbin "baserom.gba", 0xd8b164, 0x2c0
	.globl gUnknown_8D8B424
gUnknown_8D8B424: @ 0x08D8B424
	.incbin "baserom.gba", 0xd8b424, 0x2a8
	.globl gUnknown_8D8B6CC
gUnknown_8D8B6CC: @ 0x08D8B6CC
	.incbin "baserom.gba", 0xd8b6cc, 0x38c
	.globl gUnknown_8D8BA58
gUnknown_8D8BA58: @ 0x08D8BA58
	.incbin "baserom.gba", 0xd8ba58, 0x6f8
	.globl gUnknown_8D8C150
gUnknown_8D8C150: @ 0x08D8C150
	.incbin "baserom.gba", 0xd8c150, 0x6cc
	.globl gUnknown_8D8C81C
gUnknown_8D8C81C: @ 0x08D8C81C
	.incbin "baserom.gba", 0xd8c81c, 0x490
	.globl gUnknown_8D8CCAC
gUnknown_8D8CCAC: @ 0x08D8CCAC
	.incbin "baserom.gba", 0xd8ccac, 0x748
	.globl gUnknown_8D8D3F4
gUnknown_8D8D3F4: @ 0x08D8D3F4
	.incbin "baserom.gba", 0xd8d3f4, 0x17c
	.globl gUnknown_8D8D570
gUnknown_8D8D570: @ 0x08D8D570
	.incbin "baserom.gba", 0xd8d570, 0x52c
	.globl gUnknown_8D8DA9C
gUnknown_8D8DA9C: @ 0x08D8DA9C
	.incbin "baserom.gba", 0xd8da9c, 0xee0
	.globl gUnknown_8D8E97C
gUnknown_8D8E97C: @ 0x08D8E97C
	.incbin "baserom.gba", 0xd8e97c, 0x80
	.globl gUnknown_8D8E9FC
gUnknown_8D8E9FC: @ 0x08D8E9FC
	.incbin "baserom.gba", 0xd8e9fc, 0x1dc
	.globl gUnknown_8D8EBD8
gUnknown_8D8EBD8: @ 0x08D8EBD8
	.incbin "baserom.gba", 0xd8ebd8, 0xf78
	.globl gUnknown_8D8FB50
gUnknown_8D8FB50: @ 0x08D8FB50
	.incbin "baserom.gba", 0xd8fb50, 0x19fc
	.globl gUnknown_8D9154C
gUnknown_8D9154C: @ 0x08D9154C
	.incbin "baserom.gba", 0xd9154c, 0x820
	.globl gUnknown_8D91D6C
gUnknown_8D91D6C: @ 0x08D91D6C
	.incbin "baserom.gba", 0xd91d6c, 0xa34
	.globl gUnknown_8D927A0
gUnknown_8D927A0: @ 0x08D927A0
	.incbin "baserom.gba", 0xd927a0, 0xaf4
	.globl gUnknown_8D93294
gUnknown_8D93294: @ 0x08D93294
	.incbin "baserom.gba", 0xd93294, 0x2b8
	.globl gUnknown_8D9354C
gUnknown_8D9354C: @ 0x08D9354C
	.incbin "baserom.gba", 0xd9354c, 0x1e4
	.globl gUnknown_8D93730
gUnknown_8D93730: @ 0x08D93730
	.incbin "baserom.gba", 0xd93730, 0x1e4
	.globl gUnknown_8D93914
gUnknown_8D93914: @ 0x08D93914
	.incbin "baserom.gba", 0xd93914, 0x1158
	.globl gUnknown_8D94A6C
gUnknown_8D94A6C: @ 0x08D94A6C
	.incbin "baserom.gba", 0xd94a6c, 0x1320
	.globl gUnknown_8D95D8C
gUnknown_8D95D8C: @ 0x08D95D8C
	.incbin "baserom.gba", 0xd95d8c, 0x28
	.globl gUnknown_8D95DB4
gUnknown_8D95DB4: @ 0x08D95DB4
	.incbin "baserom.gba", 0xd95db4, 0x2d0
	.globl gUnknown_8D96084
gUnknown_8D96084: @ 0x08D96084
	.incbin "baserom.gba", 0xd96084, 0x2d4
	.globl gUnknown_8D96358
gUnknown_8D96358: @ 0x08D96358
	.incbin "baserom.gba", 0xd96358, 0x448
	.globl gUnknown_8D967A0
gUnknown_8D967A0: @ 0x08D967A0
	.incbin "baserom.gba", 0xd967a0, 0x2c8
	.globl gUnknown_8D96A68
gUnknown_8D96A68: @ 0x08D96A68
	.incbin "baserom.gba", 0xd96a68, 0xec
	.globl gUnknown_8D96B54
gUnknown_8D96B54: @ 0x08D96B54
	.incbin "baserom.gba", 0xd96b54, 0x1100
	.globl gUnknown_8D97C54
gUnknown_8D97C54: @ 0x08D97C54
	.incbin "baserom.gba", 0xd97c54, 0x17c
	.globl gUnknown_8D97DD0
gUnknown_8D97DD0: @ 0x08D97DD0
	.incbin "baserom.gba", 0xd97dd0, 0x9cc
	.globl gUnknown_8D9879C
gUnknown_8D9879C: @ 0x08D9879C
	.incbin "baserom.gba", 0xd9879c, 0xf0
	.globl gUnknown_8D9888C
gUnknown_8D9888C: @ 0x08D9888C
	.incbin "baserom.gba", 0xd9888c, 0x1b8
	.globl gUnknown_8D98A44
gUnknown_8D98A44: @ 0x08D98A44
	.incbin "baserom.gba", 0xd98a44, 0x164
	.globl gUnknown_8D98BA8
gUnknown_8D98BA8: @ 0x08D98BA8
	.incbin "baserom.gba", 0xd98ba8, 0x16c
	.globl gUnknown_8D98D14
gUnknown_8D98D14: @ 0x08D98D14
	.incbin "baserom.gba", 0xd98d14, 0x178
	.globl gUnknown_8D98E8C
gUnknown_8D98E8C: @ 0x08D98E8C
	.incbin "baserom.gba", 0xd98e8c, 0x18a8
	.globl gUnknown_8D9A734
gUnknown_8D9A734: @ 0x08D9A734
	.incbin "baserom.gba", 0xd9a734, 0x4c
	.globl gUnknown_8D9A780
gUnknown_8D9A780: @ 0x08D9A780
	.incbin "baserom.gba", 0xd9a780, 0x4c
	.globl gUnknown_8D9A7CC
gUnknown_8D9A7CC: @ 0x08D9A7CC
	.incbin "baserom.gba", 0xd9a7cc, 0x2b8
	.globl gUnknown_8D9AA84
gUnknown_8D9AA84: @ 0x08D9AA84
	.incbin "baserom.gba", 0xd9aa84, 0x544
	.globl gUnknown_8D9AFC8
gUnknown_8D9AFC8: @ 0x08D9AFC8
	.incbin "baserom.gba", 0xd9afc8, 0x34
	.globl gUnknown_8D9AFFC
gUnknown_8D9AFFC: @ 0x08D9AFFC
	.incbin "baserom.gba", 0xd9affc, 0x140
	.globl gUnknown_8D9B13C
gUnknown_8D9B13C: @ 0x08D9B13C
	.incbin "baserom.gba", 0xd9b13c, 0x78
	.globl gUnknown_8D9B1B4
gUnknown_8D9B1B4: @ 0x08D9B1B4
	.incbin "baserom.gba", 0xd9b1b4, 0x10c
	.globl gUnknown_8D9B2C0
gUnknown_8D9B2C0: @ 0x08D9B2C0
	.incbin "baserom.gba", 0xd9b2c0, 0x28
	.globl gUnknown_8D9B2E8
gUnknown_8D9B2E8: @ 0x08D9B2E8
	.incbin "baserom.gba", 0xd9b2e8, 0x1cc
	.globl gUnknown_8D9B4B4
gUnknown_8D9B4B4: @ 0x08D9B4B4
	.incbin "baserom.gba", 0xd9b4b4, 0x208
	.globl gUnknown_8D9B6BC
gUnknown_8D9B6BC: @ 0x08D9B6BC
	.incbin "baserom.gba", 0xd9b6bc, 0x358
	.globl gUnknown_8D9BA14
gUnknown_8D9BA14: @ 0x08D9BA14
	.incbin "baserom.gba", 0xd9ba14, 0x27c
	.globl gUnknown_8D9BC90
gUnknown_8D9BC90: @ 0x08D9BC90
	.incbin "baserom.gba", 0xd9bc90, 0x100
	.globl gUnknown_8D9BD90
gUnknown_8D9BD90: @ 0x08D9BD90
	.incbin "baserom.gba", 0xd9bd90, 0x41c
	.globl gUnknown_8D9C1AC
gUnknown_8D9C1AC: @ 0x08D9C1AC
	.incbin "baserom.gba", 0xd9c1ac, 0xa8
	.globl gUnknown_8D9C254
gUnknown_8D9C254: @ 0x08D9C254
	.incbin "baserom.gba", 0xd9c254, 0x190
	.globl gUnknown_8D9C3E4
gUnknown_8D9C3E4: @ 0x08D9C3E4
	.incbin "baserom.gba", 0xd9c3e4, 0x7284
	.globl gUnknown_8DA3668
gUnknown_8DA3668: @ 0x08DA3668
	.incbin "baserom.gba", 0xda3668, 0x428
	.globl gUnknown_8DA3A90
gUnknown_8DA3A90: @ 0x08DA3A90
	.incbin "baserom.gba", 0xda3a90, 0x3c
	.globl gUnknown_8DA3ACC
gUnknown_8DA3ACC: @ 0x08DA3ACC
	.incbin "baserom.gba", 0xda3acc, 0x164
	.globl gUnknown_8DA3C30
gUnknown_8DA3C30: @ 0x08DA3C30
	.incbin "baserom.gba", 0xda3c30, 0x100
	.globl gUnknown_8DA3D30
gUnknown_8DA3D30: @ 0x08DA3D30
	.incbin "baserom.gba", 0xda3d30, 0x20c
	.globl gUnknown_8DA3F3C
gUnknown_8DA3F3C: @ 0x08DA3F3C
	.incbin "baserom.gba", 0xda3f3c, 0x1114
	.globl gUnknown_8DA5050
gUnknown_8DA5050: @ 0x08DA5050
	.incbin "baserom.gba", 0xda5050, 0x44
	.globl gUnknown_8DA5094
gUnknown_8DA5094: @ 0x08DA5094
	.incbin "baserom.gba", 0xda5094, 0x184
	.globl gUnknown_8DA5218
gUnknown_8DA5218: @ 0x08DA5218
	.incbin "baserom.gba", 0xda5218, 0x1148
	.globl gUnknown_8DA6360
gUnknown_8DA6360: @ 0x08DA6360
	.incbin "baserom.gba", 0xda6360, 0x904
	.globl gUnknown_8DA6C64
gUnknown_8DA6C64: @ 0x08DA6C64
	.incbin "baserom.gba", 0xda6c64, 0xb6c
	.globl gUnknown_8DA77D0
gUnknown_8DA77D0: @ 0x08DA77D0
	.incbin "baserom.gba", 0xda77d0, 0x21c
	.globl gUnknown_8DA79EC
gUnknown_8DA79EC: @ 0x08DA79EC
	.incbin "baserom.gba", 0xda79ec, 0x40
	.globl gUnknown_8DA7A2C
gUnknown_8DA7A2C: @ 0x08DA7A2C
	.incbin "baserom.gba", 0xda7a2c, 0x328
	.globl gUnknown_8DA7D54
gUnknown_8DA7D54: @ 0x08DA7D54
	.incbin "baserom.gba", 0xda7d54, 0x184
	.globl gUnknown_8DA7ED8
gUnknown_8DA7ED8: @ 0x08DA7ED8
	.incbin "baserom.gba", 0xda7ed8, 0x13c
	.globl gUnknown_8DA8014
gUnknown_8DA8014: @ 0x08DA8014
	.incbin "baserom.gba", 0xda8014, 0x140
	.globl gUnknown_8DA8154
gUnknown_8DA8154: @ 0x08DA8154
	.incbin "baserom.gba", 0xda8154, 0x108
	.globl gUnknown_8DA825C
gUnknown_8DA825C: @ 0x08DA825C
	.incbin "baserom.gba", 0xda825c, 0x108
	.globl gUnknown_8DA8364
gUnknown_8DA8364: @ 0x08DA8364
	.incbin "baserom.gba", 0xda8364, 0xa84
	.globl gUnknown_8DA8DE8
gUnknown_8DA8DE8: @ 0x08DA8DE8
	.incbin "baserom.gba", 0xda8de8, 0x22c
	.globl gUnknown_8DA9014
gUnknown_8DA9014: @ 0x08DA9014
	.incbin "baserom.gba", 0xda9014, 0x118
	.globl gUnknown_8DA912C
gUnknown_8DA912C: @ 0x08DA912C
	.incbin "baserom.gba", 0xda912c, 0x1a30
	.globl gUnknown_8DAAB5C
gUnknown_8DAAB5C: @ 0x08DAAB5C
	.incbin "baserom.gba", 0xdaab5c, 0x270
	.globl gUnknown_8DAADCC
gUnknown_8DAADCC: @ 0x08DAADCC
	.incbin "baserom.gba", 0xdaadcc, 0xf8
	.globl gUnknown_8DAAEC4
gUnknown_8DAAEC4: @ 0x08DAAEC4
	.incbin "baserom.gba", 0xdaaec4, 0x238
	.globl gUnknown_8DAB0FC
gUnknown_8DAB0FC: @ 0x08DAB0FC
	.incbin "baserom.gba", 0xdab0fc, 0x144
	.globl gUnknown_8DAB240
gUnknown_8DAB240: @ 0x08DAB240
	.incbin "baserom.gba", 0xdab240, 0x54
	.globl gUnknown_8DAB294
gUnknown_8DAB294: @ 0x08DAB294
	.incbin "baserom.gba", 0xdab294, 0xf52c
	.globl gUnknown_8DBA7C0
gUnknown_8DBA7C0: @ 0x08DBA7C0
	.incbin "baserom.gba", 0xdba7c0, 0xa0
	.globl gUnknown_8DBA860
gUnknown_8DBA860: @ 0x08DBA860
	.incbin "baserom.gba", 0xdba860, 0x1d30
	.globl gUnknown_8DBC590
gUnknown_8DBC590: @ 0x08DBC590
	.incbin "baserom.gba", 0xdbc590, 0x72c
	.globl gUnknown_8DBCCBC
gUnknown_8DBCCBC: @ 0x08DBCCBC
	.incbin "baserom.gba", 0xdbccbc, 0x243344
