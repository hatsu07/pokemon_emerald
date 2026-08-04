	@ src/data/text/ribbon_descriptions.h:1 gRibbonDescriptionPart1_Champion
	.globl gText_Rom_5F5E58
gText_Rom_5F5E58: @ 0x085F5E58
	.string "チャンピオンを たおして$"
	.if (. - gText_Rom_5F5E58) > 0xd
	.error "gText_Rom_5F5E58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5E58) < 0xd
	.space 0xd - (. - gText_Rom_5F5E58)
	.endif

	@ src/data/text/ribbon_descriptions.h:2 gRibbonDescriptionPart2_Champion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5E65
gText_Rom_5F5E65: @ 0x085F5E65
	.string "でんどういり した きねんリボン$"
	.if (. - gText_Rom_5F5E65) != 0x11
	.error "gText_Rom_5F5E65 must retain its original byte length"
	.endif
	.globl gText_Rom_5F5E6F
	.set gText_Rom_5F5E6F, gText_Rom_5F5E65 + 0xa
	.globl gText_Rom_5F5E72
	.set gText_Rom_5F5E72, gText_Rom_5F5E65 + 0xd

	@ src/data/text/ribbon_descriptions.h:3 gRibbonDescriptionPart1_CoolContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5E76
gText_Rom_5F5E76: @ 0x085F5E76
	.string "かっこよさコンテスト$"
	.if (. - gText_Rom_5F5E76) != 0xb
	.error "gText_Rom_5F5E76 must retain its original byte length"
	.endif
	.globl gText_Rom_5F5E7B
	.set gText_Rom_5F5E7B, gText_Rom_5F5E76 + 0x5
	.globl gText_Rom_5F5E7D
	.set gText_Rom_5F5E7D, gText_Rom_5F5E76 + 0x7

	@ src/data/text/ribbon_descriptions.h:4 gRibbonDescriptionPart1_BeautyContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5E81
gText_Rom_5F5E81: @ 0x085F5E81
	.string "うつくしさコンテスト$"
	.if (. - gText_Rom_5F5E81) != 0xb
	.error "gText_Rom_5F5E81 must retain its original byte length"
	.endif
	.globl gText_Rom_5F5E86
	.set gText_Rom_5F5E86, gText_Rom_5F5E81 + 0x5
	.globl gText_Rom_5F5E88
	.set gText_Rom_5F5E88, gText_Rom_5F5E81 + 0x7

	@ src/data/text/ribbon_descriptions.h:5 gRibbonDescriptionPart1_CuteContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5E8C
gText_Rom_5F5E8C: @ 0x085F5E8C
	.string "かわいさコンテスト$"
	.if (. - gText_Rom_5F5E8C) != 0xa
	.error "gText_Rom_5F5E8C must retain its original byte length"
	.endif
	.globl gText_Rom_5F5E90
	.set gText_Rom_5F5E90, gText_Rom_5F5E8C + 0x4
	.globl gText_Rom_5F5E92
	.set gText_Rom_5F5E92, gText_Rom_5F5E8C + 0x6

	@ src/data/text/ribbon_descriptions.h:6 gRibbonDescriptionPart1_SmartContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5E96
gText_Rom_5F5E96: @ 0x085F5E96
	.string "かしこさコンテスト$"
	.if (. - gText_Rom_5F5E96) != 0xa
	.error "gText_Rom_5F5E96 must retain its original byte length"
	.endif
	.globl gText_Rom_5F5E9A
	.set gText_Rom_5F5E9A, gText_Rom_5F5E96 + 0x4
	.globl gText_Rom_5F5E9C
	.set gText_Rom_5F5E9C, gText_Rom_5F5E96 + 0x6

	@ src/data/text/ribbon_descriptions.h:7 gRibbonDescriptionPart1_ToughContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5EA0
gText_Rom_5F5EA0: @ 0x085F5EA0
	.string "たくましさコンテスト$"
	.if (. - gText_Rom_5F5EA0) != 0xb
	.error "gText_Rom_5F5EA0 must retain its original byte length"
	.endif
	.globl gText_Rom_5F5EA5
	.set gText_Rom_5F5EA5, gText_Rom_5F5EA0 + 0x5
	.globl gText_Rom_5F5EA7
	.set gText_Rom_5F5EA7, gText_Rom_5F5EA0 + 0x7

	@ src/data/text/ribbon_descriptions.h:8 gRibbonDescriptionPart2_NormalRank
	.globl gText_Rom_5F5EAB
gText_Rom_5F5EAB: @ 0x085F5EAB
	.string "ノーマルランク ゆうしょう!$"
	.if (. - gText_Rom_5F5EAB) > 0xf
	.error "gText_Rom_5F5EAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5EAB) < 0xf
	.space 0xf - (. - gText_Rom_5F5EAB)
	.endif

	@ src/data/text/ribbon_descriptions.h:9 gRibbonDescriptionPart2_SuperRank
	.globl gText_Rom_5F5EBA
gText_Rom_5F5EBA: @ 0x085F5EBA
	.string "スーパーランク ゆうしょう!$"
	.if (. - gText_Rom_5F5EBA) > 0xf
	.error "gText_Rom_5F5EBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5EBA) < 0xf
	.space 0xf - (. - gText_Rom_5F5EBA)
	.endif

	@ src/data/text/ribbon_descriptions.h:10 gRibbonDescriptionPart2_HyperRank
	.globl gText_Rom_5F5EC9
gText_Rom_5F5EC9: @ 0x085F5EC9
	.string "ハイパーランク ゆうしょう!$"
	.if (. - gText_Rom_5F5EC9) > 0xf
	.error "gText_Rom_5F5EC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5EC9) < 0xf
	.space 0xf - (. - gText_Rom_5F5EC9)
	.endif

	@ src/data/text/ribbon_descriptions.h:11 gRibbonDescriptionPart2_MasterRank
	.globl gText_Rom_5F5ED8
gText_Rom_5F5ED8: @ 0x085F5ED8
	.string "マスターランク ゆうしょう!$"
	.if (. - gText_Rom_5F5ED8) > 0xf
	.error "gText_Rom_5F5ED8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5ED8) < 0xf
	.space 0xf - (. - gText_Rom_5F5ED8)
	.endif

	@ src/data/text/ribbon_descriptions.h:12 gRibbonDescriptionPart1_Winning
	.globl gText_Rom_5F5EE7
gText_Rom_5F5EE7: @ 0x085F5EE7
	.string "バトルタワー レベル50を$"
	.if (. - gText_Rom_5F5EE7) > 0xe
	.error "gText_Rom_5F5EE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5EE7) < 0xe
	.space 0xe - (. - gText_Rom_5F5EE7)
	.endif

	@ src/data/text/ribbon_descriptions.h:13 gRibbonDescriptionPart2_Winning (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5EF5
gText_Rom_5F5EF5: @ 0x085F5EF5
	.string "かちぬいた きねんのリボン$"
	.if (. - gText_Rom_5F5EF5) != 0xe
	.error "gText_Rom_5F5EF5 must retain its original byte length"
	.endif
	.globl gText_Rom_5F5EFF
	.set gText_Rom_5F5EFF, gText_Rom_5F5EF5 + 0xa
	.incbin "baserom.gba", 0x5f5f03, 0x10

	@ src/data/text/ribbon_descriptions.h:13 gRibbonDescriptionPart2_Winning (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5F13
gText_Rom_5F5F13: @ 0x085F5F13
	.string "かちぬいた きねんのリボン$"
	.if (. - gText_Rom_5F5F13) != 0xe
	.error "gText_Rom_5F5F13 must retain its original byte length"
	.endif
	.globl gText_Rom_5F5F1D
	.set gText_Rom_5F5F1D, gText_Rom_5F5F13 + 0xa

	@ src/data/text/ribbon_descriptions.h:16 gRibbonDescriptionPart1_Artist
	.globl gText_Rom_5F5F21
gText_Rom_5F5F21: @ 0x085F5F21
	.string "ごうかな にがおえの モデルに$"
	.if (. - gText_Rom_5F5F21) > 0x10
	.error "gText_Rom_5F5F21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5F21) < 0x10
	.space 0x10 - (. - gText_Rom_5F5F21)
	.endif

	@ src/data/text/ribbon_descriptions.h:17 gRibbonDescriptionPart2_Artist
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5F31
gText_Rom_5F5F31: @ 0x085F5F31
	.string "なった きねんの リボン$"
	.if (. - gText_Rom_5F5F31) != 0xd
	.error "gText_Rom_5F5F31 must retain its original byte length"
	.endif
	.globl gText_Rom_5F5F3A
	.set gText_Rom_5F5F3A, gText_Rom_5F5F31 + 0x9

	@ src/data/text/ribbon_descriptions.h:18 gRibbonDescriptionPart1_Effort
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5F3E
gText_Rom_5F5F3E: @ 0x085F5F3E
	.string "たくさん どりょく している$"
	.if (. - gText_Rom_5F5F3E) != 0xf
	.error "gText_Rom_5F5F3E must retain its original byte length"
	.endif
	.globl gText_Rom_5F5F49
	.set gText_Rom_5F5F49, gText_Rom_5F5F3E + 0xb

	@ src/data/text/ribbon_descriptions.h:19 gRibbonDescriptionPart2_Effort
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5F4D
gText_Rom_5F5F4D: @ 0x085F5F4D
	.string "ポケモンに おくられる リボン$"
	.if (. - gText_Rom_5F5F4D) != 0x10
	.error "gText_Rom_5F5F4D must retain its original byte length"
	.endif
	.globl gText_Rom_5F5F59
	.set gText_Rom_5F5F59, gText_Rom_5F5F4D + 0xc
	.space 0x3, 0x00
	.globl gUnknown_85F5F60
gUnknown_85F5F60: @ 0x085F5F60
	.incbin "baserom.gba", 0x5f5f60, 0xc8

	@ src/data/text/gift_ribbon_descriptions.h:1 gGiftRibbonDescriptionPart1_2003RegionalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6028
gText_Rom_5F6028: @ 0x085F6028
	.string "2003ねん ちほう たいかい$"
	.if (. - gText_Rom_5F6028) != 0x10
	.error "gText_Rom_5F6028 must retain its original byte length"
	.endif
	.globl gText_Rom_5F6033
	.set gText_Rom_5F6033, gText_Rom_5F6028 + 0xb

	@ src/data/text/gift_ribbon_descriptions.h:2 gGiftRibbonDescriptionPart2_Champion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6038
gText_Rom_5F6038: @ 0x085F6038
	.string "ゆうしょう きねんリボン$"
	.if (. - gText_Rom_5F6038) != 0xd
	.error "gText_Rom_5F6038 must retain its original byte length"
	.endif
	.globl gText_Rom_5F603E
	.set gText_Rom_5F603E, gText_Rom_5F6038 + 0x6
	.globl gText_Rom_5F6041
	.set gText_Rom_5F6041, gText_Rom_5F6038 + 0x9

	@ src/data/text/gift_ribbon_descriptions.h:3 gGiftRibbonDescriptionPart1_2003NationalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6045
gText_Rom_5F6045: @ 0x085F6045
	.string "2003ねん ぜんこく たいかい$"
	.if (. - gText_Rom_5F6045) != 0x11
	.error "gText_Rom_5F6045 must retain its original byte length"
	.endif
	.globl gText_Rom_5F6051
	.set gText_Rom_5F6051, gText_Rom_5F6045 + 0xc

	@ src/data/text/gift_ribbon_descriptions.h:4 gGiftRibbonDescriptionPart1_2003GlobalCup
	.globl gText_Rom_5F6056
gText_Rom_5F6056: @ 0x085F6056
	.string "2003ねん ワールドカップ$"
	.if (. - gText_Rom_5F6056) > 0xf
	.error "gText_Rom_5F6056 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6056) < 0xf
	.space 0xf - (. - gText_Rom_5F6056)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:5 gGiftRibbonDescriptionPart2_RunnerUp
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6065
gText_Rom_5F6065: @ 0x085F6065
	.string "じゅんゆうしょう きねんリボン$"
	.if (. - gText_Rom_5F6065) != 0x10
	.error "gText_Rom_5F6065 must retain its original byte length"
	.endif
	.globl gText_Rom_5F6068
	.set gText_Rom_5F6068, gText_Rom_5F6065 + 0x3
	.globl gText_Rom_5F606E
	.set gText_Rom_5F606E, gText_Rom_5F6065 + 0x9
	.globl gText_Rom_5F6071
	.set gText_Rom_5F6071, gText_Rom_5F6065 + 0xc

	@ src/data/text/gift_ribbon_descriptions.h:6 gGiftRibbonDescriptionPart2_Semifinalist
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6075
gText_Rom_5F6075: @ 0x085F6075
	.string "ベスト4 きねんリボン$"
	.if (. - gText_Rom_5F6075) != 0xc
	.error "gText_Rom_5F6075 must retain its original byte length"
	.endif
	.globl gText_Rom_5F607A
	.set gText_Rom_5F607A, gText_Rom_5F6075 + 0x5
	.globl gText_Rom_5F607D
	.set gText_Rom_5F607D, gText_Rom_5F6075 + 0x8

	@ src/data/text/gift_ribbon_descriptions.h:7 gGiftRibbonDescriptionPart1_2004RegionalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6081
gText_Rom_5F6081: @ 0x085F6081
	.string "2004ねん ちほう たいかい$"
	.if (. - gText_Rom_5F6081) != 0x10
	.error "gText_Rom_5F6081 must retain its original byte length"
	.endif
	.globl gText_Rom_5F608C
	.set gText_Rom_5F608C, gText_Rom_5F6081 + 0xb

	@ src/data/text/gift_ribbon_descriptions.h:8 gGiftRibbonDescriptionPart1_2004NationalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6091
gText_Rom_5F6091: @ 0x085F6091
	.string "2004ねん ぜんこく たいかい$"
	.if (. - gText_Rom_5F6091) != 0x11
	.error "gText_Rom_5F6091 must retain its original byte length"
	.endif
	.globl gText_Rom_5F609D
	.set gText_Rom_5F609D, gText_Rom_5F6091 + 0xc

	@ src/data/text/gift_ribbon_descriptions.h:9 gGiftRibbonDescriptionPart1_2004GlobalCup
	.globl gText_Rom_5F60A2
gText_Rom_5F60A2: @ 0x085F60A2
	.string "2004ねん ワールドカップ$"
	.if (. - gText_Rom_5F60A2) > 0xf
	.error "gText_Rom_5F60A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F60A2) < 0xf
	.space 0xf - (. - gText_Rom_5F60A2)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:10 gGiftRibbonDescriptionPart1_2005RegionalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F60B1
gText_Rom_5F60B1: @ 0x085F60B1
	.string "2005ねん ちほう たいかい$"
	.if (. - gText_Rom_5F60B1) != 0x10
	.error "gText_Rom_5F60B1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F60BC
	.set gText_Rom_5F60BC, gText_Rom_5F60B1 + 0xb

	@ src/data/text/gift_ribbon_descriptions.h:11 gGiftRibbonDescriptionPart1_2005NationalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F60C1
gText_Rom_5F60C1: @ 0x085F60C1
	.string "2005ねん ぜんこく たいかい$"
	.if (. - gText_Rom_5F60C1) != 0x11
	.error "gText_Rom_5F60C1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F60CD
	.set gText_Rom_5F60CD, gText_Rom_5F60C1 + 0xc

	@ src/data/text/gift_ribbon_descriptions.h:12 gGiftRibbonDescriptionPart1_2005GlobalCup
	.globl gText_Rom_5F60D2
gText_Rom_5F60D2: @ 0x085F60D2
	.string "2005ねん ワールドカップ$"
	.if (. - gText_Rom_5F60D2) > 0xf
	.error "gText_Rom_5F60D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F60D2) < 0xf
	.space 0xf - (. - gText_Rom_5F60D2)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:13 gGiftRibbonDescriptionPart1_PokemonBattleCup
	.globl gText_Rom_5F60E1
gText_Rom_5F60E1: @ 0x085F60E1
	.string "ポケモン バトル カップ$"
	.if (. - gText_Rom_5F60E1) > 0xd
	.error "gText_Rom_5F60E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F60E1) < 0xd
	.space 0xd - (. - gText_Rom_5F60E1)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:14 gGiftRibbonDescriptionPart2_Participation
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F60EE
gText_Rom_5F60EE: @ 0x085F60EE
	.string "さんか きねんリボン$"
	.if (. - gText_Rom_5F60EE) != 0xb
	.error "gText_Rom_5F60EE must retain its original byte length"
	.endif
	.globl gText_Rom_5F60F2
	.set gText_Rom_5F60F2, gText_Rom_5F60EE + 0x4
	.globl gText_Rom_5F60F5
	.set gText_Rom_5F60F5, gText_Rom_5F60EE + 0x7

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
	.space 0x1, 0xFF

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
	.4byte NULL
	.4byte sub_081D0334
	.4byte sub_081D03DC
	.4byte sub_081D043C
	.4byte sub_081D04B0
	.4byte sub_081D0304
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

