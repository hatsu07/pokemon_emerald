
	@ data/text/cable_club.inc:93 BattleColosseum_2P_Text_TakePlaceStartBattle
	.globl BattleColosseum_2P_Text_TakePlaceStartBattle
BattleColosseum_2P_Text_TakePlaceStartBattle: @ 0x08247ECC
	.string "しょていの いちに ついて\nたいせんを はじめて ください{EOS}"
	.if (. - BattleColosseum_2P_Text_TakePlaceStartBattle) > 0x1e
	.error "BattleColosseum_2P_Text_TakePlaceStartBattle may not grow beyond its original slot"
	.endif
	.if (. - BattleColosseum_2P_Text_TakePlaceStartBattle) < 0x1e
	.space 0x1e - (. - BattleColosseum_2P_Text_TakePlaceStartBattle)
	.endif

	@ data/text/cable_club.inc:96 TradeCenter_Text_TakeSeatStartTrade
	.globl TradeCenter_Text_TakeSeatStartTrade
TradeCenter_Text_TakeSeatStartTrade: @ 0x08247EEA
	.string "しょていの いちに ついて\nこうかんを はじめて ください{EOS}"
	.if (. - TradeCenter_Text_TakeSeatStartTrade) > 0x1e
	.error "TradeCenter_Text_TakeSeatStartTrade may not grow beyond its original slot"
	.endif
	.if (. - TradeCenter_Text_TakeSeatStartTrade) < 0x1e
	.space 0x1e - (. - TradeCenter_Text_TakeSeatStartTrade)
	.endif

	@ data/text/cable_club.inc:99 RecordCorner_Text_ThanksForComing
	.globl RecordCorner_Text_ThanksForComing
RecordCorner_Text_ThanksForComing: @ 0x08247F08
	.string "ごりよう ありがとう ございました{EOS}"
	.if (. - RecordCorner_Text_ThanksForComing) > 0x12
	.error "RecordCorner_Text_ThanksForComing may not grow beyond its original slot"
	.endif
	.if (. - RecordCorner_Text_ThanksForComing) < 0x12
	.space 0x12 - (. - RecordCorner_Text_ThanksForComing)
	.endif

	@ data/text/cable_club.inc:102 CableClub_Text_TrainerCardDataOverwritten
	.globl gText_Rom_247F1A
gText_Rom_247F1A: @ 0x08247F1A
	.string "トレーナーカードの\nきろくを かきかえます!{EOS}"
	.if (. - gText_Rom_247F1A) > 0x17
	.error "gText_Rom_247F1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247F1A) < 0x17
	.space 0x17 - (. - gText_Rom_247F1A)
	.endif

	@ data/text/cable_club.inc:105 CableClub_Text_HopeToSeeYouAgain
	.globl gText_Rom_247F31
gText_Rom_247F31: @ 0x08247F31
	.string "では また どうぞ!{EOS}"
	.if (. - gText_Rom_247F31) > 0xb
	.error "gText_Rom_247F31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247F31) < 0xb
	.space 0xb - (. - gText_Rom_247F31)
	.endif

	@ data/text/cable_club.inc:108 CableClub_Text_NotSetUpForFarAwayRegion
	.globl CableClub_Text_NotSetUpForFarAwayRegion
CableClub_Text_NotSetUpForFarAwayRegion: @ 0x08247F3C
	.string "おきゃくさま\nもうしわけ ありません\pとおい ちほうの かたと\nポケモンを こうかん することは\lいまは できません…{EOS}"
	.if (. - CableClub_Text_NotSetUpForFarAwayRegion) > 0x3c
	.error "CableClub_Text_NotSetUpForFarAwayRegion may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_NotSetUpForFarAwayRegion) < 0x3c
	.space 0x3c - (. - CableClub_Text_NotSetUpForFarAwayRegion)
	.endif

	@ data/text/cable_club.inc:111 CableClub_Text_OtherTrainerNotReady
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl CableClub_Text_OtherTrainerNotReady
CableClub_Text_OtherTrainerNotReady: @ 0x08247F78
	.string "あいての じゅんびが\nできていません{EOS}"
	.if (. - CableClub_Text_OtherTrainerNotReady) != 0x13
	.error "CableClub_Text_OtherTrainerNotReady must retain its original byte length"
	.endif
	.globl gText_Rom_247F87
	.set gText_Rom_247F87, CableClub_Text_OtherTrainerNotReady + 0xf

	@ data/text/cable_club.inc:114 CableClub_Text_YouHaveAMonThatCantBeTaken
	.globl CableClub_Text_YouHaveAMonThatCantBeTaken
CableClub_Text_YouHaveAMonThatCantBeTaken: @ 0x08247F8B
	.string "てもちに つれていけない\nポケモンが います{EOS}"
	.if (. - CableClub_Text_YouHaveAMonThatCantBeTaken) > 0x17
	.error "CableClub_Text_YouHaveAMonThatCantBeTaken may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_YouHaveAMonThatCantBeTaken) < 0x17
	.space 0x17 - (. - CableClub_Text_YouHaveAMonThatCantBeTaken)
	.endif

	@ data/text/cable_club.inc:117 RecordCorner_Text_TakeSeatAndWait
	.globl RecordCorner_Text_TakeSeatAndWait
RecordCorner_Text_TakeSeatAndWait: @ 0x08247FA2
	.string "しょていの いちに ついて\nおまち ください{EOS}"
	.if (. - RecordCorner_Text_TakeSeatAndWait) > 0x17
	.error "RecordCorner_Text_TakeSeatAndWait may not grow beyond its original slot"
	.endif
	.if (. - RecordCorner_Text_TakeSeatAndWait) < 0x17
	.space 0x17 - (. - RecordCorner_Text_TakeSeatAndWait)
	.endif

	@ data/text/cable_club.inc:120 RecordCorner_Text_PlayerSentOverOneX
	.globl RecordCorner_Text_PlayerSentOverOneX
RecordCorner_Text_PlayerSentOverOneX: @ 0x08247FB9
	.string "{STR_VAR_1}さんから\n{STR_VAR_2}が おくられてきた!{EOS}"
	.if (. - RecordCorner_Text_PlayerSentOverOneX) > 0x14
	.error "RecordCorner_Text_PlayerSentOverOneX may not grow beyond its original slot"
	.endif
	.if (. - RecordCorner_Text_PlayerSentOverOneX) < 0x14
	.space 0x14 - (. - RecordCorner_Text_PlayerSentOverOneX)
	.endif

	@ data/text/cable_club.inc:131 CableClub_Text_AdapterNotConnected
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl CableClub_Text_AdapterNotConnected
CableClub_Text_AdapterNotConnected: @ 0x08247FCD
	.string "ワイヤレスアダプタが\nつながって いません{EOS}"
	.if (. - CableClub_Text_AdapterNotConnected) != 0x16
	.error "CableClub_Text_AdapterNotConnected must retain its original byte length"
	.endif
	.globl gText_Rom_247FDF
	.set gText_Rom_247FDF, CableClub_Text_AdapterNotConnected + 0x12

	@ data/text/cable_club.inc:134 CableClub_Text_ParticipantsStepUpToCounter
	.globl CableClub_Text_ParticipantsStepUpToCounter
CableClub_Text_ParticipantsStepUpToCounter: @ 0x08247FE3
	.string "さんか したい ひとは\nカウンターに おこしください{EOS}"
	.if (. - CableClub_Text_ParticipantsStepUpToCounter) > 0x1b
	.error "CableClub_Text_ParticipantsStepUpToCounter may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_ParticipantsStepUpToCounter) < 0x1b
	.space 0x1b - (. - CableClub_Text_ParticipantsStepUpToCounter)
	.endif

	@ data/text/cable_club.inc:138 CableClub_Text_Hello
	.globl CableClub_Text_Hello
CableClub_Text_Hello: @ 0x08247FFE
	.string "こんにちは!{EOS}"
	.if (. - CableClub_Text_Hello) > 0x7
	.error "CableClub_Text_Hello may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_Hello) < 0x7
	.space 0x7 - (. - CableClub_Text_Hello)
	.endif

	@ data/text/cable_club.inc:142 CableClub_Text_PleaseWait
	.globl gText_Rom_248005
gText_Rom_248005: @ 0x08248005
	.string "しょうしょう おまちください{EOS}"
	.if (. - gText_Rom_248005) > 0xf
	.error "gText_Rom_248005 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248005) < 0xf
	.space 0xf - (. - gText_Rom_248005)
	.endif

	@ data/text/cable_club.inc:145 CableClub_Text_YouMayTradeHere
	.globl CableClub_Text_YouMayTradeHere
CableClub_Text_YouMayTradeHere: @ 0x08248014
	.string "ともだちと ポケモンの\nこうかんが たのしめます{EOS}"
	.if (. - CableClub_Text_YouMayTradeHere) > 0x19
	.error "CableClub_Text_YouMayTradeHere may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_YouMayTradeHere) < 0x19
	.space 0x19 - (. - CableClub_Text_YouMayTradeHere)
	.endif
