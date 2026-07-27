	@ src/data/credits.h:66 sCreditsText_PkmnEmeraldVersion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CB4
gText_Rom_5C6CB4: @ 0x085C6CB4
	.string "ポケットモンスター エメラルド$"
	.if (. - gText_Rom_5C6CB4) != 0x10
	.error "gText_Rom_5C6CB4 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CBE
	.set gText_Rom_5C6CBE, gText_Rom_5C6CB4 + 0xa
	.globl gText_Rom_5C6CC0
	.set gText_Rom_5C6CC0, gText_Rom_5C6CB4 + 0xc

	@ src/data/credits.h:67 sCreditsText_Credits
	.globl gText_Rom_5C6CC4
gText_Rom_5C6CC4: @ 0x085C6CC4
	.string "スタッフリスト$"
	.if (. - gText_Rom_5C6CC4) > 0x8
	.error "gText_Rom_5C6CC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6CC4) < 0x8
	.space 0x8 - (. - gText_Rom_5C6CC4)
	.endif

	@ src/data/credits.h:68 sCreditsText_ExecutiveDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CCC
gText_Rom_5C6CCC: @ 0x085C6CCC
	.string "エグゼクティブ ディレクター$"
	.if (. - gText_Rom_5C6CCC) != 0xf
	.error "gText_Rom_5C6CCC must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CD4
	.set gText_Rom_5C6CD4, gText_Rom_5C6CCC + 0x8

	@ src/data/credits.h:69 sCreditsText_Director
	.globl gText_Rom_5C6CDB
gText_Rom_5C6CDB: @ 0x085C6CDB
	.string "ディレクター$"
	.if (. - gText_Rom_5C6CDB) > 0x7
	.error "gText_Rom_5C6CDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6CDB) < 0x7
	.space 0x7 - (. - gText_Rom_5C6CDB)
	.endif

	@ src/data/credits.h:70 sCreditsText_ArtDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CE2
gText_Rom_5C6CE2: @ 0x085C6CE2
	.string "アート ディレクター$"
	.if (. - gText_Rom_5C6CE2) != 0xb
	.error "gText_Rom_5C6CE2 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CE6
	.set gText_Rom_5C6CE6, gText_Rom_5C6CE2 + 0x4

	@ src/data/credits.h:71 sCreditsText_BattleDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CED
gText_Rom_5C6CED: @ 0x085C6CED
	.string "バトル ディレクター$"
	.if (. - gText_Rom_5C6CED) != 0xb
	.error "gText_Rom_5C6CED must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CF1
	.set gText_Rom_5C6CF1, gText_Rom_5C6CED + 0x4

	@ src/data/credits.h:72 sCreditsText_MainProgrammer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CF8
gText_Rom_5C6CF8: @ 0x085C6CF8
	.string "メイン プログラム$"
	.if (. - gText_Rom_5C6CF8) != 0xa
	.error "gText_Rom_5C6CF8 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CFC
	.set gText_Rom_5C6CFC, gText_Rom_5C6CF8 + 0x4

	@ src/data/credits.h:73 sCreditsText_BattleSystemPgrms
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D02
gText_Rom_5C6D02: @ 0x085C6D02
	.string "バトル システム プログラム$"
	.if (. - gText_Rom_5C6D02) != 0xf
	.error "gText_Rom_5C6D02 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D0B
	.set gText_Rom_5C6D0B, gText_Rom_5C6D02 + 0x9

	@ src/data/credits.h:74 sCreditsText_FieldSystemPgrms
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D11
gText_Rom_5C6D11: @ 0x085C6D11
	.string "フィールド システム プログラム$"
	.if (. - gText_Rom_5C6D11) != 0x11
	.error "gText_Rom_5C6D11 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D1C
	.set gText_Rom_5C6D1C, gText_Rom_5C6D11 + 0xb

	@ src/data/credits.h:75 sCreditsText_Programmers
	.globl gText_Rom_5C6D22
gText_Rom_5C6D22: @ 0x085C6D22
	.string "プログラム$"
	.if (. - gText_Rom_5C6D22) > 0x6
	.error "gText_Rom_5C6D22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D22) < 0x6
	.space 0x6 - (. - gText_Rom_5C6D22)
	.endif

	@ src/data/credits.h:76 sCreditsText_MainGraphicDesigner
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D28
gText_Rom_5C6D28: @ 0x085C6D28
	.string "メイン グラフィック デザイン$"
	.if (. - gText_Rom_5C6D28) != 0x10
	.error "gText_Rom_5C6D28 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D2C
	.set gText_Rom_5C6D2C, gText_Rom_5C6D28 + 0x4
	.globl gText_Rom_5C6D33
	.set gText_Rom_5C6D33, gText_Rom_5C6D28 + 0xb

	@ src/data/credits.h:77 sCreditsText_GraphicDesigners (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D38
gText_Rom_5C6D38: @ 0x085C6D38
	.string "グラフィック デザイン$"
	.if (. - gText_Rom_5C6D38) != 0xc
	.error "gText_Rom_5C6D38 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D3F
	.set gText_Rom_5C6D3F, gText_Rom_5C6D38 + 0x7

	@ src/data/credits.h:78 sCreditsText_PkmnDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D44
gText_Rom_5C6D44: @ 0x085C6D44
	.string "ポケモン デザイン$"
	.if (. - gText_Rom_5C6D44) != 0xa
	.error "gText_Rom_5C6D44 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D49
	.set gText_Rom_5C6D49, gText_Rom_5C6D44 + 0x5

	@ src/data/credits.h:79 sCreditsText_MusicComposition (+1 aliases)
	.globl gText_Rom_5C6D4E
gText_Rom_5C6D4E: @ 0x085C6D4E
	.string "おんがく$"
	.if (. - gText_Rom_5C6D4E) > 0x5
	.error "gText_Rom_5C6D4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D4E) < 0x5
	.space 0x5 - (. - gText_Rom_5C6D4E)
	.endif

	@ src/data/credits.h:80 sCreditsText_SoundEffectsAndPkmnVoices
	.globl gText_Rom_5C6D53
gText_Rom_5C6D53: @ 0x085C6D53
	.string "サウンド エフェクト/ポケモン ボイス$"
	.if (. - gText_Rom_5C6D53) > 0x14
	.error "gText_Rom_5C6D53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D53) < 0x14
	.space 0x14 - (. - gText_Rom_5C6D53)
	.endif

	@ src/data/credits.h:81 sCreditsText_GameDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D67
gText_Rom_5C6D67: @ 0x085C6D67
	.string "ゲーム デザイン$"
	.if (. - gText_Rom_5C6D67) != 0x9
	.error "gText_Rom_5C6D67 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D6B
	.set gText_Rom_5C6D6B, gText_Rom_5C6D67 + 0x4

	@ src/data/credits.h:82 sCreditsText_ScenarioPlot
	.globl gText_Rom_5C6D70
gText_Rom_5C6D70: @ 0x085C6D70
	.string "シナリオプロット$"
	.if (. - gText_Rom_5C6D70) > 0x9
	.error "gText_Rom_5C6D70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D70) < 0x9
	.space 0x9 - (. - gText_Rom_5C6D70)
	.endif

	@ src/data/credits.h:83 sCreditsText_Scenario
	.globl gText_Rom_5C6D79
gText_Rom_5C6D79: @ 0x085C6D79
	.string "シナリオ$"
	.if (. - gText_Rom_5C6D79) > 0x5
	.error "gText_Rom_5C6D79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D79) < 0x5
	.space 0x5 - (. - gText_Rom_5C6D79)
	.endif

	@ src/data/credits.h:84 sCreditsText_ScriptDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D7E
gText_Rom_5C6D7E: @ 0x085C6D7E
	.string "スクリプト せってい$"
	.if (. - gText_Rom_5C6D7E) != 0xb
	.error "gText_Rom_5C6D7E must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D84
	.set gText_Rom_5C6D84, gText_Rom_5C6D7E + 0x6

	@ src/data/credits.h:85 sCreditsText_MapDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D89
gText_Rom_5C6D89: @ 0x085C6D89
	.string "マップ デザイン$"
	.if (. - gText_Rom_5C6D89) != 0x9
	.error "gText_Rom_5C6D89 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D8D
	.set gText_Rom_5C6D8D, gText_Rom_5C6D89 + 0x4

	@ src/data/credits.h:86 sCreditsText_MapDataDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D92
gText_Rom_5C6D92: @ 0x085C6D92
	.string "マップデータ せってい$"
	.if (. - gText_Rom_5C6D92) != 0xc
	.error "gText_Rom_5C6D92 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D99
	.set gText_Rom_5C6D99, gText_Rom_5C6D92 + 0x7

	@ src/data/credits.h:87 sCreditsText_ParametricDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D9E
gText_Rom_5C6D9E: @ 0x085C6D9E
	.string "パラメーター せってい$"
	.if (. - gText_Rom_5C6D9E) != 0xc
	.error "gText_Rom_5C6D9E must retain its original byte length"
	.endif
	.globl gText_Rom_5C6DA5
	.set gText_Rom_5C6DA5, gText_Rom_5C6D9E + 0x7

	@ src/data/credits.h:88 sCreditsText_PokedexText
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6DAA
gText_Rom_5C6DAA: @ 0x085C6DAA
	.string "ずかん テキスト$"
	.if (. - gText_Rom_5C6DAA) != 0x9
	.error "gText_Rom_5C6DAA must retain its original byte length"
	.endif
	.globl gText_Rom_5C6DAE
	.set gText_Rom_5C6DAE, gText_Rom_5C6DAA + 0x4

	@ src/data/credits.h:89 sCreditsText_EnvAndToolPgrms
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6DB3
gText_Rom_5C6DB3: @ 0x085C6DB3
	.string "かんきょう/ツール プログラム$"
	.if (. - gText_Rom_5C6DB3) != 0x10
	.error "gText_Rom_5C6DB3 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6DBD
	.set gText_Rom_5C6DBD, gText_Rom_5C6DB3 + 0xa

	@ src/data/credits.h:90 sCreditsText_NCLProductTesting
	.globl gText_Rom_5C6DC3
gText_Rom_5C6DC3: @ 0x085C6DC3
	.string "デバッグプレイ$"
	.if (. - gText_Rom_5C6DC3) > 0x8
	.error "gText_Rom_5C6DC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DC3) < 0x8
	.space 0x8 - (. - gText_Rom_5C6DC3)
	.endif

	@ src/data/credits.h:91 sCreditsText_SpecialThanks
	.globl gText_Rom_5C6DCB
gText_Rom_5C6DCB: @ 0x085C6DCB
	.string "スペシャルサンクス$"
	.if (. - gText_Rom_5C6DCB) > 0xa
	.error "gText_Rom_5C6DCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DCB) < 0xa
	.space 0xa - (. - gText_Rom_5C6DCB)
	.endif

	@ src/data/credits.h:92 sCreditsText_Coordinators
	.globl gText_Rom_5C6DD5
gText_Rom_5C6DD5: @ 0x085C6DD5
	.string "コーディネーター$"
	.if (. - gText_Rom_5C6DD5) > 0x9
	.error "gText_Rom_5C6DD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DD5) < 0x9
	.space 0x9 - (. - gText_Rom_5C6DD5)
	.endif

	@ src/data/credits.h:93 sCreditsText_Producers
	.globl gText_Rom_5C6DDE
gText_Rom_5C6DDE: @ 0x085C6DDE
	.string "プロデューサー$"
	.if (. - gText_Rom_5C6DDE) > 0x8
	.error "gText_Rom_5C6DDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DDE) < 0x8
	.space 0x8 - (. - gText_Rom_5C6DDE)
	.endif

	@ src/data/credits.h:94 sCreditsText_ExecProducers
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6DE6
gText_Rom_5C6DE6: @ 0x085C6DE6
	.string "エグゼクティブ プロデューサー$"
	.if (. - gText_Rom_5C6DE6) != 0x10
	.error "gText_Rom_5C6DE6 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6DEE
	.set gText_Rom_5C6DEE, gText_Rom_5C6DE6 + 0x8

	@ src/data/credits.h:95 sCreditsText_InfoSupervisors
	.globl gText_Rom_5C6DF6
gText_Rom_5C6DF6: @ 0x085C6DF6
	.string "じょうほう かんり$"
	.if (. - gText_Rom_5C6DF6) > 0xa
	.error "gText_Rom_5C6DF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DF6) < 0xa
	.space 0xa - (. - gText_Rom_5C6DF6)
	.endif

	@ src/data/credits.h:96 sCreditsText_TaskManagers
	.globl gText_Rom_5C6E00
gText_Rom_5C6E00: @ 0x085C6E00
	.string "ファンクション マネージャー$"
	.if (. - gText_Rom_5C6E00) > 0xf
	.error "gText_Rom_5C6E00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E00) < 0xf
	.space 0xf - (. - gText_Rom_5C6E00)
	.endif

	@ src/data/credits.h:97 sCreditsText_BrailleCodeCheck
	.globl gText_Rom_5C6E0F
gText_Rom_5C6E0F: @ 0x085C6E0F
	.string "てんじ かんしゅう$"
	.if (. - gText_Rom_5C6E0F) > 0xa
	.error "gText_Rom_5C6E0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E0F) < 0xa
	.space 0xa - (. - gText_Rom_5C6E0F)
	.endif

	@ src/data/credits.h:98 sCreditsText_WorldDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6E19
gText_Rom_5C6E19: @ 0x085C6E19
	.string "ワールド ディレクター$"
	.if (. - gText_Rom_5C6E19) != 0xc
	.error "gText_Rom_5C6E19 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6E1E
	.set gText_Rom_5C6E1E, gText_Rom_5C6E19 + 0x5

	@ src/data/credits.h:99 sCreditsText_BattleFrontierData
	.globl gText_Rom_5C6E25
gText_Rom_5C6E25: @ 0x085C6E25
	.string "バトルフロンティア データ$"
	.if (. - gText_Rom_5C6E25) > 0xe
	.error "gText_Rom_5C6E25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E25) < 0xe
	.space 0xe - (. - gText_Rom_5C6E25)
	.endif

	@ src/data/credits.h:100 sCreditsText_SupportProgrammers
	.globl gText_Rom_5C6E33
gText_Rom_5C6E33: @ 0x085C6E33
	.string "プログラム サポート$"
	.if (. - gText_Rom_5C6E33) > 0xb
	.error "gText_Rom_5C6E33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E33) < 0xb
	.space 0xb - (. - gText_Rom_5C6E33)
	.endif

	@ src/data/credits.h:101 sCreditsText_Artwork
	.globl gText_Rom_5C6E3E
gText_Rom_5C6E3E: @ 0x085C6E3E
	.string "アート ワーク$"
	.if (. - gText_Rom_5C6E3E) > 0x8
	.error "gText_Rom_5C6E3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E3E) < 0x8
	.space 0x8 - (. - gText_Rom_5C6E3E)
	.endif

	@ src/data/credits.h:102 sCreditsText_LeadProgrammer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6E46
gText_Rom_5C6E46: @ 0x085C6E46
	.string "プログラム リーダー$"
	.if (. - gText_Rom_5C6E46) != 0xb
	.error "gText_Rom_5C6E46 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6E4C
	.set gText_Rom_5C6E4C, gText_Rom_5C6E46 + 0x6

	@ src/data/credits.h:103 sCreditsText_LeadGraphicArtist
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6E51
gText_Rom_5C6E51: @ 0x085C6E51
	.string "グラフィック リーダー$"
	.if (. - gText_Rom_5C6E51) != 0xc
	.error "gText_Rom_5C6E51 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6E58
	.set gText_Rom_5C6E58, gText_Rom_5C6E51 + 0x7

	@ src/data/credits.h:104 sCreditsText_SatoshiTajiri
	.globl gText_Rom_5C6E5D
gText_Rom_5C6E5D: @ 0x085C6E5D
	.string "たじり さとし$"
	.if (. - gText_Rom_5C6E5D) > 0x8
	.error "gText_Rom_5C6E5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E5D) < 0x8
	.space 0x8 - (. - gText_Rom_5C6E5D)
	.endif

	@ src/data/credits.h:105 sCreditsText_JunichiMasuda
	.globl gText_Rom_5C6E65
gText_Rom_5C6E65: @ 0x085C6E65
	.string "ますだ じゅんいち$"
	.if (. - gText_Rom_5C6E65) > 0xa
	.error "gText_Rom_5C6E65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E65) < 0xa
	.space 0xa - (. - gText_Rom_5C6E65)
	.endif

	@ src/data/credits.h:106 sCreditsText_KenSugimori
	.globl gText_Rom_5C6E6F
gText_Rom_5C6E6F: @ 0x085C6E6F
	.string "すぎもり けん$"
	.if (. - gText_Rom_5C6E6F) > 0x8
	.error "gText_Rom_5C6E6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E6F) < 0x8
	.space 0x8 - (. - gText_Rom_5C6E6F)
	.endif

	@ src/data/credits.h:107 sCreditsText_ShigekiMorimoto
	.globl gText_Rom_5C6E77
gText_Rom_5C6E77: @ 0x085C6E77
	.string "もりもと しげき$"
	.if (. - gText_Rom_5C6E77) > 0x9
	.error "gText_Rom_5C6E77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E77) < 0x9
	.space 0x9 - (. - gText_Rom_5C6E77)
	.endif

	@ src/data/credits.h:108 sCreditsText_TetsuyaWatanabe
	.globl gText_Rom_5C6E80
gText_Rom_5C6E80: @ 0x085C6E80
	.string "わたなべ てつや$"
	.if (. - gText_Rom_5C6E80) > 0x9
	.error "gText_Rom_5C6E80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E80) < 0x9
	.space 0x9 - (. - gText_Rom_5C6E80)
	.endif

	@ src/data/credits.h:109 sCreditsText_HisashiSogabe
	.globl gText_Rom_5C6E89
gText_Rom_5C6E89: @ 0x085C6E89
	.string "そがべ ひさし$"
	.if (. - gText_Rom_5C6E89) > 0x8
	.error "gText_Rom_5C6E89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E89) < 0x8
	.space 0x8 - (. - gText_Rom_5C6E89)
	.endif

	@ src/data/credits.h:110 sCreditsText_SosukeTamada
	.globl gText_Rom_5C6E91
gText_Rom_5C6E91: @ 0x085C6E91
	.string "たまだ そうすけ$"
	.if (. - gText_Rom_5C6E91) > 0x9
	.error "gText_Rom_5C6E91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E91) < 0x9
	.space 0x9 - (. - gText_Rom_5C6E91)
	.endif

	@ src/data/credits.h:111 sCreditsText_AkitoMori
	.globl gText_Rom_5C6E9A
gText_Rom_5C6E9A: @ 0x085C6E9A
	.string "もり あきと$"
	.if (. - gText_Rom_5C6E9A) > 0x7
	.error "gText_Rom_5C6E9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E9A) < 0x7
	.space 0x7 - (. - gText_Rom_5C6E9A)
	.endif

	@ src/data/credits.h:112 sCreditsText_KeitaKagaya
	.globl gText_Rom_5C6EA1
gText_Rom_5C6EA1: @ 0x085C6EA1
	.string "かがや けいた$"
	.if (. - gText_Rom_5C6EA1) > 0x8
	.error "gText_Rom_5C6EA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EA1) < 0x8
	.space 0x8 - (. - gText_Rom_5C6EA1)
	.endif

	@ src/data/credits.h:113 sCreditsText_YoshinoriMatsuda
	.globl gText_Rom_5C6EA9
gText_Rom_5C6EA9: @ 0x085C6EA9
	.string "まつだ よしのり$"
	.if (. - gText_Rom_5C6EA9) > 0x9
	.error "gText_Rom_5C6EA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EA9) < 0x9
	.space 0x9 - (. - gText_Rom_5C6EA9)
	.endif

	@ src/data/credits.h:114 sCreditsText_HiroyukiNakamura
	.globl gText_Rom_5C6EB2
gText_Rom_5C6EB2: @ 0x085C6EB2
	.string "なかむら ひろゆき$"
	.if (. - gText_Rom_5C6EB2) > 0xa
	.error "gText_Rom_5C6EB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EB2) < 0xa
	.space 0xa - (. - gText_Rom_5C6EB2)
	.endif

	@ src/data/credits.h:115 sCreditsText_MasaoTaya
	.globl gText_Rom_5C6EBC
gText_Rom_5C6EBC: @ 0x085C6EBC
	.string "たや まさお$"
	.if (. - gText_Rom_5C6EBC) > 0x7
	.error "gText_Rom_5C6EBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EBC) < 0x7
	.space 0x7 - (. - gText_Rom_5C6EBC)
	.endif

	@ src/data/credits.h:116 sCreditsText_SatoshiNohara
	.globl gText_Rom_5C6EC3
gText_Rom_5C6EC3: @ 0x085C6EC3
	.string "のはら さとし$"
	.if (. - gText_Rom_5C6EC3) > 0x8
	.error "gText_Rom_5C6EC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EC3) < 0x8
	.space 0x8 - (. - gText_Rom_5C6EC3)
	.endif

	@ src/data/credits.h:117 sCreditsText_TomomichiOhta
	.globl gText_Rom_5C6ECB
gText_Rom_5C6ECB: @ 0x085C6ECB
	.string "おおた ともみち$"
	.if (. - gText_Rom_5C6ECB) > 0x9
	.error "gText_Rom_5C6ECB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6ECB) < 0x9
	.space 0x9 - (. - gText_Rom_5C6ECB)
	.endif

	@ src/data/credits.h:118 sCreditsText_MiyukiIwasawa
	.globl gText_Rom_5C6ED4
gText_Rom_5C6ED4: @ 0x085C6ED4
	.string "いわさわ みゆき$"
	.if (. - gText_Rom_5C6ED4) > 0x9
	.error "gText_Rom_5C6ED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6ED4) < 0x9
	.space 0x9 - (. - gText_Rom_5C6ED4)
	.endif

	@ src/data/credits.h:119 sCreditsText_TakenoriOhta
	.globl gText_Rom_5C6EDD
gText_Rom_5C6EDD: @ 0x085C6EDD
	.string "おおた たけのり$"
	.if (. - gText_Rom_5C6EDD) > 0x9
	.error "gText_Rom_5C6EDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EDD) < 0x9
	.space 0x9 - (. - gText_Rom_5C6EDD)
	.endif

	@ src/data/credits.h:120 sCreditsText_HironobuYoshida
	.globl gText_Rom_5C6EE6
gText_Rom_5C6EE6: @ 0x085C6EE6
	.string "よしだ ひろのぶ$"
	.if (. - gText_Rom_5C6EE6) > 0x9
	.error "gText_Rom_5C6EE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EE6) < 0x9
	.space 0x9 - (. - gText_Rom_5C6EE6)
	.endif

	@ src/data/credits.h:121 sCreditsText_MotofumiFujiwara
	.globl gText_Rom_5C6EEF
gText_Rom_5C6EEF: @ 0x085C6EEF
	.string "ふじわら もとふみ$"
	.if (. - gText_Rom_5C6EEF) > 0xa
	.error "gText_Rom_5C6EEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EEF) < 0xa
	.space 0xa - (. - gText_Rom_5C6EEF)
	.endif

	@ src/data/credits.h:122 sCreditsText_SatoshiOhta
	.globl gText_Rom_5C6EF9
gText_Rom_5C6EF9: @ 0x085C6EF9
	.string "おおた さとし$"
	.if (. - gText_Rom_5C6EF9) > 0x8
	.error "gText_Rom_5C6EF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EF9) < 0x8
	.space 0x8 - (. - gText_Rom_5C6EF9)
	.endif

	@ src/data/credits.h:123 sCreditsText_AsukaIwashita
	.globl gText_Rom_5C6F01
gText_Rom_5C6F01: @ 0x085C6F01
	.string "いわした あすか$"
	.if (. - gText_Rom_5C6F01) > 0x9
	.error "gText_Rom_5C6F01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F01) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F01)
	.endif

	@ src/data/credits.h:124 sCreditsText_AimiTomita
	.globl gText_Rom_5C6F0A
gText_Rom_5C6F0A: @ 0x085C6F0A
	.string "とみた あいみ$"
	.if (. - gText_Rom_5C6F0A) > 0x8
	.error "gText_Rom_5C6F0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F0A) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F0A)
	.endif

	@ src/data/credits.h:125 sCreditsText_TakaoUnno
	.globl gText_Rom_5C6F12
gText_Rom_5C6F12: @ 0x085C6F12
	.string "うんの たかお$"
	.if (. - gText_Rom_5C6F12) > 0x8
	.error "gText_Rom_5C6F12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F12) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F12)
	.endif

	@ src/data/credits.h:126 sCreditsText_KanakoEo
	.globl gText_Rom_5C6F1A
gText_Rom_5C6F1A: @ 0x085C6F1A
	.string "えお かなこ$"
	.if (. - gText_Rom_5C6F1A) > 0x7
	.error "gText_Rom_5C6F1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F1A) < 0x7
	.space 0x7 - (. - gText_Rom_5C6F1A)
	.endif

	@ src/data/credits.h:127 sCreditsText_JunOkutani
	.globl gText_Rom_5C6F21
gText_Rom_5C6F21: @ 0x085C6F21
	.string "おくたに じゅん$"
	.if (. - gText_Rom_5C6F21) > 0x9
	.error "gText_Rom_5C6F21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F21) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F21)
	.endif

	@ src/data/credits.h:128 sCreditsText_AtsukoNishida
	.globl gText_Rom_5C6F2A
gText_Rom_5C6F2A: @ 0x085C6F2A
	.string "にしだ あつこ$"
	.if (. - gText_Rom_5C6F2A) > 0x8
	.error "gText_Rom_5C6F2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F2A) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F2A)
	.endif

	@ src/data/credits.h:129 sCreditsText_MuneoSaito
	.globl gText_Rom_5C6F32
gText_Rom_5C6F32: @ 0x085C6F32
	.string "さいとう むねお$"
	.if (. - gText_Rom_5C6F32) > 0x9
	.error "gText_Rom_5C6F32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F32) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F32)
	.endif

	@ src/data/credits.h:130 sCreditsText_RenaYoshikawa
	.globl gText_Rom_5C6F3B
gText_Rom_5C6F3B: @ 0x085C6F3B
	.string "よしかわ れな$"
	.if (. - gText_Rom_5C6F3B) > 0x8
	.error "gText_Rom_5C6F3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F3B) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F3B)
	.endif

	@ src/data/credits.h:131 sCreditsText_GoIchinose
	.globl gText_Rom_5C6F43
gText_Rom_5C6F43: @ 0x085C6F43
	.string "いちのせ ごう$"
	.if (. - gText_Rom_5C6F43) > 0x8
	.error "gText_Rom_5C6F43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F43) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F43)
	.endif

	@ src/data/credits.h:132 sCreditsText_MorikazuAoki
	.globl gText_Rom_5C6F4B
gText_Rom_5C6F4B: @ 0x085C6F4B
	.string "あおき もりかず$"
	.if (. - gText_Rom_5C6F4B) > 0x9
	.error "gText_Rom_5C6F4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F4B) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F4B)
	.endif

	@ src/data/credits.h:133 sCreditsText_KojiNishino
	.globl gText_Rom_5C6F54
gText_Rom_5C6F54: @ 0x085C6F54
	.string "にしの こうじ$"
	.if (. - gText_Rom_5C6F54) > 0x8
	.error "gText_Rom_5C6F54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F54) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F54)
	.endif

	@ src/data/credits.h:134 sCreditsText_KenjiMatsushima
	.globl gText_Rom_5C6F5C
gText_Rom_5C6F5C: @ 0x085C6F5C
	.string "まつしま けんじ$"
	.if (. - gText_Rom_5C6F5C) > 0x9
	.error "gText_Rom_5C6F5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F5C) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F5C)
	.endif

	@ src/data/credits.h:135 sCreditsText_TetsujiOhta
	.globl gText_Rom_5C6F65
gText_Rom_5C6F65: @ 0x085C6F65
	.string "おおた てつじ$"
	.if (. - gText_Rom_5C6F65) > 0x8
	.error "gText_Rom_5C6F65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F65) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F65)
	.endif

	@ src/data/credits.h:136 sCreditsText_HitomiSato
	.globl gText_Rom_5C6F6D
gText_Rom_5C6F6D: @ 0x085C6F6D
	.string "さとう ひとみ$"
	.if (. - gText_Rom_5C6F6D) > 0x8
	.error "gText_Rom_5C6F6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F6D) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F6D)
	.endif

	@ src/data/credits.h:137 sCreditsText_TakeshiKawachimaru
	.globl gText_Rom_5C6F75
gText_Rom_5C6F75: @ 0x085C6F75
	.string "かわちまる たけし$"
	.if (. - gText_Rom_5C6F75) > 0xa
	.error "gText_Rom_5C6F75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F75) < 0xa
	.space 0xa - (. - gText_Rom_5C6F75)
	.endif

	@ src/data/credits.h:138 sCreditsText_TeruyukiShimoyamada
	.globl gText_Rom_5C6F7F
gText_Rom_5C6F7F: @ 0x085C6F7F
	.string "しもやまだ てるゆき$"
	.if (. - gText_Rom_5C6F7F) > 0xb
	.error "gText_Rom_5C6F7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F7F) < 0xb
	.space 0xb - (. - gText_Rom_5C6F7F)
	.endif

	@ src/data/credits.h:139 sCreditsText_ShigeruOhmori
	.globl gText_Rom_5C6F8A
gText_Rom_5C6F8A: @ 0x085C6F8A
	.string "おおもり しげる$"
	.if (. - gText_Rom_5C6F8A) > 0x9
	.error "gText_Rom_5C6F8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F8A) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F8A)
	.endif

	@ src/data/credits.h:140 sCreditsText_TadashiTakahashi
	.globl gText_Rom_5C6F93
gText_Rom_5C6F93: @ 0x085C6F93
	.string "たかはし ただし$"
	.if (. - gText_Rom_5C6F93) > 0x9
	.error "gText_Rom_5C6F93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F93) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F93)
	.endif

	@ src/data/credits.h:141 sCreditsText_ToshinobuMatsumiya
	.globl gText_Rom_5C6F9C
gText_Rom_5C6F9C: @ 0x085C6F9C
	.string "まつみや としのぶ$"
	.if (. - gText_Rom_5C6F9C) > 0xa
	.error "gText_Rom_5C6F9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F9C) < 0xa
	.space 0xa - (. - gText_Rom_5C6F9C)
	.endif

	@ src/data/credits.h:142 sCreditsText_AkihitoTomisawa
	.globl gText_Rom_5C6FA6
gText_Rom_5C6FA6: @ 0x085C6FA6
	.string "とみさわ あきひと$"
	.if (. - gText_Rom_5C6FA6) > 0xa
	.error "gText_Rom_5C6FA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FA6) < 0xa
	.space 0xa - (. - gText_Rom_5C6FA6)
	.endif

	@ src/data/credits.h:143 sCreditsText_HirokiEnomoto
	.globl gText_Rom_5C6FB0
gText_Rom_5C6FB0: @ 0x085C6FB0
	.string "えのもと ひろき$"
	.if (. - gText_Rom_5C6FB0) > 0x9
	.error "gText_Rom_5C6FB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FB0) < 0x9
	.space 0x9 - (. - gText_Rom_5C6FB0)
	.endif

	@ src/data/credits.h:144 sCreditsText_KazuyukiTerada
	.globl gText_Rom_5C6FB9
gText_Rom_5C6FB9: @ 0x085C6FB9
	.string "てらだ かずゆき$"
	.if (. - gText_Rom_5C6FB9) > 0x9
	.error "gText_Rom_5C6FB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FB9) < 0x9
	.space 0x9 - (. - gText_Rom_5C6FB9)
	.endif

	@ src/data/credits.h:145 sCreditsText_YuriSakurai
	.globl gText_Rom_5C6FC2
gText_Rom_5C6FC2: @ 0x085C6FC2
	.string "さくらい ゆうり$"
	.if (. - gText_Rom_5C6FC2) > 0x9
	.error "gText_Rom_5C6FC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FC2) < 0x9
	.space 0x9 - (. - gText_Rom_5C6FC2)
	.endif

	@ src/data/credits.h:146 sCreditsText_HiromiSagawa
	.globl gText_Rom_5C6FCB
gText_Rom_5C6FCB: @ 0x085C6FCB
	.string "さがわ ひろみ$"
	.if (. - gText_Rom_5C6FCB) > 0x8
	.error "gText_Rom_5C6FCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FCB) < 0x8
	.space 0x8 - (. - gText_Rom_5C6FCB)
	.endif

	@ src/data/credits.h:147 sCreditsText_KenjiTominaga
	.globl gText_Rom_5C6FD3
gText_Rom_5C6FD3: @ 0x085C6FD3
	.string "とみなが けんじ$"
	.if (. - gText_Rom_5C6FD3) > 0x9
	.error "gText_Rom_5C6FD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FD3) < 0x9
	.space 0x9 - (. - gText_Rom_5C6FD3)
	.endif

	@ src/data/credits.h:148 sCreditsText_YoshioTajiri
	.globl gText_Rom_5C6FDC
gText_Rom_5C6FDC: @ 0x085C6FDC
	.string "たじり よしお$"
	.if (. - gText_Rom_5C6FDC) > 0x8
	.error "gText_Rom_5C6FDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FDC) < 0x8
	.space 0x8 - (. - gText_Rom_5C6FDC)
	.endif

	@ src/data/credits.h:149 sCreditsText_TeikoSasaki
	.globl gText_Rom_5C6FE4
gText_Rom_5C6FE4: @ 0x085C6FE4
	.string "ささき ていこ$"
	.if (. - gText_Rom_5C6FE4) > 0x8
	.error "gText_Rom_5C6FE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FE4) < 0x8
	.space 0x8 - (. - gText_Rom_5C6FE4)
	.endif

	@ src/data/credits.h:150 sCreditsText_SachikoHamano
	.globl gText_Rom_5C6FEC
gText_Rom_5C6FEC: @ 0x085C6FEC
	.string "はまの さちこ$"
	.if (. - gText_Rom_5C6FEC) > 0x8
	.error "gText_Rom_5C6FEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FEC) < 0x8
	.space 0x8 - (. - gText_Rom_5C6FEC)
	.endif

	@ src/data/credits.h:151 sCreditsText_ChieMatsumiya
	.globl gText_Rom_5C6FF4
gText_Rom_5C6FF4: @ 0x085C6FF4
	.string "まつみや ちえ$"
	.if (. - gText_Rom_5C6FF4) > 0x8
	.error "gText_Rom_5C6FF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FF4) < 0x8
	.space 0x8 - (. - gText_Rom_5C6FF4)
	.endif

	@ src/data/credits.h:152 sCreditsText_AkikoShinozaki
	.globl gText_Rom_5C6FFC
gText_Rom_5C6FFC: @ 0x085C6FFC
	.string "しのざき あきこ$"
	.if (. - gText_Rom_5C6FFC) > 0x9
	.error "gText_Rom_5C6FFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FFC) < 0x9
	.space 0x9 - (. - gText_Rom_5C6FFC)
	.endif

	@ src/data/credits.h:153 sCreditsText_AstukoFujii
	.globl gText_Rom_5C7005
gText_Rom_5C7005: @ 0x085C7005
	.string "ふじい あつこ$"
	.if (. - gText_Rom_5C7005) > 0x8
	.error "gText_Rom_5C7005 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7005) < 0x8
	.space 0x8 - (. - gText_Rom_5C7005)
	.endif

	@ src/data/credits.h:154 sCreditsText_NozomuSaito
	.globl gText_Rom_5C700D
gText_Rom_5C700D: @ 0x085C700D
	.string "さいとう のぞむ$"
	.if (. - gText_Rom_5C700D) > 0x9
	.error "gText_Rom_5C700D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C700D) < 0x9
	.space 0x9 - (. - gText_Rom_5C700D)
	.endif

	@ src/data/credits.h:155 sCreditsText_KenkichiToyama
	.globl gText_Rom_5C7016
gText_Rom_5C7016: @ 0x085C7016
	.string "とやま けんきち$"
	.if (. - gText_Rom_5C7016) > 0x9
	.error "gText_Rom_5C7016 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7016) < 0x9
	.space 0x9 - (. - gText_Rom_5C7016)
	.endif

	@ src/data/credits.h:156 sCreditsText_SuguruNakatsui
	.globl gText_Rom_5C701F
gText_Rom_5C701F: @ 0x085C701F
	.string "なかつい すぐる$"
	.if (. - gText_Rom_5C701F) > 0x9
	.error "gText_Rom_5C701F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C701F) < 0x9
	.space 0x9 - (. - gText_Rom_5C701F)
	.endif

	@ src/data/credits.h:157 sCreditsText_YumiFunasaka
	.globl gText_Rom_5C7028
gText_Rom_5C7028: @ 0x085C7028
	.string "ふなさか ゆみ$"
	.if (. - gText_Rom_5C7028) > 0x8
	.error "gText_Rom_5C7028 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7028) < 0x8
	.space 0x8 - (. - gText_Rom_5C7028)
	.endif

	@ src/data/credits.h:158 sCreditsText_NaokoYanase
	.globl gText_Rom_5C7030
gText_Rom_5C7030: @ 0x085C7030
	.string "やなせ なおこ$"
	.if (. - gText_Rom_5C7030) > 0x8
	.error "gText_Rom_5C7030 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7030) < 0x8
	.space 0x8 - (. - gText_Rom_5C7030)
	.endif

	@ src/data/credits.h:159 sCreditsText_NCLSuperMarioClub
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C7038
gText_Rom_5C7038: @ 0x085C7038
	.string "スーパーマリオクラブ$"
	.if (. - gText_Rom_5C7038) != 0xb
	.error "gText_Rom_5C7038 must retain its original byte length"
	.endif
	.globl gText_Rom_5C703F
	.set gText_Rom_5C703F, gText_Rom_5C7038 + 0x7

	@ src/data/credits.h:160 sCreditsText_AtsushiTada
	.globl gText_Rom_5C7043
gText_Rom_5C7043: @ 0x085C7043
	.string "ただ あつし$"
	.if (. - gText_Rom_5C7043) > 0x7
	.error "gText_Rom_5C7043 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7043) < 0x7
	.space 0x7 - (. - gText_Rom_5C7043)
	.endif

	@ src/data/credits.h:161 sCreditsText_TakahiroOhnishi
	.globl gText_Rom_5C704A
gText_Rom_5C704A: @ 0x085C704A
	.string "おおにし たかひろ$"
	.if (. - gText_Rom_5C704A) > 0xa
	.error "gText_Rom_5C704A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C704A) < 0xa
	.space 0xa - (. - gText_Rom_5C704A)
	.endif

	@ src/data/credits.h:162 sCreditsText_NorihideOkamura
	.globl gText_Rom_5C7054
gText_Rom_5C7054: @ 0x085C7054
	.string "おかむら のりひで$"
	.if (. - gText_Rom_5C7054) > 0xa
	.error "gText_Rom_5C7054 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7054) < 0xa
	.space 0xa - (. - gText_Rom_5C7054)
	.endif

	@ src/data/credits.h:163 sCreditsText_HiroNakamura
	.globl gText_Rom_5C705E
gText_Rom_5C705E: @ 0x085C705E
	.string "なかむら ひろき$"
	.if (. - gText_Rom_5C705E) > 0x9
	.error "gText_Rom_5C705E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C705E) < 0x9
	.space 0x9 - (. - gText_Rom_5C705E)
	.endif

	@ src/data/credits.h:164 sCreditsText_HiroyukiUesugi
	.globl gText_Rom_5C7067
gText_Rom_5C7067: @ 0x085C7067
	.string "うえすぎ ひろゆき$"
	.if (. - gText_Rom_5C7067) > 0xa
	.error "gText_Rom_5C7067 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7067) < 0xa
	.space 0xa - (. - gText_Rom_5C7067)
	.endif

	@ src/data/credits.h:165 sCreditsText_TerukiMurakawa
	.globl gText_Rom_5C7071
gText_Rom_5C7071: @ 0x085C7071
	.string "むらかわ てるき$"
	.if (. - gText_Rom_5C7071) > 0x9
	.error "gText_Rom_5C7071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7071) < 0x9
	.space 0x9 - (. - gText_Rom_5C7071)
	.endif

	@ src/data/credits.h:166 sCreditsText_AkiraKinashi
	.globl gText_Rom_5C707A
gText_Rom_5C707A: @ 0x085C707A
	.string "きなし あきら$"
	.if (. - gText_Rom_5C707A) > 0x8
	.error "gText_Rom_5C707A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C707A) < 0x8
	.space 0x8 - (. - gText_Rom_5C707A)
	.endif

	@ src/data/credits.h:167 sCreditsText_MichikoTakizawa
	.globl gText_Rom_5C7082
gText_Rom_5C7082: @ 0x085C7082
	.string "たきざわ みちこ$"
	.if (. - gText_Rom_5C7082) > 0x9
	.error "gText_Rom_5C7082 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7082) < 0x9
	.space 0x9 - (. - gText_Rom_5C7082)
	.endif

	@ src/data/credits.h:168 sCreditsText_MakikoTakada
	.globl gText_Rom_5C708B
gText_Rom_5C708B: @ 0x085C708B
	.string "たかだ まきこ$"
	.if (. - gText_Rom_5C708B) > 0x8
	.error "gText_Rom_5C708B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C708B) < 0x8
	.space 0x8 - (. - gText_Rom_5C708B)
	.endif

	@ src/data/credits.h:169 sCreditsText_TakanaoKondo
	.globl gText_Rom_5C7093
gText_Rom_5C7093: @ 0x085C7093
	.string "こんどう たかなお$"
	.if (. - gText_Rom_5C7093) > 0xa
	.error "gText_Rom_5C7093 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7093) < 0xa
	.space 0xa - (. - gText_Rom_5C7093)
	.endif

	@ src/data/credits.h:170 sCreditsText_AiMashima
	.globl gText_Rom_5C709D
gText_Rom_5C709D: @ 0x085C709D
	.string "ましま あい$"
	.if (. - gText_Rom_5C709D) > 0x7
	.error "gText_Rom_5C709D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C709D) < 0x7
	.space 0x7 - (. - gText_Rom_5C709D)
	.endif

	@ src/data/credits.h:171 sCreditsText_GakujiNomoto
	.globl gText_Rom_5C70A4
gText_Rom_5C70A4: @ 0x085C70A4
	.string "のもと がくじ$"
	.if (. - gText_Rom_5C70A4) > 0x8
	.error "gText_Rom_5C70A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70A4) < 0x8
	.space 0x8 - (. - gText_Rom_5C70A4)
	.endif

	@ src/data/credits.h:172 sCreditsText_TakehiroIzushi
	.globl gText_Rom_5C70AC
gText_Rom_5C70AC: @ 0x085C70AC
	.string "いずし たけひろ$"
	.if (. - gText_Rom_5C70AC) > 0x9
	.error "gText_Rom_5C70AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70AC) < 0x9
	.space 0x9 - (. - gText_Rom_5C70AC)
	.endif

	@ src/data/credits.h:173 sCreditsText_HitoshiYamagami
	.globl gText_Rom_5C70B5
gText_Rom_5C70B5: @ 0x085C70B5
	.string "やまがみ ひとし$"
	.if (. - gText_Rom_5C70B5) > 0x9
	.error "gText_Rom_5C70B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70B5) < 0x9
	.space 0x9 - (. - gText_Rom_5C70B5)
	.endif

	@ src/data/credits.h:174 sCreditsText_KyokoWatanabe
	.globl gText_Rom_5C70BE
gText_Rom_5C70BE: @ 0x085C70BE
	.string "わたなべ きょうこ$"
	.if (. - gText_Rom_5C70BE) > 0xa
	.error "gText_Rom_5C70BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70BE) < 0xa
	.space 0xa - (. - gText_Rom_5C70BE)
	.endif

	@ src/data/credits.h:175 sCreditsText_TakaoNakano
	.globl gText_Rom_5C70C8
gText_Rom_5C70C8: @ 0x085C70C8
	.string "なかの たかお$"
	.if (. - gText_Rom_5C70C8) > 0x8
	.error "gText_Rom_5C70C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70C8) < 0x8
	.space 0x8 - (. - gText_Rom_5C70C8)
	.endif

	@ src/data/credits.h:176 sCreditsText_HiroyukiJinnai
	.globl gText_Rom_5C70D0
gText_Rom_5C70D0: @ 0x085C70D0
	.string "じんない ひろゆき$"
	.if (. - gText_Rom_5C70D0) > 0xa
	.error "gText_Rom_5C70D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70D0) < 0xa
	.space 0xa - (. - gText_Rom_5C70D0)
	.endif

	@ src/data/credits.h:177 sCreditsText_HiroakiTsuru
	.globl gText_Rom_5C70DA
gText_Rom_5C70DA: @ 0x085C70DA
	.string "つる ひろあき$"
	.if (. - gText_Rom_5C70DA) > 0x8
	.error "gText_Rom_5C70DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70DA) < 0x8
	.space 0x8 - (. - gText_Rom_5C70DA)
	.endif

	@ src/data/credits.h:178 sCreditsText_TsunekazIshihara
	.globl gText_Rom_5C70E2
gText_Rom_5C70E2: @ 0x085C70E2
	.string "いしはら つねかず$"
	.if (. - gText_Rom_5C70E2) > 0xa
	.error "gText_Rom_5C70E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70E2) < 0xa
	.space 0xa - (. - gText_Rom_5C70E2)
	.endif

	@ src/data/credits.h:179 sCreditsText_SatoruIwata
	.globl gText_Rom_5C70EC
gText_Rom_5C70EC: @ 0x085C70EC
	.string "いわた さとる$"
	.if (. - gText_Rom_5C70EC) > 0x8
	.error "gText_Rom_5C70EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70EC) < 0x8
	.space 0x8 - (. - gText_Rom_5C70EC)
	.endif

	@ src/data/credits.h:180 sCreditsText_KazuyaSuyama
	.globl gText_Rom_5C70F4
gText_Rom_5C70F4: @ 0x085C70F4
	.string "すやま かずや$"
	.if (. - gText_Rom_5C70F4) > 0x8
	.error "gText_Rom_5C70F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70F4) < 0x8
	.space 0x8 - (. - gText_Rom_5C70F4)
	.endif

	@ src/data/credits.h:181 sCreditsText_SatoshiMitsuhara
	.globl gText_Rom_5C70FC
gText_Rom_5C70FC: @ 0x085C70FC
	.string "みつはら さとし$"
	.if (. - gText_Rom_5C70FC) > 0x9
	.error "gText_Rom_5C70FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70FC) < 0x9
	.space 0x9 - (. - gText_Rom_5C70FC)
	.endif

	@ src/data/credits.h:182 sCreditsText_JapanBrailleLibrary
	.globl gText_Rom_5C7105
gText_Rom_5C7105: @ 0x085C7105
	.string "にっぽんてんじとしょかん$"
	.if (. - gText_Rom_5C7105) > 0xd
	.error "gText_Rom_5C7105 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7105) < 0xd
	.space 0xd - (. - gText_Rom_5C7105)
	.endif

	@ src/data/credits.h:183 sCreditsText_TomotakaKomura
	.globl gText_Rom_5C7112
gText_Rom_5C7112: @ 0x085C7112
	.string "こむら ともたか$"
	.if (. - gText_Rom_5C7112) > 0x9
	.error "gText_Rom_5C7112 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7112) < 0x9
	.space 0x9 - (. - gText_Rom_5C7112)
	.endif

	@ src/data/credits.h:184 sCreditsText_MikikoOhhashi
	.globl gText_Rom_5C711B
gText_Rom_5C711B: @ 0x085C711B
	.string "おおはし みきこ$"
	.if (. - gText_Rom_5C711B) > 0x9
	.error "gText_Rom_5C711B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C711B) < 0x9
	.space 0x9 - (. - gText_Rom_5C711B)
	.endif

	@ src/data/credits.h:185 sCreditsText_DaisukeHoshino
	.globl gText_Rom_5C7124
gText_Rom_5C7124: @ 0x085C7124
	.string "ほしの だいすけ$"
	.if (. - gText_Rom_5C7124) > 0x9
	.error "gText_Rom_5C7124 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7124) < 0x9
	.space 0x9 - (. - gText_Rom_5C7124)
	.endif

	@ src/data/credits.h:186 sCreditsText_KenjiroIto
	.globl gText_Rom_5C712D
gText_Rom_5C712D: @ 0x085C712D
	.string "いとう けんじろう$"
	.if (. - gText_Rom_5C712D) > 0xa
	.error "gText_Rom_5C712D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C712D) < 0xa
	.space 0xa - (. - gText_Rom_5C712D)
	.endif

	@ src/data/credits.h:187 sCreditsText_RuiKawaguchi
	.globl gText_Rom_5C7137
gText_Rom_5C7137: @ 0x085C7137
	.string "かわぐち るい$"
	.if (. - gText_Rom_5C7137) > 0x8
	.error "gText_Rom_5C7137 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7137) < 0x8
	.space 0x8 - (. - gText_Rom_5C7137)
	.endif

	@ src/data/credits.h:188 sCreditsText_ShunsukeKohori
	.globl gText_Rom_5C713F
gText_Rom_5C713F: @ 0x085C713F
	.string "こほり しゅんすけ$"
	.if (. - gText_Rom_5C713F) > 0xa
	.error "gText_Rom_5C713F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C713F) < 0xa
	.space 0xa - (. - gText_Rom_5C713F)
	.endif

	@ src/data/credits.h:189 sCreditsText_SachikoNakamichi
	.globl gText_Rom_5C7149
gText_Rom_5C7149: @ 0x085C7149
	.string "なかみち さちこ$"
	.if (. - gText_Rom_5C7149) > 0x9
	.error "gText_Rom_5C7149 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7149) < 0x9
	.space 0x9 - (. - gText_Rom_5C7149)
	.endif

	@ src/data/credits.h:190 sCreditsText_FujikoNomura
	.globl gText_Rom_5C7152
gText_Rom_5C7152: @ 0x085C7152
	.string "のむら ふじこ$"
	.if (. - gText_Rom_5C7152) > 0x8
	.error "gText_Rom_5C7152 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7152) < 0x8
	.space 0x8 - (. - gText_Rom_5C7152)
	.endif

	@ src/data/credits.h:191 sCreditsText_KazukiYoshihara
	.globl gText_Rom_5C715A
gText_Rom_5C715A: @ 0x085C715A
	.string "よしはら かずき$"
	.if (. - gText_Rom_5C715A) > 0x9
	.error "gText_Rom_5C715A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C715A) < 0x9
	.space 0x9 - (. - gText_Rom_5C715A)
	.endif

	@ src/data/credits.h:192 sCreditsText_RetsujiNomoto
	.globl gText_Rom_5C7163
gText_Rom_5C7163: @ 0x085C7163
	.string "のもと れつじ$"
	.if (. - gText_Rom_5C7163) > 0x8
	.error "gText_Rom_5C7163 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7163) < 0x8
	.space 0x8 - (. - gText_Rom_5C7163)
	.endif

	@ src/data/credits.h:193 sCreditsText_AzusaTajima
	.globl gText_Rom_5C716B
gText_Rom_5C716B: @ 0x085C716B
	.string "たじま あずさ$"
	.if (. - gText_Rom_5C716B) > 0x8
	.error "gText_Rom_5C716B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C716B) < 0x8
	.space 0x8 - (. - gText_Rom_5C716B)
	.endif

	@ src/data/credits.h:194 sCreditsText_ShusakuEgami
	.globl gText_Rom_5C7173
gText_Rom_5C7173: @ 0x085C7173
	.string "えがみ しゅうさく$"
	.if (. - gText_Rom_5C7173) > 0xa
	.error "gText_Rom_5C7173 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7173) < 0xa
	.space 0xa - (. - gText_Rom_5C7173)
	.endif
	.incbin "baserom.gba", 0x5c717d, 0x413
	.globl gUnknown_85C7590
gUnknown_85C7590: @ 0x085C7590
	.incbin "baserom.gba", 0x5c7590, 0x384
	.globl gUnknown_85C7914
gUnknown_85C7914: @ 0x085C7914
	.incbin "baserom.gba", 0x5c7914, 0x4
	.globl gUnknown_85C7918
gUnknown_85C7918: @ 0x085C7918
	.incbin "baserom.gba", 0x5c7918, 0x10
	.globl gUnknown_85C7928
gUnknown_85C7928: @ 0x085C7928
	.incbin "baserom.gba", 0x5c7928, 0x54
	.globl gUnknown_85C797C
gUnknown_85C797C: @ 0x085C797C
	.incbin "baserom.gba", 0x5c797c, 0x40
	.globl gUnknown_85C79BC
gUnknown_85C79BC: @ 0x085C79BC
	.incbin "baserom.gba", 0x5c79bc, 0xc
	.globl gUnknown_85C79C8
gUnknown_85C79C8: @ 0x085C79C8
	.incbin "baserom.gba", 0x5c79c8, 0x10
	.globl gUnknown_85C79D8
gUnknown_85C79D8: @ 0x085C79D8
	.incbin "baserom.gba", 0x5c79d8, 0x3c
	.globl gUnknown_85C7A14
gUnknown_85C7A14: @ 0x085C7A14
	.incbin "baserom.gba", 0x5c7a14, 0x18
	.globl gUnknown_85C7A2C
gUnknown_85C7A2C: @ 0x085C7A2C
	.incbin "baserom.gba", 0x5c7a2c, 0x8
	.globl gUnknown_85C7A34
gUnknown_85C7A34: @ 0x085C7A34
	.incbin "baserom.gba", 0x5c7a34, 0x40
	.globl gUnknown_85C7A74
gUnknown_85C7A74: @ 0x085C7A74
	.incbin "baserom.gba", 0x5c7a74, 0x73c
	.globl gUnknown_85C81B0
gUnknown_85C81B0: @ 0x085C81B0
	.incbin "baserom.gba", 0x5c81b0, 0x9f8
	.globl gUnknown_85C8BA8
gUnknown_85C8BA8: @ 0x085C8BA8

	@ src/strings.c:967 gJPText_Player
	.globl gText_Rom_5C8BA8
gText_Rom_5C8BA8: @ 0x085C8BA8
	.string "プレイヤー$"
	.if (. - gText_Rom_5C8BA8) > 0x6
	.error "gText_Rom_5C8BA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8BA8) < 0x6
	.space 0x6 - (. - gText_Rom_5C8BA8)
	.endif
	.globl gUnknown_85C8BAE
gUnknown_85C8BAE: @ 0x085C8BAE
	.incbin "baserom.gba", 0x5c8bae, 0x3
	.globl gUnknown_85C8BB1
gUnknown_85C8BB1: @ 0x085C8BB1

