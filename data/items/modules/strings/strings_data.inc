.if .L__inc_fragment_select_c243175f0c05 == 1
	@ src/strings.c:149 gText_IDNumber2
	.globl gText_IDNumber2
gText_IDNumber2: @ 0x085C941A
	.string "{ID}{NO}{EOS}"
	.if (. - gText_IDNumber2) > 0x5
	.error "gText_IDNumber2 may not grow beyond its original slot"
	.endif
	.if (. - gText_IDNumber2) < 0x5
	.space 0x5 - (. - gText_IDNumber2)
	.endif

	@ asm/contest_painting.s:432 PrintContestPaintingCaption
	.globl gText_Rom_5C941F
gText_Rom_5C941F: @ 0x085C941F
	.string "　{EOS}"
	.if (. - gText_Rom_5C941F) > 0x2
	.error "gText_Rom_5C941F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C941F) < 0x2
	.space 0x2 - (. - gText_Rom_5C941F)
	.endif

	@ asm/dodrio_berry_picking.s:11319 sub_08029D28
	.globl gText_Rom_5C9421
gText_Rom_5C9421: @ 0x085C9421
	.string "▶{EOS}"
	.if (. - gText_Rom_5C9421) > 0x2
	.error "gText_Rom_5C9421 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9421) < 0x2
	.space 0x2 - (. - gText_Rom_5C9421)
	.endif

	@ asm/decoration.s:326 PrintCurMainMenuDescription (+1 aliases)
	.globl gText_Rom_5C9423
gText_Rom_5C9423: @ 0x085C9423
	.string "まえに　もどります！{EOS}"
	.if (. - gText_Rom_5C9423) > 0xb
	.error "gText_Rom_5C9423 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9423) < 0xb
	.space 0xb - (. - gText_Rom_5C9423)
	.endif

	@ src/pokemon_storage_system.c:8117 pokemon_storage_system_line_8117 (+1 aliases)
	.globl gText_Rom_5C942E
gText_Rom_5C942E: @ 0x085C942E
	.string "なにを しますか?{EOS}"
	.if (. - gText_Rom_5C942E) > 0xa
	.error "gText_Rom_5C942E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C942E) < 0xa
	.space 0xa - (. - gText_Rom_5C942E)
	.endif
	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5C9438
gText_Rom_5C9438: @ 0x085C9438
	.string "あげる{EOS}"
	.if (. - gText_Rom_5C9438) > 0x4
	.error "gText_Rom_5C9438 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9438) < 0x4
	.space 0x4 - (. - gText_Rom_5C9438)
	.endif

	@ src/strings.c:155 gText_xVar1
	.globl gText_xVar1
gText_xVar1: @ 0x085C943C
	.string "×{STR_VAR_1}{EOS}"
	.if (. - gText_xVar1) > 0x4
	.error "gText_xVar1 may not grow beyond its original slot"
	.endif
	.if (. - gText_xVar1) < 0x4
	.space 0x4 - (. - gText_xVar1)
	.endif

	@ asm/item.s:165 CopyItemName
	.globl gText_Rom_5C9440
gText_Rom_5C9440: @ 0x085C9440
	.string "のみ{EOS}"
	.if (. - gText_Rom_5C9440) > 0x3
	.error "gText_Rom_5C9440 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9440) < 0x3
	.space 0x3 - (. - gText_Rom_5C9440)
	.endif

	@ src/strings.c:157 gText_Coins
	.globl gText_Coins
gText_Coins: @ 0x085C9443
	.string "{STR_VAR_1}まい{EOS}"
	.if (. - gText_Coins) > 0x5
	.error "gText_Coins may not grow beyond its original slot"
	.endif
	.if (. - gText_Coins) < 0x5
	.space 0x5 - (. - gText_Coins)
	.endif

	@ src/strings.c:158 gText_CloseBag
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_CloseBag
gText_CloseBag: @ 0x085C9448
	.string "バッグをとじる{EOS}"
	.if (. - gText_CloseBag) != 0x8
	.error "gText_CloseBag must retain its original byte length"
	.endif

	@ src/strings.c:159 gText_Var1IsSelected
	.globl gText_Var1IsSelected
gText_Var1IsSelected: @ 0x085C9450
	.string "{STR_VAR_1}を\nどうしますか?{EOS}"
	.if (. - gText_Var1IsSelected) > 0xc
	.error "gText_Var1IsSelected may not grow beyond its original slot"
	.endif
	.if (. - gText_Var1IsSelected) < 0xc
	.space 0xc - (. - gText_Var1IsSelected)
	.endif

	@ src/strings.c:160 gText_CantWriteMail
	.globl gText_CantWriteMail
gText_CantWriteMail: @ 0x085C945C
	.string "ここで メールを\nかくことは できません!{EOS}"
	.if (. - gText_CantWriteMail) > 0x16
	.error "gText_CantWriteMail may not grow beyond its original slot"
	.endif
	.if (. - gText_CantWriteMail) < 0x16
	.space 0x16 - (. - gText_CantWriteMail)
	.endif

	@ src/strings.c:161 gText_NoPokemon
	.globl gText_NoPokemon
gText_NoPokemon: @ 0x085C9472
	.string "ポケモンが いませんよ!{EOS}"
	.if (. - gText_NoPokemon) > 0xd
	.error "gText_NoPokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_NoPokemon) < 0xd
	.space 0xd - (. - gText_NoPokemon)
	.endif

	@ src/strings.c:162 gText_MoveVar1Where
	.globl gText_MoveVar1Where
gText_MoveVar1Where: @ 0x085C947F
	.string "{STR_VAR_1}を\nどこに いれますか?{EOS}"
	.if (. - gText_MoveVar1Where) > 0xf
	.error "gText_MoveVar1Where may not grow beyond its original slot"
	.endif
	.if (. - gText_MoveVar1Where) < 0xf
	.space 0xf - (. - gText_MoveVar1Where)
	.endif

	@ src/strings.c:163 gText_Var1CantBeHeld
	.globl gText_Var1CantBeHeld
gText_Var1CantBeHeld: @ 0x085C948E
	.string "{STR_VAR_1}を\nもたせることは できません!{EOS}"
	.if (. - gText_Var1CantBeHeld) > 0x13
	.error "gText_Var1CantBeHeld may not grow beyond its original slot"
	.endif
	.if (. - gText_Var1CantBeHeld) < 0x13
	.space 0x13 - (. - gText_Var1CantBeHeld)
	.endif
.elseif .L__inc_fragment_select_c243175f0c05 == 2

	@ src/player_pc.c:179 sText_TooImportantToToss
	.globl sText_TooImportantToToss
sText_TooImportantToToss: @ 0x085C9506
	.string "これは とても\nたいせつなモノ なので\nすてられません!{EOS}"
	.if (. - sText_TooImportantToToss) > 0x1d
	.error "sText_TooImportantToToss may not grow beyond its original slot"
	.endif
	.if (. - sText_TooImportantToToss) < 0x1d
	.space 0x1d - (. - sText_TooImportantToToss)
	.endif

	@ src/strings.c:164 gText_TossHowManyVar1s
	.globl gText_TossHowManyVar1s
gText_TossHowManyVar1s: @ 0x085C9523
	.string "{STR_VAR_1}を\nいくつ すてますか?{EOS}"
	.if (. - gText_TossHowManyVar1s) > 0xf
	.error "gText_TossHowManyVar1s may not grow beyond its original slot"
	.endif
	.if (. - gText_TossHowManyVar1s) < 0xf
	.space 0xf - (. - gText_TossHowManyVar1s)
	.endif

	@ src/strings.c:165 gText_ThrewAwayVar2Var1s
	.globl gText_ThrewAwayVar2Var1s
gText_ThrewAwayVar2Var1s: @ 0x085C9532
	.string "{STR_VAR_1}を\n{STR_VAR_2}コ すてました{EOS}"
	.if (. - gText_ThrewAwayVar2Var1s) > 0xe
	.error "gText_ThrewAwayVar2Var1s may not grow beyond its original slot"
	.endif
	.if (. - gText_ThrewAwayVar2Var1s) < 0xe
	.space 0xe - (. - gText_ThrewAwayVar2Var1s)
	.endif

	@ src/strings.c:166 gText_ConfirmTossItems
	.globl gText_ConfirmTossItems
gText_ConfirmTossItems: @ 0x085C9540
	.string "{STR_VAR_1}を\n{STR_VAR_2}コ すてても\nよろしいですか?{EOS}"
	.if (. - gText_ConfirmTossItems) > 0x16
	.error "gText_ConfirmTossItems may not grow beyond its original slot"
	.endif
	.if (. - gText_ConfirmTossItems) < 0x16
	.space 0x16 - (. - gText_ConfirmTossItems)
	.endif

	@ src/strings.c:167 gText_DadsAdvice
	.globl gText_DadsAdvice
gText_DadsAdvice: @ 0x085C9556
	.string "おとうさんの ことば……\n{PLAYER}! こういうものには\lつかいどきが あるんだ!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_DadsAdvice) > 0x29
	.error "gText_DadsAdvice may not grow beyond its original slot"
	.endif
	.if (. - gText_DadsAdvice) < 0x29
	.space 0x29 - (. - gText_DadsAdvice)
	.endif
.elseif .L__inc_fragment_select_c243175f0c05 == 3

	@ src/strings.c:168 gText_PlayerUsedVar2
	.globl gText_PlayerUsedVar2
gText_PlayerUsedVar2: @ 0x085C9644
	.string "{PLAYER}は\n{STR_VAR_2}を つかった!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PlayerUsedVar2) > 0x10
	.error "gText_PlayerUsedVar2 may not grow beyond its original slot"
	.endif
	.if (. - gText_PlayerUsedVar2) < 0x10
	.space 0x10 - (. - gText_PlayerUsedVar2)
	.endif

	@ src/strings.c:169 gText_RepelEffectsLingered
	.globl gText_RepelEffectsLingered
gText_RepelEffectsLingered: @ 0x085C9654
	.string "まだ まえに つかった スプレーの\nこうかが のこってます!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_RepelEffectsLingered) > 0x21
	.error "gText_RepelEffectsLingered may not grow beyond its original slot"
	.endif
	.if (. - gText_RepelEffectsLingered) < 0x21
	.space 0x21 - (. - gText_RepelEffectsLingered)
	.endif
.elseif .L__inc_fragment_select_c243175f0c05 == 4
	@ src/strings.c:203 gText_ReturnToVar1
	.globl gText_ReturnToVar1
gText_ReturnToVar1: @ 0x085C9738
	.string "{STR_VAR_1}へ\nもどります{EOS}"
	.if (. - gText_ReturnToVar1) > 0xa
	.error "gText_ReturnToVar1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ReturnToVar1) < 0xa
	.space 0xa - (. - gText_ReturnToVar1)
	.endif

	@ src/strings.c:207 strings_line_207
	.globl gText_Rom_5C9742
gText_Rom_5C9742: @ 0x085C9742
	.string " ど う ぐ  {EOS}"
	.if (. - gText_Rom_5C9742) > 0x9
	.error "gText_Rom_5C9742 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9742) < 0x9
	.space 0x9 - (. - gText_Rom_5C9742)
	.endif

	@ src/strings.c:208 strings_line_208
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C974B
gText_Rom_5C974B: @ 0x085C974B
	.string "モンスターボール{EOS}"
	.if (. - gText_Rom_5C974B) != 0x9
	.error "gText_Rom_5C974B must retain its original byte length"
	.endif

	@ src/strings.c:209 strings_line_209
	.globl gText_Rom_5C9754
gText_Rom_5C9754: @ 0x085C9754
	.string " わざマシン  {EOS}"
	.if (. - gText_Rom_5C9754) > 0x9
	.error "gText_Rom_5C9754 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9754) < 0x9
	.space 0x9 - (. - gText_Rom_5C9754)
	.endif

	@ src/strings.c:210 strings_line_210
	.globl gText_Rom_5C975D
gText_Rom_5C975D: @ 0x085C975D
	.string " き の み  {EOS}"
	.if (. - gText_Rom_5C975D) > 0x9
	.error "gText_Rom_5C975D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C975D) < 0x9
	.space 0x9 - (. - gText_Rom_5C975D)
	.endif

	@ src/strings.c:211 strings_line_211
	.globl gText_Rom_5C9766
gText_Rom_5C9766: @ 0x085C9766
	.string "たいせつなもの {EOS}"
	.if (. - gText_Rom_5C9766) > 0x9
	.error "gText_Rom_5C9766 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9766) < 0x9
	.space 0x9 - (. - gText_Rom_5C9766)
	.endif
.elseif .L__inc_fragment_select_c243175f0c05 == 5
	@ asm/berry_crush.s:4221 sub_08022A78 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC95C
gText_Rom_5CC95C: @ 0x085CC95C
	.string "つかう　きのみが　ありません\nゲームを　しゅうりょうします{EOS}"
	.if (. - gText_Rom_5CC95C) != 0x1e
	.error "gText_Rom_5CC95C must retain its original byte length"
	.endif
	@ src/strings.c:761 gText_MemberDroppedOut
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MemberDroppedOut
gText_MemberDroppedOut: @ 0x085CC97A
	.string "  ぬけた メンバーが いるので\nゲームを しゅうりょうします{EOS}"
	.if (. - gText_MemberDroppedOut) != 0x20
	.error "gText_MemberDroppedOut must retain its original byte length"
	.endif

	@ src/strings.c:762 gText_TimesUpNoGoodPowder
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_TimesUpNoGoodPowder
gText_TimesUpNoGoodPowder: @ 0x085CC99A
	.string "  じかんぎれ です\pよいこな が\nできあがり ませんでした\p{EOS}"
	.if (. - gText_TimesUpNoGoodPowder) != 0x20
	.error "gText_TimesUpNoGoodPowder must retain its original byte length"
	.endif

	@ src/strings.c:763 gText_CommunicationStandby2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_CommunicationStandby2
gText_CommunicationStandby2: @ 0x085CC9BA
	.string "  つうしんたいきちゅう{EOS}"
	.if (. - gText_CommunicationStandby2) != 0xd
	.error "gText_CommunicationStandby2 must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_c243175f0c05 == 6
	@ src/strings.c:766 gText_SpaceTimes2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_SpaceTimes2
gText_SpaceTimes2: @ 0x085CC9D9
	.string "   かい{EOS}"
	.if (. - gText_SpaceTimes2) != 0x6
	.error "gText_SpaceTimes2 must retain its original byte length"
	.endif
	@ ANALYSIS: RAW_RANGE offset=0x5CC9DF, size=0x7
	.byte 0x00, 0xFD, 0x02, 0xB8, 0xFD, 0x03, 0xFF

	@ src/strings.c:768 gText_Var1Berry
	.globl gText_Var1Berry
gText_Var1Berry: @ 0x085CC9E6
	.string "  {STR_VAR_1}のみ{EOS}"
	.if (. - gText_Var1Berry) > 0x7
	.error "gText_Var1Berry may not grow beyond its original slot"
	.endif
	.if (. - gText_Var1Berry) < 0x7
	.space 0x7 - (. - gText_Var1Berry)
	.endif

	@ src/strings.c:769 gText_TimeColon
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_TimeColon
gText_TimeColon: @ 0x085CC9ED
	.string "   じかん{EOS}"
	.if (. - gText_TimeColon) != 0x7
	.error "gText_TimeColon must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_c243175f0c05 == 7
	.space 0x1, 0x00

	@ asm/berry_crush.s:2305 sub_08021ABC
	.globl gText_Rom_5CCA0C
gText_Rom_5CCA0C: @ 0x085CCA0C
	.string "{0xFD}{0x02},{0xFD}{0x03}{EOS}"
	.if (. - gText_Rom_5CCA0C) > 0x6
	.error "gText_Rom_5CCA0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCA0C) < 0x6
	.space 0x6 - (. - gText_Rom_5CCA0C)
	.endif
	@ src/strings.c:775 gText_SpaceSec
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_SpaceSec
gText_SpaceSec: @ 0x085CCA12
	.string "  びょう{EOS}"
	.if (. - gText_SpaceSec) != 0x6
	.error "gText_SpaceSec must retain its original byte length"
	.endif

	@ asm/berry_crush.s:2452 sub_08021ABC
	.globl gText_Rom_5CCA18
gText_Rom_5CCA18: @ 0x085CCA18
	.string "{0xFD}{0x02},{0xFD}{0x03}{EOS}"
	.if (. - gText_Rom_5CCA18) > 0x6
	.error "gText_Rom_5CCA18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCA18) < 0x6
	.space 0x6 - (. - gText_Rom_5CCA18)
	.endif
	@ src/strings.c:777 gText_TimesPerSec
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_TimesPerSec
gText_TimesPerSec: @ 0x085CCA1E
	.string "  かい/びょう{EOS}"
	.if (. - gText_TimesPerSec) != 0x9
	.error "gText_TimesPerSec must retain its original byte length"
	.endif
	@ src/strings.c:778 gText_Var1Percent
	@ Preserve exact byte length: internal label.
	.globl gText_Var1Percent
gText_Var1Percent: @ 0x085CCA27
	.string " {STR_VAR_1}パーセント{EOS}"
	.if (. - gText_Var1Percent) != 0x9
	.error "gText_Var1Percent must retain its original byte length"
	.endif

	@ src/strings.c:779 gText_PressesRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PressesRankings
gText_PressesRankings: @ 0x085CCA30
	.string "おした かいすう ランキング{EOS}"
	.if (. - gText_PressesRankings) != 0xf
	.error "gText_PressesRankings must retain its original byte length"
	.endif

	@ src/strings.c:780 gText_CrushingResults
	@ Preserve exact byte length: internal label.
	.globl gText_CrushingResults
gText_CrushingResults: @ 0x085CCA3F
	.string " つぶした けっか{EOS}"
	.if (. - gText_CrushingResults) != 0xa
	.error "gText_CrushingResults must retain its original byte length"
	.endif

	@ src/strings.c:781 gText_NeatnessRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_NeatnessRankings
gText_NeatnessRankings: @ 0x085CCA49
	.string "   ていねいさ ランキング{EOS}"
	.if (. - gText_NeatnessRankings) != 0xf
	.error "gText_NeatnessRankings must retain its original byte length"
	.endif

	@ src/strings.c:782 gText_CoopRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_CoopRankings
gText_CoopRankings: @ 0x085CCA58
	.string "たすけあい ランキング{EOS}"
	.if (. - gText_CoopRankings) != 0xc
	.error "gText_CoopRankings must retain its original byte length"
	.endif

	@ src/strings.c:783 gText_PressingPowerRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PressingPowerRankings
gText_PressingPowerRankings: @ 0x085CCA64
	.string "おすつよさ ランキング{EOS}"
	.if (. - gText_PressingPowerRankings) != 0xc
	.error "gText_PressingPowerRankings must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_c243175f0c05 == 8

	@ asm/dodrio_berry_picking.s:10482 sub_080295A4
	.globl gText_Rom_5CCD45
gText_Rom_5CCD45: @ 0x085CCD45
	.string "10P　　30P　　50P　　{0xF9}{0xDD}50P{EOS}"
	.if (. - gText_Rom_5CCD45) > 0x15
	.error "gText_Rom_5CCD45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD45) < 0x15
	.space 0x15 - (. - gText_Rom_5CCD45)
	.endif

	@ src/strings.c:827 gText_AnnouncingRankings
	.globl gText_AnnouncingRankings
gText_AnnouncingRankings: @ 0x085CCD5A
	.string "じゅんいの はっぴょう!!{EOS}"
	.if (. - gText_AnnouncingRankings) > 0xe
	.error "gText_AnnouncingRankings may not grow beyond its original slot"
	.endif
	.if (. - gText_AnnouncingRankings) < 0xe
	.space 0xe - (. - gText_AnnouncingRankings)
	.endif

	@ src/strings.c:828 gText_AnnouncingPrizes
	.globl gText_AnnouncingPrizes
gText_AnnouncingPrizes: @ 0x085CCD68
	.string "しょうひんの はっぴょう!!{EOS}"
	.if (. - gText_AnnouncingPrizes) > 0xf
	.error "gText_AnnouncingPrizes may not grow beyond its original slot"
	.endif
	.if (. - gText_AnnouncingPrizes) < 0xf
	.space 0xf - (. - gText_AnnouncingPrizes)
	.endif
.elseif .L__inc_fragment_select_c243175f0c05 == 9

	@ src/strings.c:834 gText_FirstPlacePrize
	.globl gText_FirstPlacePrize
gText_FirstPlacePrize: @ 0x085CCD86
	.string "1ばんに なった ひとに\n{DYNAMIC 0}を プレゼント!!{EOS}"
	.if (. - gText_FirstPlacePrize) > 0x19
	.error "gText_FirstPlacePrize may not grow beyond its original slot"
	.endif
	.if (. - gText_FirstPlacePrize) < 0x19
	.space 0x19 - (. - gText_FirstPlacePrize)
	.endif
	.globl gText_Rom_5CCD9F
gText_Rom_5CCD9F: @ 0x085CCD9F
	@ Decoded text from ROM range: offset=0x5CCD9F, size=0xC
	.string "{SE_M_HYPER_BEAM2}は　いっぱいです…{EOS}"
	@ pret/pokeemerald-jp direct xref for 0x085CCDAB: dodrio_berry_picking.s: sub_080295A4
	.globl gText_FilledStorageSpace
gText_FilledStorageSpace: @ 0x085CCDAB
	@ canonical pret/pokeemerald: gText_FilledStorageSpace
	@ JP-encoded text bytes; canonical semantic identity is proven.
	.byte 0xF7, 0x00, 0x37, 0x00, 0x02, 0x50, 0x4B, 0x02, 0x16, 0x15, 0x50, 0x13, 0x0C, 0x1F, 0x50, 0x10
	.byte 0xAB, 0xFF
	.globl gText_Rom_5CCDBD
gText_Rom_5CCDBD: @ 0x085CCDBD
	.string "もういちど あそびますか？{EOS}"
	.if (. - gText_Rom_5CCDBD) > 0xe
	.error "gText_Rom_5CCDBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCDBD) < 0xe
	.space 0xe - (. - gText_Rom_5CCDBD)
	.endif

	@ src/strings.c:838 gText_SomeoneDroppedOut
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_SomeoneDroppedOut
gText_SomeoneDroppedOut: @ 0x085CCDCB
	.string "だれかが ぬけました\nつうしんを しゅうりょう します{EOS}"
	.if (. - gText_SomeoneDroppedOut) != 0x1c
	.error "gText_SomeoneDroppedOut must retain its original byte length"
	.endif
.endif
