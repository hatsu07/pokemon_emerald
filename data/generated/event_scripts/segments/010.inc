	@ data/text/cable_club.inc:26 CableClub_Text_CantTradeEnigmaBerry
	.globl gText_Rom_247C5B
gText_Rom_247C5B: @ 0x08247C5B
	.string "{STR_VAR_1}のみを もっている\nポケモンは こうかん できません!$"
	.if (. - gText_Rom_247C5B) > 0x1e
	.error "gText_Rom_247C5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C5B) < 0x1e
	.space 0x1e - (. - gText_Rom_247C5B)
	.endif
	.globl gUnknown_8247C79
gUnknown_8247C79: @ 0x08247C79

	@ data/text/cable_club.inc:29 gText_PleaseWaitForLink
	.globl gText_Rom_247C79
gText_Rom_247C79: @ 0x08247C79
	.string "しょうしょう おまち ください\n……Bボタンで キャンセル$"
	.if (. - gText_Rom_247C79) > 0x1e
	.error "gText_Rom_247C79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C79) < 0x1e
	.space 0x1e - (. - gText_Rom_247C79)
	.endif
	.globl gUnknown_8247C97
gUnknown_8247C97: @ 0x08247C97

	@ data/text/cable_club.inc:32 gText_ConfirmLinkWhenPlayersReady
	.globl gText_Rom_247C97
gText_Rom_247C97: @ 0x08247C97
	.string "そろったら Aボタンで すすむ\n……Bボタンで キャンセル$"
	.if (. - gText_Rom_247C97) > 0x1e
	.error "gText_Rom_247C97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C97) < 0x1e
	.space 0x1e - (. - gText_Rom_247C97)
	.endif
	.globl gUnknown_8247CB5
gUnknown_8247CB5: @ 0x08247CB5

	@ data/text/cable_club.inc:35 gText_ConfirmStartLinkWithXPlayers
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247CB5
gText_Rom_247CB5: @ 0x08247CB5
	.string "{STR_VAR_1}にんで つうしんを はじめます\nAボタン…けってい Bボタン…もどる$"
	.if (. - gText_Rom_247CB5) != 0x25
	.error "gText_Rom_247CB5 must retain its original byte length"
	.endif
	.globl gText_Rom_247CD6
	.set gText_Rom_247CD6, gText_Rom_247CB5 + 0x21
	.globl gUnknown_8247CDA
gUnknown_8247CDA: @ 0x08247CDA

	@ data/text/cable_club.inc:38 gText_AwaitingLinkup
	.globl gText_Rom_247CDA
gText_Rom_247CDA: @ 0x08247CDA
	.string "つうしんかいしを まっています\n……Bボタンで キャンセル$"
	.if (. - gText_Rom_247CDA) > 0x1e
	.error "gText_Rom_247CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247CDA) < 0x1e
	.space 0x1e - (. - gText_Rom_247CDA)
	.endif

	@ data/text/cable_club.inc:42 CableClub_Text_OkayToSaveProgress
	.globl gText_Rom_247CF8
gText_Rom_247CF8: @ 0x08247CF8
	.string "はじめる まえに レポートを\nかきますが よろしいですか?$"
	.if (. - gText_Rom_247CF8) > 0x1e
	.error "gText_Rom_247CF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247CF8) < 0x1e
	.space 0x1e - (. - gText_Rom_247CF8)
	.endif

	@ data/text/cable_club.inc:45 CableClub_Text_PleaseEnter
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247D16
gText_Rom_247D16: @ 0x08247D16
	.string "それでは へやへ どうぞ$"
	.if (. - gText_Rom_247D16) != 0xd
	.error "gText_Rom_247D16 must retain its original byte length"
	.endif
	.globl gText_Rom_247D1F
	.set gText_Rom_247D1F, gText_Rom_247D16 + 0x9

	@ data/text/cable_club.inc:48 CableClub_Text_DirectYouToYourRoom
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247D23
gText_Rom_247D23: @ 0x08247D23
	.string "それでは\nへやに ごあんないします$"
	.if (. - gText_Rom_247D23) != 0x12
	.error "gText_Rom_247D23 must retain its original byte length"
	.endif
	.globl gText_Rom_247D31
	.set gText_Rom_247D31, gText_Rom_247D23 + 0xe

	@ data/text/cable_club.inc:51 Text_SomeoneIsNotReadyToLink
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247D35
gText_Rom_247D35: @ 0x08247D35
	.string "おともだちの じゅんびが\nできて いない ようです\pじゅんびが できましたら\nまた おこしください$"
	.if (. - gText_Rom_247D35) != 0x32
	.error "gText_Rom_247D35 must retain its original byte length"
	.endif
	.globl gText_Rom_247D4F
	.set gText_Rom_247D4F, gText_Rom_247D35 + 0x1a

	@ data/text/cable_club.inc:54 Text_LinkErrorPleaseReset
	.globl gText_Rom_247D67
gText_Rom_247D67: @ 0x08247D67
	.string "つうしんエラー です\nリセットして やりなおしてください$"
	.if (. - gText_Rom_247D67) > 0x1d
	.error "gText_Rom_247D67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247D67) < 0x1d
	.space 0x1d - (. - gText_Rom_247D67)
	.endif

	@ data/text/cable_club.inc:57 Text_PlayersMadeDifferentSelections
	.globl gText_Rom_247D84
gText_Rom_247D84: @ 0x08247D84
	.string "おたがいが えらんだ ものが\nちがっている ようです$"
	.if (. - gText_Rom_247D84) > 0x1b
	.error "gText_Rom_247D84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247D84) < 0x1b
	.space 0x1b - (. - gText_Rom_247D84)
	.endif

	@ data/text/cable_club.inc:60 CableClub_Text_PleaseVisitAgain
	.globl gText_Rom_247D9F
gText_Rom_247D9F: @ 0x08247D9F
	.string "それでは また おこしください$"
	.if (. - gText_Rom_247D9F) > 0x10
	.error "gText_Rom_247D9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247D9F) < 0x10
	.space 0x10 - (. - gText_Rom_247D9F)
	.endif

	@ data/text/cable_club.inc:63 CableClub_Text_IncorrectNumberOfParticipants
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247DAF
gText_Rom_247DAF: @ 0x08247DAF
	.string "さんかしている にんずうが\nただしく ありません$"
	.if (. - gText_Rom_247DAF) != 0x19
	.error "gText_Rom_247DAF must retain its original byte length"
	.endif
	.globl gText_Rom_247DC4
	.set gText_Rom_247DC4, gText_Rom_247DAF + 0x15

	@ data/text/cable_club.inc:66 CableClub_Text_CantSingleBattleWithXPlayers
	.globl gText_Rom_247DC8
gText_Rom_247DC8: @ 0x08247DC8
	.string "シングルバトルは {STR_VAR_1}にんで\nあそぶことは できません!$"
	.if (. - gText_Rom_247DC8) > 0x1d
	.error "gText_Rom_247DC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247DC8) < 0x1d
	.space 0x1d - (. - gText_Rom_247DC8)
	.endif

	@ data/text/cable_club.inc:69 CableClub_Text_CantDoubleBattleWithXPlayers
	.globl gText_Rom_247DE5
gText_Rom_247DE5: @ 0x08247DE5
	.string "ダブルバトルは {STR_VAR_1}にんでは\nあそぶことは できません!$"
	.if (. - gText_Rom_247DE5) > 0x1d
	.error "gText_Rom_247DE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247DE5) < 0x1d
	.space 0x1d - (. - gText_Rom_247DE5)
	.endif

	@ data/text/cable_club.inc:72 CableClub_Text_NeedFourPlayers
	.globl gText_Rom_247E02
gText_Rom_247E02: @ 0x08247E02
	.string "さんか にんずうが 4にん いないと\nたいせん することが できません!$"
	.if (. - gText_Rom_247E02) > 0x25
	.error "gText_Rom_247E02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247E02) < 0x25
	.space 0x25 - (. - gText_Rom_247E02)
	.endif

	@ data/text/cable_club.inc:75 CableClub_Text_PleaseConfirmNumberAndRestart
	.globl gText_Rom_247E27
gText_Rom_247E27: @ 0x08247E27
	.string "もういちど にんずうを たしかめて\nはじめから やりなおして ください$"
	.if (. - gText_Rom_247E27) > 0x24
	.error "gText_Rom_247E27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247E27) < 0x24
	.space 0x24 - (. - gText_Rom_247E27)
	.endif

	@ data/text/cable_club.inc:78 Text_TerminateLinkConfirmation
	.globl gText_Rom_247E4B
gText_Rom_247E4B: @ 0x08247E4B
	.string "へやからでると つうしんが\nおわりますが よろしいですか?$"
	.if (. - gText_Rom_247E4B) > 0x1e
	.error "gText_Rom_247E4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247E4B) < 0x1e
	.space 0x1e - (. - gText_Rom_247E4B)
	.endif

	@ data/text/cable_club.inc:81 Text_TerminateLinkPleaseWait
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247E69
gText_Rom_247E69: @ 0x08247E69
	.string "つうしんを しゅうりょう します\nしばらく おまちください$"
	.if (. - gText_Rom_247E69) != 0x1e
	.error "gText_Rom_247E69 must retain its original byte length"
	.endif
	.globl gText_Rom_247E7A
	.set gText_Rom_247E7A, gText_Rom_247E69 + 0x11

	@ data/text/cable_club.inc:84 CableClub_Text_TooBusyToNotice
	.globl gText_Rom_247E87
gText_Rom_247E87: @ 0x08247E87
	.string "とりこみちゅうの ようだ…$"
	.if (. - gText_Rom_247E87) > 0xe
	.error "gText_Rom_247E87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247E87) < 0xe
	.space 0xe - (. - gText_Rom_247E87)
	.endif

	@ data/text/cable_club.inc:87 CableClub_Text_GotToLookAtTrainerCard
	.globl gText_Rom_247E95
gText_Rom_247E95: @ 0x08247E95
	.string "{STR_VAR_1}の トレーナーカードを\nみせてもらった!$"
	.if (. - gText_Rom_247E95) > 0x17
	.error "gText_Rom_247E95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247E95) < 0x17
	.space 0x17 - (. - gText_Rom_247E95)
	.endif

	@ data/text/cable_club.inc:90 CableClub_Text_GotToLookAtColoredTrainerCard
	.globl gText_Rom_247EAC
gText_Rom_247EAC: @ 0x08247EAC
	.string "{STR_VAR_1}の トレーナーカードを\nみせてもらった!\p…{STR_VAR_2}カードだ!$"
	.if (. - gText_Rom_247EAC) > 0x20
	.error "gText_Rom_247EAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247EAC) < 0x20
	.space 0x20 - (. - gText_Rom_247EAC)
	.endif

	@ data/text/cable_club.inc:93 BattleColosseum_2P_Text_TakePlaceStartBattle
	.globl gText_Rom_247ECC
gText_Rom_247ECC: @ 0x08247ECC
	.string "しょていの いちに ついて\nたいせんを はじめて ください$"
	.if (. - gText_Rom_247ECC) > 0x1e
	.error "gText_Rom_247ECC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247ECC) < 0x1e
	.space 0x1e - (. - gText_Rom_247ECC)
	.endif

	@ data/text/cable_club.inc:96 TradeCenter_Text_TakeSeatStartTrade
	.globl gText_Rom_247EEA
gText_Rom_247EEA: @ 0x08247EEA
	.string "しょていの いちに ついて\nこうかんを はじめて ください$"
	.if (. - gText_Rom_247EEA) > 0x1e
	.error "gText_Rom_247EEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247EEA) < 0x1e
	.space 0x1e - (. - gText_Rom_247EEA)
	.endif

	@ data/text/cable_club.inc:99 RecordCorner_Text_ThanksForComing
	.globl gText_Rom_247F08
gText_Rom_247F08: @ 0x08247F08
	.string "ごりよう ありがとう ございました$"
	.if (. - gText_Rom_247F08) > 0x12
	.error "gText_Rom_247F08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247F08) < 0x12
	.space 0x12 - (. - gText_Rom_247F08)
	.endif

	@ data/text/cable_club.inc:102 CableClub_Text_TrainerCardDataOverwritten
	.globl gText_Rom_247F1A
gText_Rom_247F1A: @ 0x08247F1A
	.string "トレーナーカードの\nきろくを かきかえます!$"
	.if (. - gText_Rom_247F1A) > 0x17
	.error "gText_Rom_247F1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247F1A) < 0x17
	.space 0x17 - (. - gText_Rom_247F1A)
	.endif

	@ data/text/cable_club.inc:105 CableClub_Text_HopeToSeeYouAgain
	.globl gText_Rom_247F31
gText_Rom_247F31: @ 0x08247F31
	.string "では また どうぞ!$"
	.if (. - gText_Rom_247F31) > 0xb
	.error "gText_Rom_247F31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247F31) < 0xb
	.space 0xb - (. - gText_Rom_247F31)
	.endif

	@ data/text/cable_club.inc:108 CableClub_Text_NotSetUpForFarAwayRegion
	.globl gText_Rom_247F3C
gText_Rom_247F3C: @ 0x08247F3C
	.string "おきゃくさま\nもうしわけ ありません\pとおい ちほうの かたと\nポケモンを こうかん することは\lいまは できません…$"
	.if (. - gText_Rom_247F3C) > 0x3c
	.error "gText_Rom_247F3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247F3C) < 0x3c
	.space 0x3c - (. - gText_Rom_247F3C)
	.endif

	@ data/text/cable_club.inc:111 CableClub_Text_OtherTrainerNotReady
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247F78
gText_Rom_247F78: @ 0x08247F78
	.string "あいての じゅんびが\nできていません$"
	.if (. - gText_Rom_247F78) != 0x13
	.error "gText_Rom_247F78 must retain its original byte length"
	.endif
	.globl gText_Rom_247F87
	.set gText_Rom_247F87, gText_Rom_247F78 + 0xf

	@ data/text/cable_club.inc:114 CableClub_Text_YouHaveAMonThatCantBeTaken
	.globl gText_Rom_247F8B
gText_Rom_247F8B: @ 0x08247F8B
	.string "てもちに つれていけない\nポケモンが います$"
	.if (. - gText_Rom_247F8B) > 0x17
	.error "gText_Rom_247F8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247F8B) < 0x17
	.space 0x17 - (. - gText_Rom_247F8B)
	.endif

	@ data/text/cable_club.inc:117 RecordCorner_Text_TakeSeatAndWait
	.globl gText_Rom_247FA2
gText_Rom_247FA2: @ 0x08247FA2
	.string "しょていの いちに ついて\nおまち ください$"
	.if (. - gText_Rom_247FA2) > 0x17
	.error "gText_Rom_247FA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247FA2) < 0x17
	.space 0x17 - (. - gText_Rom_247FA2)
	.endif

	@ data/text/cable_club.inc:120 RecordCorner_Text_PlayerSentOverOneX
	.globl gText_Rom_247FB9
gText_Rom_247FB9: @ 0x08247FB9
	.string "{STR_VAR_1}さんから\n{STR_VAR_2}が おくられてきた!$"
	.if (. - gText_Rom_247FB9) > 0x14
	.error "gText_Rom_247FB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247FB9) < 0x14
	.space 0x14 - (. - gText_Rom_247FB9)
	.endif

	@ data/text/cable_club.inc:131 CableClub_Text_AdapterNotConnected
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247FCD
gText_Rom_247FCD: @ 0x08247FCD
	.string "ワイヤレスアダプタが\nつながって いません$"
	.if (. - gText_Rom_247FCD) != 0x16
	.error "gText_Rom_247FCD must retain its original byte length"
	.endif
	.globl gText_Rom_247FDF
	.set gText_Rom_247FDF, gText_Rom_247FCD + 0x12

	@ data/text/cable_club.inc:134 CableClub_Text_ParticipantsStepUpToCounter
	.globl gText_Rom_247FE3
gText_Rom_247FE3: @ 0x08247FE3
	.string "さんか したい ひとは\nカウンターに おこしください$"
	.if (. - gText_Rom_247FE3) > 0x1b
	.error "gText_Rom_247FE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247FE3) < 0x1b
	.space 0x1b - (. - gText_Rom_247FE3)
	.endif

	@ data/text/cable_club.inc:138 CableClub_Text_Hello
	.globl gText_Rom_247FFE
gText_Rom_247FFE: @ 0x08247FFE
	.string "こんにちは!$"
	.if (. - gText_Rom_247FFE) > 0x7
	.error "gText_Rom_247FFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247FFE) < 0x7
	.space 0x7 - (. - gText_Rom_247FFE)
	.endif

	@ data/text/cable_club.inc:142 CableClub_Text_PleaseWait
	.globl gText_Rom_248005
gText_Rom_248005: @ 0x08248005
	.string "しょうしょう おまちください$"
	.if (. - gText_Rom_248005) > 0xf
	.error "gText_Rom_248005 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248005) < 0xf
	.space 0xf - (. - gText_Rom_248005)
	.endif

	@ data/text/cable_club.inc:145 CableClub_Text_YouMayTradeHere
	.globl gText_Rom_248014
gText_Rom_248014: @ 0x08248014
	.string "ともだちと ポケモンの\nこうかんが たのしめます$"
	.if (. - gText_Rom_248014) > 0x19
	.error "gText_Rom_248014 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248014) < 0x19
	.space 0x19 - (. - gText_Rom_248014)
	.endif

	@ data/text/cable_club.inc:148 CableClub_Text_YouMayBattleHere
	.globl gText_Rom_24802D
gText_Rom_24802D: @ 0x0824802D
	.string "ともだちと ポケモンの\nたいせんが たのしめます$"
	.if (. - gText_Rom_24802D) > 0x19
	.error "gText_Rom_24802D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24802D) < 0x19
	.space 0x19 - (. - gText_Rom_24802D)
	.endif

	@ data/text/cable_club.inc:151 CableClub_Text_CanMakeBerryPowder
	.globl gText_Rom_248046
gText_Rom_248046: @ 0x08248046
	.string "2にんから 5にんの ともだちと\nきのみで こなを つくります$"
	.if (. - gText_Rom_248046) > 0x20
	.error "gText_Rom_248046 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248046) < 0x20
	.space 0x20 - (. - gText_Rom_248046)
	.endif

	@ data/text/cable_club.inc:154 CableClub_Text_CanMixRecords
	.globl gText_Rom_248066
gText_Rom_248066: @ 0x08248066
	.string "2にんから 4にんの ともだちと\nレコードを まぜます$"
	.if (. - gText_Rom_248066) > 0x1c
	.error "gText_Rom_248066 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248066) < 0x1c
	.space 0x1c - (. - gText_Rom_248066)
	.endif

	@ data/text/cable_club.inc:158 CableClub_Text_GuideToVariousServices
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_248082
gText_Rom_248082: @ 0x08248082
	.string "ワイヤレス クラブでの\nあそびかたを せつめいします$"
	.if (. - gText_Rom_248082) != 0x1b
	.error "gText_Rom_248082 must retain its original byte length"
	.endif
	.globl gText_Rom_248099
	.set gText_Rom_248099, gText_Rom_248082 + 0x17

	@ data/text/cable_club.inc:161 CableClub_Text_CancelSelectedItem
	.globl gText_Rom_24809D
gText_Rom_24809D: @ 0x0824809D
	.string "やめます$"
	.if (. - gText_Rom_24809D) > 0x5
	.error "gText_Rom_24809D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24809D) < 0x5
	.space 0x5 - (. - gText_Rom_24809D)
	.endif

	@ data/text/cable_club.inc:169 CableClub_Text_ReturnsToPreviousStep
	.globl gText_Rom_2480A2
gText_Rom_2480A2: @ 0x082480A2
	.string "どちらの しょうぶに しますか?$"
	.if (. - gText_Rom_2480A2) > 0x11
	.error "gText_Rom_2480A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2480A2) < 0x11
	.space 0x11 - (. - gText_Rom_2480A2)
	.endif

	@ data/text/cable_club.inc:172 CableClub_Text_NeedBerryForBerryCrush
	.globl gText_Rom_2480B3
gText_Rom_2480B3: @ 0x082480B3
	.string "ひとつ まえに もどります$"
	.if (. - gText_Rom_2480B3) > 0xe
	.error "gText_Rom_2480B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2480B3) < 0xe
	.space 0xe - (. - gText_Rom_2480B3)
	.endif

	@ data/text/cable_club.inc:165 CableClub_Text_WhichBattleMode
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2480C1
gText_Rom_2480C1: @ 0x082480C1
	.string "きのみを もって いないと\nきのみクラッシュは できません$"
	.if (. - gText_Rom_2480C1) != 0x1e
	.error "gText_Rom_2480C1 must retain its original byte length"
	.endif
	.globl gText_Rom_2480DB
	.set gText_Rom_2480DB, gText_Rom_2480C1 + 0x1a

	@ data/text/cable_club.inc:175 CableClub_Text_NeedTwoMonsForUnionRoom
	.globl gText_Rom_2480DF
gText_Rom_2480DF: @ 0x082480DF
	.string "ユニオンルームに はいるには\n2ひき いじょうの ポケモンを\lもって おこしください$"
	.if (. - gText_Rom_2480DF) > 0x2b
	.error "gText_Rom_2480DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2480DF) < 0x2b
	.space 0x2b - (. - gText_Rom_2480DF)
	.endif

	@ data/text/cable_club.inc:178 CableClub_Text_NoEnigmaBerryInUnionRoom
	.globl gText_Rom_24810A
gText_Rom_24810A: @ 0x0824810A
	.string "{STR_VAR_1}のみを もっている\nポケモンを おもちの かたは\lユニオンルームには はいれません…$"
	.if (. - gText_Rom_24810A) > 0x2d
	.error "gText_Rom_24810A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24810A) < 0x2d
	.space 0x2d - (. - gText_Rom_24810A)
	.endif

	@ data/text/cable_club.inc:181 CableClub_Text_UnionRoomAdapterNotConnected
	.globl gText_Rom_248137
gText_Rom_248137: @ 0x08248137
	.string "こちらは\nポケモン ワイヤレス クラブ\lユニオン ルームです\pワイヤレスアダプタが\nつながって いません\pまた おこしください$"
	.if (. - gText_Rom_248137) > 0x40
	.error "gText_Rom_248137 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248137) < 0x40
	.space 0x40 - (. - gText_Rom_248137)
	.endif

	@ data/text/cable_club.inc:185 CableClub_Text_OhExcuseMe
	.globl gText_Rom_248177
gText_Rom_248177: @ 0x08248177
	.string "あ……\nおきゃくさま!$"
	.if (. - gText_Rom_248177) > 0xc
	.error "gText_Rom_248177 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248177) < 0xc
	.space 0xc - (. - gText_Rom_248177)
	.endif

	@ data/text/cable_club.inc:188 CableClub_Text_PlayerIsWaiting
	.globl gText_Rom_248183
gText_Rom_248183: @ 0x08248183
	.string "あら! いま {STR_VAR_1}さんも\nプレイちゅう みたいですね\lがんばって くださいね!$"
	.if (. - gText_Rom_248183) > 0x28
	.error "gText_Rom_248183 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248183) < 0x28
	.space 0x28 - (. - gText_Rom_248183)
	.endif

	@ data/text/cable_club.inc:191 MossdeepCity_GameCorner_1F_Text_DescribeWhichGame
	.globl gText_Rom_2481AB
gText_Rom_2481AB: @ 0x082481AB
	.string "ぼくは ゲームの せつめいを\nしますよ!\lどの せつめいを ききますか?$"
	.if (. - gText_Rom_2481AB) > 0x25
	.error "gText_Rom_2481AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2481AB) < 0x25
	.space 0x25 - (. - gText_Rom_2481AB)
	.endif

	@ data/text/cable_club.inc:194 MossdeepCity_GameCorner_1F_Text_PokemonJumpInfo
	.globl gText_Rom_2481D0
gText_Rom_2481D0: @ 0x082481D0
	.string "「ミニポケモンでジャンプ」は\nツルの なわを Aボタンで\lタイミングよく とぶ ゲームです\pさんか できる ポケモンは\nたかさ 70センチくらい までの\lちいさい ポケモンに なります\pもぐっていたり とんでいたり する\nポケモンは ジャンプが\lじょうずに できないので\lざんねんながら さんか できません\pみんなの ジャンプの タイミングが\nピッタリ あえば\lよいことが ありますよ!$"
	.if (. - gText_Rom_2481D0) > 0xc2
	.error "gText_Rom_2481D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2481D0) < 0xc2
	.space 0xc2 - (. - gText_Rom_2481D0)
	.endif

	@ data/text/cable_club.inc:197 MossdeepCity_GameCorner_1F_Text_DodrioBerryPickingInfo
	.globl gText_Rom_248292
gText_Rom_248292: @ 0x08248292
	.string "「ドードリオのきのみどり」は\nドードリオの 3つの あたまに\lめいれいして うえから おちてくる\lきのみを おとさないように\lとりつづける ゲームです\pじゅうじボタンの\nうえ みぎ ひだりを つかいます\pこの ゲームを あそぶには\nドードリオが ひつようです$"
	.if (. - gText_Rom_248292) > 0x82
	.error "gText_Rom_248292 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248292) < 0x82
	.space 0x82 - (. - gText_Rom_248292)
	.endif

	@ data/text/cable_club.inc:200 MossdeepCity_GameCorner_1F_Text_TalkToOldManToPlay
	.globl gText_Rom_248314
gText_Rom_248314: @ 0x08248314
	.string "ゲームを するなら\nおとなりの おじいさんに いってね$"
	.if (. - gText_Rom_248314) > 0x1c
	.error "gText_Rom_248314 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248314) < 0x1c
	.space 0x1c - (. - gText_Rom_248314)
	.endif

	@ data/text/cable_club.inc:203 MossdeepCity_GameCorner_1F_Text_WelcomeCanYouWait
	.globl gText_Rom_248330
gText_Rom_248330: @ 0x08248330
	.string "やあ いらっしゃい\nワイヤレスつうしんの ゲームかな?\lちょっと まってね$"
	.if (. - gText_Rom_248330) > 0x26
	.error "gText_Rom_248330 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248330) < 0x26
	.space 0x26 - (. - gText_Rom_248330)
	.endif

	@ data/text/cable_club.inc:206 MossdeepCity_GameCorner_1F_Text_ComeAgain
	.globl gText_Rom_248356
gText_Rom_248356: @ 0x08248356
	.string "また おいでね$"
	.if (. - gText_Rom_248356) > 0x8
	.error "gText_Rom_248356 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248356) < 0x8
	.space 0x8 - (. - gText_Rom_248356)
	.endif

	@ data/text/cable_club.inc:209 MossdeepCity_GameCorner_1F_Text_AdapterNotConnected
	.globl gText_Rom_24835E
gText_Rom_24835E: @ 0x0824835E
	.string "ワイヤレスアダプタを つなげて\nあそびに おいで!$"
	.if (. - gText_Rom_24835E) > 0x1a
	.error "gText_Rom_24835E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24835E) < 0x1a
	.space 0x1a - (. - gText_Rom_24835E)
	.endif

	@ data/text/cable_club.inc:212 MossdeepCity_GameCorner_1F_Text_PlayWhichGame
	.globl gText_Rom_248378
gText_Rom_248378: @ 0x08248378
	.string "さて どの ゲームを\nやりたいのかな?$"
	.if (. - gText_Rom_248378) > 0x14
	.error "gText_Rom_248378 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248378) < 0x14
	.space 0x14 - (. - gText_Rom_248378)
	.endif

	@ data/text/cable_club.inc:215 MossdeepCity_GameCorner_1F_Text_EnterWhichPokemon
	.globl gText_Rom_24838C
gText_Rom_24838C: @ 0x0824838C
	.string "どの ポケモンを\nさんか させるのかな?$"
	.if (. - gText_Rom_24838C) > 0x15
	.error "gText_Rom_24838C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24838C) < 0x15
	.space 0x15 - (. - gText_Rom_24838C)
	.endif

	@ data/text/cable_club.inc:218 MossdeepCity_GameCorner_1F_Text_AllGoodToGo
	.globl gText_Rom_2483A1
gText_Rom_2483A1: @ 0x082483A1
	.string "じゅんびが できたよ\nげんきに あそんで おいで!$"
	.if (. - gText_Rom_2483A1) > 0x1a
	.error "gText_Rom_2483A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2483A1) < 0x1a
	.space 0x1a - (. - gText_Rom_2483A1)
	.endif

	@ data/text/cable_club.inc:222 MossdeepCity_GameCorner_1F_Text_LeavingDoComeAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2483BB
gText_Rom_2483BB: @ 0x082483BB
	.string "きょうは かえるのかい?\nまた おいでね$"
	.if (. - gText_Rom_2483BB) != 0x15
	.error "gText_Rom_2483BB must retain its original byte length"
	.endif
	.globl gText_Rom_2483C8
	.set gText_Rom_2483C8, gText_Rom_2483BB + 0xd

	@ data/text/cable_club.inc:225 MossdeepCity_GameCorner_1F_Text_ExplainRequiredMon
	.globl gText_Rom_2483D0
gText_Rom_2483D0: @ 0x082483D0
	.string "ゲームに さんかできる\nポケモンを もって いないんだね\pだれが さんか できるか\nせつめいを しようか?$"
	.if (. - gText_Rom_2483D0) > 0x36
	.error "gText_Rom_2483D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2483D0) < 0x36
	.space 0x36 - (. - gText_Rom_2483D0)
	.endif

	@ data/text/cable_club.inc:228 MossdeepCity_GameCorner_1F_Text_ShortJumpingPokemonAllowed
	.globl gText_Rom_248406
gText_Rom_248406: @ 0x08248406
	.string "「ミニポケモンでジャンプ」に\nさんか できる ポケモンは\lたかさ 70センチくらい までだよ\pじめんに もぐったり\nうかんでいる ポケモンは\lジャンプ できないから\lでられないんだよ$"
	.if (. - gText_Rom_248406) > 0x5c
	.error "gText_Rom_248406 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248406) < 0x5c
	.space 0x5c - (. - gText_Rom_248406)
	.endif

	@ data/text/cable_club.inc:231 MossdeepCity_GameCorner_1F_Text_OnlyDodrioAllowed
	.globl gText_Rom_248462
gText_Rom_248462: @ 0x08248462
	.string "「ドードリオのきのみどり」は\nドードリオ だけが\lさんか できる ゲームなんだよ$"
	.if (. - gText_Rom_248462) > 0x29
	.error "gText_Rom_248462 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248462) < 0x29
	.space 0x29 - (. - gText_Rom_248462)
	.endif

	@ data/text/cable_club.inc:235 MossdeepCity_GameCorner_1F_Text_RetryPlease
	.globl gText_Rom_24848B
gText_Rom_24848B: @ 0x0824848B
	.string "もういちど はじめから\nやりなおして みて くれるかな?$"
	.if (. - gText_Rom_24848B) > 0x1d
	.error "gText_Rom_24848B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24848B) < 0x1d
	.space 0x1d - (. - gText_Rom_24848B)
	.endif

	@ data/text/cable_club.inc:238 CableClub_Text_WelcomeWhichDirectCornerRoom
	.globl gText_Rom_2484A8
gText_Rom_2484A8: @ 0x082484A8
	.string "ポケモン ワイヤレス クラブ\nダイレクト コーナーに ようこそ!\pこちらでは ともだちと ちょくせつ\nやりとり できます\pどの へやに はいりますか?$"
	.if (. - gText_Rom_2484A8) > 0x4c
	.error "gText_Rom_2484A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2484A8) < 0x4c
	.space 0x4c - (. - gText_Rom_2484A8)
	.endif

	@ data/text/cable_club.inc:241 CableClub_Text_TradePokemon
	.globl gText_Rom_2484F4
gText_Rom_2484F4: @ 0x082484F4
	.string "こうかんを しますか?$"
	.if (. - gText_Rom_2484F4) > 0xc
	.error "gText_Rom_2484F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2484F4) < 0xc
	.space 0xc - (. - gText_Rom_2484F4)
	.endif

	@ data/text/cable_club.inc:244 CableClub_Text_PlayWhichBattleMode
	.globl gText_Rom_248500
gText_Rom_248500: @ 0x08248500
	.string "どちらの たいせんを しますか?$"
	.if (. - gText_Rom_248500) > 0x11
	.error "gText_Rom_248500 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248500) < 0x11
	.space 0x11 - (. - gText_Rom_248500)
	.endif

	@ data/text/cable_club.inc:247 CableClub_Text_AccessRecordCorner
	.globl gText_Rom_248511
gText_Rom_248511: @ 0x08248511
	.string "レコードコーナーを しますか?$"
	.if (. - gText_Rom_248511) > 0x10
	.error "gText_Rom_248511 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248511) < 0x10
	.space 0x10 - (. - gText_Rom_248511)
	.endif

	@ data/text/cable_club.inc:250 CableClub_Text_UseBerryCrush
	.globl gText_Rom_248521
gText_Rom_248521: @ 0x08248521
	.string "きのみクラッシュを しますか?$"
	.if (. - gText_Rom_248521) > 0x10
	.error "gText_Rom_248521 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248521) < 0x10
	.space 0x10 - (. - gText_Rom_248521)
	.endif

	@ data/text/cable_club.inc:253 CableClub_Text_ExplainBattleModes
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_248531
gText_Rom_248531: @ 0x08248531
	.string "たいせんには 3しゅるいの\nモードが あります\pシングルバトルは たたかいの ばに\nポケモンを 1ひきだして\lふたりで たいせんします\pダブルバトルは たたかいの ばに\nポケモンを 2ひきずつ だして\lふたりで たいせんします\pマルチバトルは たたかいの ばに\n4にんで ポケモンを 1ひきずつ\lだして 2たい2で たいせんします$"
	.if (. - gText_Rom_248531) != 0xa6
	.error "gText_Rom_248531 must retain its original byte length"
	.endif
	.globl gText_Rom_2485D3
	.set gText_Rom_2485D3, gText_Rom_248531 + 0xa2

	@ data/text/cable_club.inc:256 CableClub_Text_ChooseGroupLeaderOfTwo
	.globl gText_Rom_2485D7
gText_Rom_2485D7: @ 0x082485D7
	.string "ふたりで はなしあって ひとりが\nリーダーに なってください\pもうひとりは グループにはいる を\nえらんでください$"
	.if (. - gText_Rom_2485D7) > 0x3a
	.error "gText_Rom_2485D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2485D7) < 0x3a
	.space 0x3a - (. - gText_Rom_2485D7)
	.endif

	@ data/text/cable_club.inc:259 CableClub_Text_ChooseGroupLeaderOfFour
	.globl gText_Rom_248611
gText_Rom_248611: @ 0x08248611
	.string "4にんで はなしあって ひとりが\nグループリーダーに なってください\pほかの ひとは グループにはいる を\nえらんで ください$"
	.if (. - gText_Rom_248611) > 0x40
	.error "gText_Rom_248611 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248611) < 0x40
	.space 0x40 - (. - gText_Rom_248611)
	.endif

	@ data/text/cable_club.inc:262 CableClub_Text_ChooseGroupLeader
	.globl gText_Rom_248651
gText_Rom_248651: @ 0x08248651
	.string "みんなで はなしあって ひとりが\nグループリーダーに なってください\pほかの ひとは グループにはいる を\nえらんでください$"
	.if (. - gText_Rom_248651) > 0x3f
	.error "gText_Rom_248651 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248651) < 0x3f
	.space 0x3f - (. - gText_Rom_248651)
	.endif

	@ data/text/cable_club.inc:265 CableClub_Text_WelcomeUnionRoomEnter
	.globl gText_Rom_248690
gText_Rom_248690: @ 0x08248690
	.string "ポケモン ワイヤレス クラブ\nユニオン ルームに ようこそ!\pこちらでは みしらぬ ともだちと\nやりとり できます\pへやに はいりますか?$"
	.if (. - gText_Rom_248690) > 0x46
	.error "gText_Rom_248690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248690) < 0x46
	.space 0x46 - (. - gText_Rom_248690)
	.endif

	@ data/text/cable_club.inc:268 CableClub_Text_UnionRoomInfo
	.globl gText_Rom_2486D6
gText_Rom_2486D6: @ 0x082486D6
	.string "ユニオン ルーム は あなたの\nちかくで ユニオン ルームに\lはいっている ひとが あらわれます\pかんたんな あいさつをしたり\pレベル30までの ポケモン2ひきで\n1たい1の たいせん\p2にんから 5にんまで どうじに\nおしゃべりが できる チャット\pそして とうろくしき\nポケモン こうかんが たのしめます\pへやに はいりますか?$"
	.if (. - gText_Rom_2486D6) > 0xa7
	.error "gText_Rom_2486D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2486D6) < 0xa7
	.space 0xa7 - (. - gText_Rom_2486D6)
	.endif

	@ data/text/cable_club.inc:271 CableClub_Text_EnjoyUnionRoom
	.globl gText_Rom_24877D
gText_Rom_24877D: @ 0x0824877D
	.string "それでは ユニオン ルームで\nおたのしみ ください$"
	.if (. - gText_Rom_24877D) > 0x1a
	.error "gText_Rom_24877D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24877D) < 0x1a
	.space 0x1a - (. - gText_Rom_24877D)
	.endif

	@ data/text/cable_club.inc:274 CableClub_Text_FirstTimeRightThisWay
	.globl gText_Rom_248797
gText_Rom_248797: @ 0x08248797
	.string "こんにちは!\pワイヤレス つうしんが\nはじめての かたですね?\pわたくし あんないやくの\nアオナと もうします\pポケモンセンター 2かいの\nごあんないを いたしますので\lこちらへ どうぞ!$"
	.if (. - gText_Rom_248797) > 0x5f
	.error "gText_Rom_248797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248797) < 0x5f
	.space 0x5f - (. - gText_Rom_248797)
	.endif

	@ data/text/cable_club.inc:277 CableClub_Text_ExplainWirelessClubFirstTime
	.globl gText_Rom_2487F6
gText_Rom_2487F6: @ 0x082487F6
	.string "こちら 2かいには\nふたつの おへやが ございます\pひとつめは ひだりがわの おへや\nユニオン ルーム!\pあなたの ちかくで\nユニオン ルームに はいっている\lみしらぬ おともだちと\lいろいろな コミュニケーションが\lたのしめます!\pふたつめは みぎがわの おへや\nダイレクト コーナー!\pあなたの しっている おともだちと\nポケモンの こうかんや\lたいせん などを\lたのしむ ことが できます!\pもし ワイヤレスアダプタが\nつながって いない ばあいでも\pみぎがわの おへやで\nケーブル つうしんが たのしめます\pそれでは\pワイヤレス つうしんを\nたのしんで くださいね!$"
	.if (. - gText_Rom_2487F6) > 0x120
	.error "gText_Rom_2487F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2487F6) < 0x120
	.space 0x120 - (. - gText_Rom_2487F6)
	.endif

	@ data/text/cable_club.inc:280 CableClub_Text_AskAboutLinking
	.globl gText_Rom_248916
gText_Rom_248916: @ 0x08248916
	.string "こんにちは! {PLAYER}さん!\pポケモンセンター 2かいの\nあんないやく アオナです\pなにか つうしんで おこまりですか?$"
	.if (. - gText_Rom_248916) > 0x3b
	.error "gText_Rom_248916 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248916) < 0x3b
	.space 0x3b - (. - gText_Rom_248916)
	.endif

	@ data/text/cable_club.inc:283 CableClub_Text_ExplainWirelessClub
	.globl gText_Rom_248951
gText_Rom_248951: @ 0x08248951
	.string "ポケモン ワイヤレス クラブでの\nあそびかたを せつめい します!\pこちら 2かいには\nふたつの おへやが ございます\pひとつめは ひだりがわの おへや\nユニオン ルーム!\pあなたの ちかくで\nユニオン ルームに はいっている\lみしらぬ おともだちと\lいろいろな コミュニケーションが\lたのしめます!\pふたつめは みぎがわの おへや\nダイレクト コーナー!\pあなたの しっている おともだちと\nポケモンの こうかんや\lたいせん などを\lたのしむ ことが できます!\pもし ユニオン ルームや\nダイレクト コーナーで\lおともだちが みつからない ときは\pもうすこし おともだちと\nちかづいて みて ください\pまた ワイヤレスアダプタが\nつながって いない ばあいでも\pみぎがわの おへやで\nケーブル つうしんが たのしめます\pそれでは\pワイヤレス つうしんを\nたのしんで くださいね!$"
	.if (. - gText_Rom_248951) > 0x188
	.error "gText_Rom_248951 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248951) < 0x188
	.space 0x188 - (. - gText_Rom_248951)
	.endif

	@ data/text/cable_club.inc:286 CableClub_Text_HopeYouEnjoyWirelessSystem
	.globl gText_Rom_248AD9
gText_Rom_248AD9: @ 0x08248AD9
	.string "ポケモン ワイヤレス クラブで\nおたのしみ ください$"
	.if (. - gText_Rom_248AD9) > 0x1b
	.error "gText_Rom_248AD9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248AD9) < 0x1b
	.space 0x1b - (. - gText_Rom_248AD9)
	.endif
	@ Replaced baserom.gba range: offset=0x248AF4, size=0x10E2
	.byte 0x6A, 0x5A, 0x21, 0x8A, 0x40, 0x00, 0x00, 0x06, 0x05, 0x42, 0x8B, 0x24, 0x08, 0x2B, 0x5F, 0x00
	.byte 0x07, 0x01, 0x19, 0x8B, 0x24, 0x08, 0x2B, 0x5F, 0x00, 0x07, 0x00, 0x22, 0x8B, 0x24, 0x08, 0x05
	.byte 0x89, 0x8B, 0x24, 0x08, 0x02, 0x0F, 0x00, 0x72, 0x9C, 0x24, 0x08, 0x09, 0x04, 0x03, 0x0F, 0x00
	.byte 0xD6, 0x9B, 0x24, 0x08, 0x09, 0x04, 0x1A, 0x00, 0x80, 0x11, 0x01, 0x1A, 0x01, 0x80, 0x01, 0x00
	.byte 0x09, 0x00, 0x29, 0x5F, 0x00, 0x0F, 0x00, 0x39, 0x9C, 0x24, 0x08, 0x09, 0x04, 0x03, 0x0F, 0x00
	.byte 0x26, 0xA1, 0x24, 0x08, 0x09, 0x04, 0x19, 0x00, 0x80, 0x8A, 0x40, 0x21, 0x00, 0x80, 0x04, 0x00
	.byte 0x06, 0x01, 0x5B, 0x8B, 0x24, 0x08, 0x02, 0x1A, 0x00, 0x80, 0x0B, 0x00, 0x1A, 0x01, 0x80, 0x01
	.byte 0x00, 0x09, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x7A, 0x8B, 0x24, 0x08, 0x16, 0x8A
	.byte 0x40, 0x00, 0x00, 0x68, 0x6C, 0x02, 0x04, 0xEA, 0x30, 0x24, 0x08, 0x0F, 0x00, 0x65, 0xA1, 0x24
	.byte 0x08, 0x09, 0x04, 0x6C, 0x02, 0x67, 0xC4, 0x9C, 0x24, 0x08, 0x66, 0x6F, 0x00, 0x00, 0x02, 0x00
	.byte 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01, 0x91, 0x8C, 0x24, 0x08
	.byte 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0xC6, 0x8B, 0x24, 0x08, 0x21, 0x00, 0x80, 0x02, 0x00
	.byte 0x06, 0x01, 0x38, 0x8C, 0x24, 0x08, 0x21, 0x00, 0x80, 0x7F, 0x00, 0x06, 0x01, 0x38, 0x8C, 0x24
	.byte 0x08, 0x02, 0x67, 0xE5, 0x9C, 0x24, 0x08, 0x66, 0x6F, 0x00, 0x00, 0x03, 0x00, 0x19, 0x00, 0x80
	.byte 0x0D, 0x80, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01, 0x0E, 0x8C, 0x24, 0x08, 0x21, 0x00, 0x80
	.byte 0x01, 0x00, 0x06, 0x01, 0x1C, 0x8C, 0x24, 0x08, 0x21, 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0x2A
	.byte 0x8C, 0x24, 0x08, 0x21, 0x00, 0x80, 0x03, 0x00, 0x06, 0x01, 0x89, 0x8B, 0x24, 0x08, 0x21, 0x00
	.byte 0x80, 0x7F, 0x00, 0x06, 0x01, 0x89, 0x8B, 0x24, 0x08, 0x02, 0x0F, 0x00, 0xF5, 0x9C, 0x24, 0x08
	.byte 0x09, 0x04, 0x05, 0xC6, 0x8B, 0x24, 0x08, 0x02, 0x0F, 0x00, 0x1F, 0x9E, 0x24, 0x08, 0x09, 0x04
	.byte 0x05, 0xC6, 0x8B, 0x24, 0x08, 0x02, 0x0F, 0x00, 0x8F, 0x9E, 0x24, 0x08, 0x09, 0x04, 0x05, 0xC6
	.byte 0x8B, 0x24, 0x08, 0x02, 0x0F, 0x00, 0x2D, 0xA5, 0x24, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00
	.byte 0xC9, 0x9F, 0x24, 0x08, 0x09, 0x04, 0x8B, 0x21, 0x04, 0x80, 0xFF, 0x00, 0x06, 0x01, 0x38, 0x8C
	.byte 0x24, 0x08, 0x25, 0x54, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x41, 0x8D, 0x24, 0x08
	.byte 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0xB6, 0x8D, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x02, 0x00
	.byte 0x06, 0x01, 0x74, 0x8D, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x03, 0x00, 0x06, 0x01, 0x98, 0x8D, 0x24
	.byte 0x08, 0x21, 0x0D, 0x80, 0x04, 0x00, 0x06, 0x01, 0xA7, 0x8D, 0x24, 0x08, 0x02, 0x67, 0xA3, 0x9F
	.byte 0x24, 0x08, 0x66, 0x6F, 0x00, 0x00, 0x52, 0x00, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80
	.byte 0x00, 0x00, 0x06, 0x01, 0xE4, 0x8C, 0x24, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0xEF
	.byte 0x8C, 0x24, 0x08, 0x21, 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0xFA, 0x8C, 0x24, 0x08, 0x21, 0x00
	.byte 0x80, 0x03, 0x00, 0x06, 0x01, 0x05, 0x8D, 0x24, 0x08, 0x21, 0x00, 0x80, 0x04, 0x00, 0x06, 0x01
	.byte 0x38, 0x8C, 0x24, 0x08, 0x21, 0x00, 0x80, 0x7F, 0x00, 0x06, 0x01, 0x38, 0x8C, 0x24, 0x08, 0x02
	.byte 0x16, 0x10, 0x80, 0x00, 0x00, 0x05, 0x10, 0x8D, 0x24, 0x08, 0x02, 0x16, 0x10, 0x80, 0x01, 0x00
	.byte 0x05, 0x10, 0x8D, 0x24, 0x08, 0x02, 0x16, 0x10, 0x80, 0x02, 0x00, 0x05, 0x10, 0x8D, 0x24, 0x08
	.byte 0x02, 0x16, 0x10, 0x80, 0x03, 0x00, 0x05, 0x10, 0x8D, 0x24, 0x08, 0x02, 0x67, 0xB5, 0x9F, 0x24
	.byte 0x08, 0x66, 0x6F, 0x00, 0x00, 0x04, 0x00, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x05
	.byte 0x00, 0x06, 0x01, 0x38, 0x8C, 0x24, 0x08, 0x21, 0x00, 0x80, 0x7F, 0x00, 0x06, 0x01, 0x38, 0x8C
	.byte 0x24, 0x08, 0x19, 0x11, 0x80, 0x0D, 0x80, 0x05, 0x42, 0x8C, 0x24, 0x08, 0x02, 0x0F, 0x00, 0xDD
	.byte 0x9F, 0x24, 0x08, 0x09, 0x04, 0x05, 0x42, 0x8C, 0x24, 0x08, 0x6C, 0x02, 0x0F, 0x00, 0xA6, 0xA0
	.byte 0x24, 0x08, 0x09, 0x05, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01
	.byte 0x42, 0x8C, 0x24, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0xB6, 0x8D, 0x24, 0x08, 0x02
	.byte 0x0F, 0x00, 0x5C, 0xA0, 0x24, 0x08, 0x09, 0x05, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80
	.byte 0x00, 0x00, 0x06, 0x01, 0x42, 0x8C, 0x24, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0xB6
	.byte 0x8D, 0x24, 0x08, 0x02, 0x0F, 0x00, 0x16, 0xA0, 0x24, 0x08, 0x09, 0x04, 0x05, 0x42, 0x8C, 0x24
	.byte 0x08, 0x6C, 0x02, 0x0F, 0x00, 0x34, 0xA0, 0x24, 0x08, 0x09, 0x04, 0x05, 0x42, 0x8C, 0x24, 0x08
	.byte 0x6C, 0x02, 0x0F, 0x00, 0xBA, 0xA0, 0x24, 0x08, 0x09, 0x04, 0x68, 0x6B, 0x16, 0x86, 0x40, 0x01
	.byte 0x00, 0x03, 0x25, 0xB2, 0x01, 0x16, 0x06, 0x80, 0x00, 0x00, 0x69, 0x4F, 0x0E, 0x00, 0x72, 0x9B
	.byte 0x24, 0x08, 0x51, 0x00, 0x00, 0x4F, 0x01, 0x00, 0x38, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B
	.byte 0x04, 0x62, 0x8F, 0x24, 0x08, 0x04, 0x21, 0x8E, 0x24, 0x08, 0x04, 0x6B, 0x8E, 0x24, 0x08, 0x04
	.byte 0xC6, 0x8E, 0x24, 0x08, 0x04, 0x24, 0x8F, 0x24, 0x08, 0x04, 0x30, 0x96, 0x24, 0x08, 0x04, 0xD4
	.byte 0x96, 0x24, 0x08, 0x04, 0xB6, 0x97, 0x24, 0x08, 0x04, 0x03, 0x98, 0x24, 0x08, 0x04, 0x4A, 0x98
	.byte 0x24, 0x08, 0x04, 0x65, 0x99, 0x24, 0x08, 0x16, 0x86, 0x40, 0x02, 0x00, 0x03, 0x19, 0x00, 0x80
	.byte 0x10, 0x80, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01, 0x53, 0x8E, 0x24, 0x08, 0x21, 0x00, 0x80
	.byte 0x01, 0x00, 0x06, 0x01, 0x59, 0x8E, 0x24, 0x08, 0x21, 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0x5F
	.byte 0x8E, 0x24, 0x08, 0x21, 0x00, 0x80, 0x03, 0x00, 0x06, 0x01, 0x65, 0x8E, 0x24, 0x08, 0x03, 0x16
	.byte 0x09, 0x80, 0x05, 0x00, 0x03, 0x16, 0x09, 0x80, 0x06, 0x00, 0x03, 0x16, 0x09, 0x80, 0x07, 0x00
	.byte 0x03, 0x16, 0x09, 0x80, 0x08, 0x00, 0x03, 0x19, 0x00, 0x80, 0x11, 0x80, 0x21, 0x00, 0x80, 0x00
	.byte 0x00, 0x06, 0x01, 0xA8, 0x8E, 0x24, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0xAE, 0x8E
	.byte 0x24, 0x08, 0x21, 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0xB4, 0x8E, 0x24, 0x08, 0x21, 0x00, 0x80
	.byte 0x03, 0x00, 0x06, 0x01, 0xBA, 0x8E, 0x24, 0x08, 0x21, 0x00, 0x80, 0x04, 0x00, 0x06, 0x01, 0xC0
	.byte 0x8E, 0x24, 0x08, 0x03, 0x16, 0x08, 0x80, 0x00, 0x00, 0x03, 0x16, 0x08, 0x80, 0x01, 0x00, 0x03
	.byte 0x16, 0x08, 0x80, 0x02, 0x00, 0x03, 0x16, 0x08, 0x80, 0x03, 0x00, 0x03, 0x16, 0x08, 0x80, 0x04
	.byte 0x00, 0x03, 0x84, 0x01, 0x08, 0x80, 0x84, 0x02, 0x09, 0x80, 0x04, 0xE0, 0x8E, 0x24, 0x08, 0x69
	.byte 0x4F, 0x01, 0x00, 0x3A, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B, 0x03, 0x21, 0x88, 0x40, 0x05
	.byte 0x00, 0x06, 0x01, 0xF6, 0x8E, 0x24, 0x08, 0x69, 0x0F, 0x00, 0x7F, 0xA1, 0x24, 0x08, 0x09, 0x04
	.byte 0x6B, 0x03, 0x26, 0x0D, 0x80, 0xB4, 0x01, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0x0D, 0x8F
	.byte 0x24, 0x08, 0x9B, 0xCD, 0xA1, 0x24, 0x08, 0x66, 0x03, 0x9B, 0x80, 0xAB, 0x24, 0x08, 0x66, 0x04
	.byte 0x62, 0x8F, 0x24, 0x08, 0x9B, 0xB3, 0xAB, 0x24, 0x08, 0x66, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x03
	.byte 0x04, 0x78, 0x8F, 0x24, 0x08, 0x04, 0x01, 0x90, 0x24, 0x08, 0x04, 0x7E, 0x91, 0x24, 0x08, 0x04
	.byte 0x04, 0x91, 0x24, 0x08, 0x04, 0xA9, 0x95, 0x24, 0x08, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x04, 0x62
	.byte 0x8F, 0x24, 0x08, 0x17, 0x06, 0x80, 0x01, 0x00, 0x21, 0x06, 0x80, 0x04, 0x00, 0x06, 0x05, 0x24
	.byte 0x8F, 0x24, 0x08, 0x04, 0x5F, 0x90, 0x24, 0x08, 0x16, 0x01, 0x40, 0x06, 0x00, 0x03, 0x26, 0x0D
	.byte 0x80, 0xB4, 0x01, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0x73, 0x8F, 0x24, 0x08, 0x03, 0x25
	.byte 0xB0, 0x01, 0x27, 0x03, 0x21, 0x06, 0x80, 0x00, 0x00, 0x06, 0x01, 0xA5, 0x8F, 0x24, 0x08, 0x21
	.byte 0x06, 0x80, 0x01, 0x00, 0x06, 0x01, 0xBC, 0x8F, 0x24, 0x08, 0x21, 0x06, 0x80, 0x02, 0x00, 0x06
	.byte 0x01, 0xD3, 0x8F, 0x24, 0x08, 0x21, 0x06, 0x80, 0x03, 0x00, 0x06, 0x01, 0xEA, 0x8F, 0x24, 0x08
	.byte 0x03, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x69, 0x4F, 0x03, 0x00, 0x81, 0x9B, 0x24, 0x08, 0x51, 0x00
	.byte 0x00, 0x6B, 0x16, 0x0B, 0x80, 0x03, 0x00, 0x03, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x69, 0x4F, 0x04
	.byte 0x00, 0x8D, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B, 0x16, 0x0B, 0x80, 0x04, 0x00, 0x03, 0x04
	.byte 0x62, 0x8F, 0x24, 0x08, 0x69, 0x4F, 0x05, 0x00, 0x95, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B
	.byte 0x16, 0x0B, 0x80, 0x05, 0x00, 0x03, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x69, 0x4F, 0x0E, 0x00, 0x9D
	.byte 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B, 0x16, 0x0B, 0x80, 0x0E, 0x00, 0x03, 0x25, 0x51, 0x00
	.byte 0x17, 0x06, 0x80, 0x01, 0x00, 0x83, 0x01, 0x06, 0x80, 0x69, 0x4F, 0x0B, 0x80, 0x4F, 0x9B, 0x24
	.byte 0x08, 0x51, 0x00, 0x00, 0x6B, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x04, 0xAF, 0x9B, 0x24, 0x08, 0x55
	.byte 0x0D, 0x00, 0x2F, 0x0A, 0x00, 0x69, 0x4F, 0x0B, 0x80, 0x4F, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00
	.byte 0x6B, 0x17, 0x06, 0x80, 0xFF, 0xFF, 0x2F, 0x0F, 0x00, 0x25, 0x3F, 0x01, 0x04, 0x46, 0x90, 0x24
	.byte 0x08, 0x03, 0x21, 0x88, 0x40, 0x05, 0x00, 0x06, 0x01, 0x58, 0x90, 0x24, 0x08, 0x67, 0x23, 0xA2
	.byte 0x24, 0x08, 0x66, 0x03, 0x9B, 0x23, 0xA2, 0x24, 0x08, 0x66, 0x03, 0x04, 0x9B, 0x90, 0x24, 0x08
	.byte 0x04, 0xE8, 0x90, 0x24, 0x08, 0x2F, 0xDF, 0x00, 0x66, 0x04, 0x4A, 0x98, 0x24, 0x08, 0x4F, 0x01
	.byte 0x00, 0x52, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x4F, 0x02, 0x00, 0x54, 0x9B, 0x24, 0x08, 0x51
	.byte 0x00, 0x00, 0x28, 0x14, 0x00, 0x4F, 0x01, 0x00, 0x42, 0x9B, 0x24, 0x08, 0x4F, 0x02, 0x00, 0x42
	.byte 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x03, 0x21, 0x88, 0x40, 0x05, 0x00, 0x06, 0x01, 0xAF, 0x90
	.byte 0x24, 0x08, 0x0F, 0x00, 0x44, 0xA2, 0x24, 0x08, 0x09, 0x04, 0x03, 0x26, 0x0D, 0x80, 0xB4, 0x01
	.byte 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0xC6, 0x90, 0x24, 0x08, 0x9B, 0x44, 0xA2, 0x24, 0x08
	.byte 0x66, 0x03, 0x9B, 0xD6, 0xAB, 0x24, 0x08, 0x66, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x9B, 0x02, 0xAC
	.byte 0x24, 0x08, 0x66, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x9B, 0x27, 0xAC, 0x24, 0x08, 0x66, 0x04, 0x62
	.byte 0x8F, 0x24, 0x08, 0x03, 0x21, 0x88, 0x40, 0x05, 0x00, 0x06, 0x01, 0xF9, 0x90, 0x24, 0x08, 0x67
	.byte 0xB5, 0xA2, 0x24, 0x08, 0x03, 0x9B, 0xB5, 0xA2, 0x24, 0x08, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x03
	.byte 0x04, 0x62, 0x8F, 0x24, 0x08, 0x4F, 0x01, 0x00, 0x62, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x2F
	.byte 0xDF, 0x00, 0x04, 0x9E, 0x98, 0x24, 0x08, 0x4F, 0x09, 0x00, 0x6A, 0x9B, 0x24, 0x08, 0x4F, 0x0C
	.byte 0x00, 0x6E, 0x9B, 0x24, 0x08, 0x4F, 0x07, 0x00, 0x6A, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x4F
	.byte 0x01, 0x00, 0x6A, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x4F, 0x0A, 0x00, 0x62, 0x9B, 0x24, 0x08
	.byte 0x4F, 0x0B, 0x00, 0x6E, 0x9B, 0x24, 0x08, 0x4F, 0x06, 0x00, 0x66, 0x9B, 0x24, 0x08, 0x4F, 0x08
	.byte 0x00, 0x62, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x4F, 0x01, 0x00, 0x74, 0x9B, 0x24, 0x08, 0x51
	.byte 0x00, 0x00, 0x4F, 0x01, 0x00, 0x7D, 0x9B, 0x24, 0x08, 0x4F, 0x02, 0x00, 0x78, 0x9B, 0x24, 0x08
	.byte 0x51, 0x00, 0x00, 0x6B, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x03, 0x25, 0x57, 0x00, 0x21, 0x88, 0x40
	.byte 0x01, 0x00, 0x07, 0x01, 0x83, 0x92, 0x24, 0x08, 0x21, 0x88, 0x40, 0x02, 0x00, 0x07, 0x01, 0xE1
	.byte 0x92, 0x24, 0x08, 0x21, 0x88, 0x40, 0x03, 0x00, 0x07, 0x01, 0x3F, 0x93, 0x24, 0x08, 0x21, 0x88
	.byte 0x40, 0x04, 0x00, 0x07, 0x01, 0x9D, 0x93, 0x24, 0x08, 0x21, 0x88, 0x40, 0x05, 0x00, 0x07, 0x01
	.byte 0xFB, 0x93, 0x24, 0x08, 0x16, 0x01, 0x40, 0x09, 0x00, 0x16, 0x02, 0x40, 0x09, 0x00, 0x16, 0x03
	.byte 0x40, 0x09, 0x00, 0x16, 0x04, 0x40, 0x09, 0x00, 0x16, 0x05, 0x40, 0x09, 0x00, 0x16, 0x06, 0x40
	.byte 0x09, 0x00, 0x16, 0x07, 0x40, 0x09, 0x00, 0x16, 0x08, 0x40, 0x09, 0x00, 0x21, 0x00, 0x40, 0x00
	.byte 0x00, 0x07, 0x02, 0x14, 0x92, 0x24, 0x08, 0x16, 0x01, 0x40, 0x00, 0x00, 0x16, 0x02, 0x40, 0x00
	.byte 0x00, 0x16, 0x03, 0x40, 0x00, 0x00, 0x16, 0x04, 0x40, 0x00, 0x00, 0x16, 0x05, 0x40, 0x00, 0x00
	.byte 0x16, 0x06, 0x40, 0x00, 0x00, 0x16, 0x07, 0x40, 0x00, 0x00, 0x16, 0x08, 0x40, 0x00, 0x00, 0x03
	.byte 0x16, 0x0D, 0x80, 0x08, 0x00, 0x25, 0x53, 0x01, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x07, 0x01, 0x89
	.byte 0x94, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x07, 0x01, 0xAD, 0x94, 0x24, 0x08, 0x21, 0x0D
	.byte 0x80, 0x02, 0x00, 0x07, 0x01, 0xD1, 0x94, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x03, 0x00, 0x07, 0x01
	.byte 0xF5, 0x94, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x04, 0x00, 0x07, 0x01, 0x19, 0x95, 0x24, 0x08, 0x21
	.byte 0x0D, 0x80, 0x05, 0x00, 0x07, 0x01, 0x3D, 0x95, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x06, 0x00, 0x07
	.byte 0x01, 0x61, 0x95, 0x24, 0x08, 0x21, 0x0D, 0x80, 0x07, 0x00, 0x07, 0x01, 0x85, 0x95, 0x24, 0x08
	.byte 0x21, 0x00, 0x40, 0x00, 0x00, 0x06, 0x02, 0x14, 0x92, 0x24, 0x08, 0x51, 0x00, 0x00, 0x03, 0x21
	.byte 0x04, 0x80, 0x50, 0x00, 0x06, 0x02, 0x83, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0x46, 0x00, 0x06
	.byte 0x02, 0x7D, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0x3C, 0x00, 0x06, 0x02, 0x77, 0x94, 0x24, 0x08
	.byte 0x21, 0x04, 0x80, 0x32, 0x00, 0x06, 0x02, 0x71, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0x28, 0x00
	.byte 0x06, 0x02, 0x6B, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0x1E, 0x00, 0x06, 0x02, 0x65, 0x94, 0x24
	.byte 0x08, 0x21, 0x04, 0x80, 0x14, 0x00, 0x06, 0x02, 0x5F, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0x0A
	.byte 0x00, 0x06, 0x02, 0x59, 0x94, 0x24, 0x08, 0x16, 0x00, 0x40, 0x00, 0x00, 0x03, 0x21, 0x04, 0x80
	.byte 0xE6, 0x00, 0x06, 0x02, 0x83, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0xD2, 0x00, 0x06, 0x02, 0x7D
	.byte 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0xBE, 0x00, 0x06, 0x02, 0x77, 0x94, 0x24, 0x08, 0x21, 0x04
	.byte 0x80, 0xAA, 0x00, 0x06, 0x02, 0x71, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0x96, 0x00, 0x06, 0x02
	.byte 0x6B, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0x82, 0x00, 0x06, 0x02, 0x65, 0x94, 0x24, 0x08, 0x21
	.byte 0x04, 0x80, 0x6E, 0x00, 0x06, 0x02, 0x5F, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0x5A, 0x00, 0x06
	.byte 0x02, 0x59, 0x94, 0x24, 0x08, 0x16, 0x00, 0x40, 0x00, 0x00, 0x03, 0x21, 0x04, 0x80, 0x7C, 0x01
	.byte 0x06, 0x02, 0x83, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0x5E, 0x01, 0x06, 0x02, 0x7D, 0x94, 0x24
	.byte 0x08, 0x21, 0x04, 0x80, 0x40, 0x01, 0x06, 0x02, 0x77, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0x22
	.byte 0x01, 0x06, 0x02, 0x71, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0x04, 0x01, 0x06, 0x02, 0x6B, 0x94
	.byte 0x24, 0x08, 0x21, 0x04, 0x80, 0xE6, 0x00, 0x06, 0x02, 0x65, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80
	.byte 0xC8, 0x00, 0x06, 0x02, 0x5F, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0xAA, 0x00, 0x06, 0x02, 0x59
	.byte 0x94, 0x24, 0x08, 0x16, 0x00, 0x40, 0x00, 0x00, 0x03, 0x21, 0x04, 0x80, 0x58, 0x02, 0x06, 0x02
	.byte 0x83, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0x30, 0x02, 0x06, 0x02, 0x7D, 0x94, 0x24, 0x08, 0x21
	.byte 0x04, 0x80, 0x08, 0x02, 0x06, 0x02, 0x77, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0xE0, 0x01, 0x06
	.byte 0x02, 0x71, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0xB8, 0x01, 0x06, 0x02, 0x6B, 0x94, 0x24, 0x08
	.byte 0x21, 0x04, 0x80, 0x90, 0x01, 0x06, 0x02, 0x65, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0x68, 0x01
	.byte 0x06, 0x02, 0x5F, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0x40, 0x01, 0x06, 0x02, 0x59, 0x94, 0x24
	.byte 0x08, 0x16, 0x00, 0x40, 0x00, 0x00, 0x03, 0x21, 0x04, 0x80, 0x58, 0x02, 0x06, 0x02, 0x83, 0x94
	.byte 0x24, 0x08, 0x21, 0x04, 0x80, 0x26, 0x02, 0x06, 0x02, 0x7D, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80
	.byte 0xF4, 0x01, 0x06, 0x02, 0x77, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0xC2, 0x01, 0x06, 0x02, 0x71
	.byte 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0x90, 0x01, 0x06, 0x02, 0x6B, 0x94, 0x24, 0x08, 0x21, 0x04
	.byte 0x80, 0x2C, 0x01, 0x06, 0x02, 0x65, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0xC8, 0x00, 0x06, 0x02
	.byte 0x5F, 0x94, 0x24, 0x08, 0x21, 0x04, 0x80, 0x64, 0x00, 0x06, 0x02, 0x59, 0x94, 0x24, 0x08, 0x16
	.byte 0x00, 0x40, 0x00, 0x00, 0x03, 0x16, 0x00, 0x40, 0x01, 0x00, 0x03, 0x16, 0x00, 0x40, 0x02, 0x00
	.byte 0x03, 0x16, 0x00, 0x40, 0x03, 0x00, 0x03, 0x16, 0x00, 0x40, 0x04, 0x00, 0x03, 0x16, 0x00, 0x40
	.byte 0x05, 0x00, 0x03, 0x16, 0x00, 0x40, 0x06, 0x00, 0x03, 0x16, 0x00, 0x40, 0x07, 0x00, 0x03, 0x16
	.byte 0x00, 0x40, 0x08, 0x00, 0x03, 0x21, 0x01, 0x40, 0x01, 0x00, 0x06, 0x01, 0xAC, 0x94, 0x24, 0x08
	.byte 0x4F, 0x06, 0x00, 0x40, 0x9B, 0x24, 0x08, 0x2F, 0x15, 0x00, 0x28, 0x0E, 0x00, 0x16, 0x01, 0x40
	.byte 0x01, 0x00, 0x17, 0x00, 0x40, 0xFF, 0xFF, 0x03, 0x03, 0x21, 0x02, 0x40, 0x01, 0x00, 0x06, 0x01
	.byte 0xD0, 0x94, 0x24, 0x08, 0x4F, 0x0C, 0x00, 0x40, 0x9B, 0x24, 0x08, 0x2F, 0x15, 0x00, 0x28, 0x0E
	.byte 0x00, 0x16, 0x02, 0x40, 0x01, 0x00, 0x17, 0x00, 0x40, 0xFF, 0xFF, 0x03, 0x03, 0x21, 0x03, 0x40
	.byte 0x01, 0x00, 0x06, 0x01, 0xF4, 0x94, 0x24, 0x08, 0x4F, 0x07, 0x00, 0x40, 0x9B, 0x24, 0x08, 0x2F
	.byte 0x15, 0x00, 0x28, 0x0E, 0x00, 0x16, 0x03, 0x40, 0x01, 0x00, 0x17, 0x00, 0x40, 0xFF, 0xFF, 0x03
	.byte 0x03, 0x21, 0x04, 0x40, 0x01, 0x00, 0x06, 0x01, 0x18, 0x95, 0x24, 0x08, 0x4F, 0x08, 0x00, 0x40
	.byte 0x9B, 0x24, 0x08, 0x2F, 0x15, 0x00, 0x28, 0x0E, 0x00, 0x16, 0x04, 0x40, 0x01, 0x00, 0x17, 0x00
	.byte 0x40, 0xFF, 0xFF, 0x03, 0x03, 0x21, 0x05, 0x40, 0x01, 0x00, 0x06, 0x01, 0x3C, 0x95, 0x24, 0x08
	.byte 0x4F, 0x09, 0x00, 0x40, 0x9B, 0x24, 0x08, 0x2F, 0x15, 0x00, 0x28, 0x0E, 0x00, 0x16, 0x05, 0x40
	.byte 0x01, 0x00, 0x17, 0x00, 0x40, 0xFF, 0xFF, 0x03, 0x03, 0x21, 0x06, 0x40, 0x01, 0x00, 0x06, 0x01
	.byte 0x60, 0x95, 0x24, 0x08, 0x4F, 0x0A, 0x00, 0x40, 0x9B, 0x24, 0x08, 0x2F, 0x15, 0x00, 0x28, 0x0E
	.byte 0x00, 0x16, 0x06, 0x40, 0x01, 0x00, 0x17, 0x00, 0x40, 0xFF, 0xFF, 0x03, 0x03, 0x21, 0x07, 0x40
	.byte 0x01, 0x00, 0x06, 0x01, 0x84, 0x95, 0x24, 0x08, 0x4F, 0x0B, 0x00, 0x40, 0x9B, 0x24, 0x08, 0x2F
	.byte 0x15, 0x00, 0x28, 0x0E, 0x00, 0x16, 0x07, 0x40, 0x01, 0x00, 0x17, 0x00, 0x40, 0xFF, 0xFF, 0x03
	.byte 0x03, 0x21, 0x08, 0x40, 0x01, 0x00, 0x06, 0x01, 0xA8, 0x95, 0x24, 0x08, 0x4F, 0x0F, 0x00, 0x40
	.byte 0x9B, 0x24, 0x08, 0x2F, 0x15, 0x00, 0x28, 0x0E, 0x00, 0x16, 0x08, 0x40, 0x01, 0x00, 0x17, 0x00
	.byte 0x40, 0xFF, 0xFF, 0x03, 0x03, 0x68, 0x6C, 0x53, 0x0D, 0x00, 0x25, 0x40, 0x01, 0x04, 0x62, 0x8F
	.byte 0x24, 0x08, 0x19, 0x00, 0x80, 0x06, 0x80, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01, 0xE8, 0x95
	.byte 0x24, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0xFA, 0x95, 0x24, 0x08, 0x21, 0x00, 0x80
	.byte 0x02, 0x00, 0x06, 0x01, 0x0C, 0x96, 0x24, 0x08, 0x21, 0x00, 0x80, 0x03, 0x00, 0x06, 0x01, 0x1E
	.byte 0x96, 0x24, 0x08, 0x03, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x69, 0x4F, 0x0B, 0x80, 0x87, 0x9B, 0x24
	.byte 0x08, 0x51, 0x00, 0x00, 0x6B, 0x03, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x69, 0x4F, 0x0B, 0x80, 0x91
	.byte 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B, 0x03, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x69, 0x4F, 0x0B
	.byte 0x80, 0x99, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B, 0x03, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x69
	.byte 0x4F, 0x0B, 0x80, 0xA3, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B, 0x03, 0x69, 0x4F, 0x01, 0x00
	.byte 0x56, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x04, 0x82, 0x96, 0x24
	.byte 0x08, 0x66, 0x4F, 0x01, 0x00, 0x44, 0x9B, 0x24, 0x08, 0x4F, 0x02, 0x00, 0x48, 0x9B, 0x24, 0x08
	.byte 0x51, 0x00, 0x00, 0x6B, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x16, 0x09, 0x40, 0x01, 0x00, 0x25, 0xB3
	.byte 0x01, 0x8C, 0x25, 0xB2, 0x01, 0x16, 0x09, 0x40, 0x00, 0x00, 0x69, 0x4F, 0x01, 0x00, 0x48, 0x9B
	.byte 0x24, 0x08, 0x4F, 0x02, 0x00, 0x44, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B, 0x03, 0x21, 0x88
	.byte 0x40, 0x05, 0x00, 0x06, 0x01, 0x96, 0x96, 0x24, 0x08, 0x0F, 0x00, 0xC4, 0xA2, 0x24, 0x08, 0x09
	.byte 0x04, 0x03, 0x26, 0x0D, 0x80, 0xB4, 0x01, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0xAD, 0x96
	.byte 0x24, 0x08, 0x9B, 0xC4, 0xA2, 0x24, 0x08, 0x66, 0x03, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x9B, 0x47
	.byte 0xAC, 0x24, 0x08, 0x66, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x9B, 0x7F, 0xAC, 0x24, 0x08, 0x66, 0x04
	.byte 0x62, 0x8F, 0x24, 0x08, 0x9B, 0xB0, 0xAC, 0x24, 0x08, 0x66, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x03
	.byte 0x04, 0x62, 0x8F, 0x24, 0x08, 0x04, 0x2A, 0x97, 0x24, 0x08, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x04
	.byte 0x4D, 0x97, 0x24, 0x08, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x4F, 0x01, 0x00, 0x3E, 0x9B, 0x24, 0x08
	.byte 0x51, 0x00, 0x00, 0x04, 0x70, 0x97, 0x24, 0x08, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x04, 0x93, 0x97
	.byte 0x24, 0x08, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x4F, 0x01, 0x00, 0x42, 0x9B, 0x24, 0x08, 0x51, 0x00
	.byte 0x00, 0x68, 0x6B, 0x25, 0xB3, 0x01, 0x16, 0x09, 0x40, 0x01, 0x00, 0x8D, 0x16, 0x09, 0x40, 0x00
	.byte 0x00, 0x33, 0xB7, 0x01, 0x00, 0x03, 0x21, 0x88, 0x40, 0x05, 0x00, 0x06, 0x01, 0x3E, 0x97, 0x24
	.byte 0x08, 0x0F, 0x00, 0x46, 0xA3, 0x24, 0x08, 0x09, 0x04, 0x03, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x9B
	.byte 0x46, 0xA3, 0x24, 0x08, 0x66, 0x28, 0x1E, 0x00, 0x03, 0x21, 0x88, 0x40, 0x05, 0x00, 0x06, 0x01
	.byte 0x61, 0x97, 0x24, 0x08, 0x0F, 0x00, 0x57, 0xA3, 0x24, 0x08, 0x09, 0x04, 0x03, 0x04, 0x62, 0x8F
	.byte 0x24, 0x08, 0x9B, 0x57, 0xA3, 0x24, 0x08, 0x66, 0x28, 0x1E, 0x00, 0x03, 0x21, 0x88, 0x40, 0x05
	.byte 0x00, 0x06, 0x01, 0x84, 0x97, 0x24, 0x08, 0x0F, 0x00, 0x89, 0xA3, 0x24, 0x08, 0x09, 0x04, 0x03
	.byte 0x04, 0x62, 0x8F, 0x24, 0x08, 0x9B, 0x89, 0xA3, 0x24, 0x08, 0x66, 0x28, 0x1E, 0x00, 0x03, 0x21
	.byte 0x88, 0x40, 0x05, 0x00, 0x06, 0x01, 0xA7, 0x97, 0x24, 0x08, 0x0F, 0x00, 0xC1, 0xA3, 0x24, 0x08
	.byte 0x09, 0x04, 0x03, 0x04, 0x62, 0x8F, 0x24, 0x08, 0x9B, 0xC1, 0xA3, 0x24, 0x08, 0x66, 0x28, 0x1E
	.byte 0x00, 0x03, 0x25, 0x4C, 0x00, 0x19, 0x00, 0x80, 0x05, 0x80, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06
	.byte 0x01, 0xEB, 0x97, 0x24, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0xF1, 0x97, 0x24, 0x08
	.byte 0x21, 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0xF7, 0x97, 0x24, 0x08, 0x21, 0x00, 0x80, 0x03, 0x00
	.byte 0x06, 0x01, 0xFD, 0x97, 0x24, 0x08, 0x03, 0x16, 0x03, 0x40, 0x03, 0x00, 0x03, 0x16, 0x03, 0x40
	.byte 0x04, 0x00, 0x03, 0x16, 0x03, 0x40, 0x05, 0x00, 0x03, 0x16, 0x03, 0x40, 0x0E, 0x00, 0x03, 0x25
	.byte 0x4F, 0x00, 0x25, 0x50, 0x00, 0x17, 0x05, 0x80, 0x01, 0x00, 0x83, 0x01, 0x05, 0x80, 0x17, 0x05
	.byte 0x80, 0xFF, 0xFF, 0x04, 0x2F, 0x98, 0x24, 0x08, 0x4F, 0x03, 0x40, 0x4C, 0x9B, 0x24, 0x08, 0x51
	.byte 0x00, 0x00, 0x2F, 0xDF, 0x00, 0x16, 0x01, 0x40, 0x00, 0x00, 0x03, 0x21, 0x88, 0x40, 0x05, 0x00
	.byte 0x06, 0x01, 0x43, 0x98, 0x24, 0x08, 0x0F, 0x00, 0xD6, 0xA3, 0x24, 0x08, 0x09, 0x04, 0x03, 0x9B
	.byte 0xD6, 0xA3, 0x24, 0x08, 0x66, 0x03, 0x17, 0x01, 0x40, 0x01, 0x00, 0x69, 0x21, 0x88, 0x40, 0x01
	.byte 0x00, 0x07, 0x02, 0x9E, 0x98, 0x24, 0x08, 0x4F, 0x09, 0x00, 0x6A, 0x9B, 0x24, 0x08, 0x4F, 0x0C
	.byte 0x00, 0x6E, 0x9B, 0x24, 0x08, 0x4F, 0x07, 0x00, 0x6A, 0x9B, 0x24, 0x08, 0x28, 0x1E, 0x00, 0x4F
	.byte 0x0A, 0x00, 0x62, 0x9B, 0x24, 0x08, 0x4F, 0x0B, 0x00, 0x6E, 0x9B, 0x24, 0x08, 0x4F, 0x06, 0x00
	.byte 0x66, 0x9B, 0x24, 0x08, 0x4F, 0x08, 0x00, 0x62, 0x9B, 0x24, 0x08, 0x21, 0x01, 0x40, 0x04, 0x00
	.byte 0x06, 0x05, 0x4A, 0x98, 0x24, 0x08, 0x28, 0x1E, 0x00, 0x03, 0xAB, 0x00, 0x01, 0xAB, 0x02, 0x01
	.byte 0xAB, 0x04, 0x04, 0xAB, 0x06, 0x01, 0xAB, 0x08, 0x01, 0xAB, 0x0A, 0x01, 0xAB, 0x0C, 0x01, 0xAB
	.byte 0x0E, 0x01, 0xAB, 0x10, 0x01, 0xAB, 0x12, 0x01, 0xAB, 0x14, 0x04, 0xAB, 0x16, 0x04, 0xAB, 0x19
	.byte 0x04, 0xAB, 0x1B, 0x03, 0xAB, 0x1C, 0x04, 0x28, 0x0A, 0x00, 0xAB, 0x00, 0x04, 0xAB, 0x02, 0x04
	.byte 0xAB, 0x04, 0x04, 0xAB, 0x06, 0x04, 0xAB, 0x08, 0x04, 0xAB, 0x0A, 0x03, 0xAB, 0x0C, 0x03, 0xAB
	.byte 0x0E, 0x03, 0xAB, 0x10, 0x03, 0xAB, 0x12, 0x03, 0xAB, 0x14, 0x01, 0xAB, 0x16, 0x01, 0xAB, 0x19
	.byte 0x02, 0xAB, 0x1B, 0x02, 0xAB, 0x1C, 0x02, 0x28, 0x0A, 0x00, 0xAB, 0x01, 0x02, 0xAB, 0x03, 0x02
	.byte 0xAB, 0x05, 0x02, 0xAB, 0x07, 0x02, 0xAB, 0x09, 0x04, 0xAB, 0x0B, 0x02, 0xAB, 0x0F, 0x02, 0xAB
	.byte 0x0D, 0x02, 0xAB, 0x11, 0x02, 0xAB, 0x13, 0x02, 0xAB, 0x15, 0x03, 0xAB, 0x17, 0x03, 0xAB, 0x18
	.byte 0x03, 0xAB, 0x1A, 0x04, 0xAB, 0x1D, 0x03, 0xAB, 0x1E, 0x03, 0x28, 0x0A, 0x00, 0xAB, 0x01, 0x04
	.byte 0xAB, 0x03, 0x04, 0xAB, 0x05, 0x04, 0xAB, 0x07, 0x04, 0xAB, 0x09, 0x04, 0xAB, 0x0B, 0x03, 0xAB
	.byte 0x0F, 0x03, 0xAB, 0x0D, 0x03, 0xAB, 0x11, 0x03, 0xAB, 0x13, 0x03, 0xAB, 0x15, 0x01, 0xAB, 0x17
	.byte 0x01, 0xAB, 0x18, 0x01, 0xAB, 0x1A, 0x02, 0xAB, 0x1D, 0x02, 0xAB, 0x1E, 0x02, 0x28, 0x0A, 0x00
	.byte 0x03, 0x21, 0x88, 0x40, 0x05, 0x00, 0x06, 0x01, 0x07, 0x9A, 0x24, 0x08, 0x04, 0xCD, 0x99, 0x24
	.byte 0x08, 0x2B, 0x02, 0x00, 0x06, 0x01, 0xB1, 0x99, 0x24, 0x08, 0x69, 0x0F, 0x00, 0x25, 0xA4, 0x24
	.byte 0x08, 0x09, 0x04, 0x6B, 0x04, 0x27, 0x9A, 0x24, 0x08, 0x04, 0x8D, 0x9A, 0x24, 0x08, 0x2F, 0xDF
	.byte 0x00, 0x16, 0x01, 0x40, 0x00, 0x00, 0x04, 0x4A, 0x98, 0x24, 0x08, 0x28, 0x1E, 0x00, 0x25, 0x86
	.byte 0x00, 0x21, 0x04, 0x80, 0x01, 0x00, 0x06, 0x01, 0x01, 0x9A, 0x24, 0x08, 0x03, 0x69, 0x0F, 0x00
	.byte 0x04, 0xA4, 0x24, 0x08, 0x09, 0x04, 0x6B, 0x28, 0x5A, 0x00, 0x25, 0x86, 0x00, 0x21, 0x04, 0x80
	.byte 0x01, 0x00, 0x06, 0x01, 0x01, 0x9A, 0x24, 0x08, 0x03, 0x26, 0x0D, 0x80, 0x58, 0x00, 0x21, 0x0D
	.byte 0x80, 0x01, 0x00, 0x06, 0x01, 0xDE, 0x99, 0x24, 0x08, 0x03, 0x25, 0x4C, 0x00, 0x21, 0x05, 0x80
	.byte 0x03, 0x00, 0x06, 0x01, 0xED, 0x99, 0x24, 0x08, 0x03, 0x21, 0x10, 0x80, 0x03, 0x00, 0x06, 0x01
	.byte 0xFC, 0x99, 0x24, 0x08, 0x29, 0x02, 0x00, 0x03, 0x03, 0x29, 0x0E, 0x01, 0x03, 0x16, 0x99, 0x40
	.byte 0x01, 0x00, 0x03, 0x28, 0x3C, 0x00, 0x25, 0x4D, 0x00, 0x25, 0x4C, 0x00, 0x25, 0x86, 0x00, 0x21
	.byte 0x04, 0x80, 0x01, 0x00, 0x06, 0x01, 0x20, 0x9A, 0x24, 0x08, 0x68, 0x03, 0x16, 0x99, 0x40, 0x02
	.byte 0x00, 0x03, 0x03, 0x19, 0x00, 0x80, 0x05, 0x80, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01, 0x59
	.byte 0x9A, 0x24, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0x66, 0x9A, 0x24, 0x08, 0x21, 0x00
	.byte 0x80, 0x02, 0x00, 0x06, 0x01, 0x73, 0x9A, 0x24, 0x08, 0x21, 0x00, 0x80, 0x03, 0x00, 0x06, 0x01
	.byte 0x80, 0x9A, 0x24, 0x08, 0x03, 0x69, 0x4F, 0x03, 0x40, 0xA9, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00
	.byte 0x6B, 0x03, 0x69, 0x4F, 0x03, 0x40, 0xAD, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B, 0x03, 0x69
	.byte 0x4F, 0x03, 0x40, 0x58, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B, 0x03, 0x69, 0x4F, 0x03, 0x40
	.byte 0x5C, 0x9B, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B, 0x03, 0x25, 0x4C, 0x00, 0x21, 0x05, 0x80, 0x03
	.byte 0x00, 0x06, 0x01, 0xA6, 0x9A, 0x24, 0x08, 0x69, 0x0F, 0x00, 0x04, 0xA4, 0x24, 0x08, 0x09, 0x04
	.byte 0x6B, 0x03, 0x21, 0x88, 0x40, 0x02, 0x00, 0x07, 0x01, 0xFD, 0x99, 0x24, 0x08, 0x26, 0x0D, 0x80
	.byte 0x58, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x0E, 0x9B, 0x24, 0x08, 0x21, 0x10, 0x80
	.byte 0x03, 0x00, 0x06, 0x01, 0xEC, 0x9A, 0x24, 0x08, 0x69, 0x0F, 0x00, 0x04, 0xA4, 0x24, 0x08, 0x09
	.byte 0x04, 0x6B, 0x03, 0x69, 0x04, 0xEA, 0x30, 0x24, 0x08, 0x0F, 0x00, 0x83, 0xA4, 0x24, 0x08, 0x09
	.byte 0x04, 0x6B, 0x16, 0x8A, 0x40, 0x04, 0x00, 0x03, 0x1A, 0x00, 0x80, 0x0B, 0x00, 0x1A, 0x01, 0x80
	.byte 0x01, 0x00, 0x09, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0xD7, 0x9A, 0x24, 0x08, 0x69
	.byte 0x0F, 0x00, 0x04, 0xA4, 0x24, 0x08, 0x09, 0x04, 0x6B, 0x03, 0x25, 0x59, 0x00, 0xC3, 0x2A, 0x29
	.byte 0x9B, 0x08, 0x69, 0x0F, 0x00, 0x40, 0xA4, 0x24, 0x08, 0x09, 0x04, 0x31, 0x72, 0x01, 0x0F, 0x00
	.byte 0x5E, 0xA4, 0x24, 0x08, 0x09, 0x04, 0x32, 0x25, 0x50, 0x00, 0x0F, 0x00, 0x6D, 0xA4, 0x24, 0x08
	.byte 0x09, 0x04, 0x6B, 0x03, 0x08, 0xFE, 0x40, 0x09, 0x41, 0xFE, 0x28, 0xFE, 0x58, 0xFE, 0x25, 0xFE
	.byte 0x0A, 0x0A, 0x25, 0xFE, 0x0B, 0x0B, 0x25, 0xFE, 0x09, 0x25, 0xFE, 0x14, 0x14, 0xFE, 0x28, 0xFE
	.byte 0x27, 0xFE, 0x25, 0xFE, 0x0A, 0x0A, 0x09, 0xFE, 0x0A, 0x0A, 0x0A, 0x0A, 0x09, 0xFE, 0x02, 0x14
	.byte 0x4E, 0xFE, 0x01, 0x14, 0x4E, 0xFE, 0x03, 0x14, 0x4E, 0xFE, 0x00, 0x14, 0x4E, 0xFE, 0x01, 0xFE
	.byte 0x01, 0x14, 0x28, 0xFE, 0x27, 0x14, 0x14, 0x25, 0xFE, 0x14, 0x14, 0x25, 0xFE, 0x09, 0x0B, 0x0B
	.byte 0x0B, 0x26, 0xFE, 0x17, 0x17, 0x17, 0x15, 0x26, 0xFE, 0x09, 0x0B, 0x26, 0xFE, 0x17, 0x15, 0x26
	.byte 0xFE, 0x09, 0x0A, 0x26, 0xFE, 0x18, 0x15, 0x26, 0xFE, 0x09, 0x0A, 0x0A, 0x0A, 0x26, 0xFE, 0x18
	.byte 0x18, 0x18, 0x15, 0x26, 0xFE, 0x0B, 0x0B, 0x09, 0xFE, 0x09, 0xFE, 0x26, 0x0D, 0x80, 0xB8, 0x01
	.byte 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0xC0, 0x9B, 0x24, 0x08, 0x03, 0x03, 0x26, 0x0D, 0x80
	.byte 0xB8, 0x01, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0xD2, 0x9B, 0x24, 0x08, 0x03, 0x28, 0x09
	.byte 0x00, 0x03

	@ field-script:0x248B24 FieldScriptText_249BD6
	.globl gText_Rom_249BD6
gText_Rom_249BD6: @ 0x08249BD6
	.string "こんにちは！\pこちらでは　ポケモンコンテスト\nうけつけを　おこなって……\l……あら？\pおきゃくさまは　まだ　ポロックケースを\nもっていらっしゃらない　ようですね\pでは　こちらを　さしあげましょう！$"
	.if (. - gText_Rom_249BD6) > 0x63
	.error "gText_Rom_249BD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249BD6) < 0x63
	.space 0x63 - (. - gText_Rom_249BD6)
	.endif

	@ field-script:0x248B3B FieldScriptText_249C39
	.globl gText_Rom_249C39
gText_Rom_249C39: @ 0x08249C39
	.string "というわけで　あらためまして……\pこんにちは！\pこちらでは　ポケモンコンテスト\nうけつけを　おこなって　います！$"
	.if (. - gText_Rom_249C39) > 0x39
	.error "gText_Rom_249C39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249C39) < 0x39
	.space 0x39 - (. - gText_Rom_249C39)
	.endif

	@ field-script:0x248B1B FieldScriptText_249C72
	.globl gText_Rom_249C72
gText_Rom_249C72: @ 0x08249C72
	.string "こんにちは！\pこちらでは　ポケモンコンテスト\nうけつけを　おこなって　います！$"
	.if (. - gText_Rom_249C72) > 0x28
	.error "gText_Rom_249C72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249C72) < 0x28
	.space 0x28 - (. - gText_Rom_249C72)
	.endif
	@ Replaced baserom.gba range: offset=0x249C9A, size=0x2A
	.byte 0x0A, 0x2E, 0x16, 0x11, 0x1A, 0xFB, 0x0A, 0x11, 0x27, 0x1A, 0x00, 0x9F, 0x59, 0x73, 0x7E, 0x5A
	.byte 0x7E, 0x63, 0x5D, 0x64, 0x19, 0xFE, 0xA5, 0x22, 0x02, 0x0B, 0x1F, 0x00, 0x0E, 0x2E, 0x26, 0x03
	.byte 0x19, 0x00, 0x03, 0x09, 0x12, 0x09, 0x44, 0x0D, 0xAB, 0xFF

	@ field-script:0x248B8A FieldScriptText_249CC4
	.globl gText_Rom_249CC4
gText_Rom_249CC4: @ 0x08249CC4
	.string "あなたの　ポケモンも　コンテストに\nさんか　させて　みませんか？$"
	.if (. - gText_Rom_249CC4) > 0x21
	.error "gText_Rom_249CC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249CC4) < 0x21
	.space 0x21 - (. - gText_Rom_249CC4)
	.endif

	@ field-script:0x248BC7 FieldScriptText_249CE5
	.globl gText_Rom_249CE5
gText_Rom_249CE5: @ 0x08249CE5
	.string "どの　せつめいを　ききますか？$"
	.if (. - gText_Rom_249CE5) > 0x10
	.error "gText_Rom_249CE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249CE5) < 0x10
	.space 0x10 - (. - gText_Rom_249CE5)
	.endif

	@ field-script:0x248C10 FieldScriptText_249CF5
	.globl gText_Rom_249CF5
gText_Rom_249CF5: @ 0x08249CF5
	.string "ポケモンコンテストは　4にんの　トレーナーが\n1ぴきずつ　ポケモンを　もちよって\l4ひきで　おこなわれます！\pコンテスト　には　1じ　しんさと\n2じ　しんさが　あります！\p1じ　しんさでは　かいじょうの\nおきゃくさまが　きにいった　ポケモンを\lとうひょう　します！\p2じ　しんさでは　ポケモンが　じゅんばんに\nとくいな　わざで　アピールを　します！\lしんさいんに　ちゅうもくされたり\lおきゃくさまに　わざを　きにいられたり……\lとにかく　たくさん　めだって　ください！\p1じしんさと　2じしんさの　けっかから\nそうごうポイントを　だして\lいちばん　たかかった　ポケモンが\lゆうしょう　できます！$"
	.if (. - gText_Rom_249CF5) > 0x12a
	.error "gText_Rom_249CF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249CF5) < 0x12a
	.space 0x12a - (. - gText_Rom_249CF5)
	.endif

	@ field-script:0x248C1E FieldScriptText_249E1F
	.globl gText_Rom_249E1F
gText_Rom_249E1F: @ 0x08249E1F
	.string "コンテストには　5しゅるい　あります！\pかっこよさ　うつくしさ　かわいさ\nかしこさ　そして　たくましさ\lいじょうの　5しゅるい　です！\pエントリー　する　ポケモンに\nピッタリの　コンテストを\lえらんで　あげて　くださいね！$"
	.if (. - gText_Rom_249E1F) > 0x70
	.error "gText_Rom_249E1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249E1F) < 0x70
	.space 0x70 - (. - gText_Rom_249E1F)
	.endif

	@ field-script:0x248C2C FieldScriptText_249E8F
	.globl gText_Rom_249E8F
gText_Rom_249E8F: @ 0x08249E8F
	.string "ポケモンコンテスト　には\nノーマルランク　スーパーランク\lハイパーランク　そしてマスターランク\lという　4つの　ランクが　あります\pノーマルランク　には　すべての\nポケモンが　でることが　できます\pノーマルランクで　ゆうしょう　できた\nポケモンは　おなじ　しゅるいの\lスーパーランクの　コンテストに　でられます\pおなじように　スーパーで　ゆうしょう　すれば\nハイパーに　ハイパーで　ゆうしょう　すれば\lマスターランクに　でられるのです\pマスターランクで　ゆうしょう　した\nポケモンは　なんどでも　マスターランクの\lコンテストに　でる　ことが　できます$"
	.if (. - gText_Rom_249E8F) > 0x114
	.error "gText_Rom_249E8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249E8F) < 0x114
	.space 0x114 - (. - gText_Rom_249E8F)
	.endif

	@ field-script:0x248C92 FieldScriptText_249FA3
	.globl gText_Rom_249FA3
gText_Rom_249FA3: @ 0x08249FA3
	.string "どの　ランクに　さんか　しますか？$"
	.if (. - gText_Rom_249FA3) > 0x12
	.error "gText_Rom_249FA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249FA3) < 0x12
	.space 0x12 - (. - gText_Rom_249FA3)
	.endif

	@ field-script:0x248D11 FieldScriptText_249FB5
	.globl gText_Rom_249FB5
gText_Rom_249FB5: @ 0x08249FB5
	.string "どの　コンテストに　さんか　しますか？$"
	.if (. - gText_Rom_249FB5) > 0x14
	.error "gText_Rom_249FB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249FB5) < 0x14
	.space 0x14 - (. - gText_Rom_249FB5)
	.endif

	@ field-script:0x248C44 FieldScriptText_249FC9
	.globl gText_Rom_249FC9
gText_Rom_249FC9: @ 0x08249FC9
	.string "どの　ポケモンを　さんか　させますか？$"
	.if (. - gText_Rom_249FC9) > 0x14
	.error "gText_Rom_249FC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249FC9) < 0x14
	.space 0x14 - (. - gText_Rom_249FC9)
	.endif

	@ field-script:0x2070A2 FieldScriptText_249FDD
	.globl gText_Rom_249FDD
gText_Rom_249FDD: @ 0x08249FDD
	.string "もうしわけ　ないのですが\nおきゃくさまの　ポケモンですと\lこのランクには　まだ　しゅつじょう\lできないようです…$"
	.if (. - gText_Rom_249FDD) > 0x39
	.error "gText_Rom_249FDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249FDD) < 0x39
	.space 0x39 - (. - gText_Rom_249FDD)
	.endif

	@ field-script:0x248D9A FieldScriptText_24A016
	.globl gText_Rom_24A016
gText_Rom_24A016: @ 0x0824A016
	.string "ごめんなさい！\nタマゴは　しゅつじょう　できないんです……$"
	.if (. - gText_Rom_24A016) > 0x1e
	.error "gText_Rom_24A016 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A016) < 0x1e
	.space 0x1e - (. - gText_Rom_24A016)
	.endif

	@ field-script:0x248DA9 FieldScriptText_24A034
	.globl gText_Rom_24A034
gText_Rom_24A034: @ 0x0824A034
	.string "そちらの　ポケモンは　げんきがない\nようなので　しゅつじょう　できないです……$"
	.if (. - gText_Rom_24A034) > 0x28
	.error "gText_Rom_24A034 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A034) < 0x28
	.space 0x28 - (. - gText_Rom_24A034)
	.endif

	@ field-script:0x248D76 FieldScriptText_24A05C
	.globl gText_Rom_24A05C
gText_Rom_24A05C: @ 0x0824A05C
	.string "あら　そちらの　リボンは……\pおきゃくさまの　ポケモンは　もう\nこの　コンテストで　ゆうしょう　したことが\lあるのですね…　それでも　いいですか？$"
	.if (. - gText_Rom_24A05C) > 0x4a
	.error "gText_Rom_24A05C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A05C) < 0x4a
	.space 0x4a - (. - gText_Rom_24A05C)
	.endif

	@ field-script:0x248D52 FieldScriptText_24A0A6
	.globl gText_Rom_24A0A6
gText_Rom_24A0A6: @ 0x0824A0A6
	.string "そちらの　ポケモンで　よろしいですか？$"
	.if (. - gText_Rom_24A0A6) > 0x14
	.error "gText_Rom_24A0A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A0A6) < 0x14
	.space 0x14 - (. - gText_Rom_24A0A6)
	.endif

	@ field-script:0x248DB8 FieldScriptText_24A0BA
	.globl gText_Rom_24A0BA
gText_Rom_24A0BA: @ 0x0824A0BA
	.string "それでは　おきゃくさまの　ポケモンを\nエントリー　します！\lおきゃくさまの　エントリーナンバーは\l4ばん　に　なります！\lコンテストは　すぐに　はじまります！$"
	.if (. - gText_Rom_24A0BA) > 0x50
	.error "gText_Rom_24A0BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A0BA) < 0x50
	.space 0x50 - (. - gText_Rom_24A0BA)
	.endif

	@ field-script:0x206D8E FieldScriptText_24A10A
	.globl gText_Rom_24A10A
gText_Rom_24A10A: @ 0x0824A10A
	.string "それでは　こちらへ　どうぞ！\nがんばって　くださいね！$"
	.if (. - gText_Rom_24A10A) > 0x1c
	.error "gText_Rom_24A10A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A10A) < 0x1c
	.space 0x1c - (. - gText_Rom_24A10A)
	.endif

	@ field-script:0x248B44 FieldScriptText_24A126
	.globl gText_Rom_24A126
gText_Rom_24A126: @ 0x0824A126
	.string "コンテストでの　ゆうしょう\nおめでとう　ございます！\pしょうひんは　こちらで　おあずかり\nして　ありますよ！　さあ　どうぞ！$"
	.if (. - gText_Rom_24A126) > 0x3f
	.error "gText_Rom_24A126 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A126) < 0x3f
	.space 0x3f - (. - gText_Rom_24A126)
	.endif

	@ field-script:0x248B81 FieldScriptText_24A165
	.globl gText_Rom_24A165
gText_Rom_24A165: @ 0x0824A165
	.string "それでは　また　あとで\nとりに　きて　くださいね！$"
	.if (. - gText_Rom_24A165) > 0x1a
	.error "gText_Rom_24A165 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A165) < 0x1a
	.space 0x1a - (. - gText_Rom_24A165)
	.endif

	@ field-script:0x248EEE FieldScriptText_24A17F
	.globl gText_Rom_24A17F
gText_Rom_24A17F: @ 0x0824A17F
	.string "しかい『はい！　これより\n{0xFD}{0x04}　ランクの\lポケモン　{0xFD}{0x03}コンテストが\lはじまります！\pしゅつじょう　される　トレーナーと\nポケモンの　みなさんは　こちら！$"
	.if (. - gText_Rom_24A17F) > 0x4e
	.error "gText_Rom_24A17F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A17F) < 0x4e
	.space 0x4e - (. - gText_Rom_24A17F)
	.endif

	@ field-script:0x248F07 FieldScriptText_24A1CD
	.globl gText_Rom_24A1CD
gText_Rom_24A1CD: @ 0x0824A1CD
	.string "しかい『はい！　これより\nおともだち　4にん　つうしんの\lポケモン　{0xFD}{0x03}コンテストが\lはじまります！\pしゅつじょう　される　トレーナーと\nポケモンの　みなさんは　こちら！$"
	.if (. - gText_Rom_24A1CD) > 0x56
	.error "gText_Rom_24A1CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A1CD) < 0x56
	.space 0x56 - (. - gText_Rom_24A1CD)
	.endif

	@ field-script:0x249052 FieldScriptText_24A223
	.globl gText_Rom_24A223
gText_Rom_24A223: @ 0x0824A223
	.string "しかい『エントリーナンバー　{0xFD}{0x03}ばん！\n{0xFD}{0x02}さんの　{0xFD}{0x04}　です！$"
	.if (. - gText_Rom_24A223) > 0x21
	.error "gText_Rom_24A223 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A223) < 0x21
	.space 0x21 - (. - gText_Rom_24A223)
	.endif

	@ field-script:0x2490A8 FieldScriptText_24A244
	.globl gText_Rom_24A244
gText_Rom_24A244: @ 0x0824A244
	.string "しかい『さあ\nポケモンの　しょうかいが　おわりました\l1じ　しんさに　はいりましょう！\pかいじょうの　おきゃくさまに　よる\nポケモンの　にんき　とうひょうです！\pでは　さっそく　はじめましょう！\nとうひょう　おねがいします！$"
	.if (. - gText_Rom_24A244) > 0x71
	.error "gText_Rom_24A244 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A244) < 0x71
	.space 0x71 - (. - gText_Rom_24A244)
	.endif

	@ field-script:0x2490F4 FieldScriptText_24A2B5
	.globl gText_Rom_24A2B5
gText_Rom_24A2B5: @ 0x0824A2B5
	.string "　　　　とうひょう　ちゅう…$"
	.if (. - gText_Rom_24A2B5) > 0xf
	.error "gText_Rom_24A2B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A2B5) < 0xf
	.space 0xf - (. - gText_Rom_24A2B5)
	.endif

	@ field-script:0x24968F FieldScriptText_24A2C4
	.globl gText_Rom_24A2C4
gText_Rom_24A2C4: @ 0x0824A2C4
	.string "さあ！\nいま　とうひょうが　おわりました！\lしゅうけいを　している　あいだに\l2じ　しんさに　うつりましょう！\p2じ　しんさは　いよいよ\nおまちかねの　アピールタイム！\lわざで　アピール　しまくりましょうー！\pでは　はりきって　どうぞ！\nレッツ！　アピール！$"
	.if (. - gText_Rom_24A2C4) > 0x82
	.error "gText_Rom_24A2C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A2C4) < 0x82
	.space 0x82 - (. - gText_Rom_24A2C4)
	.endif

	@ field-script:0x249737 FieldScriptText_24A346
	.globl gText_Rom_24A346
gText_Rom_24A346: @ 0x0824A346
	.string "しかい『はあい　そこまでえーー！$"
	.if (. - gText_Rom_24A346) > 0x11
	.error "gText_Rom_24A346 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A346) < 0x11
	.space 0x11 - (. - gText_Rom_24A346)
	.endif

	@ field-script:0x24975A FieldScriptText_24A357
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24A357
gText_Rom_24A357: @ 0x0824A357
	.string "みなさん　すばらしい　アピールでした！\nこれで　すべて　しゅうりょう　です！\lおつかれさまでした！$"
	.if (. - gText_Rom_24A357) != 0x32
	.error "gText_Rom_24A357 must retain its original byte length"
	.endif
	.globl gText_Rom_24A37E
	.set gText_Rom_24A37E, gText_Rom_24A357 + 0x27

	@ field-script:0x24977D FieldScriptText_24A389
	.globl gText_Rom_24A389
gText_Rom_24A389: @ 0x0824A389
	.string "さて　のこるは\nドキドキの　けっかはっぴょう　ですね！\lはっぴょうは　しんさいんの　ほうから\lおこなわれます！$"
	.if (. - gText_Rom_24A389) > 0x38
	.error "gText_Rom_24A389 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A389) < 0x38
	.space 0x38 - (. - gText_Rom_24A389)
	.endif

	@ field-script:0x2497A0 FieldScriptText_24A3C1
	.globl gText_Rom_24A3C1
gText_Rom_24A3C1: @ 0x0824A3C1
	.string "しんさいん『では…　はっぴょう　します！$"
	.if (. - gText_Rom_24A3C1) > 0x15
	.error "gText_Rom_24A3C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A3C1) < 0x15
	.space 0x15 - (. - gText_Rom_24A3C1)
	.endif

	@ field-script:0x24983C FieldScriptText_24A3D6
	.globl gText_Rom_24A3D6
gText_Rom_24A3D6: @ 0x0824A3D6
	.string "しかい『エントリーナンバー　{0xFD}{0x03}ばん\n{0xFD}{0x04}さん！　そして　{0xFD}{0x02}！\lおめでとう　ございます！$"
	.if (. - gText_Rom_24A3D6) > 0x2e
	.error "gText_Rom_24A3D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A3D6) < 0x2e
	.space 0x2e - (. - gText_Rom_24A3D6)
	.endif

	@ field-script:0x2499B4 FieldScriptText_24A404
	.globl gText_Rom_24A404
gText_Rom_24A404: @ 0x0824A404
	.string "しかい『おめでとう　ございます！\nまた　さんか　してくださいね！$"
	.if (. - gText_Rom_24A404) > 0x21
	.error "gText_Rom_24A404 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A404) < 0x21
	.space 0x21 - (. - gText_Rom_24A404)
	.endif

	@ field-script:0x249981 FieldScriptText_24A425
	.globl gText_Rom_24A425
gText_Rom_24A425: @ 0x0824A425
	.string "しかい『さあ！\nしょうひんを　おうけとり　ください！$"
	.if (. - gText_Rom_24A425) > 0x1b
	.error "gText_Rom_24A425 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A425) < 0x1b
	.space 0x1b - (. - gText_Rom_24A425)
	.endif

	@ field-script:0x249B19 FieldScriptText_24A440
	.globl gText_Rom_24A440
gText_Rom_24A440: @ 0x0824A440
	.string "しょうひんと　して\nこの　リボンを　おうけとり　ください！$"
	.if (. - gText_Rom_24A440) > 0x1e
	.error "gText_Rom_24A440 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A440) < 0x1e
	.space 0x1e - (. - gText_Rom_24A440)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:992 LilycoveCity_ContestLobby_Text_ReceivedARibbon
	.globl gText_Rom_24A45E
gText_Rom_24A45E: @ 0x0824A45E
	.string "{PLAYER}は リボンを もらった!$"
	.if (. - gText_Rom_24A45E) > 0xf
	.error "gText_Rom_24A45E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A45E) < 0xf
	.space 0xf - (. - gText_Rom_24A45E)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:995 LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon
	.globl gText_Rom_24A46D
gText_Rom_24A46D: @ 0x0824A46D
	.string "{PLAYER}は リボンを\n{STR_VAR_1}に つけて あげた!$"
	.if (. - gText_Rom_24A46D) > 0x16
	.error "gText_Rom_24A46D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A46D) < 0x16
	.space 0x16 - (. - gText_Rom_24A46D)
	.endif

	@ field-script:0x249ADF FieldScriptText_24A483
	.globl gText_Rom_24A483
gText_Rom_24A483: @ 0x0824A483
	.string "それでは　しょうひんは　あとで\nうけつけで　おうけとり　ください！\lまたの　さんかを　おまち　してます！$"
	.if (. - gText_Rom_24A483) > 0x35
	.error "gText_Rom_24A483 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A483) < 0x35
	.space 0x35 - (. - gText_Rom_24A483)
	.endif
	@ Replaced baserom.gba range: offset=0x24A4B8, size=0x57
	.byte 0x0A, 0x11, 0x27, 0x1A, 0x00, 0x9F, 0x59, 0x73, 0x7E, 0x5A, 0x7E, 0x63, 0x5D, 0x64, 0x19, 0xFE
	.byte 0xA5, 0x22, 0x02, 0x0B, 0x1F, 0x00, 0x0E, 0x2E, 0x26, 0x03, 0x19, 0x00, 0x03, 0x09, 0x12, 0x09
	.byte 0x44, 0x0D, 0xAB, 0xFB, 0x05, 0x14, 0x23, 0x41, 0x11, 0x37, 0x00, 0x01, 0x14, 0xA4, 0x22, 0x02
	.byte 0x00, 0x0F, 0x2B, 0x04, 0x46, 0xFE, 0xA5, 0x16, 0x2E, 0x44, 0x00, 0x05, 0x15, 0x3D, 0x00, 0x5A
	.byte 0x7E, 0x63, 0x5D, 0x64, 0x16, 0x00, 0x44, 0x27, 0x2A, 0x1F, 0x0D, 0xAB, 0xFA, 0x0B, 0x2E, 0x06
	.byte 0x00, 0x0C, 0x1F, 0x0D, 0x06, 0xAC, 0xFF

	@ field-script:0x206F18 FieldScriptText_24A50F
	.globl gText_Rom_24A50F
gText_Rom_24A50F: @ 0x0824A50F
	.string "コンテストに　エントリーする　まえに\nレポートを　かきます$"
	.if (. - gText_Rom_24A50F) > 0x1e
	.error "gText_Rom_24A50F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A50F) < 0x1e
	.space 0x1e - (. - gText_Rom_24A50F)
	.endif

	@ field-script:0x207044 FieldScriptText_24A52D
	.globl gText_Rom_24A52D
gText_Rom_24A52D: @ 0x0824A52D
	.string "またの　さんかを　おまち　してます！$"
	.if (. - gText_Rom_24A52D) > 0x13
	.error "gText_Rom_24A52D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A52D) < 0x13
	.space 0x13 - (. - gText_Rom_24A52D)
	.endif
	@ Replaced baserom.gba range: offset=0x24A540, size=0xCC
	.byte 0x5A, 0x7E, 0x63, 0x5D, 0x64, 0x16, 0xFE, 0x0B, 0x2E, 0x06, 0x00, 0x0C, 0x1F, 0x0D, 0x06, 0xAC
	.byte 0xFF, 0x64, 0x7A, 0xAE, 0x65, 0xAE, 0x19, 0x00, 0x05, 0x14, 0x23, 0x41, 0x11, 0x37, 0x00, 0xA5
	.byte 0x22, 0x02, 0xFE, 0x0F, 0x2B, 0x50, 0x10, 0x27, 0x00, 0x59, 0xAE, 0x98, 0x79, 0x2D, 0x00, 0x12
	.byte 0x15, 0x02, 0x44, 0xFA, 0x0A, 0x11, 0x27, 0x44, 0x00, 0x54, 0x7E, 0x64, 0x78, 0xAE, 0x00, 0x0C
	.byte 0x13, 0x00, 0x08, 0x41, 0x0B, 0x02, 0xAB, 0xFB, 0x5A, 0x7E, 0x63, 0x5D, 0x64, 0x1A, 0x00, 0x05
	.byte 0x15, 0x3D, 0x00, 0x23, 0x19, 0x2D, 0xFE, 0x04, 0x27, 0x2E, 0x44, 0x00, 0x08, 0x41, 0x0B, 0x02
	.byte 0x18, 0xAB, 0xFB, 0x20, 0x15, 0x0B, 0x2E, 0x19, 0x00, 0x54, 0x7E, 0x64, 0x78, 0xAE, 0x37, 0x00
	.byte 0x05, 0x2C, 0x2A, 0x46, 0xFE, 0x5A, 0x7E, 0x63, 0x5D, 0x64, 0x37, 0x00, 0x1A, 0x3D, 0x1F, 0x28
	.byte 0x1F, 0x0D, 0x19, 0x44, 0xFA, 0x01, 0x14, 0x1A, 0x00, 0x02, 0x12, 0x23, 0x14, 0x00, 0x05, 0x15
	.byte 0x3D, 0x00, 0x11, 0x36, 0x03, 0x0C, 0x44, 0xFA, 0x37, 0x2E, 0x46, 0x50, 0x13, 0x00, 0x08, 0x41
	.byte 0x0B, 0x02, 0xAB, 0xFF, 0x45, 0x19, 0x00, 0x5A, 0x7E, 0x63, 0x5D, 0x64, 0x16, 0x00, 0x0B, 0x2E
	.byte 0x06, 0x00, 0x0C, 0x1F, 0x0D, 0x06, 0xAC, 0xFF, 0x45, 0x19, 0x00, 0x9F, 0x59, 0x73, 0x7E, 0x2D
	.byte 0x00, 0x0B, 0x2E, 0x06, 0x00, 0x0B, 0x0E, 0x1F, 0x0D, 0x06, 0xAC, 0xFF

	@ field-script:0x20714F FieldScriptText_24A60C
	.globl gText_Rom_24A60C
gText_Rom_24A60C: @ 0x0824A60C
	.string "つうしん　しています……$"
	.if (. - gText_Rom_24A60C) > 0xd
	.error "gText_Rom_24A60C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A60C) < 0xd
	.space 0xd - (. - gText_Rom_24A60C)
	.endif

	@ field-script:0x2071CB FieldScriptText_24A619
	.globl gText_Rom_24A619
gText_Rom_24A619: @ 0x0824A619
	.string "つうしんに　しっぱい　しました$"
	.if (. - gText_Rom_24A619) > 0x10
	.error "gText_Rom_24A619 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A619) < 0x10
	.space 0x10 - (. - gText_Rom_24A619)
	.endif

	@ field-script:0x207187 FieldScriptText_24A629
	.globl gText_Rom_24A629
gText_Rom_24A629: @ 0x0824A629
	.string "えらんだ　コンテストが\nおともだちと　ちがう　ようです！$"
	.if (. - gText_Rom_24A629) > 0x1d
	.error "gText_Rom_24A629 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A629) < 0x1d
	.space 0x1d - (. - gText_Rom_24A629)
	.endif

	@ field-script:0x207195 FieldScriptText_24A646
	.globl gText_Rom_24A646
gText_Rom_24A646: @ 0x0824A646
	.string "おたがいの　せんたくが　ちがっているようです$"
	.if (. - gText_Rom_24A646) > 0x17
	.error "gText_Rom_24A646 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A646) < 0x17
	.space 0x17 - (. - gText_Rom_24A646)
	.endif

	@ data/text/cable_club.inc:29 gText_PleaseWaitForLink
	.globl gText_Rom_24A65D
gText_Rom_24A65D: @ 0x0824A65D
	.string "しょうしょう おまち ください\n……Bボタンで キャンセル$"
	.if (. - gText_Rom_24A65D) > 0x1e
	.error "gText_Rom_24A65D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A65D) < 0x1e
	.space 0x1e - (. - gText_Rom_24A65D)
	.endif
	@ Replaced baserom.gba range: offset=0x24A67B, size=0x2F
	.byte 0x1F, 0x10, 0x19, 0x00, 0x0B, 0x2E, 0x06, 0x2D, 0x00, 0x05, 0x1F, 0x11, 0x00, 0x0C, 0x13, 0x1F
	.byte 0x0D, 0xAB, 0xFF, 0x12, 0x03, 0x0C, 0x2E, 0x00, 0x54, 0x77, 0xAE, 0x44, 0x0D, 0xFE, 0x23, 0x03
	.byte 0xA2, 0x45, 0x00, 0x24, 0x28, 0x15, 0x05, 0x0C, 0x13, 0x00, 0x08, 0x41, 0x0B, 0x02, 0xFF

	@ field-script:0x2071E4 FieldScriptText_24A6AA
	.globl gText_Rom_24A6AA
gText_Rom_24A6AA: @ 0x0824A6AA
	.string "それでは　おきゃくさまの　ポケモンを\nエントリー　します！\pおきゃくさまの　エントリーナンバーは\n{0xFD}{0x03}ばん　に　なります！$"
	.if (. - gText_Rom_24A6AA) > 0x3e
	.error "gText_Rom_24A6AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A6AA) < 0x3e
	.space 0x3e - (. - gText_Rom_24A6AA)
	.endif

	@ field-script:0x20730A FieldScriptText_24A6E8
	.globl gText_Rom_24A6E8
gText_Rom_24A6E8: @ 0x0824A6E8
	.string "コンテストは　すぐに　はじまります！$"
	.if (. - gText_Rom_24A6E8) > 0x13
	.error "gText_Rom_24A6E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A6E8) < 0x13
	.space 0x13 - (. - gText_Rom_24A6E8)
	.endif

	@ field-script:0x206ECD FieldScriptText_24A6FB
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24A6FB
gText_Rom_24A6FB: @ 0x0824A6FB
	.string "ポケモン　コンテスト\nつうしん　うけつけへ　ようこそ！\pこちらでは　ともだちと\nおなじ　コンテストに　でられます$"
	.if (. - gText_Rom_24A6FB) != 0x39
	.error "gText_Rom_24A6FB must retain its original byte length"
	.endif
	.globl gText_Rom_24A72E
	.set gText_Rom_24A72E, gText_Rom_24A6FB + 0x33

	@ field-script:0x206FCE FieldScriptText_24A734
	.globl gText_Rom_24A734
gText_Rom_24A734: @ 0x0824A734
	.string "どの　せつめいを　ききますか？$"
	.if (. - gText_Rom_24A734) > 0x10
	.error "gText_Rom_24A734 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A734) < 0x10
	.space 0x10 - (. - gText_Rom_24A734)
	.endif

	@ field-script:0x206EDA FieldScriptText_24A744
	.globl gText_Rom_24A744
gText_Rom_24A744: @ 0x0824A744
	.string "コンテストに\nさんか　しますか？$"
	.if (. - gText_Rom_24A744) > 0x11
	.error "gText_Rom_24A744 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A744) < 0x11
	.space 0x11 - (. - gText_Rom_24A744)
	.endif

	@ field-script:0x206F9D FieldScriptText_24A755
	.globl gText_Rom_24A755
gText_Rom_24A755: @ 0x0824A755
	.string "どの　コンテストに　さんか　しますか？$"
	.if (. - gText_Rom_24A755) > 0x14
	.error "gText_Rom_24A755 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A755) < 0x14
	.space 0x14 - (. - gText_Rom_24A755)
	.endif

	@ field-script:0x2070BE FieldScriptText_24A769
	.globl gText_Rom_24A769
gText_Rom_24A769: @ 0x0824A769
	.string "そちらの　ポケモンは　げんきがない\nようなので　しゅつじょう　できないです…$"
	.if (. - gText_Rom_24A769) > 0x27
	.error "gText_Rom_24A769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A769) < 0x27
	.space 0x27 - (. - gText_Rom_24A769)
	.endif

	@ field-script:0x2070B0 FieldScriptText_24A790
	.globl gText_Rom_24A790
gText_Rom_24A790: @ 0x0824A790
	.string "ごめんなさい！\nタマゴは　コンテストに　でられないんです…$"
	.if (. - gText_Rom_24A790) > 0x1e
	.error "gText_Rom_24A790 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A790) < 0x1e
	.space 0x1e - (. - gText_Rom_24A790)
	.endif

	@ field-script:0x20704E FieldScriptText_24A7AE
	.globl gText_Rom_24A7AE
gText_Rom_24A7AE: @ 0x0824A7AE
	.string "どの　ポケモンを　さんか　させますか？$"
	.if (. - gText_Rom_24A7AE) > 0x14
	.error "gText_Rom_24A7AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A7AE) < 0x14
	.space 0x14 - (. - gText_Rom_24A7AE)
	.endif

	@ data/text/cable_club.inc:262 CableClub_Text_ChooseGroupLeader
	.globl gText_Rom_24A7C2
gText_Rom_24A7C2: @ 0x0824A7C2
	.string "みんなで はなしあって ひとりが\nグループリーダーに なってください\pほかの ひとは グループにはいる を\nえらんでください$"
	.if (. - gText_Rom_24A7C2) > 0x3f
	.error "gText_Rom_24A7C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A7C2) < 0x3f
	.space 0x3f - (. - gText_Rom_24A7C2)
	.endif

	@ field-script:0x2071A3 FieldScriptText_24A801
	.globl gText_Rom_24A801
gText_Rom_24A801: @ 0x0824A801
	.string "ともだちの　なかに\n4にんせんようの　うけつけから\lエントリーしている　かたが　います\pつうしんケーブルを　つなげた　ともだちを\n4にん　あつめて\lグローバルモードを　えらんで\lとうろくを　やりなおして　ください$"
	.if (. - gText_Rom_24A801) > 0x6b
	.error "gText_Rom_24A801 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A801) < 0x6b
	.space 0x6b - (. - gText_Rom_24A801)
	.endif

	@ field-script:0x207017 FieldScriptText_24A86C
	.globl gText_Rom_24A86C
gText_Rom_24A86C: @ 0x0824A86C
	.string "ワイヤレスアダプタか　つうしんケーブルを\nつないだ　ともだちが　2にん　いじょう\lあつまると　おこなえます！\pさんかする　かたには\nまず　エントリーする　モードを\lえらんで　いただきます！\p2にん　から　4にん　まで　じゆうに\nとうろく　できる　エメラルドモードと\p4にんせんようの　うけつけから　さんかする\nともだちとも　いっしょに　とうろく　できる\lグローバルモードと\p2しゅるいの　モードが　ありますので\nともだちと　そうだんして\lおなじ　モードを　えらんで　くださいね！\pともだちと　おなじ　モードで\nおなじ　コンテストを　えらぶと\lエントリー　かんりょうと　なります！\pいつもの　とおりに　コンテストが\nはじまりますので　がんばって　くださいね！$"
	.if (. - gText_Rom_24A86C) > 0x149
	.error "gText_Rom_24A86C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A86C) < 0x149
	.space 0x149 - (. - gText_Rom_24A86C)
	.endif

	@ field-script:0x207025 FieldScriptText_24A9B5
	.globl gText_Rom_24A9B5
gText_Rom_24A9B5: @ 0x0824A9B5
	.string "エメラルドモードでは\nつうしんケーブルか　ワイヤレスアダプタを\lつなげた　ともだちが\l2にん　いじょう　あつまれば\lつうしんコンテストが　おこなえます！\p4にん　いない　ときは\nかいじょうに　いる　トレーナーが\lコンテストに　さんかして　くれますよ！\pただし　モードを　えらぶことが　できない\n4にんせんようの　うけつけから\lさんかする　ともだちが　いるばあいは\lこちらの　モードでは　できませんので\lごちゅうい　ください！$"
	.if (. - gText_Rom_24A9B5) > 0xd5
	.error "gText_Rom_24A9B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A9B5) < 0xd5
	.space 0xd5 - (. - gText_Rom_24A9B5)
	.endif

	@ field-script:0x207033 FieldScriptText_24AA8A
	.globl gText_Rom_24AA8A
gText_Rom_24AA8A: @ 0x0824AA8A
	.string "グローバルモードでは\nモードを　えらぶことが　できない\l4にんせんようの　うけつけから\lさんかする　ともだち　とも\lつうしんコンテストが　おこなえます！\pこの　モードでは\nつうしんケーブルを　つないだ\lともだちが　4にん　あつまらないと\lコンテストが　おこなえません！$"
	.if (. - gText_Rom_24AA8A) > 0x87
	.error "gText_Rom_24AA8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AA8A) < 0x87
	.space 0x87 - (. - gText_Rom_24AA8A)
	.endif

	@ field-script:0x2071C1 FieldScriptText_24AB11
	.globl gText_Rom_24AB11
gText_Rom_24AB11: @ 0x0824AB11
	.string "もうしわけ　ありません！\pワイヤレスアダプタでは\nグローバルモードは　おこなえません！\pエメラルドモードを　えらぶか\nつうしんケーブルを　つなげて\lやりなおして　ください！$"
	.if (. - gText_Rom_24AB11) > 0x57
	.error "gText_Rom_24AB11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AB11) < 0x57
	.space 0x57 - (. - gText_Rom_24AB11)
	.endif

	@ field-script:0x206F3A FieldScriptText_24AB68
	.globl gText_Rom_24AB68
gText_Rom_24AB68: @ 0x0824AB68
	.string "どの　モードで\nコンテストに　さんかしますか？$"
	.if (. - gText_Rom_24AB68) > 0x18
	.error "gText_Rom_24AB68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AB68) < 0x18
	.space 0x18 - (. - gText_Rom_24AB68)
	.endif

	@ field-script:0x248F0E FieldScriptText_24AB80
	.globl gText_Rom_24AB80
gText_Rom_24AB80: @ 0x0824AB80
	.string "しかい『はい！　これより\nおともだち　4にん　つうしんの\lポケモン　{0xFD}{0x03}コンテストが\lはじまります！$"
	.if (. - gText_Rom_24AB80) > 0x33
	.error "gText_Rom_24AB80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AB80) < 0x33
	.space 0x33 - (. - gText_Rom_24AB80)
	.endif

	@ field-script:0x248F19 FieldScriptText_24ABB3
	.globl gText_Rom_24ABB3
gText_Rom_24ABB3: @ 0x0824ABB3
	.string "しゅつじょう　される　トレーナーと\nポケモンの　みなさんは　こちら！$"
	.if (. - gText_Rom_24ABB3) > 0x23
	.error "gText_Rom_24ABB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24ABB3) < 0x23
	.space 0x23 - (. - gText_Rom_24ABB3)
	.endif

	@ field-script:0x2490C7 FieldScriptText_24ABD6
	.globl gText_Rom_24ABD6
gText_Rom_24ABD6: @ 0x0824ABD6
	.string "しかい『さあ\nポケモンの　しょうかいが　おわりました\l1じ　しんさに　はいりましょう！$"
	.if (. - gText_Rom_24ABD6) > 0x2c
	.error "gText_Rom_24ABD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24ABD6) < 0x2c
	.space 0x2c - (. - gText_Rom_24ABD6)
	.endif

	@ field-script:0x2490D2 FieldScriptText_24AC02
	.globl gText_Rom_24AC02
gText_Rom_24AC02: @ 0x0824AC02
	.string "かいじょうの　おきゃくさまに　よる\nポケモンの　にんき　とうひょうです！$"
	.if (. - gText_Rom_24AC02) > 0x25
	.error "gText_Rom_24AC02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AC02) < 0x25
	.space 0x25 - (. - gText_Rom_24AC02)
	.endif

	@ field-script:0x2490DD FieldScriptText_24AC27
	.globl gText_Rom_24AC27
gText_Rom_24AC27: @ 0x0824AC27
	.string "では　さっそく　はじめましょう！\nとうひょう　おねがいします！$"
	.if (. - gText_Rom_24AC27) > 0x20
	.error "gText_Rom_24AC27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AC27) < 0x20
	.space 0x20 - (. - gText_Rom_24AC27)
	.endif

	@ field-script:0x2496B3 FieldScriptText_24AC47
	.globl gText_Rom_24AC47
gText_Rom_24AC47: @ 0x0824AC47
	.string "さあ！\nいま　とうひょうが　おわりました！\lしゅうけいを　している　あいだに\l2じ　しんさに　うつりましょう！$"
	.if (. - gText_Rom_24AC47) > 0x38
	.error "gText_Rom_24AC47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AC47) < 0x38
	.space 0x38 - (. - gText_Rom_24AC47)
	.endif

	@ field-script:0x2496BE FieldScriptText_24AC7F
	.globl gText_Rom_24AC7F
gText_Rom_24AC7F: @ 0x0824AC7F
	.string "2じ　しんさは　いよいよ\nおまちかねの　アピールタイム！\lわざで　アピール　しまくりましょうー！$"
	.if (. - gText_Rom_24AC7F) > 0x31
	.error "gText_Rom_24AC7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AC7F) < 0x31
	.space 0x31 - (. - gText_Rom_24AC7F)
	.endif

	@ field-script:0x2496C9 FieldScriptText_24ACB0
	.globl gText_Rom_24ACB0
gText_Rom_24ACB0: @ 0x0824ACB0
	.string "では　はりきって　どうぞ！\nレッツ！　アピール！$"
	.if (. - gText_Rom_24ACB0) > 0x19
	.error "gText_Rom_24ACB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24ACB0) < 0x19
	.space 0x19 - (. - gText_Rom_24ACB0)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24ACC9
gText_Rom_24ACC9: @ 0x0824ACC9
	.string "たくさん　アピール　できる$"
	.if (. - gText_Rom_24ACC9) != 0xe
	.error "gText_Rom_24ACC9 must retain its original byte length"
	.endif
	.globl gText_Rom_24ACD3
	.set gText_Rom_24ACD3, gText_Rom_24ACC9 + 0xa

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24ACD7
gText_Rom_24ACD7: @ 0x0824ACD7
	.string "この　アピールの　あと\nびっくり　しやすく　なってしまう$"
	.if (. - gText_Rom_24ACD7) != 0x1d
	.error "gText_Rom_24ACD7 must retain its original byte length"
	.endif
	.globl gText_Rom_24ACF0
	.set gText_Rom_24ACF0, gText_Rom_24ACD7 + 0x19

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24ACF4
gText_Rom_24ACF4: @ 0x0824ACF4
	.string "すごいアピールに　なるが　このあと\nさいごまで　なにも　できなくなる$"
	.if (. - gText_Rom_24ACF4) > 0x23
	.error "gText_Rom_24ACF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24ACF4) < 0x23
	.space 0x23 - (. - gText_Rom_24ACF4)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AD17
gText_Rom_24AD17: @ 0x0824AD17
	.string "つづけて　だしても　しんさいんに\nあきられずに　アピール　できる$"
	.if (. - gText_Rom_24AD17) != 0x21
	.error "gText_Rom_24AD17 must retain its original byte length"
	.endif
	.globl gText_Rom_24AD34
	.set gText_Rom_24AD34, gText_Rom_24AD17 + 0x1d

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AD38
gText_Rom_24AD38: @ 0x0824AD38
	.string "ほかの　ポケモンに　おどかされても\n1ど　くらいは　がまんできる$"
	.if (. - gText_Rom_24AD38) != 0x21
	.error "gText_Rom_24AD38 must retain its original byte length"
	.endif
	.globl gText_Rom_24AD55
	.set gText_Rom_24AD55, gText_Rom_24AD38 + 0x1d

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AD59
gText_Rom_24AD59: @ 0x0824AD59
	.string "ほかの　ポケモンに　おどかされても\nがまんできる$"
	.if (. - gText_Rom_24AD59) != 0x19
	.error "gText_Rom_24AD59 must retain its original byte length"
	.endif
	.globl gText_Rom_24AD6E
	.set gText_Rom_24AD6E, gText_Rom_24AD59 + 0x15

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AD72
gText_Rom_24AD72: @ 0x0824AD72
	.string "ほかの　ポケモンに　おどかされても\nすこし　くらいなら　がまんできる$"
	.if (. - gText_Rom_24AD72) != 0x23
	.error "gText_Rom_24AD72 must retain its original byte length"
	.endif
	.globl gText_Rom_24AD91
	.set gText_Rom_24AD91, gText_Rom_24AD72 + 0x1f

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24AD95
gText_Rom_24AD95: @ 0x0824AD95
	.string "この　わざを　だした　あとは\nあまり　びっくり　しなくなる$"
	.if (. - gText_Rom_24AD95) > 0x1e
	.error "gText_Rom_24AD95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AD95) < 0x1e
	.space 0x1e - (. - gText_Rom_24AD95)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24ADB3
gText_Rom_24ADB3: @ 0x0824ADB3
	.string "じぶんの　まえに　アピールした\nポケモンを　ちょっと　おどろかす$"
	.if (. - gText_Rom_24ADB3) != 0x21
	.error "gText_Rom_24ADB3 must retain its original byte length"
	.endif
	.globl gText_Rom_24ADCE
	.set gText_Rom_24ADCE, gText_Rom_24ADB3 + 0x1b

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24ADD4
gText_Rom_24ADD4: @ 0x0824ADD4
	.string "アピールが　おわっている　ポケモン\nみんなを　ちょっと　おどろかす$"
	.if (. - gText_Rom_24ADD4) != 0x22
	.error "gText_Rom_24ADD4 must retain its original byte length"
	.endif
	.globl gText_Rom_24ADF0
	.set gText_Rom_24ADF0, gText_Rom_24ADD4 + 0x1c

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24ADF6
gText_Rom_24ADF6: @ 0x0824ADF6
	.string "じぶんの　まえに　アピールした\nポケモンを　おどろかす$"
	.if (. - gText_Rom_24ADF6) != 0x1c
	.error "gText_Rom_24ADF6 must retain its original byte length"
	.endif
	.globl gText_Rom_24AE0C
	.set gText_Rom_24AE0C, gText_Rom_24ADF6 + 0x16

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AE12
gText_Rom_24AE12: @ 0x0824AE12
	.string "アピールが　おわっている　ポケモン\nみんなを　おどろかす$"
	.if (. - gText_Rom_24AE12) != 0x1d
	.error "gText_Rom_24AE12 must retain its original byte length"
	.endif
	.globl gText_Rom_24AE29
	.set gText_Rom_24AE29, gText_Rom_24AE12 + 0x17

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AE2F
gText_Rom_24AE2F: @ 0x0824AE2F
	.string "じぶんの　まえに　アピールした\nポケモンを　かなり　おどろかす$"
	.if (. - gText_Rom_24AE2F) != 0x20
	.error "gText_Rom_24AE2F must retain its original byte length"
	.endif
	.globl gText_Rom_24AE49
	.set gText_Rom_24AE49, gText_Rom_24AE2F + 0x1a

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AE4F
gText_Rom_24AE4F: @ 0x0824AE4F
	.string "アピールが　おわっている　ポケモン\nみんなを　かなり　おどろかす$"
	.if (. - gText_Rom_24AE4F) != 0x21
	.error "gText_Rom_24AE4F must retain its original byte length"
	.endif
	.globl gText_Rom_24AE6A
	.set gText_Rom_24AE6A, gText_Rom_24AE4F + 0x1b

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AE70
gText_Rom_24AE70: @ 0x0824AE70
	.string "じぶんの　まえに　アピールした\nポケモンを　おどろかす$"
	.if (. - gText_Rom_24AE70) != 0x1c
	.error "gText_Rom_24AE70 must retain its original byte length"
	.endif
	.globl gText_Rom_24AE86
	.set gText_Rom_24AE86, gText_Rom_24AE70 + 0x16

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AE8C
gText_Rom_24AE8C: @ 0x0824AE8C
	.string "アピールが　おわっている　ポケモン\nみんなを　おどろかす$"
	.if (. - gText_Rom_24AE8C) != 0x1d
	.error "gText_Rom_24AE8C must retain its original byte length"
	.endif
	.globl gText_Rom_24AEA3
	.set gText_Rom_24AEA3, gText_Rom_24AE8C + 0x17

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AEA9
gText_Rom_24AEA9: @ 0x0824AEA9
	.string "しんさいんの　ほかの　ポケモンへの\nちゅうもくを　そらすことが　できる$"
	.if (. - gText_Rom_24AEA9) != 0x24
	.error "gText_Rom_24AEA9 must retain its original byte length"
	.endif
	.globl gText_Rom_24AEC9
	.set gText_Rom_24AEC9, gText_Rom_24AEA9 + 0x20

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AECD
gText_Rom_24AECD: @ 0x0824AECD
	.string "しんさいんに　ちゅうもく　されている\nポケモンを　とくに　おどろかす$"
	.if (. - gText_Rom_24AECD) != 0x23
	.error "gText_Rom_24AECD must retain its original byte length"
	.endif
	.globl gText_Rom_24AEEA
	.set gText_Rom_24AEEA, gText_Rom_24AECD + 0x1d

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AEF0
gText_Rom_24AEF0: @ 0x0824AEF0
	.string "みんなの　じゃまを　しまくって\nつぎの　アピールは　さんか　しない$"
	.if (. - gText_Rom_24AEF0) != 0x22
	.error "gText_Rom_24AEF0 must retain its original byte length"
	.endif
	.globl gText_Rom_24AF0E
	.set gText_Rom_24AF0E, gText_Rom_24AEF0 + 0x1e

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AF12
gText_Rom_24AF12: @ 0x0824AF12
	.string "おなじ　タイプの　アピールを　した\nポケモンを　とくに　おどろかす$"
	.if (. - gText_Rom_24AF12) != 0x22
	.error "gText_Rom_24AF12 must retain its original byte length"
	.endif
	.globl gText_Rom_24AF2E
	.set gText_Rom_24AF2E, gText_Rom_24AF12 + 0x1c

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AF34
gText_Rom_24AF34: @ 0x0824AF34
	.string "かっこいい　アピールを　した\nポケモンを　かなり　おどろかす$"
	.if (. - gText_Rom_24AF34) != 0x1f
	.error "gText_Rom_24AF34 must retain its original byte length"
	.endif
	.globl gText_Rom_24AF4D
	.set gText_Rom_24AF4D, gText_Rom_24AF34 + 0x19

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AF53
gText_Rom_24AF53: @ 0x0824AF53
	.string "うつくしい　アピールを　した\nポケモンを　かなり　おどろかす$"
	.if (. - gText_Rom_24AF53) != 0x1f
	.error "gText_Rom_24AF53 must retain its original byte length"
	.endif
	.globl gText_Rom_24AF6C
	.set gText_Rom_24AF6C, gText_Rom_24AF53 + 0x19

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AF72
gText_Rom_24AF72: @ 0x0824AF72
	.string "かわいい　アピールを　した\nポケモンを　かなり　おどろかす$"
	.if (. - gText_Rom_24AF72) != 0x1e
	.error "gText_Rom_24AF72 must retain its original byte length"
	.endif
	.globl gText_Rom_24AF8A
	.set gText_Rom_24AF8A, gText_Rom_24AF72 + 0x18

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AF90
gText_Rom_24AF90: @ 0x0824AF90
	.string "かしこい　アピールを　した\nポケモンを　かなり　おどろかす$"
	.if (. - gText_Rom_24AF90) != 0x1e
	.error "gText_Rom_24AF90 must retain its original byte length"
	.endif
	.globl gText_Rom_24AFA8
	.set gText_Rom_24AFA8, gText_Rom_24AF90 + 0x18

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AFAE
gText_Rom_24AFAE: @ 0x0824AFAE
	.string "たくましい　アピールを　した\nポケモンを　かなり　おどろかす$"
	.if (. - gText_Rom_24AFAE) != 0x1f
	.error "gText_Rom_24AFAE must retain its original byte length"
	.endif
	.globl gText_Rom_24AFC7
	.set gText_Rom_24AFC7, gText_Rom_24AFAE + 0x19

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24AFCD
gText_Rom_24AFCD: @ 0x0824AFCD
	.string "このあと　アピールする　ポケモン\n1ひきを　きんちょう　させる$"
	.if (. - gText_Rom_24AFCD) > 0x20
	.error "gText_Rom_24AFCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AFCD) < 0x20
	.space 0x20 - (. - gText_Rom_24AFCD)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24AFED
gText_Rom_24AFED: @ 0x0824AFED
	.string "このあと　アピールする　ポケモン\nみんなを　きんちょう　させる$"
	.if (. - gText_Rom_24AFED) > 0x20
	.error "gText_Rom_24AFED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AFED) < 0x20
	.space 0x20 - (. - gText_Rom_24AFED)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B00D
gText_Rom_24B00D: @ 0x0824B00D
	.string "アピールが　おわった　ポケモンの\nちょうしを　さげる$"
	.if (. - gText_Rom_24B00D) > 0x1b
	.error "gText_Rom_24B00D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B00D) < 0x1b
	.space 0x1b - (. - gText_Rom_24B00D)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B028
gText_Rom_24B028: @ 0x0824B028
	.string "ちょうしの　いい　ポケモン\nみんなを　かなり　おどろかす$"
	.if (. - gText_Rom_24B028) != 0x1d
	.error "gText_Rom_24B028 must retain its original byte length"
	.endif
	.globl gText_Rom_24B03F
	.set gText_Rom_24B03F, gText_Rom_24B028 + 0x17

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B045
gText_Rom_24B045: @ 0x0824B045
	.string "1ばん　はじめに　アピールすると\nアピールが　すごく　うまくいく$"
	.if (. - gText_Rom_24B045) > 0x21
	.error "gText_Rom_24B045 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B045) < 0x21
	.space 0x21 - (. - gText_Rom_24B045)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B066
gText_Rom_24B066: @ 0x0824B066
	.string "1ばん　さいごに　アピールすると\nアピールが　すごく　うまくいく$"
	.if (. - gText_Rom_24B066) > 0x21
	.error "gText_Rom_24B066 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B066) < 0x21
	.space 0x21 - (. - gText_Rom_24B066)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B087
gText_Rom_24B087: @ 0x0824B087
	.string "それまでの　ポケモンの　アピールと\nおなじくらいの　アピールに　みせる$"
	.if (. - gText_Rom_24B087) != 0x24
	.error "gText_Rom_24B087 must retain its original byte length"
	.endif
	.globl gText_Rom_24B0A7
	.set gText_Rom_24B0A7, gText_Rom_24B087 + 0x20

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B0AB
gText_Rom_24B0AB: @ 0x0824B0AB
	.string "1つまえの　ポケモンの　アピールと\nおなじくらい　うまく　できる$"
	.if (. - gText_Rom_24B0AB) != 0x21
	.error "gText_Rom_24B0AB must retain its original byte length"
	.endif
	.globl gText_Rom_24B0C8
	.set gText_Rom_24B0C8, gText_Rom_24B0AB + 0x1d

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B0CC
gText_Rom_24B0CC: @ 0x0824B0CC
	.string "みんなの　あとで　アピールするほど\nすごい　アピールに　みせられる$"
	.if (. - gText_Rom_24B0CC) != 0x22
	.error "gText_Rom_24B0CC must retain its original byte length"
	.endif
	.globl gText_Rom_24B0EA
	.set gText_Rom_24B0EA, gText_Rom_24B0CC + 0x1e

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B0EE
gText_Rom_24B0EE: @ 0x0824B0EE
	.string "だすときに　よって　アピールの\nできぐあいが　いろいろと　かわる$"
	.if (. - gText_Rom_24B0EE) > 0x21
	.error "gText_Rom_24B0EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B0EE) < 0x21
	.space 0x21 - (. - gText_Rom_24B0EE)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B10F
gText_Rom_24B10F: @ 0x0824B10F
	.string "1つまえの　ポケモンの　アピールと\nタイプが　おなじなら　きにいられる$"
	.if (. - gText_Rom_24B10F) != 0x24
	.error "gText_Rom_24B10F must retain its original byte length"
	.endif
	.globl gText_Rom_24B12F
	.set gText_Rom_24B12F, gText_Rom_24B10F + 0x20

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B133
gText_Rom_24B133: @ 0x0824B133
	.string "1つまえの　ポケモンの　アピールと\nタイプが　ちがうなら　きにいられる$"
	.if (. - gText_Rom_24B133) != 0x24
	.error "gText_Rom_24B133 must retain its original byte length"
	.endif
	.globl gText_Rom_24B153
	.set gText_Rom_24B153, gText_Rom_24B133 + 0x20

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B157
gText_Rom_24B157: @ 0x0824B157
	.string "1つまえの　ポケモンの　アピールの\nうまさに　えいきょう　される$"
	.if (. - gText_Rom_24B157) > 0x21
	.error "gText_Rom_24B157 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B157) < 0x21
	.space 0x21 - (. - gText_Rom_24B157)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B178
gText_Rom_24B178: @ 0x0824B178
	.string "アピールの　ちょうしが　あがる\nきんちょうも　しにくくなる$"
	.if (. - gText_Rom_24B178) > 0x1e
	.error "gText_Rom_24B178 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B178) < 0x1e
	.space 0x1e - (. - gText_Rom_24B178)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B196
gText_Rom_24B196: @ 0x0824B196
	.string "ちょうしが　いいときに　だすと\nアピールが　とても　うまくいく$"
	.if (. - gText_Rom_24B196) > 0x20
	.error "gText_Rom_24B196 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B196) < 0x20
	.space 0x20 - (. - gText_Rom_24B196)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B1B6
gText_Rom_24B1B6: @ 0x0824B1B6
	.string "このつぎの　アピールを\nはじめの　ほうに　だすことが　できる$"
	.if (. - gText_Rom_24B1B6) != 0x1f
	.error "gText_Rom_24B1B6 must retain its original byte length"
	.endif
	.globl gText_Rom_24B1D1
	.set gText_Rom_24B1D1, gText_Rom_24B1B6 + 0x1b

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B1D5
gText_Rom_24B1D5: @ 0x0824B1D5
	.string "このつぎの　アピールを\nおわりの　ほうに　だすことが　できる$"
	.if (. - gText_Rom_24B1D5) != 0x1f
	.error "gText_Rom_24B1D5 must retain its original byte length"
	.endif
	.globl gText_Rom_24B1F0
	.set gText_Rom_24B1F0, gText_Rom_24B1D5 + 0x1b

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B1F4
gText_Rom_24B1F4: @ 0x0824B1F4
	.string "このつぎの　アピールの\nじゅんばんが　かわりやすく　なる$"
	.if (. - gText_Rom_24B1F4) > 0x1d
	.error "gText_Rom_24B1F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B1F4) < 0x1d
	.space 0x1d - (. - gText_Rom_24B1F4)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B211
gText_Rom_24B211: @ 0x0824B211
	.string "このつぎの　アピールの\nじゅんばんを　めちゃくちゃに　する$"
	.if (. - gText_Rom_24B211) > 0x1e
	.error "gText_Rom_24B211 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B211) < 0x1e
	.space 0x1e - (. - gText_Rom_24B211)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B22F
gText_Rom_24B22F: @ 0x0824B22F
	.string "どの　コンテストで　みせても\nかならず　もりあがる　アピール$"
	.if (. - gText_Rom_24B22F) != 0x1f
	.error "gText_Rom_24B22F must retain its original byte length"
	.endif
	.globl gText_Rom_24B249
	.set gText_Rom_24B249, gText_Rom_24B22F + 0x1a

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B24E
gText_Rom_24B24E: @ 0x0824B24E
	.string "アピールが　うまくいった　ポケモン\nみんなを　かなり　おどろかす$"
	.if (. - gText_Rom_24B24E) != 0x21
	.error "gText_Rom_24B24E must retain its original byte length"
	.endif
	.globl gText_Rom_24B269
	.set gText_Rom_24B269, gText_Rom_24B24E + 0x1b

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B26F
gText_Rom_24B26F: @ 0x0824B26F
	.string "かいじょうが　もりあがっている　ほど\nアピールが　きにいられる$"
	.if (. - gText_Rom_24B26F) != 0x20
	.error "gText_Rom_24B26F must retain its original byte length"
	.endif
	.globl gText_Rom_24B28B
	.set gText_Rom_24B28B, gText_Rom_24B26F + 0x1c

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B28F
gText_Rom_24B28F: @ 0x0824B28F
	.string "このアピールのあと　かいじょうが\nしばらく　もりあがらなく　なる$"
	.if (. - gText_Rom_24B28F) > 0x21
	.error "gText_Rom_24B28F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B28F) < 0x21
	.space 0x21 - (. - gText_Rom_24B28F)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2B0
gText_Rom_24B2B0: @ 0x0824B2B0
	.string "あまごい$"
	.if (. - gText_Rom_24B2B0) > 0x5
	.error "gText_Rom_24B2B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2B0) < 0x5
	.space 0x5 - (. - gText_Rom_24B2B0)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	.globl gText_Rom_24B2B5
gText_Rom_24B2B5: @ 0x0824B2B5
	.string "いかり$"
	.if (. - gText_Rom_24B2B5) > 0x4
	.error "gText_Rom_24B2B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2B5) < 0x4
	.space 0x4 - (. - gText_Rom_24B2B5)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	.globl gText_Rom_24B2B9
gText_Rom_24B2B9: @ 0x0824B2B9
	.string "きあいだめ$"
	.if (. - gText_Rom_24B2B9) > 0x6
	.error "gText_Rom_24B2B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2B9) < 0x6
	.space 0x6 - (. - gText_Rom_24B2B9)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2BF
gText_Rom_24B2BF: @ 0x0824B2BF
	.string "さいみんじゅつ$"
	.if (. - gText_Rom_24B2BF) > 0x8
	.error "gText_Rom_24B2BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2BF) < 0x8
	.space 0x8 - (. - gText_Rom_24B2BF)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2C7
gText_Rom_24B2C7: @ 0x0824B2C7
	.string "タマゴうみ$"
	.if (. - gText_Rom_24B2C7) > 0x6
	.error "gText_Rom_24B2C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2C7) < 0x6
	.space 0x6 - (. - gText_Rom_24B2C7)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2CD
gText_Rom_24B2CD: @ 0x0824B2CD
	.string "つのでつく$"
	.if (. - gText_Rom_24B2CD) > 0x6
	.error "gText_Rom_24B2CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2CD) < 0x6
	.space 0x6 - (. - gText_Rom_24B2CD)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2D3
gText_Rom_24B2D3: @ 0x0824B2D3
	.string "つるぎのまい$"
	.if (. - gText_Rom_24B2D3) > 0x7
	.error "gText_Rom_24B2D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2D3) < 0x7
	.space 0x7 - (. - gText_Rom_24B2D3)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2DA
gText_Rom_24B2DA: @ 0x0824B2DA
	.string "テクスチャー$"
	.if (. - gText_Rom_24B2DA) > 0x7
	.error "gText_Rom_24B2DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2DA) < 0x7
	.space 0x7 - (. - gText_Rom_24B2DA)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2E1
gText_Rom_24B2E1: @ 0x0824B2E1
	.string "にほんばれ$"
	.if (. - gText_Rom_24B2E1) > 0x6
	.error "gText_Rom_24B2E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2E1) < 0x6
	.space 0x6 - (. - gText_Rom_24B2E1)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2E7
gText_Rom_24B2E7: @ 0x0824B2E7
	.string "ねむる$"
	.if (. - gText_Rom_24B2E7) > 0x4
	.error "gText_Rom_24B2E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2E7) < 0x4
	.space 0x4 - (. - gText_Rom_24B2E7)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2EB
gText_Rom_24B2EB: @ 0x0824B2EB
	.string "はさむ$"
	.if (. - gText_Rom_24B2EB) > 0x4
	.error "gText_Rom_24B2EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2EB) < 0x4
	.space 0x4 - (. - gText_Rom_24B2EB)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	.globl gText_Rom_24B2EF
gText_Rom_24B2EF: @ 0x0824B2EF
	.string "まるくなる$"
	.if (. - gText_Rom_24B2EF) > 0x6
	.error "gText_Rom_24B2EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2EF) < 0x6
	.space 0x6 - (. - gText_Rom_24B2EF)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	.globl gText_Rom_24B2F5
gText_Rom_24B2F5: @ 0x0824B2F5
	.string "ロックオン$"
	.if (. - gText_Rom_24B2F5) > 0x6
	.error "gText_Rom_24B2F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2F5) < 0x6
	.space 0x6 - (. - gText_Rom_24B2F5)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2FB
gText_Rom_24B2FB: @ 0x0824B2FB
	.string "かっこいい$"
	.if (. - gText_Rom_24B2FB) > 0x6
	.error "gText_Rom_24B2FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2FB) < 0x6
	.space 0x6 - (. - gText_Rom_24B2FB)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B301
gText_Rom_24B301: @ 0x0824B301
	.string "うつくしい$"
	.if (. - gText_Rom_24B301) > 0x6
	.error "gText_Rom_24B301 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B301) < 0x6
	.space 0x6 - (. - gText_Rom_24B301)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B307
gText_Rom_24B307: @ 0x0824B307
	.string "かわいい$"
	.if (. - gText_Rom_24B307) > 0x5
	.error "gText_Rom_24B307 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B307) < 0x5
	.space 0x5 - (. - gText_Rom_24B307)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B30C
gText_Rom_24B30C: @ 0x0824B30C
	.string "かしこい$"
	.if (. - gText_Rom_24B30C) > 0x5
	.error "gText_Rom_24B30C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B30C) < 0x5
	.space 0x5 - (. - gText_Rom_24B30C)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B311
gText_Rom_24B311: @ 0x0824B311
	.string "たくましい$"
	.if (. - gText_Rom_24B311) > 0x6
	.error "gText_Rom_24B311 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B311) < 0x6
	.space 0x6 - (. - gText_Rom_24B311)
	.endif
	.globl gUnknown_824B317
gUnknown_824B317: @ 0x0824B317

	@ asm/contest.s:1545 sub_080D7B68
	.globl gText_Rom_24B317
gText_Rom_24B317: @ 0x0824B317
	.string "かいめの　アピール！\nどの　わざを　だす？$"
	.if (. - gText_Rom_24B317) > 0x16
	.error "gText_Rom_24B317 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B317) < 0x16
	.space 0x16 - (. - gText_Rom_24B317)
	.endif
	.globl gUnknown_824B32D
gUnknown_824B32D: @ 0x0824B32D

	@ asm/contest.s:1562 sub_080D7B68
	.globl gText_Rom_24B32D
gText_Rom_24B32D: @ 0x0824B32D
	.string "かいめの　アピール！\nしかし　さんか　できない！$"
	.if (. - gText_Rom_24B32D) > 0x19
	.error "gText_Rom_24B32D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B32D) < 0x19
	.space 0x19 - (. - gText_Rom_24B32D)
	.endif
	.globl gUnknown_824B346
gUnknown_824B346: @ 0x0824B346

	@ asm/contest.s:2878 sub_080D8334
	.globl gText_Rom_24B346
gText_Rom_24B346: @ 0x0824B346
	.string "{0xFD}{0x02}は\n{0xFD}{0x03}で　アピール！$"
	.if (. - gText_Rom_24B346) > 0xe
	.error "gText_Rom_24B346 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B346) < 0xe
	.space 0xe - (. - gText_Rom_24B346)
	.endif
	.globl gUnknown_824B354
gUnknown_824B354: @ 0x0824B354

	@ asm/contest.s:4961 sub_080D8334
	.globl gText_Rom_24B354
gText_Rom_24B354: @ 0x0824B354
	.string "{0xFD}{0x02}は\nみんなを　みていた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B354) > 0x1b
	.error "gText_Rom_24B354 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B354) < 0x1b
	.space 0x1b - (. - gText_Rom_24B354)
	.endif
	.globl gUnknown_824B36F
gUnknown_824B36F: @ 0x0824B36F

	@ asm/contest.s:5766 sub_080D9DD8
	.globl gText_Rom_24B36F
gText_Rom_24B36F: @ 0x0824B36F
	.string "アピールタイム　しゅうりょう！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B36F) > 0x1c
	.error "gText_Rom_24B36F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B36F) < 0x1c
	.space 0x1c - (. - gText_Rom_24B36F)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B38B
gText_Rom_24B38B: @ 0x0824B38B
	.string "しかし　じゃまを　された！$"
	.if (. - gText_Rom_24B38B) > 0xe
	.error "gText_Rom_24B38B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B38B) < 0xe
	.space 0xe - (. - gText_Rom_24B38B)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B399
gText_Rom_24B399: @ 0x0824B399
	.string "ほかの　ポケモンに　つられた！$"
	.if (. - gText_Rom_24B399) > 0x10
	.error "gText_Rom_24B399 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B399) < 0x10
	.space 0x10 - (. - gText_Rom_24B399)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B3A9
gText_Rom_24B3A9: @ 0x0824B3A9
	.string "しかし　しっぱいして\nしまった！$"
	.if (. - gText_Rom_24B3A9) > 0x11
	.error "gText_Rom_24B3A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B3A9) < 0x11
	.space 0x11 - (. - gText_Rom_24B3A9)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B3BA
gText_Rom_24B3BA: @ 0x0824B3BA
	.string "いつもより　うまく　いった！$"
	.if (. - gText_Rom_24B3BA) > 0xf
	.error "gText_Rom_24B3BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B3BA) < 0xf
	.space 0xf - (. - gText_Rom_24B3BA)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B3C9
gText_Rom_24B3C9: @ 0x0824B3C9
	.string "しんさいんが　なぜか\nめを　そらした！$"
	.if (. - gText_Rom_24B3C9) > 0x14
	.error "gText_Rom_24B3C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B3C9) < 0x14
	.space 0x14 - (. - gText_Rom_24B3C9)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B3DD
gText_Rom_24B3DD: @ 0x0824B3DD
	.string "これまでの　しっぱいを\nいかして　がんばってみた！$"
	.if (. - gText_Rom_24B3DD) > 0x1a
	.error "gText_Rom_24B3DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B3DD) < 0x1a
	.space 0x1a - (. - gText_Rom_24B3DD)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B3F7
gText_Rom_24B3F7: @ 0x0824B3F7
	.string "これいじょう　わざを\nだせなくなった！$"
	.if (. - gText_Rom_24B3F7) > 0x14
	.error "gText_Rom_24B3F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B3F7) < 0x14
	.space 0x14 - (. - gText_Rom_24B3F7)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B40B
gText_Rom_24B40B: @ 0x0824B40B
	.string "こわいくらい　うまく　いった！$"
	.if (. - gText_Rom_24B40B) > 0x10
	.error "gText_Rom_24B40B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B40B) < 0x10
	.space 0x10 - (. - gText_Rom_24B40B)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B41B
gText_Rom_24B41B: @ 0x0824B41B
	.string "めだっている　ポケモンと\nおなじくらい　がんばった！$"
	.if (. - gText_Rom_24B41B) > 0x1b
	.error "gText_Rom_24B41B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B41B) < 0x1b
	.space 0x1b - (. - gText_Rom_24B41B)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B436
gText_Rom_24B436: @ 0x0824B436
	.string "しんさいんが　きたいを\nこめた　めで　みつめた！$"
	.if (. - gText_Rom_24B436) > 0x19
	.error "gText_Rom_24B436 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B436) < 0x19
	.space 0x19 - (. - gText_Rom_24B436)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B44F
gText_Rom_24B44F: @ 0x0824B44F
	.string "かなり　うまく　いった！$"
	.if (. - gText_Rom_24B44F) > 0xd
	.error "gText_Rom_24B44F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B44F) < 0xd
	.space 0xd - (. - gText_Rom_24B44F)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B45C
gText_Rom_24B45C: @ 0x0824B45C
	.string "ふつうより　ちょっと\nうまく　いった！$"
	.if (. - gText_Rom_24B45C) > 0x14
	.error "gText_Rom_24B45C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B45C) < 0x14
	.space 0x14 - (. - gText_Rom_24B45C)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B470
gText_Rom_24B470: @ 0x0824B470
	.string "{0xFD}{0x02}は\nぜんぜん　めだたなかった…{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_24B470) > 0x14
	.error "gText_Rom_24B470 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B470) < 0x14
	.space 0x14 - (. - gText_Rom_24B470)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B484
gText_Rom_24B484: @ 0x0824B484
	.string "{0xFD}{0x02}は\nあんまり　めだたなかった…{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_24B484) > 0x14
	.error "gText_Rom_24B484 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B484) < 0x14
	.space 0x14 - (. - gText_Rom_24B484)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B498
gText_Rom_24B498: @ 0x0824B498
	.string "{0xFD}{0x02}は\nまあまあ　めだった！{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_24B498) > 0x11
	.error "gText_Rom_24B498 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B498) < 0x11
	.space 0x11 - (. - gText_Rom_24B498)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B4A9
gText_Rom_24B4A9: @ 0x0824B4A9
	.string "{0xFD}{0x02}は\nかなり　めだった！{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_24B4A9) > 0x10
	.error "gText_Rom_24B4A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B4A9) < 0x10
	.space 0x10 - (. - gText_Rom_24B4A9)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B4B9
gText_Rom_24B4B9: @ 0x0824B4B9
	.string "{0xFD}{0x02}は\nものすごく　めだった！{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_24B4B9) > 0x12
	.error "gText_Rom_24B4B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B4B9) < 0x12
	.space 0x12 - (. - gText_Rom_24B4B9)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B4CB
gText_Rom_24B4CB: @ 0x0824B4CB
	.string "{0xFD}{0x02}は\nアピール　していない！{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_24B4CB) > 0x12
	.error "gText_Rom_24B4CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B4CB) < 0x12
	.space 0x12 - (. - gText_Rom_24B4CB)
	.endif
	@ Replaced baserom.gba range: offset=0x24B4DD, size=0x1B
	.byte 0x12, 0x38, 0x19, 0x00, 0xFD, 0x02, 0x19, 0x00, 0x51, 0x9C, 0xAE, 0x79, 0x16, 0xFE, 0x07, 0x10
	.byte 0x02, 0x37, 0x00, 0x10, 0x06, 0x1F, 0x50, 0x10, 0xAB, 0xFF, 0xFF

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B4F8
gText_Rom_24B4F8: @ 0x0824B4F8
	.string "しんさいんの　{0xFD}{0x02}への\nいんしょうは　かわらない！$"
	.if (. - gText_Rom_24B4F8) > 0x1a
	.error "gText_Rom_24B4F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B4F8) < 0x1a
	.space 0x1a - (. - gText_Rom_24B4F8)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B512
gText_Rom_24B512: @ 0x0824B512
	.string "{0xFD}{0x02}の　{0xFD}{0x04}は\nいんしょうを　はねかえした！$"
	.if (. - gText_Rom_24B512) > 0x17
	.error "gText_Rom_24B512 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B512) < 0x17
	.space 0x17 - (. - gText_Rom_24B512)
	.endif
	@ Replaced baserom.gba range: offset=0x24B529, size=0x1E3
	.byte 0xFD, 0x02, 0x19, 0xFE, 0x51, 0x9C, 0xAE, 0x79, 0x0A, 0x03, 0x06, 0x37, 0x00, 0x15, 0x08, 0x15
	.byte 0x50, 0x10, 0xAB, 0xFF, 0x5D, 0x9E, 0x5C, 0x84, 0x79, 0x00, 0x51, 0x9C, 0xAE, 0x79, 0x19, 0xFE
	.byte 0x0A, 0x03, 0x06, 0x37, 0x00, 0x15, 0x08, 0x15, 0x50, 0x10, 0xAB, 0xFF, 0x3F, 0x2E, 0x02, 0x2E
	.byte 0x19, 0x00, 0x51, 0x9C, 0xAE, 0x79, 0x2D, 0xFE, 0x05, 0x15, 0x3D, 0x08, 0x27, 0x02, 0x16, 0x00
	.byte 0x20, 0x0E, 0x10, 0xAB, 0xFF, 0xFD, 0x03, 0x19, 0xFE, 0x51, 0x9C, 0xAE, 0x79, 0x2D, 0x00, 0x1B
	.byte 0x08, 0x08, 0x20, 0x0E, 0x10, 0xAB, 0xFF, 0xFD, 0x02, 0x26, 0x28, 0x00, 0x22, 0x41, 0x12, 0xFE
	.byte 0x51, 0x9C, 0xAE, 0x79, 0x2D, 0x00, 0x1B, 0x08, 0x08, 0x20, 0x0E, 0x10, 0xAB, 0xFF, 0xFD, 0x03
	.byte 0x19, 0xFE, 0x11, 0x35, 0x03, 0x23, 0x08, 0x2D, 0x00, 0x03, 0x46, 0x50, 0x10, 0xAB, 0xFF, 0xFD
	.byte 0x03, 0x19, 0xFE, 0x51, 0x9C, 0xAE, 0x79, 0x2D, 0x00, 0x1B, 0x08, 0x08, 0x20, 0x0E, 0x10, 0xAB
	.byte 0xFF, 0x20, 0x2E, 0x15, 0x19, 0x00, 0x51, 0x9C, 0xAE, 0x79, 0x2D, 0xFE, 0x05, 0x05, 0x1A, 0x46
	.byte 0x16, 0x00, 0x1B, 0x08, 0x08, 0x20, 0x0E, 0x10, 0xAB, 0xFF, 0x12, 0x38, 0x19, 0x00, 0xFD, 0x02
	.byte 0x19, 0x00, 0x51, 0x9C, 0xAE, 0x79, 0x16, 0xFE, 0x07, 0x10, 0x02, 0x37, 0x00, 0x10, 0x06, 0x1F
	.byte 0x50, 0x10, 0xAB, 0xFF, 0xFD, 0x02, 0x26, 0x28, 0x00, 0x22, 0x41, 0x50, 0x13, 0x02, 0x29, 0xFE
	.byte 0x51, 0x9C, 0xAE, 0x79, 0x2D, 0x00, 0x1B, 0x08, 0x08, 0x20, 0x0E, 0x10, 0xAB, 0xFF, 0x0C, 0x2E
	.byte 0x0B, 0x02, 0x2E, 0x19, 0x00, 0x0D, 0x07, 0x15, 0x51, 0x9C, 0xAE, 0x79, 0x2D, 0xFE, 0x02, 0x12
	.byte 0x23, 0x26, 0x28, 0x00, 0x1B, 0x08, 0x08, 0x20, 0x0E, 0x10, 0xAB, 0xFF, 0x3D, 0x48, 0x2E, 0x02
	.byte 0x37, 0x02, 0x19, 0x00, 0x51, 0x9C, 0xAE, 0x79, 0x2D, 0xFE, 0x1A, 0x2E, 0x48, 0x2E, 0x19, 0x00
	.byte 0x44, 0x07, 0x16, 0x20, 0x0E, 0x10, 0xAB, 0xFF, 0x02, 0x1F, 0x1F, 0x44, 0x00, 0x3D, 0x34, 0x1F
	.byte 0x0B, 0x2A, 0x10, 0xFE, 0x03, 0x50, 0x4D, 0x2E, 0x2D, 0x00, 0x1A, 0x27, 0x0C, 0x13, 0x00, 0x22
	.byte 0x41, 0x50, 0x10, 0xAB, 0xFF, 0x23, 0x03, 0x00, 0x51, 0x9C, 0xAE, 0x79, 0x16, 0xFE, 0x0B, 0x2E
	.byte 0x06, 0x00, 0x44, 0x07, 0x15, 0x08, 0x15, 0x50, 0x10, 0xAB, 0xFF, 0x0C, 0x2E, 0x0B, 0x02, 0x2E
	.byte 0x19, 0x00, 0x0A, 0x0A, 0x2B, 0x16, 0x00, 0x03, 0x50, 0x10, 0x04, 0xFE, 0x0D, 0x3B, 0x02, 0x00
	.byte 0x51, 0x9C, 0xAE, 0x79, 0x16, 0x15, 0x50, 0x10, 0xAB, 0xFF, 0x12, 0x38, 0x06, 0x27, 0x19, 0x00
	.byte 0x51, 0x9C, 0xAE, 0x79, 0x16, 0xFE, 0x0D, 0x0A, 0x0C, 0x00, 0x07, 0x10, 0x02, 0x37, 0x00, 0x10
	.byte 0x06, 0x1F, 0x50, 0x10, 0xAB, 0xFF, 0x5D, 0x9E, 0x5C, 0x84, 0x79, 0x00, 0x51, 0x9C, 0xAE, 0x79
	.byte 0x37, 0x01, 0x29, 0xFE, 0x06, 0x3E, 0x41, 0x09, 0x00, 0x22, 0x41, 0x50, 0x10, 0xAB, 0xFF, 0xFD
	.byte 0x02, 0x14, 0xFE, 0x05, 0x15, 0x3D, 0x08, 0x27, 0x02, 0x00, 0x22, 0x41, 0x50, 0x10, 0xAB, 0xFF
	.byte 0x3D, 0x34, 0x1F, 0x0B, 0x2A, 0x10, 0x00, 0x51, 0x9C, 0xAE, 0x79, 0x2D, 0xFE, 0x0B, 0x27, 0x16
	.byte 0x00, 0x22, 0x41, 0x10, 0x15, 0x08, 0x0C, 0x10, 0xAB, 0xFF, 0x3F, 0x2E, 0x02, 0x2E, 0x19, 0x00
	.byte 0x51, 0x9C, 0xAE, 0x79, 0x14, 0xFE, 0x05, 0x15, 0x3D, 0x08, 0x27, 0x02, 0x16, 0x00, 0x20, 0x0E
	.byte 0x10, 0xAB, 0xFF

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B70C
gText_Rom_24B70C: @ 0x0824B70C
	.string "ほかの　ポケモンが　いつもより\nきに　なって　きた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B70C) > 0x27
	.error "gText_Rom_24B70C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B70C) < 0x27
	.space 0x27 - (. - gText_Rom_24B70C)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B733
gText_Rom_24B733: @ 0x0824B733
	.string "{0xFD}{0x02}は　このあと\nアピール　できなく　なった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B733) > 0x24
	.error "gText_Rom_24B733 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B733) < 0x24
	.space 0x24 - (. - gText_Rom_24B733)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B757
gText_Rom_24B757: @ 0x0824B757
	.string "ちょっと　だけ\nきもちが　おちついた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B757) > 0x20
	.error "gText_Rom_24B757 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B757) < 0x20
	.space 0x20 - (. - gText_Rom_24B757)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B777
gText_Rom_24B777: @ 0x0824B777
	.string "ほかの　ポケモンが　ぜんぜん\nきに　ならなく　なった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B777) > 0x28
	.error "gText_Rom_24B777 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B777) < 0x28
	.space 0x28 - (. - gText_Rom_24B777)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B79F
gText_Rom_24B79F: @ 0x0824B79F
	.string "ほかの　ポケモンが　あまり\nきに　ならなく　なった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B79F) > 0x27
	.error "gText_Rom_24B79F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B79F) < 0x27
	.space 0x27 - (. - gText_Rom_24B79F)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B7C6
gText_Rom_24B7C6: @ 0x0824B7C6
	.string "ほかの　ポケモンを　あまり\nきに　しないように　なった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B7C6) > 0x29
	.error "gText_Rom_24B7C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B7C6) < 0x29
	.space 0x29 - (. - gText_Rom_24B7C6)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B7EF
gText_Rom_24B7EF: @ 0x0824B7EF
	.string "ほかの　ポケモンを\nびっくり　させようと　した！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B7EF) > 0x25
	.error "gText_Rom_24B7EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B7EF) < 0x25
	.space 0x25 - (. - gText_Rom_24B7EF)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B814
gText_Rom_24B814: @ 0x0824B814
	.string "みんなの　めを\nくらませようと　した！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B814) > 0x20
	.error "gText_Rom_24B814 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B814) < 0x20
	.space 0x20 - (. - gText_Rom_24B814)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B834
gText_Rom_24B834: @ 0x0824B834
	.string "しんさいんは　{0xFD}{0x02}から\nめを　そらして　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B834) > 0x26
	.error "gText_Rom_24B834 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B834) < 0x26
	.space 0x26 - (. - gText_Rom_24B834)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B85A
gText_Rom_24B85A: @ 0x0824B85A
	.string "つぎに　まっている　ポケモンを\nきんちょう　させようと　した！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B85A) > 0x2c
	.error "gText_Rom_24B85A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B85A) < 0x2c
	.space 0x2c - (. - gText_Rom_24B85A)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B886
gText_Rom_24B886: @ 0x0824B886
	.string "{0xFD}{0x02}は\nきんちょう　してしまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B886) > 0x1e
	.error "gText_Rom_24B886 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B886) < 0x1e
	.space 0x1e - (. - gText_Rom_24B886)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B8A4
gText_Rom_24B8A4: @ 0x0824B8A4
	.string "アピールが　まだの　ポケモンを\nきんちょう　させようと　した！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B8A4) > 0x2c
	.error "gText_Rom_24B8A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B8A4) < 0x2c
	.space 0x2c - (. - gText_Rom_24B8A4)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B8D0
gText_Rom_24B8D0: @ 0x0824B8D0
	.string "ちょうしが　いい　ポケモンを\nからかってみた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B8D0) > 0x24
	.error "gText_Rom_24B8D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B8D0) < 0x24
	.space 0x24 - (. - gText_Rom_24B8D0)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B8F4
gText_Rom_24B8F4: @ 0x0824B8F4
	.string "{0xFD}{0x02}の　ちょうしが\nもとに　もどって　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B8F4) > 0x25
	.error "gText_Rom_24B8F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B8F4) < 0x25
	.space 0x25 - (. - gText_Rom_24B8F4)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B919
gText_Rom_24B919: @ 0x0824B919
	.string "ちょうしが　いい　ポケモンの\nじゃまを　しようと　した！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B919) > 0x29
	.error "gText_Rom_24B919 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B919) < 0x29
	.space 0x29 - (. - gText_Rom_24B919)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B942
gText_Rom_24B942: @ 0x0824B942
	.string "めだっている　{0xFD}{0x02}は\nさらに　はりきった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B942) > 0x22
	.error "gText_Rom_24B942 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B942) < 0x22
	.space 0x22 - (. - gText_Rom_24B942)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B964
gText_Rom_24B964: @ 0x0824B964
	.string "めだっていない　{0xFD}{0x02}は\nがんばりまくった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B964) > 0x22
	.error "gText_Rom_24B964 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B964) < 0x22
	.space 0x22 - (. - gText_Rom_24B964)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B986
gText_Rom_24B986: @ 0x0824B986
	.string "まえの　ポケモンたちに\nまけないくらい　はりきった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B986) > 0x27
	.error "gText_Rom_24B986 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B986) < 0x27
	.space 0x27 - (. - gText_Rom_24B986)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B9AD
gText_Rom_24B9AD: @ 0x0824B9AD
	.string "{0xFD}{0x02}は　アピールを\nうまく　みせられなかった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B9AD) > 0x24
	.error "gText_Rom_24B9AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B9AD) < 0x24
	.space 0x24 - (. - gText_Rom_24B9AD)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B9D1
gText_Rom_24B9D1: @ 0x0824B9D1
	.string "まえの　ポケモンと\nおなじくらい　はりきった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B9D1) > 0x24
	.error "gText_Rom_24B9D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B9D1) < 0x24
	.space 0x24 - (. - gText_Rom_24B9D1)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B9F5
gText_Rom_24B9F5: @ 0x0824B9F5
	.string "{0xFD}{0x02}の　アピールは\nうまく　みせられなかった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B9F5) > 0x24
	.error "gText_Rom_24B9F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B9F5) < 0x24
	.space 0x24 - (. - gText_Rom_24B9F5)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BA19
gText_Rom_24BA19: @ 0x0824BA19
	.string "{0xFD}{0x02}の　アピールは\nうまく　みせられなかった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BA19) > 0x24
	.error "gText_Rom_24BA19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BA19) < 0x24
	.space 0x24 - (. - gText_Rom_24BA19)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BA3D
gText_Rom_24BA3D: @ 0x0824BA3D
	.string "{0xFD}{0x02}の　アピールは\nすこし　うまく　いった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BA3D) > 0x23
	.error "gText_Rom_24BA3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BA3D) < 0x23
	.space 0x23 - (. - gText_Rom_24BA3D)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BA60
gText_Rom_24BA60: @ 0x0824BA60
	.string "{0xFD}{0x02}の　アピールは\nまあまあ　うまく　いった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BA60) > 0x24
	.error "gText_Rom_24BA60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BA60) < 0x24
	.space 0x24 - (. - gText_Rom_24BA60)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BA84
gText_Rom_24BA84: @ 0x0824BA84
	.string "{0xFD}{0x02}の　アピールは\nとても　うまく　いった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BA84) > 0x23
	.error "gText_Rom_24BA84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BA84) < 0x23
	.space 0x23 - (. - gText_Rom_24BA84)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BAA7
gText_Rom_24BAA7: @ 0x0824BAA7
	.string "{0xFD}{0x02}の　アピールは\nしっぱい　して　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BAA7) > 0x24
	.error "gText_Rom_24BAA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BAA7) < 0x24
	.space 0x24 - (. - gText_Rom_24BAA7)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BACB
gText_Rom_24BACB: @ 0x0824BACB
	.string "{0xFD}{0x02}の　アピールは\nあまり　うまく　いかなかった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BACB) > 0x26
	.error "gText_Rom_24BACB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BACB) < 0x26
	.space 0x26 - (. - gText_Rom_24BACB)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BAF1
gText_Rom_24BAF1: @ 0x0824BAF1
	.string "{0xFD}{0x02}の　アピールは\nすこし　うまく　いった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BAF1) > 0x23
	.error "gText_Rom_24BAF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BAF1) < 0x23
	.space 0x23 - (. - gText_Rom_24BAF1)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BB14
gText_Rom_24BB14: @ 0x0824BB14
	.string "{0xFD}{0x02}の　アピールは\nまあまあ　うまく　いった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BB14) > 0x24
	.error "gText_Rom_24BB14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BB14) < 0x24
	.space 0x24 - (. - gText_Rom_24BB14)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BB38
gText_Rom_24BB38: @ 0x0824BB38
	.string "{0xFD}{0x02}の　アピールは\nかなり　うまく　いった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BB38) > 0x23
	.error "gText_Rom_24BB38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BB38) < 0x23
	.space 0x23 - (. - gText_Rom_24BB38)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BB5B
gText_Rom_24BB5B: @ 0x0824BB5B
	.string "{0xFD}{0x02}の　アピールは\nとても　うまく　いった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BB5B) > 0x23
	.error "gText_Rom_24BB5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BB5B) < 0x23
	.space 0x23 - (. - gText_Rom_24BB5B)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BB7E
gText_Rom_24BB7E: @ 0x0824BB7E
	.string "まえの　ポケモンと\nおなじタイプで　きにいられた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BB7E) > 0x26
	.error "gText_Rom_24BB7E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BB7E) < 0x26
	.space 0x26 - (. - gText_Rom_24BB7E)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BBA4
gText_Rom_24BBA4: @ 0x0824BBA4
	.string "まえの　ポケモンと\nちがうタイプで　きにいられた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BBA4) > 0x26
	.error "gText_Rom_24BBA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BBA4) < 0x26
	.space 0x26 - (. - gText_Rom_24BBA4)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BBCA
gText_Rom_24BBCA: @ 0x0824BBCA
	.string "まえの　ポケモンより\nだいぶ　めだった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BBCA) > 0x21
	.error "gText_Rom_24BBCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BBCA) < 0x21
	.space 0x21 - (. - gText_Rom_24BBCA)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BBEB
gText_Rom_24BBEB: @ 0x0824BBEB
	.string "まえの　ポケモンより\nうまく　できなかった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BBEB) > 0x23
	.error "gText_Rom_24BBEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BBEB) < 0x23
	.space 0x23 - (. - gText_Rom_24BBEB)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BC0E
gText_Rom_24BC0E: @ 0x0824BC0E
	.string "{0xFD}{0x02}の　ちょうしが\nいつもより　あがった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BC0E) > 0x22
	.error "gText_Rom_24BC0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BC0E) < 0x22
	.space 0x22 - (. - gText_Rom_24BC0E)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BC30
gText_Rom_24BC30: @ 0x0824BC30
	.string "{0xFD}{0x02}は　ちょうしが　よくて\nぜっこうの　アピールに　なった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BC30) > 0x2b
	.error "gText_Rom_24BC30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BC30) < 0x2b
	.space 0x2b - (. - gText_Rom_24BC30)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BC5B
gText_Rom_24BC5B: @ 0x0824BC5B
	.string "つぎの　アピールを　はやく\nしようと　まえに　でた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BC5B) > 0x27
	.error "gText_Rom_24BC5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BC5B) < 0x27
	.space 0x27 - (. - gText_Rom_24BC5B)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BC82
gText_Rom_24BC82: @ 0x0824BC82
	.string "つぎの　アピールを　おそく\nしようと　1ぽ　さがった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BC82) > 0x28
	.error "gText_Rom_24BC82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BC82) < 0x28
	.space 0x28 - (. - gText_Rom_24BC82)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BCAA
gText_Rom_24BCAA: @ 0x0824BCAA
	.string "つぎの　ターンの　じゅんばんを\nおかしく　した！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BCAA) > 0x25
	.error "gText_Rom_24BCAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BCAA) < 0x25
	.space 0x25 - (. - gText_Rom_24BCAA)
	.endif
	.globl gUnknown_824BCCF
gUnknown_824BCCF: @ 0x0824BCCF

	@ asm/contest.s:11866 sub_080DCBC0 (+1 aliases)
	.globl gText_Rom_24BCCF
gText_Rom_24BCCF: @ 0x0824BCCF
	.string "しんさいんが　きたいして\n{0xFD}{0x02}を　みつめた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BCCF) > 0x23
	.error "gText_Rom_24BCCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BCCF) < 0x23
	.space 0x23 - (. - gText_Rom_24BCCF)
	.endif
	.globl gUnknown_824BCF2
gUnknown_824BCF2: @ 0x0824BCF2

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BCF2
gText_Rom_24BCF2: @ 0x0824BCF2
	.string "アピールの　くみあわせが\nきに　いって　もらえた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BCF2) > 0x26
	.error "gText_Rom_24BCF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BCF2) < 0x26
	.space 0x26 - (. - gText_Rom_24BCF2)
	.endif
	.globl gUnknown_824BD18
gUnknown_824BD18: @ 0x0824BD18

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BD18
gText_Rom_24BD18: @ 0x0824BD18
	.string "アピールの　くみあわせが\nかなり　きに　いられた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BD18) > 0x26
	.error "gText_Rom_24BD18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BD18) < 0x26
	.space 0x26 - (. - gText_Rom_24BD18)
	.endif
	.globl gUnknown_824BD3E
gUnknown_824BD3E: @ 0x0824BD3E

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BD3E
gText_Rom_24BD3E: @ 0x0824BD3E
	.string "アピールの　くみあわせが\nものすごく　きに　いられた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BD3E) > 0x28
	.error "gText_Rom_24BD3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BD3E) < 0x28
	.space 0x28 - (. - gText_Rom_24BD3E)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BD66
gText_Rom_24BD66: @ 0x0824BD66
	.string "{0xFD}{0x02}は　なんとか\nめを　そらした！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BD66) > 0x1e
	.error "gText_Rom_24BD66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BD66) < 0x1e
	.space 0x1e - (. - gText_Rom_24BD66)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BD84
gText_Rom_24BD84: @ 0x0824BD84
	.string "{0xFD}{0x02}は\nそっちを　みずに　すんだ！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BD84) > 0x1e
	.error "gText_Rom_24BD84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BD84) < 0x1e
	.space 0x1e - (. - gText_Rom_24BD84)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BDA2
gText_Rom_24BDA2: @ 0x0824BDA2
	.string "{0xFD}{0x02}は\nこのくらいは　へいきだった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BDA2) > 0x1f
	.error "gText_Rom_24BDA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BDA2) < 0x1f
	.space 0x1f - (. - gText_Rom_24BDA2)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BDC1
gText_Rom_24BDC1: @ 0x0824BDC1
	.string "{0xFD}{0x02}は　ちょっと\nきを　とられて　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BDC1) > 0x23
	.error "gText_Rom_24BDC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BDC1) < 0x23
	.space 0x23 - (. - gText_Rom_24BDC1)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BDE4
gText_Rom_24BDE4: @ 0x0824BDE4
	.string "ほかの　ポケモンを\nびっくり　させようと　した！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BDE4) > 0x25
	.error "gText_Rom_24BDE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BDE4) < 0x25
	.space 0x25 - (. - gText_Rom_24BDE4)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BE09
gText_Rom_24BE09: @ 0x0824BE09
	.string "{0xFD}{0x02}は　きを　とられて\nしたを　むいて　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BE09) > 0x26
	.error "gText_Rom_24BE09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BE09) < 0x26
	.space 0x26 - (. - gText_Rom_24BE09)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BE2F
gText_Rom_24BE2F: @ 0x0824BE2F
	.string "{0xFD}{0x02}は　きを　とられて\nふりかえって　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BE2F) > 0x25
	.error "gText_Rom_24BE2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BE2F) < 0x25
	.space 0x25 - (. - gText_Rom_24BE2F)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BE54
gText_Rom_24BE54: @ 0x0824BE54
	.string "{0xFD}{0x02}は　おもわず\nこえを　あげて　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BE54) > 0x23
	.error "gText_Rom_24BE54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BE54) < 0x23
	.space 0x23 - (. - gText_Rom_24BE54)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BE77
gText_Rom_24BE77: @ 0x0824BE77
	.string "{0xFD}{0x02}は　おもわず\nとびあがって　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BE77) > 0x22
	.error "gText_Rom_24BE77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BE77) < 0x22
	.space 0x22 - (. - gText_Rom_24BE77)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BE99
gText_Rom_24BE99: @ 0x0824BE99
	.string "{0xFD}{0x02}は　きを　とられて\nひっくり　かえって　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BE99) > 0x28
	.error "gText_Rom_24BE99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BE99) < 0x28
	.space 0x28 - (. - gText_Rom_24BE99)
	.endif
	.globl gUnknown_824BEC1
gUnknown_824BEC1: @ 0x0824BEC1

	@ asm/contest.s:4809 sub_080D8334
	.globl gText_Rom_24BEC1
gText_Rom_24BEC1: @ 0x0824BEC1
	.string "{0xFD}{0x02}は　きんちょうして\nアピールが　できなかった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BEC1) > 0x26
	.error "gText_Rom_24BEC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BEC1) < 0x26
	.space 0x26 - (. - gText_Rom_24BEC1)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BEE7
gText_Rom_24BEE7: @ 0x0824BEE7
	.string "でも　しっぱい　してしまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BEE7) > 0x1c
	.error "gText_Rom_24BEE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BEE7) < 0x1c
	.space 0x1c - (. - gText_Rom_24BEE7)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BF03
gText_Rom_24BF03: @ 0x0824BF03
	.string "でも　きんちょう\nさせられなかった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BF03) > 0x1f
	.error "gText_Rom_24BF03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BF03) < 0x1f
	.space 0x1f - (. - gText_Rom_24BF03)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BF22
gText_Rom_24BF22: @ 0x0824BF22
	.string "でも　だれも\nきんちょう　しなかった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BF22) > 0x20
	.error "gText_Rom_24BF22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BF22) < 0x20
	.space 0x20 - (. - gText_Rom_24BF22)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BF42
gText_Rom_24BF42: @ 0x0824BF42
	.string "でも　むし　されて　しまった…{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BF42) > 0x1c
	.error "gText_Rom_24BF42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BF42) < 0x1c
	.space 0x1c - (. - gText_Rom_24BF42)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BF5E
gText_Rom_24BF5E: @ 0x0824BF5E
	.string "でも　ちょうしは\nあがらなかった…{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BF5E) > 0x1e
	.error "gText_Rom_24BF5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BF5E) < 0x1e
	.space 0x1e - (. - gText_Rom_24BF5E)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BF7C
gText_Rom_24BF7C: @ 0x0824BF7C
	.string "ちょうしが　よく　なくて\nあまり　うまく　できなかった…{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BF7C) > 0x29
	.error "gText_Rom_24BF7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BF7C) < 0x29
	.space 0x29 - (. - gText_Rom_24BF7C)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BFA5
gText_Rom_24BFA5: @ 0x0824BFA5
	.string "{0xFD}{0x02}は\nへいき　だった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BFA5) > 0x19
	.error "gText_Rom_24BFA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BFA5) < 0x19
	.space 0x19 - (. - gText_Rom_24BFA5)
	.endif
	.globl gUnknown_824BFBE
gUnknown_824BFBE: @ 0x0824BFBE

	@ asm/contest.s:4091 sub_080D8334
	.globl gText_Rom_24BFBE
gText_Rom_24BFBE: @ 0x0824BFBE
	.string "{0xFD}{0x02}は　おなじアピールを\nつづけて　がっかり　された！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BFBE) > 0x28
	.error "gText_Rom_24BFBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BFBE) < 0x28
	.space 0x28 - (. - gText_Rom_24BFBE)
	.endif
	.globl gUnknown_824BFE6
gUnknown_824BFE6: @ 0x0824BFE6

	@ asm/contest.s:4355 sub_080D8334
	.globl gText_Rom_24BFE6
gText_Rom_24BFE6: @ 0x0824BFE6
	.string "{0xFD}{0x02}の　{0xFD}{0x04}が\nまわりに　とても　うけた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BFE6) > 0x22
	.error "gText_Rom_24BFE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BFE6) < 0x22
	.space 0x22 - (. - gText_Rom_24BFE6)
	.endif
	.globl gUnknown_824C008
gUnknown_824C008: @ 0x0824C008

	@ asm/contest.s:4338 sub_080D8334
	.globl gText_Rom_24C008
gText_Rom_24C008: @ 0x0824C008
	.string "{0xFD}{0x02}の　{0xFD}{0x04}は\nここでは　うけなかった…{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24C008) > 0x21
	.error "gText_Rom_24C008 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C008) < 0x21
	.space 0x21 - (. - gText_Rom_24C008)
	.endif
	.globl gUnknown_824C029
gUnknown_824C029: @ 0x0824C029

	@ asm/contest.s:4363 sub_080D8334
	.globl gText_Rom_24C029
gText_Rom_24C029: @ 0x0824C029
	.string "{0xFD}{0x02}の　{0xFD}{0x04}に\nまわりが　もりあがった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24C029) > 0x21
	.error "gText_Rom_24C029 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C029) < 0x21
	.space 0x21 - (. - gText_Rom_24C029)
	.endif
	.globl gUnknown_824C04A
gUnknown_824C04A: @ 0x0824C04A

	@ asm/contest.s:3824 sub_080D8334
	.globl gText_Rom_24C04A
gText_Rom_24C04A: @ 0x0824C04A
	.string "{0xFD}{0x02}は　つぎの　アピールに\nさんか　できなくなった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24C04A) > 0x27
	.error "gText_Rom_24C04A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C04A) < 0x27
	.space 0x27 - (. - gText_Rom_24C04A)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24C071
gText_Rom_24C071: @ 0x0824C071
	.string "かんきゃくの\nちゅうもくを　あつめた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24C071) > 0x20
	.error "gText_Rom_24C071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C071) < 0x20
	.space 0x20 - (. - gText_Rom_24C071)
	.endif
	.globl gUnknown_824C091
gUnknown_824C091: @ 0x0824C091

	@ asm/contest.s:4708 sub_080D8334
	.globl gText_Rom_24C091
gText_Rom_24C091: @ 0x0824C091
	.string "かんきゃくは\n{0xFD}{0x04}を　みつづけている！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24C091) > 0x20
	.error "gText_Rom_24C091 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C091) < 0x20
	.space 0x20 - (. - gText_Rom_24C091)
	.endif
	.globl gUnknown_824C0B1
gUnknown_824C0B1: @ 0x0824C0B1

	@ asm/contest.s:4741 sub_080D8334
	.globl gText_Rom_24C0B1
gText_Rom_24C0B1: @ 0x0824C0B1
	.string "{0xFD}{0x02}の　{0xFD}{0x03}は\nめを　むけられなかった…{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24C0B1) > 0x21
	.error "gText_Rom_24C0B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0B1) < 0x21
	.space 0x21 - (. - gText_Rom_24C0B1)
	.endif
	.globl gUnknown_824C0D2
gUnknown_824C0D2: @ 0x0824C0D2

	@ asm/contest.s:11812 sub_080DCBC0
	.globl gText_Rom_24C0D2
gText_Rom_24C0D2: @ 0x0824C0D2
	.string "モジモジ$"
	.if (. - gText_Rom_24C0D2) > 0x5
	.error "gText_Rom_24C0D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0D2) < 0x5
	.space 0x5 - (. - gText_Rom_24C0D2)
	.endif
	.globl gUnknown_824C0D7
gUnknown_824C0D7: @ 0x0824C0D7

	@ src/data/easy_chat/easy_chat_group_adjectives.h:94 easy_chat_group_adjectives_line_94
	.globl gText_Rom_24C0D7
gText_Rom_24C0D7: @ 0x0824C0D7
	.string "ドキドキ$"
	.if (. - gText_Rom_24C0D7) > 0x5
	.error "gText_Rom_24C0D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0D7) < 0x5
	.space 0x5 - (. - gText_Rom_24C0D7)
	.endif
	.globl gUnknown_824C0DC
gUnknown_824C0DC: @ 0x0824C0DC

	@ asm/contest.s:11840 sub_080DCBC0
	.globl gText_Rom_24C0DC
gText_Rom_24C0DC: @ 0x0824C0DC
	.string "デレデレ$"
	.if (. - gText_Rom_24C0DC) > 0x5
	.error "gText_Rom_24C0DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0DC) < 0x5
	.space 0x5 - (. - gText_Rom_24C0DC)
	.endif
	.globl gUnknown_824C0E1
gUnknown_824C0E1: @ 0x0824C0E1

	@ asm/contest.s:11851 sub_080DCBC0
	.globl gText_Rom_24C0E1
gText_Rom_24C0E1: @ 0x0824C0E1
	.string "オロオロ$"
	.if (. - gText_Rom_24C0E1) > 0x5
	.error "gText_Rom_24C0E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0E1) < 0x5
	.space 0x5 - (. - gText_Rom_24C0E1)
	.endif
	.globl gUnknown_824C0E6
gUnknown_824C0E6: @ 0x0824C0E6

	@ asm/contest.s:11859 sub_080DCBC0
	.globl gText_Rom_24C0E6
gText_Rom_24C0E6: @ 0x0824C0E6
	.string "ビクビク$"
	.if (. - gText_Rom_24C0E6) > 0x5
	.error "gText_Rom_24C0E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0E6) < 0x5
	.space 0x5 - (. - gText_Rom_24C0E6)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0 (+3 aliases)
	.globl gText_Rom_24C0EB
gText_Rom_24C0EB: @ 0x0824C0EB
	.string "かっこよさ$"
	.if (. - gText_Rom_24C0EB) > 0x6
	.error "gText_Rom_24C0EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0EB) < 0x6
	.space 0x6 - (. - gText_Rom_24C0EB)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0 (+3 aliases)
	.globl gText_Rom_24C0F1
gText_Rom_24C0F1: @ 0x0824C0F1
	.string "うつくしさ$"
	.if (. - gText_Rom_24C0F1) > 0x6
	.error "gText_Rom_24C0F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0F1) < 0x6
	.space 0x6 - (. - gText_Rom_24C0F1)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0 (+3 aliases)
	.globl gText_Rom_24C0F7
gText_Rom_24C0F7: @ 0x0824C0F7
	.string "かわいさ$"
	.if (. - gText_Rom_24C0F7) > 0x5
	.error "gText_Rom_24C0F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0F7) < 0x5
	.space 0x5 - (. - gText_Rom_24C0F7)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0 (+3 aliases)
	.globl gText_Rom_24C0FC
gText_Rom_24C0FC: @ 0x0824C0FC
	.string "かしこさ$"
	.if (. - gText_Rom_24C0FC) > 0x5
	.error "gText_Rom_24C0FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0FC) < 0x5
	.space 0x5 - (. - gText_Rom_24C0FC)
	.endif

	@ asm/contest.s:11866 sub_080DCBC0 (+3 aliases)
	.globl gText_Rom_24C101
gText_Rom_24C101: @ 0x0824C101
	.string "たくましさ$"
	.if (. - gText_Rom_24C101) > 0x6
	.error "gText_Rom_24C101 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C101) < 0x6
	.space 0x6 - (. - gText_Rom_24C101)
	.endif
	@ Replaced baserom.gba range: offset=0x24C107, size=0x6
	.byte 0x63, 0x7E, 0x5C, 0x86, 0x7E, 0xFF

	@ asm/contest.s:11866 sub_080DCBC0 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C10D
gText_Rom_24C10D: @ 0x0824C10D
	.string "かっこいい　わざ$"
	.if (. - gText_Rom_24C10D) != 0x9
	.error "gText_Rom_24C10D must retain its original byte length"
	.endif
	.globl gText_Rom_24C112
	.set gText_Rom_24C112, gText_Rom_24C10D + 0x5

	@ asm/contest.s:11866 sub_080DCBC0 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C116
gText_Rom_24C116: @ 0x0824C116
	.string "うつくしい　わざ$"
	.if (. - gText_Rom_24C116) != 0x9
	.error "gText_Rom_24C116 must retain its original byte length"
	.endif
	.globl gText_Rom_24C11B
	.set gText_Rom_24C11B, gText_Rom_24C116 + 0x5

	@ asm/contest.s:11866 sub_080DCBC0 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C11F
gText_Rom_24C11F: @ 0x0824C11F
	.string "かわいい　わざ$"
	.if (. - gText_Rom_24C11F) != 0x8
	.error "gText_Rom_24C11F must retain its original byte length"
	.endif
	.globl gText_Rom_24C123
	.set gText_Rom_24C123, gText_Rom_24C11F + 0x4

	@ asm/contest.s:11866 sub_080DCBC0 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C127
gText_Rom_24C127: @ 0x0824C127
	.string "かしこい　わざ$"
	.if (. - gText_Rom_24C127) != 0x8
	.error "gText_Rom_24C127 must retain its original byte length"
	.endif
	.globl gText_Rom_24C12B
	.set gText_Rom_24C12B, gText_Rom_24C127 + 0x4

	@ asm/contest.s:11866 sub_080DCBC0 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C12F
gText_Rom_24C12F: @ 0x0824C12F
	.string "たくましい　わざ$"
	.if (. - gText_Rom_24C12F) != 0x9
	.error "gText_Rom_24C12F must retain its original byte length"
	.endif
	.globl gText_Rom_24C134
	.set gText_Rom_24C134, gText_Rom_24C12F + 0x5

	@ asm/contest.s:11866 sub_080DCBC0 (+1 aliases)
	.globl gText_Rom_24C138
gText_Rom_24C138: @ 0x0824C138
	.string "？？？$"
	.if (. - gText_Rom_24C138) > 0x4
	.error "gText_Rom_24C138 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C138) < 0x4
	.space 0x4 - (. - gText_Rom_24C138)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:298 easy_chat_group_hobbies_line_298
	.globl gText_Rom_24C13C
gText_Rom_24C13C: @ 0x0824C13C
	.string "やすみ$"
	.if (. - gText_Rom_24C13C) > 0x4
	.error "gText_Rom_24C13C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C13C) < 0x4
	.space 0x4 - (. - gText_Rom_24C13C)
	.endif
	.globl gUnknown_824C140
gUnknown_824C140: @ 0x0824C140
	@ Replaced baserom.gba range: offset=0x24C140, size=0xB5
	.byte 0x12, 0x03, 0x0C, 0x2E, 0x00, 0x10, 0x02, 0x07, 0x11, 0x35, 0x03, 0xAB, 0xFF, 0x25, 0x03, 0x0C
	.byte 0x36, 0x03, 0x1A, 0x00, 0xFD, 0x02, 0x19, 0x00, 0xFD, 0x03, 0xAB, 0xFE, 0x05, 0x22, 0x44, 0x14
	.byte 0x03, 0xAB, 0xFF, 0x25, 0x03, 0x0C, 0x36, 0x03, 0x1A, 0xFD, 0x02, 0x19, 0xFD, 0x03, 0xFC, 0x09
	.byte 0xFF, 0x02, 0x11, 0x3D, 0x0C, 0x2E, 0x0B, 0xFD, 0x02, 0x02, 0xFC, 0x09, 0xFF, 0x16, 0x3D, 0x0C
	.byte 0x2E, 0x0B, 0xFD, 0x02, 0x02, 0xFC, 0x09, 0xFF, 0x5E, 0xA0, 0x64, 0x0B, 0x2A, 0x10, 0x52, 0x99
	.byte 0x7E, 0x64, 0x1A, 0xFD, 0x02, 0x46, 0x2E, 0xFC, 0x09, 0xFF, 0x02, 0x11, 0x46, 0x2E, 0x05, 0x05
	.byte 0x08, 0x12, 0x06, 0x50, 0x10, 0x2C, 0x3C, 0x1A, 0xFE, 0xFD, 0x02, 0xFC, 0x09, 0xFF, 0x02, 0x2E
	.byte 0x0C, 0x36, 0x03, 0x16, 0x19, 0x0A, 0x50, 0x10, 0x19, 0x1A, 0xFE, 0xFD, 0x02, 0x19, 0xFD, 0x03
	.byte 0xFC, 0x09, 0xFF, 0x5E, 0xA0, 0x64, 0x0B, 0x2A, 0x10, 0x52, 0x99, 0x7E, 0x64, 0x1A, 0xFD, 0x02
	.byte 0x46, 0x2E, 0xFC, 0x09, 0xFF, 0x25, 0x03, 0x0C, 0x36, 0x03, 0x00, 0x0C, 0x15, 0x06, 0x50, 0x10
	.byte 0x19, 0x44, 0xFE, 0x12, 0x03, 0x0C, 0x2E, 0x63, 0x7A, 0x97, 0x1A, 0x12, 0x08, 0x27, 0x2A, 0x1F
	.byte 0x0E, 0x2E, 0xFC, 0x09, 0xFF
	.globl gUnknown_824C1F5
gUnknown_824C1F5: @ 0x0824C1F5

	@ asm/contest_painting.s:452 PrintContestPaintingCaption
	.globl gText_Rom_24C1F5
gText_Rom_24C1F5: @ 0x0824C1F5
	.string "{0xFD}{0x02}\n{0xFD}{0x03}　の　{0xFD}{0x04}$"
	.if (. - gText_Rom_24C1F5) > 0xb
	.error "gText_Rom_24C1F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C1F5) < 0xb
	.space 0xb - (. - gText_Rom_24C1F5)
	.endif
	.globl gUnknown_824C200
gUnknown_824C200: @ 0x0824C200

	@ src/data/easy_chat/easy_chat_group_events.h:5 gEasyChatWord_Contest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C200
gText_Rom_24C200: @ 0x0824C200
	.string "コンテスト$"
	.if (. - gText_Rom_24C200) != 0x6
	.error "gText_Rom_24C200 must retain its original byte length"
	.endif
	.globl gText_Rom_24C202
	.set gText_Rom_24C202, gText_Rom_24C200 + 0x2

	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C206
gText_Rom_24C206: @ 0x0824C206
	.string "ノーマルランク$"
	.if (. - gText_Rom_24C206) != 0x8
	.error "gText_Rom_24C206 must retain its original byte length"
	.endif
	.globl gText_Rom_24C20A
	.set gText_Rom_24C20A, gText_Rom_24C206 + 0x4

	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C20E
gText_Rom_24C20E: @ 0x0824C20E
	.string "スーパーランク$"
	.if (. - gText_Rom_24C20E) != 0x8
	.error "gText_Rom_24C20E must retain its original byte length"
	.endif
	.globl gText_Rom_24C212
	.set gText_Rom_24C212, gText_Rom_24C20E + 0x4

	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C216
gText_Rom_24C216: @ 0x0824C216
	.string "ハイパーランク$"
	.if (. - gText_Rom_24C216) != 0x8
	.error "gText_Rom_24C216 must retain its original byte length"
	.endif
	.globl gText_Rom_24C21A
	.set gText_Rom_24C21A, gText_Rom_24C216 + 0x4

	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C21E
gText_Rom_24C21E: @ 0x0824C21E
	.string "マスターランク$"
	.if (. - gText_Rom_24C21E) != 0x8
	.error "gText_Rom_24C21E must retain its original byte length"
	.endif
	.globl gText_Rom_24C222
	.set gText_Rom_24C222, gText_Rom_24C21E + 0x4

	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C226
gText_Rom_24C226: @ 0x0824C226
	.string "つうしん$"
	.if (. - gText_Rom_24C226) > 0x5
	.error "gText_Rom_24C226 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C226) < 0x5
	.space 0x5 - (. - gText_Rom_24C226)
	.endif

	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C22B
gText_Rom_24C22B: @ 0x0824C22B
	.string "かっこよさ$"
	.if (. - gText_Rom_24C22B) > 0x6
	.error "gText_Rom_24C22B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C22B) < 0x6
	.space 0x6 - (. - gText_Rom_24C22B)
	.endif

	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C231
gText_Rom_24C231: @ 0x0824C231
	.string "うつくしさ$"
	.if (. - gText_Rom_24C231) > 0x6
	.error "gText_Rom_24C231 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C231) < 0x6
	.space 0x6 - (. - gText_Rom_24C231)
	.endif

	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C237
gText_Rom_24C237: @ 0x0824C237
	.string "かわいさ$"
	.if (. - gText_Rom_24C237) > 0x5
	.error "gText_Rom_24C237 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C237) < 0x5
	.space 0x5 - (. - gText_Rom_24C237)
	.endif

	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C23C
gText_Rom_24C23C: @ 0x0824C23C
	.string "かしこさ$"
	.if (. - gText_Rom_24C23C) > 0x5
	.error "gText_Rom_24C23C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C23C) < 0x5
	.space 0x5 - (. - gText_Rom_24C23C)
	.endif

	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+3 aliases)
	.globl gText_Rom_24C241
gText_Rom_24C241: @ 0x0824C241
	.string "たくましさ$"
	.if (. - gText_Rom_24C241) > 0x6
	.error "gText_Rom_24C241 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C241) < 0x6
	.space 0x6 - (. - gText_Rom_24C241)
	.endif

	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C247
gText_Rom_24C247: @ 0x0824C247
	.string "スーパー　クール\nノンストップ　{0xFD}{0x02}$"
	.if (. - gText_Rom_24C247) > 0x13
	.error "gText_Rom_24C247 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C247) < 0x13
	.space 0x13 - (. - gText_Rom_24C247)
	.endif

	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C25A
gText_Rom_24C25A: @ 0x0824C25A
	.string "グッドルッキン　ポケモン　{0xFD}{0x02}$"
	.if (. - gText_Rom_24C25A) > 0x10
	.error "gText_Rom_24C25A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C25A) < 0x10
	.space 0x10 - (. - gText_Rom_24C25A)
	.endif

	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C26A
gText_Rom_24C26A: @ 0x0824C26A
	.string "マーベラス　ワンダフル\nグレート　{0xFD}{0x02}$"
	.if (. - gText_Rom_24C26A) > 0x14
	.error "gText_Rom_24C26A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C26A) < 0x14
	.space 0x14 - (. - gText_Rom_24C26A)
	.endif

	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C27E
gText_Rom_24C27E: @ 0x0824C27E
	.string "こんせいき　さいごの　ビーナス\nビューティー　{0xFD}{0x02}$"
	.if (. - gText_Rom_24C27E) > 0x1a
	.error "gText_Rom_24C27E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C27E) < 0x1a
	.space 0x1a - (. - gText_Rom_24C27E)
	.endif

	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C298
gText_Rom_24C298: @ 0x0824C298
	.string "{0xFD}{0x02}　クンの　マブシイ\nキラキラ　スマイル$"
	.if (. - gText_Rom_24C298) > 0x16
	.error "gText_Rom_24C298 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C298) < 0x16
	.space 0x16 - (. - gText_Rom_24C298)
	.endif

	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C2AE
gText_Rom_24C2AE: @ 0x0824C2AE
	.string "ポケモンセンター　の\nスーパー　アイドル　{0xFD}{0x02}$"
	.if (. - gText_Rom_24C2AE) > 0x18
	.error "gText_Rom_24C2AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C2AE) < 0x18
	.space 0x18 - (. - gText_Rom_24C2AE)
	.endif

	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C2C6
gText_Rom_24C2C6: @ 0x0824C2C6
	.string "ラブリー　スウィート　{0xFD}{0x02}　ちゃん$"
	.if (. - gText_Rom_24C2C6) != 0x12
	.error "gText_Rom_24C2C6 must retain its original byte length"
	.endif
	.globl gText_Rom_24C2D4
	.set gText_Rom_24C2D4, gText_Rom_24C2C6 + 0xe

	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C2D8
gText_Rom_24C2D8: @ 0x0824C2D8
	.string "プリティー　{0xFD}{0x02}たんの\nおすまし　ショット$"
	.if (. - gText_Rom_24C2D8) > 0x16
	.error "gText_Rom_24C2D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C2D8) < 0x16
	.space 0x16 - (. - gText_Rom_24C2D8)
	.endif

	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C2EE
gText_Rom_24C2EE: @ 0x0824C2EE
	.string "こっち　むいて！\nキュート　ポケモン　{0xFD}{0x02}　ちゃん$"
	.if (. - gText_Rom_24C2EE) != 0x1a
	.error "gText_Rom_24C2EE must retain its original byte length"
	.endif
	.globl gText_Rom_24C304
	.set gText_Rom_24C304, gText_Rom_24C2EE + 0x16

	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C308
gText_Rom_24C308: @ 0x0824C308
	.string "かしこさ　マエストロ\nワイズ　ポケモン　{0xFD}{0x02}$"
	.if (. - gText_Rom_24C308) > 0x17
	.error "gText_Rom_24C308 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C308) < 0x17
	.space 0x17 - (. - gText_Rom_24C308)
	.endif

	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C31F
gText_Rom_24C31F: @ 0x0824C31F
	.string "えらばれた　ポケモン…\nポケモンの　なかの　ポケモン　{0xFD}{0x02}$"
	.if (. - gText_Rom_24C31F) > 0x1e
	.error "gText_Rom_24C31F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C31F) < 0x1e
	.space 0x1e - (. - gText_Rom_24C31F)
	.endif

	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C33D
gText_Rom_24C33D: @ 0x0824C33D
	.string "エクセレント　{0xFD}{0x02}　の\nゆうがな　ひととき$"
	.if (. - gText_Rom_24C33D) > 0x16
	.error "gText_Rom_24C33D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C33D) < 0x16
	.space 0x16 - (. - gText_Rom_24C33D)
	.endif

	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C353
gText_Rom_24C353: @ 0x0824C353
	.string "パワフル　マッスル\nハッスル　{0xFD}{0x02}$"
	.if (. - gText_Rom_24C353) > 0x12
	.error "gText_Rom_24C353 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C353) < 0x12
	.space 0x12 - (. - gText_Rom_24C353)
	.endif

	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C365
gText_Rom_24C365: @ 0x0824C365
	.string "ストロング　ストロンガー\nストロンゲスト　{0xFD}{0x02}$"
	.if (. - gText_Rom_24C365) > 0x18
	.error "gText_Rom_24C365 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C365) < 0x18
	.space 0x18 - (. - gText_Rom_24C365)
	.endif

	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C37D
gText_Rom_24C37D: @ 0x0824C37D
	.string "タフネス　マイティー\nハイパーポケモン　{0xFD}{0x02}！$"
	.if (. - gText_Rom_24C37D) > 0x18
	.error "gText_Rom_24C37D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C37D) < 0x18
	.space 0x18 - (. - gText_Rom_24C37D)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:6068 gen_1_families_line_6068 (+1 aliases)
	.globl gText_Rom_24C395
gText_Rom_24C395: @ 0x0824C395
	.string "ナゾノクサ$"
	.if (. - gText_Rom_24C395) > 0x6
	.error "gText_Rom_24C395 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C395) < 0x6
	.space 0x6 - (. - gText_Rom_24C395)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:958 gen_3_families_line_958 (+3 aliases)
	.globl gText_Rom_24C39B
gText_Rom_24C39B: @ 0x0824C39B
	.string "ポチエナ$"
	.if (. - gText_Rom_24C39B) > 0x5
	.error "gText_Rom_24C39B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C39B) < 0x5
	.space 0x5 - (. - gText_Rom_24C39B)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:2382 gen_3_families_line_2382 (+1 aliases)
	.globl gText_Rom_24C3A0
gText_Rom_24C3A0: @ 0x0824C3A0
	.string "スバメ$"
	.if (. - gText_Rom_24C3A0) > 0x4
	.error "gText_Rom_24C3A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C3A0) < 0x4
	.space 0x4 - (. - gText_Rom_24C3A0)
	.endif

