	@ src/data/script_menu.h:507 gText_BerryCrush3 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA70
gText_Rom_5CCA70: @ 0x085CCA70
	.string "きのみクラッシュ$"
	.if (. - gText_Rom_5CCA70) != 0x9
	.error "gText_Rom_5CCA70 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCA73
	.set gText_Rom_5CCA73, gText_Rom_5CCA70 + 0x3

	@ src/strings.c:785 gText_PressingSpeedRankings
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5CCA79
gText_Rom_5CCA79: @ 0x085CCA79
	.string "   おすはやさ ランキング!$"
	.if (. - gText_Rom_5CCA79) != 0x10
	.error "gText_Rom_5CCA79 must retain its original byte length"
	.endif
	.globl gUnknown_85CCA7C
	.set gUnknown_85CCA7C, gText_Rom_5CCA79 + 0x3

	@ src/strings.c:786 gText_Var1Players
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5CCA89
gText_Rom_5CCA89: @ 0x085CCA89
	.string "   {STR_VAR_1}にんよう$"
	.if (. - gText_Rom_5CCA89) != 0xa
	.error "gText_Rom_5CCA89 must retain its original byte length"
	.endif
	.globl gUnknown_85CCA8C
	.set gUnknown_85CCA8C, gText_Rom_5CCA89 + 0x3
	.globl gUnknown_85CCA93
gUnknown_85CCA93: @ 0x085CCA93

	@ src/strings.c:787 gText_SymbolsEarned
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA93
gText_Rom_5CCA93: @ 0x085CCA93
	.string "てにいれた シンボル$"
	.if (. - gText_Rom_5CCA93) != 0xb
	.error "gText_Rom_5CCA93 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCA99
	.set gText_Rom_5CCA99, gText_Rom_5CCA93 + 0x6
	.globl gUnknown_85CCA9E
gUnknown_85CCA9E: @ 0x085CCA9E

	@ src/strings.c:788 gText_BattleRecord
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA9E
gText_Rom_5CCA9E: @ 0x085CCA9E
	.string "たいせんの きろく$"
	.if (. - gText_Rom_5CCA9E) != 0xa
	.error "gText_Rom_5CCA9E must retain its original byte length"
	.endif
	.globl gText_Rom_5CCAA4
	.set gText_Rom_5CCAA4, gText_Rom_5CCA9E + 0x6
	.globl gUnknown_85CCAA8
gUnknown_85CCAA8: @ 0x085CCAA8

	@ src/data/script_menu.h:654 script_menu_line_654 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCAA8
gText_Rom_5CCAA8: @ 0x085CCAA8
	.string "バトルポイント$"
	.if (. - gText_Rom_5CCAA8) != 0x8
	.error "gText_Rom_5CCAA8 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCAAB
	.set gText_Rom_5CCAAB, gText_Rom_5CCAA8 + 0x3

	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl gText_Rom_5CCAB0
gText_Rom_5CCAB0: @ 0x085CCAB0
	.string "とじる$"
	.if (. - gText_Rom_5CCAB0) > 0x4
	.error "gText_Rom_5CCAB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCAB0) < 0x4
	.space 0x4 - (. - gText_Rom_5CCAB0)
	.endif
	.incbin "baserom.gba", 0x5ccab4, 0x1

	@ src/strings.c:792 gText_CheckFrontierMap
	.globl gText_Rom_5CCAB5
gText_Rom_5CCAB5: @ 0x085CCAB5
	.string "バトルフロンティアの マップを みます$"
	.if (. - gText_Rom_5CCAB5) > 0x14
	.error "gText_Rom_5CCAB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCAB5) < 0x14
	.space 0x14 - (. - gText_Rom_5CCAB5)
	.endif

	@ src/strings.c:793 gText_CheckTrainerCard
	.globl gText_Rom_5CCAC9
gText_Rom_5CCAC9: @ 0x085CCAC9
	.string "トレーナーカードを みます$"
	.if (. - gText_Rom_5CCAC9) > 0xe
	.error "gText_Rom_5CCAC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCAC9) < 0xe
	.space 0xe - (. - gText_Rom_5CCAC9)
	.endif

	@ src/strings.c:794 gText_ViewRecordedBattle
	.globl gText_Rom_5CCAD7
gText_Rom_5CCAD7: @ 0x085CCAD7
	.string "きろくした たいせんを みます$"
	.if (. - gText_Rom_5CCAD7) > 0x10
	.error "gText_Rom_5CCAD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCAD7) < 0x10
	.space 0x10 - (. - gText_Rom_5CCAD7)
	.endif

	@ src/strings.c:795 gText_PutAwayFrontierPass
	.globl gText_Rom_5CCAE7
gText_Rom_5CCAE7: @ 0x085CCAE7
	.string "フロンティアパスを とじます$"
	.if (. - gText_Rom_5CCAE7) > 0xf
	.error "gText_Rom_5CCAE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCAE7) < 0xf
	.space 0xf - (. - gText_Rom_5CCAE7)
	.endif

	@ src/strings.c:796 gText_CurrentBattlePoints
	.globl gText_Rom_5CCAF6
gText_Rom_5CCAF6: @ 0x085CCAF6
	.string "いま たまっている バトルポイントです$"
	.if (. - gText_Rom_5CCAF6) > 0x14
	.error "gText_Rom_5CCAF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCAF6) < 0x14
	.space 0x14 - (. - gText_Rom_5CCAF6)
	.endif

	@ src/strings.c:797 gText_CollectedSymbols
	.globl gText_Rom_5CCB0A
gText_Rom_5CCB0A: @ 0x085CCB0A
	.string "ここに シンボルを あつめます$"
	.if (. - gText_Rom_5CCB0A) > 0x10
	.error "gText_Rom_5CCB0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCB0A) < 0x10
	.space 0x10 - (. - gText_Rom_5CCB0A)
	.endif

	@ src/strings.c:798 gText_BattleTowerAbilitySymbol
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCB1A
gText_Rom_5CCB1A: @ 0x085CCB1A
	.string "バトルタワー アビリティシンボル$"
	.if (. - gText_Rom_5CCB1A) != 0x11
	.error "gText_Rom_5CCB1A must retain its original byte length"
	.endif
	.globl gText_Rom_5CCB26
	.set gText_Rom_5CCB26, gText_Rom_5CCB1A + 0xc

	@ src/strings.c:799 gText_BattleDomeTacticsSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCB2B
gText_Rom_5CCB2B: @ 0x085CCB2B
	.string "バトルドーム タクティクスシンボル$"
	.if (. - gText_Rom_5CCB2B) != 0x12
	.error "gText_Rom_5CCB2B must retain its original byte length"
	.endif
	.globl gText_Rom_5CCB38
	.set gText_Rom_5CCB38, gText_Rom_5CCB2B + 0xd

	@ src/strings.c:800 gText_BattlePalaceSpiritsSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCB3D
gText_Rom_5CCB3D: @ 0x085CCB3D
	.string "バトルパレス スピリットシンボル$"
	.if (. - gText_Rom_5CCB3D) != 0x11
	.error "gText_Rom_5CCB3D must retain its original byte length"
	.endif
	.globl gText_Rom_5CCB49
	.set gText_Rom_5CCB49, gText_Rom_5CCB3D + 0xc

	@ src/strings.c:801 gText_BattleArenaGutsSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCB4E
gText_Rom_5CCB4E: @ 0x085CCB4E
	.string "バトルアリーナ ガッツシンボル$"
	.if (. - gText_Rom_5CCB4E) != 0x10
	.error "gText_Rom_5CCB4E must retain its original byte length"
	.endif
	.globl gText_Rom_5CCB59
	.set gText_Rom_5CCB59, gText_Rom_5CCB4E + 0xb

	@ src/strings.c:802 gText_BattleFactoryKnowledgeSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCB5E
gText_Rom_5CCB5E: @ 0x085CCB5E
	.string "バトルファクトリー ノウレッジシンボル$"
	.if (. - gText_Rom_5CCB5E) != 0x14
	.error "gText_Rom_5CCB5E must retain its original byte length"
	.endif
	.globl gText_Rom_5CCB6D
	.set gText_Rom_5CCB6D, gText_Rom_5CCB5E + 0xf

	@ src/strings.c:803 gText_BattlePikeLuckSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCB72
gText_Rom_5CCB72: @ 0x085CCB72
	.string "バトルチューブ ラックシンボル$"
	.if (. - gText_Rom_5CCB72) != 0x10
	.error "gText_Rom_5CCB72 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCB7D
	.set gText_Rom_5CCB7D, gText_Rom_5CCB72 + 0xb

	@ src/strings.c:804 gText_BattlePyramidBraveSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCB82
gText_Rom_5CCB82: @ 0x085CCB82
	.string "バトルピラミッド ブレイブシンボル$"
	.if (. - gText_Rom_5CCB82) != 0x12
	.error "gText_Rom_5CCB82 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCB8F
	.set gText_Rom_5CCB8F, gText_Rom_5CCB82 + 0xd

	@ src/strings.c:805 gText_ThereIsNoBattleRecord
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCB94
gText_Rom_5CCB94: @ 0x085CCB94
	.string "げんざい たいせんきろくは ありません$"
	.if (. - gText_Rom_5CCB94) != 0x14
	.error "gText_Rom_5CCB94 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCBA4
	.set gText_Rom_5CCBA4, gText_Rom_5CCB94 + 0x10

	@ src/data/easy_chat/easy_chat_group_events.h:13 gEasyChatWord_BattleTower (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCBA8
gText_Rom_5CCBA8: @ 0x085CCBA8
	.string "バトルタワー$"
	.if (. - gText_Rom_5CCBA8) != 0x7
	.error "gText_Rom_5CCBA8 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCBAB
	.set gText_Rom_5CCBAB, gText_Rom_5CCBA8 + 0x3

	@ src/strings.c:695 gText_BattleDome (+1 aliases)
	.globl gText_Rom_5CCBAF
gText_Rom_5CCBAF: @ 0x085CCBAF
	.string "バトルドーム$"
	.if (. - gText_Rom_5CCBAF) > 0x7
	.error "gText_Rom_5CCBAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBAF) < 0x7
	.space 0x7 - (. - gText_Rom_5CCBAF)
	.endif

	@ src/strings.c:696 gText_BattlePalace (+1 aliases)
	.globl gText_Rom_5CCBB6
gText_Rom_5CCBB6: @ 0x085CCBB6
	.string "バトルパレス$"
	.if (. - gText_Rom_5CCBB6) > 0x7
	.error "gText_Rom_5CCBB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBB6) < 0x7
	.space 0x7 - (. - gText_Rom_5CCBB6)
	.endif

	@ src/strings.c:698 gText_BattleArena (+1 aliases)
	.globl gText_Rom_5CCBBD
gText_Rom_5CCBBD: @ 0x085CCBBD
	.string "バトルアリーナ$"
	.if (. - gText_Rom_5CCBBD) > 0x8
	.error "gText_Rom_5CCBBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBBD) < 0x8
	.space 0x8 - (. - gText_Rom_5CCBBD)
	.endif

	@ src/strings.c:697 gText_BattleFactory (+1 aliases)
	.globl gText_Rom_5CCBC5
gText_Rom_5CCBC5: @ 0x085CCBC5
	.string "バトルファクトリー$"
	.if (. - gText_Rom_5CCBC5) > 0xa
	.error "gText_Rom_5CCBC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBC5) < 0xa
	.space 0xa - (. - gText_Rom_5CCBC5)
	.endif

	@ src/strings.c:699 gText_BattlePike (+1 aliases)
	.globl gText_Rom_5CCBCF
gText_Rom_5CCBCF: @ 0x085CCBCF
	.string "バトルチューブ$"
	.if (. - gText_Rom_5CCBCF) > 0x8
	.error "gText_Rom_5CCBCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBCF) < 0x8
	.space 0x8 - (. - gText_Rom_5CCBCF)
	.endif

	@ src/strings.c:700 gText_BattlePyramid (+1 aliases)
	.globl gText_Rom_5CCBD7
gText_Rom_5CCBD7: @ 0x085CCBD7
	.string "バトルピラミッド$"
	.if (. - gText_Rom_5CCBD7) > 0x9
	.error "gText_Rom_5CCBD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBD7) < 0x9
	.space 0x9 - (. - gText_Rom_5CCBD7)
	.endif

	@ src/strings.c:813 gText_BattleTowerDesc
	.globl gText_Rom_5CCBE0
gText_Rom_5CCBE0: @ 0x085CCBE0
	.string "かちぬき ひたすら うえを めざす。\nさいのうを ためされる。$"
	.if (. - gText_Rom_5CCBE0) > 0x20
	.error "gText_Rom_5CCBE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBE0) < 0x20
	.space 0x20 - (. - gText_Rom_5CCBE0)
	.endif

	@ src/strings.c:814 gText_BattleDomeDesc
	.globl gText_Rom_5CCC00
gText_Rom_5CCC00: @ 0x085CCC00
	.string "トーナメントを かちぬく。\nせんじゅつを ためされる。$"
	.if (. - gText_Rom_5CCC00) > 0x1c
	.error "gText_Rom_5CCC00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC00) < 0x1c
	.space 0x1c - (. - gText_Rom_5CCC00)
	.endif

	@ src/strings.c:815 gText_BattlePalaceDesc
	.globl gText_Rom_5CCC1C
gText_Rom_5CCC1C: @ 0x085CCC1C
	.string "しょうぶを みまもる。\nポケモンとの きずなを ためされる。$"
	.if (. - gText_Rom_5CCC1C) > 0x1f
	.error "gText_Rom_5CCC1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC1C) < 0x1f
	.space 0x1f - (. - gText_Rom_5CCC1C)
	.endif

	@ src/strings.c:816 gText_BattleArenaDesc
	.globl gText_Rom_5CCC3B
gText_Rom_5CCC3B: @ 0x085CCC3B
	.string "つよい ポケモンの チームで しょうりする。\nとうしを ためされる。$"
	.if (. - gText_Rom_5CCC3B) > 0x23
	.error "gText_Rom_5CCC3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC3B) < 0x23
	.space 0x23 - (. - gText_Rom_5CCC3B)
	.endif

	@ src/strings.c:817 gText_BattleFactoryDesc
	.globl gText_Rom_5CCC5E
gText_Rom_5CCC5E: @ 0x085CCC5E
	.string "レンタルポケモンで しょうりする。\nちしきを ためされる。$"
	.if (. - gText_Rom_5CCC5E) > 0x1e
	.error "gText_Rom_5CCC5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC5E) < 0x1e
	.space 0x1e - (. - gText_Rom_5CCC5E)
	.endif

	@ src/strings.c:818 gText_BattlePikeDesc
	.globl gText_Rom_5CCC7C
gText_Rom_5CCC7C: @ 0x085CCC7C
	.string "3つの みちから 1つえらび かちすすむ。\nうんを ためされる。$"
	.if (. - gText_Rom_5CCC7C) > 0x21
	.error "gText_Rom_5CCC7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC7C) < 0x21
	.space 0x21 - (. - gText_Rom_5CCC7C)
	.endif

	@ src/strings.c:819 gText_BattlePyramidDesc
	.globl gText_Rom_5CCC9D
gText_Rom_5CCC9D: @ 0x085CCC9D
	.string "ちょうじょうを めざし ぼうけんする。\nゆうきを ためされる。$"
	.if (. - gText_Rom_5CCC9D) > 0x20
	.error "gText_Rom_5CCC9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC9D) < 0x20
	.space 0x20 - (. - gText_Rom_5CCC9D)
	.endif
	.globl gUnknown_85CCCBD
gUnknown_85CCCBD: @ 0x085CCCBD

	@ asm/main_menu.s:4999 MainMenu_FormatSavegamePlayer
	.globl gText_Rom_5CCCBD
gText_Rom_5CCCBD: @ 0x085CCCBD
	.string "しゅじんこう　{0xFD}{0x02}$"
	.if (. - gText_Rom_5CCCBD) > 0xa
	.error "gText_Rom_5CCCBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCBD) < 0xa
	.space 0xa - (. - gText_Rom_5CCCBD)
	.endif
	.globl gUnknown_85CCCC7
gUnknown_85CCCC7: @ 0x085CCCC7

	@ asm/main_menu.s:5043 MainMenu_FormatSavegameTime
	.globl gText_Rom_5CCCC7
gText_Rom_5CCCC7: @ 0x085CCCC7
	.string "プレイじかん　{0xFD}{0x02}:{0xFD}{0x03}$"
	.if (. - gText_Rom_5CCCC7) > 0xd
	.error "gText_Rom_5CCCC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCC7) < 0xd
	.space 0xd - (. - gText_Rom_5CCCC7)
	.endif
	.globl gUnknown_85CCCD4
gUnknown_85CCCD4: @ 0x085CCCD4

	@ asm/main_menu.s:5099 MainMenu_FormatSavegamePokedex
	.globl gText_Rom_5CCCD4
gText_Rom_5CCCD4: @ 0x085CCCD4
	.string "ポケモンずかん　{0xFD}{0x02}ひき$"
	.if (. - gText_Rom_5CCCD4) > 0xd
	.error "gText_Rom_5CCCD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCD4) < 0xd
	.space 0xd - (. - gText_Rom_5CCCD4)
	.endif
	.globl gUnknown_85CCCE1
gUnknown_85CCCE1: @ 0x085CCCE1

	@ asm/main_menu.s:5152 MainMenu_FormatSavegameBadges
	.globl gText_Rom_5CCCE1
gText_Rom_5CCCE1: @ 0x085CCCE1
	.string "もっているバッジ　{0xFD}{0x02}こ$"
	.if (. - gText_Rom_5CCCE1) > 0xd
	.error "gText_Rom_5CCCE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCE1) < 0xd
	.space 0xd - (. - gText_Rom_5CCCE1)
	.endif
	.globl gUnknown_85CCCEE
gUnknown_85CCCEE: @ 0x085CCCEE

	@ src/strings.c:820 gText_Powder
	.globl gText_Rom_5CCCEE
gText_Rom_5CCCEE: @ 0x085CCCEE
	.string "きのみのこな$"
	.if (. - gText_Rom_5CCCEE) > 0x7
	.error "gText_Rom_5CCCEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCEE) < 0x7
	.space 0x7 - (. - gText_Rom_5CCCEE)
	.endif
	.globl gUnknown_85CCCF5
gUnknown_85CCCF5: @ 0x085CCCF5

	@ src/strings.c:821 gText_BerryPickingRecords
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCCF5
gText_Rom_5CCCF5: @ 0x085CCCF5
	.string "ドードリオのきのみどりの きろく$"
	.if (. - gText_Rom_5CCCF5) != 0x11
	.error "gText_Rom_5CCCF5 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCD02
	.set gText_Rom_5CCD02, gText_Rom_5CCCF5 + 0xd

	@ src/strings.c:822 gText_BerriesPicked
	.globl gText_Rom_5CCD06
gText_Rom_5CCD06: @ 0x085CCD06
	.string "きのみをとった かいすう$"
	.if (. - gText_Rom_5CCD06) > 0xd
	.error "gText_Rom_5CCD06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD06) < 0xd
	.space 0xd - (. - gText_Rom_5CCD06)
	.endif

	@ src/strings.c:823 gText_BestScore (+1 aliases)
	.globl gText_Rom_5CCD13
gText_Rom_5CCD13: @ 0x085CCD13
	.string "さいこう とくてん$"
	.if (. - gText_Rom_5CCD13) > 0xa
	.error "gText_Rom_5CCD13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD13) < 0xa
	.space 0xa - (. - gText_Rom_5CCD13)
	.endif

	@ src/strings.c:824 gText_BerriesInRowFivePlayers
	.globl gText_Rom_5CCD1D
gText_Rom_5CCD1D: @ 0x085CCD1D
	.string "5にんで きのみを\nつづけてとった かいすう$"
	.if (. - gText_Rom_5CCD1D) > 0x17
	.error "gText_Rom_5CCD1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD1D) < 0x17
	.space 0x17 - (. - gText_Rom_5CCD1D)
	.endif
	.globl gUnknown_85CCD34
gUnknown_85CCD34: @ 0x085CCD34

	@ src/strings.c:825 gText_BerryPickingResults
	.globl gText_Rom_5CCD34
gText_Rom_5CCD34: @ 0x085CCD34
	.string "きのみの けっか はっぴょう!!$"
	.if (. - gText_Rom_5CCD34) > 0x11
	.error "gText_Rom_5CCD34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD34) < 0x11
	.space 0x11 - (. - gText_Rom_5CCD34)
	.endif
	.globl gUnknown_85CCD45
gUnknown_85CCD45: @ 0x085CCD45

