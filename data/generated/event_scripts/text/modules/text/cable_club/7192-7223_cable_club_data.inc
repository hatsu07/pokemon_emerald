
	@ data/text/cable_club.inc:93 BattleColosseum_2P_Text_TakePlaceStartBattle
	.globl gText_Rom_247ECC
gText_Rom_247ECC: @ 0x08247ECC
	.string "しょていの いちに ついて\nたいせんを はじめて ください{EOS}"
	.if (. - gText_Rom_247ECC) > 0x1e
	.error "gText_Rom_247ECC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247ECC) < 0x1e
	.space 0x1e - (. - gText_Rom_247ECC)
	.endif

	@ data/text/cable_club.inc:96 TradeCenter_Text_TakeSeatStartTrade
	.globl gText_Rom_247EEA
gText_Rom_247EEA: @ 0x08247EEA
	.string "しょていの いちに ついて\nこうかんを はじめて ください{EOS}"
	.if (. - gText_Rom_247EEA) > 0x1e
	.error "gText_Rom_247EEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247EEA) < 0x1e
	.space 0x1e - (. - gText_Rom_247EEA)
	.endif

	@ data/text/cable_club.inc:99 RecordCorner_Text_ThanksForComing
	.globl gText_Rom_247F08
gText_Rom_247F08: @ 0x08247F08
	.string "ごりよう ありがとう ございました{EOS}"
	.if (. - gText_Rom_247F08) > 0x12
	.error "gText_Rom_247F08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247F08) < 0x12
	.space 0x12 - (. - gText_Rom_247F08)
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
	.globl gText_Rom_247F3C
gText_Rom_247F3C: @ 0x08247F3C
	.string "おきゃくさま\nもうしわけ ありません\pとおい ちほうの かたと\nポケモンを こうかん することは\lいまは できません…{EOS}"
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
	.string "あいての じゅんびが\nできていません{EOS}"
	.if (. - gText_Rom_247F78) != 0x13
	.error "gText_Rom_247F78 must retain its original byte length"
	.endif
	.globl gText_Rom_247F87
	.set gText_Rom_247F87, gText_Rom_247F78 + 0xf

	@ data/text/cable_club.inc:114 CableClub_Text_YouHaveAMonThatCantBeTaken
	.globl gText_Rom_247F8B
gText_Rom_247F8B: @ 0x08247F8B
	.string "てもちに つれていけない\nポケモンが います{EOS}"
	.if (. - gText_Rom_247F8B) > 0x17
	.error "gText_Rom_247F8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247F8B) < 0x17
	.space 0x17 - (. - gText_Rom_247F8B)
	.endif

	@ data/text/cable_club.inc:117 RecordCorner_Text_TakeSeatAndWait
	.globl gText_Rom_247FA2
gText_Rom_247FA2: @ 0x08247FA2
	.string "しょていの いちに ついて\nおまち ください{EOS}"
	.if (. - gText_Rom_247FA2) > 0x17
	.error "gText_Rom_247FA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247FA2) < 0x17
	.space 0x17 - (. - gText_Rom_247FA2)
	.endif

	@ data/text/cable_club.inc:120 RecordCorner_Text_PlayerSentOverOneX
	.globl gText_Rom_247FB9
gText_Rom_247FB9: @ 0x08247FB9
	.string "{STR_VAR_1}さんから\n{STR_VAR_2}が おくられてきた!{EOS}"
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
	.string "ワイヤレスアダプタが\nつながって いません{EOS}"
	.if (. - gText_Rom_247FCD) != 0x16
	.error "gText_Rom_247FCD must retain its original byte length"
	.endif
	.globl gText_Rom_247FDF
	.set gText_Rom_247FDF, gText_Rom_247FCD + 0x12

	@ data/text/cable_club.inc:134 CableClub_Text_ParticipantsStepUpToCounter
	.globl gText_Rom_247FE3
gText_Rom_247FE3: @ 0x08247FE3
	.string "さんか したい ひとは\nカウンターに おこしください{EOS}"
	.if (. - gText_Rom_247FE3) > 0x1b
	.error "gText_Rom_247FE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247FE3) < 0x1b
	.space 0x1b - (. - gText_Rom_247FE3)
	.endif

	@ data/text/cable_club.inc:138 CableClub_Text_Hello
	.globl gText_Rom_247FFE
gText_Rom_247FFE: @ 0x08247FFE
	.string "こんにちは!{EOS}"
	.if (. - gText_Rom_247FFE) > 0x7
	.error "gText_Rom_247FFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247FFE) < 0x7
	.space 0x7 - (. - gText_Rom_247FFE)
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
	.globl gText_Rom_248014
gText_Rom_248014: @ 0x08248014
	.string "ともだちと ポケモンの\nこうかんが たのしめます{EOS}"
	.if (. - gText_Rom_248014) > 0x19
	.error "gText_Rom_248014 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248014) < 0x19
	.space 0x19 - (. - gText_Rom_248014)
	.endif
