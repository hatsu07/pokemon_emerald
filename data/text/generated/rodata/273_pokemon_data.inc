	@ asm/pokemon_jump.s:7967 sub_0802E17C (+1 aliases)
	.globl gText_Rom_5CCE0F
gText_Rom_5CCE0F: @ 0x085CCE0F
	.string "さいこう　ジャンプかいすう$"
	.if (. - gText_Rom_5CCE0F) > 0xe
	.error "gText_Rom_5CCE0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCE0F) < 0xe
	.space 0xe - (. - gText_Rom_5CCE0F)
	.endif

	@ asm/pokemon_jump.s:7967 sub_0802E17C (+2 aliases)
	.globl gText_Rom_5CCE1D
gText_Rom_5CCE1D: @ 0x085CCE1D
	.string "さいこう　とくてん$"
	.if (. - gText_Rom_5CCE1D) > 0xa
	.error "gText_Rom_5CCE1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCE1D) < 0xa
	.space 0xa - (. - gText_Rom_5CCE1D)
	.endif

	@ asm/pokemon_jump.s:7967 sub_0802E17C (+1 aliases)
	.globl gText_Rom_5CCE27
gText_Rom_5CCE27: @ 0x085CCE27
	.string "れんぞく　EXCELLENT$"
	.if (. - gText_Rom_5CCE27) > 0xf
	.error "gText_Rom_5CCE27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCE27) < 0xf
	.space 0xf - (. - gText_Rom_5CCE27)
	.endif
	.globl gUnknown_85CCE36
gUnknown_85CCE36: @ 0x085CCE36

	@ src/strings.c:847 gText_AwesomeWonF701F700
	.globl gText_Rom_5CCE36
gText_Rom_5CCE36: @ 0x085CCE36
	.string "せいせきが よかったので\n{DYNAMIC 0}を {DYNAMIC 1}こ プレゼント!$"
	.if (. - gText_Rom_5CCE36) > 0x1c
	.error "gText_Rom_5CCE36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCE36) < 0x1c
	.space 0x1c - (. - gText_Rom_5CCE36)
	.endif
	.globl gUnknown_85CCE52
gUnknown_85CCE52: @ 0x085CCE52
	.incbin "baserom.gba", 0x5cce52, 0x13
	.globl gUnknown_85CCE65
gUnknown_85CCE65: @ 0x085CCE65
	.incbin "baserom.gba", 0x5cce65, 0xc
	.globl gUnknown_85CCE71
gUnknown_85CCE71: @ 0x085CCE71

	@ src/strings.c:837 gText_WantToPlayAgain (+1 aliases)
	.globl gText_Rom_5CCE71
gText_Rom_5CCE71: @ 0x085CCE71
	.string "もういちど あそびますか？$"
	.if (. - gText_Rom_5CCE71) > 0xe
	.error "gText_Rom_5CCE71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCE71) < 0xe
	.space 0xe - (. - gText_Rom_5CCE71)
	.endif
	.globl gUnknown_85CCE7F
gUnknown_85CCE7F: @ 0x085CCE7F

	@ src/strings.c:851 gText_SomeoneDroppedOut2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCE7F
gText_Rom_5CCE7F: @ 0x085CCE7F
	.string "だれかがぬけました\nつうしんを しゅうりょうします$"
	.if (. - gText_Rom_5CCE7F) != 0x1a
	.error "gText_Rom_5CCE7F must retain its original byte length"
	.endif
	.globl gText_Rom_5CCE95
	.set gText_Rom_5CCE95, gText_Rom_5CCE7F + 0x16
	.globl gUnknown_85CCE99
gUnknown_85CCE99: @ 0x085CCE99

	@ src/strings.c:852 gText_CommunicationStandby4
	.globl gText_Rom_5CCE99
gText_Rom_5CCE99: @ 0x085CCE99
	.string "つうしん たいきちゅう$"
	.if (. - gText_Rom_5CCE99) > 0xc
	.error "gText_Rom_5CCE99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCE99) < 0xc
	.space 0xc - (. - gText_Rom_5CCE99)
	.endif
	.globl gUnknown_85CCEA5
gUnknown_85CCEA5: @ 0x085CCEA5

	@ src/strings.c:853 gText_LinkContestResults
	.globl gText_Rom_5CCEA5
gText_Rom_5CCEA5: @ 0x085CCEA5
	.string "{PLAYER}の つうしん コンテスト せいせき$"
	.if (. - gText_Rom_5CCEA5) > 0x14
	.error "gText_Rom_5CCEA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEA5) < 0x14
	.space 0x14 - (. - gText_Rom_5CCEA5)
	.endif
	.globl gUnknown_85CCEB9
gUnknown_85CCEB9: @ 0x085CCEB9

	@ asm/frontier_util.s:2944 PrintHallRecords
	.globl gText_Rom_5CCEB9
gText_Rom_5CCEB9: @ 0x085CCEB9
	.string "1い$"
	.if (. - gText_Rom_5CCEB9) > 0x3
	.error "gText_Rom_5CCEB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEB9) < 0x3
	.space 0x3 - (. - gText_Rom_5CCEB9)
	.endif
	.globl gUnknown_85CCEBC
gUnknown_85CCEBC: @ 0x085CCEBC

	@ src/strings.c:855 gText_2nd
	.globl gText_Rom_5CCEBC
gText_Rom_5CCEBC: @ 0x085CCEBC
	.string "2い$"
	.if (. - gText_Rom_5CCEBC) > 0x3
	.error "gText_Rom_5CCEBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEBC) < 0x3
	.space 0x3 - (. - gText_Rom_5CCEBC)
	.endif
	.globl gUnknown_85CCEBF
gUnknown_85CCEBF: @ 0x085CCEBF

	@ src/strings.c:856 gText_3rd
	.globl gText_Rom_5CCEBF
gText_Rom_5CCEBF: @ 0x085CCEBF
	.string "3い$"
	.if (. - gText_Rom_5CCEBF) > 0x3
	.error "gText_Rom_5CCEBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEBF) < 0x3
	.space 0x3 - (. - gText_Rom_5CCEBF)
	.endif
	.globl gUnknown_85CCEC2
gUnknown_85CCEC2: @ 0x085CCEC2

	@ src/strings.c:857 gText_4th
	.globl gText_Rom_5CCEC2
gText_Rom_5CCEC2: @ 0x085CCEC2
	.string "4い$"
	.if (. - gText_Rom_5CCEC2) > 0x3
	.error "gText_Rom_5CCEC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEC2) < 0x3
	.space 0x3 - (. - gText_Rom_5CCEC2)
	.endif
	.globl gUnknown_85CCEC5
gUnknown_85CCEC5: @ 0x085CCEC5

	@ asm/mauville_old_man.s:1144 StorytellerDisplayStory
	.globl gText_Rom_5CCEC5
gText_Rom_5CCEC5: @ 0x085CCEC5
	.string "someone$"
	.if (. - gText_Rom_5CCEC5) > 0x8
	.error "gText_Rom_5CCEC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEC5) < 0x8
	.space 0x8 - (. - gText_Rom_5CCEC5)
	.endif
	.globl gUnknown_85CCECD
gUnknown_85CCECD: @ 0x085CCECD

	@ asm/record_mixing.s:3855 SanitizeEmeraldBattleTowerRecord
	.globl gText_Rom_5CCECD
gText_Rom_5CCECD: @ 0x085CCECD
	.string "pokemon$"
	.if (. - gText_Rom_5CCECD) > 0x8
	.error "gText_Rom_5CCECD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCECD) < 0x8
	.space 0x8 - (. - gText_Rom_5CCECD)
	.endif
	.globl gUnknown_85CCED5
gUnknown_85CCED5: @ 0x085CCED5

	@ src/strings.c:860 gJPText_MysteryGift
	.globl gText_Rom_5CCED5
gText_Rom_5CCED5: @ 0x085CCED5
	.string "ふしぎなもらいもの$"
	.if (. - gText_Rom_5CCED5) > 0xa
	.error "gText_Rom_5CCED5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCED5) < 0xa
	.space 0xa - (. - gText_Rom_5CCED5)
	.endif
	.globl gUnknown_85CCEDF
gUnknown_85CCEDF: @ 0x085CCEDF

	@ src/strings.c:861 gJPText_DecideStop
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCEDF
gText_Rom_5CCEDF: @ 0x085CCEDF
	.string "{A_BUTTON}けってい {B_BUTTON}やめる$"
	.if (. - gText_Rom_5CCEDF) != 0xd
	.error "gText_Rom_5CCEDF must retain its original byte length"
	.endif
	.globl gText_Rom_5CCEE6
	.set gText_Rom_5CCEE6, gText_Rom_5CCEDF + 0x7
	.globl gText_Rom_5CCEE8
	.set gText_Rom_5CCEE8, gText_Rom_5CCEDF + 0x9
	.globl gUnknown_85CCEEC
gUnknown_85CCEEC: @ 0x085CCEEC

	@ src/strings.c:862 gJPText_ReceiveMysteryGiftWithEReader
	.globl gText_Rom_5CCEEC
gText_Rom_5CCEEC: @ 0x085CCEEC
	.string "カードeリーダー{PLUS} で\nふしぎなもらいものを よみこみます$"
	.if (. - gText_Rom_5CCEEC) > 0x1f
	.error "gText_Rom_5CCEEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEEC) < 0x1f
	.space 0x1f - (. - gText_Rom_5CCEEC)
	.endif
	.globl gUnknown_85CCF0B
gUnknown_85CCF0B: @ 0x085CCF0B
	.incbin "baserom.gba", 0x5ccf0b, 0x1f
	.globl gUnknown_85CCF2A
gUnknown_85CCF2A: @ 0x085CCF2A

	@ asm/ereader_screen.s:535 sub_081D4704
	.globl gText_Rom_5CCF2A
gText_Rom_5CCF2A: @ 0x085CCF2A
	.string "「ゲームボーイアドバンスとつうしん」\nを　せんたく　してください$"
	.if (. - gText_Rom_5CCF2A) > 0x21
	.error "gText_Rom_5CCF2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCF2A) < 0x21
	.space 0x21 - (. - gText_Rom_5CCF2A)
	.endif
	.incbin "baserom.gba", 0x5ccf4b, 0x27
	.globl gUnknown_85CCF72
gUnknown_85CCF72: @ 0x085CCF72

	@ src/strings.c:866 gJPText_LinkIsIncorrect
	.globl gText_Rom_5CCF72
gText_Rom_5CCF72: @ 0x085CCF72
	.string "せつぞくが まちがっています$"
	.if (. - gText_Rom_5CCF72) > 0xf
	.error "gText_Rom_5CCF72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCF72) < 0xf
	.space 0xf - (. - gText_Rom_5CCF72)
	.endif
	.globl gUnknown_85CCF81
gUnknown_85CCF81: @ 0x085CCF81

	@ src/strings.c:867 gJPText_CardReadingHasBeenHalted
	.globl gText_Rom_5CCF81
gText_Rom_5CCF81: @ 0x085CCF81
	.string "カードの よみこみを\nちゅうし しました$"
	.if (. - gText_Rom_5CCF81) > 0x15
	.error "gText_Rom_5CCF81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCF81) < 0x15
	.space 0x15 - (. - gText_Rom_5CCF81)
	.endif

	@ src/strings.c:868 gJPText_UnableConnectWithEReader
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCF96
gText_Rom_5CCF96: @ 0x085CCF96
	.string "カードeリーダー{PLUS}と\nつうしん できません$"
	.if (. - gText_Rom_5CCF96) != 0x17
	.error "gText_Rom_5CCF96 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCFA9
	.set gText_Rom_5CCFA9, gText_Rom_5CCF96 + 0x13
	.globl gUnknown_85CCFAD
gUnknown_85CCFAD: @ 0x085CCFAD

	@ src/strings.c:869 gJPText_Connecting
	.globl gText_Rom_5CCFAD
gText_Rom_5CCFAD: @ 0x085CCFAD
	.string "つうしん ちゅう です$"
	.if (. - gText_Rom_5CCFAD) > 0xc
	.error "gText_Rom_5CCFAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCFAD) < 0xc
	.space 0xc - (. - gText_Rom_5CCFAD)
	.endif
	.globl gUnknown_85CCFB9
gUnknown_85CCFB9: @ 0x085CCFB9

	@ src/strings.c:870 gJPText_ConnectionErrorCheckLink
	.globl gText_Rom_5CCFB9
gText_Rom_5CCFB9: @ 0x085CCFB9
	.string "つうしん エラーです\nせつぞくを たしかめて ください$"
	.if (. - gText_Rom_5CCFB9) > 0x1c
	.error "gText_Rom_5CCFB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCFB9) < 0x1c
	.space 0x1c - (. - gText_Rom_5CCFB9)
	.endif
	.globl gUnknown_85CCFD5
gUnknown_85CCFD5: @ 0x085CCFD5

	@ src/strings.c:871 gJPText_ConnectionErrorTryAgain
	.globl gText_Rom_5CCFD5
gText_Rom_5CCFD5: @ 0x085CCFD5
	.string "つうしん エラーです\nはじめから やりなおして ください$"
	.if (. - gText_Rom_5CCFD5) > 0x1d
	.error "gText_Rom_5CCFD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCFD5) < 0x1d
	.space 0x1d - (. - gText_Rom_5CCFD5)
	.endif
	.globl gUnknown_85CCFF2
gUnknown_85CCFF2: @ 0x085CCFF2

	@ src/strings.c:872 gJPText_AllowEReaderToLoadCard
	.globl gText_Rom_5CCFF2
gText_Rom_5CCFF2: @ 0x085CCFF2
	.string "カードeリーダー{PLUS} に\nカードを よみこませて ください$"
	.if (. - gText_Rom_5CCFF2) > 0x1e
	.error "gText_Rom_5CCFF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCFF2) < 0x1e
	.space 0x1e - (. - gText_Rom_5CCFF2)
	.endif
	.globl gUnknown_85CD010
gUnknown_85CD010: @ 0x085CD010

	@ asm/ereader_screen.s:807 sub_081D4704
	.globl gText_Rom_5CD010
gText_Rom_5CD010: @ 0x085CD010
	.string "つうしん　しゅうりょう！$"
	.if (. - gText_Rom_5CD010) > 0xd
	.error "gText_Rom_5CD010 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD010) < 0xd
	.space 0xd - (. - gText_Rom_5CD010)
	.endif
	.globl gUnknown_85CD01D
gUnknown_85CD01D: @ 0x085CD01D

	@ src/strings.c:874 gJPText_NewTrainerHasComeToHoenn
	.globl gText_Rom_5CD01D
gText_Rom_5CD01D: @ 0x085CD01D
	.string "あらたな トレーナーが\nホウエンに やってきた!$"
	.if (. - gText_Rom_5CD01D) > 0x19
	.error "gText_Rom_5CD01D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD01D) < 0x19
	.space 0x19 - (. - gText_Rom_5CD01D)
	.endif
	.globl gUnknown_85CD036
gUnknown_85CD036: @ 0x085CD036

	@ src/strings.c:875 gJPText_PleaseWaitAMoment
	.globl gText_Rom_5CD036
gText_Rom_5CD036: @ 0x085CD036
	.string "しばらく おまちください$"
	.if (. - gText_Rom_5CD036) > 0xd
	.error "gText_Rom_5CD036 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD036) < 0xd
	.space 0xd - (. - gText_Rom_5CD036)
	.endif
	.globl gUnknown_85CD043
gUnknown_85CD043: @ 0x085CD043

	@ src/strings.c:876 gJPText_WriteErrorUnableToSaveData
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CD043
gText_Rom_5CD043: @ 0x085CD043
	.string "かきこみ エラー です\nデータが ほぞん できませんでした$"
	.if (. - gText_Rom_5CD043) != 0x1e
	.error "gText_Rom_5CD043 must retain its original byte length"
	.endif
	.globl gText_Rom_5CD05D
	.set gText_Rom_5CD05D, gText_Rom_5CD043 + 0x1a
	.incbin "baserom.gba", 0x5cd061, 0x7
	.globl gUnknown_85CD068
gUnknown_85CD068: @ 0x085CD068
	.incbin "baserom.gba", 0x5cd068, 0x10
	.globl gUnknown_85CD078
gUnknown_85CD078: @ 0x085CD078
	.incbin "baserom.gba", 0x5cd078, 0x20
	.globl gUnknown_85CD098
gUnknown_85CD098: @ 0x085CD098
	.incbin "baserom.gba", 0x5cd098, 0x8
	.globl gUnknown_85CD0A0
gUnknown_85CD0A0: @ 0x085CD0A0
	.incbin "baserom.gba", 0x5cd0a0, 0x28
	.globl gUnknown_85CD0C8
gUnknown_85CD0C8: @ 0x085CD0C8
	.incbin "baserom.gba", 0x5cd0c8, 0x14
	.globl gUnknown_85CD0DC
gUnknown_85CD0DC: @ 0x085CD0DC
	.incbin "baserom.gba", 0x5cd0dc, 0x1e

