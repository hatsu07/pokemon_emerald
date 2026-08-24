	@ data/text/cable_club.inc:1 CableClub_Text_WelcomeWhichCableClubService
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl CableClub_Text_WelcomeWhichCableClubService
CableClub_Text_WelcomeWhichCableClubService: @ 0x08247B80
	.string "つうしん ケーブル クラブに\nようこそ!\pどちらを ごりよう ですか?{EOS}"
	.if (. - CableClub_Text_WelcomeWhichCableClubService) != 0x24
	.error "CableClub_Text_WelcomeWhichCableClubService must retain its original byte length"
	.endif
	.globl gText_Rom_247B95
	.set gText_Rom_247B95, CableClub_Text_WelcomeWhichCableClubService + 0x15

	@ data/text/cable_club.inc:4 CableClub_Text_WhichService
	.globl CableClub_Text_WhichService
CableClub_Text_WhichService: @ 0x08247BA4
	.string "どちらを ごりよう ですか?{EOS}"
	.if (. - CableClub_Text_WhichService) > 0xf
	.error "CableClub_Text_WhichService may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_WhichService) < 0xf
	.space 0xf - (. - CableClub_Text_WhichService)
	.endif

	@ data/text/cable_club.inc:7 CableClub_Text_TradeUsingLinkCable
	.globl CableClub_Text_TradeUsingLinkCable
CableClub_Text_TradeUsingLinkCable: @ 0x08247BB3
	.string "ケーブルで つないだ おともだちと\nポケモン こうかんが できます{EOS}"
	.if (. - CableClub_Text_TradeUsingLinkCable) > 0x22
	.error "CableClub_Text_TradeUsingLinkCable may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_TradeUsingLinkCable) < 0x22
	.space 0x22 - (. - CableClub_Text_TradeUsingLinkCable)
	.endif

	@ data/text/cable_club.inc:10 CableClub_Text_BattleUsingLinkCable
	.globl CableClub_Text_BattleUsingLinkCable
CableClub_Text_BattleUsingLinkCable: @ 0x08247BD5
	.string "ケーブルで つないだ おともだちと\nポケモン たいせんが できます{EOS}"
	.if (. - CableClub_Text_BattleUsingLinkCable) > 0x22
	.error "CableClub_Text_BattleUsingLinkCable may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_BattleUsingLinkCable) < 0x22
	.space 0x22 - (. - CableClub_Text_BattleUsingLinkCable)
	.endif

	@ data/text/cable_club.inc:13 CableClub_Text_RecordCornerUsingLinkCable
	.globl CableClub_Text_RecordCornerUsingLinkCable
CableClub_Text_RecordCornerUsingLinkCable: @ 0x08247BF7
	.string "ケーブルで つないだ おともだちと\nレコードコーナーが できます{EOS}"
	.if (. - CableClub_Text_RecordCornerUsingLinkCable) > 0x21
	.error "CableClub_Text_RecordCornerUsingLinkCable may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_RecordCornerUsingLinkCable) < 0x21
	.space 0x21 - (. - CableClub_Text_RecordCornerUsingLinkCable)
	.endif

	@ data/text/cable_club.inc:17 CableClub_Text_CloseThisMenu
	.globl CableClub_Text_CloseThisMenu
CableClub_Text_CloseThisMenu: @ 0x08247C18
	.string "おわります{EOS}"
	.if (. - CableClub_Text_CloseThisMenu) > 0x6
	.error "CableClub_Text_CloseThisMenu may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_CloseThisMenu) < 0x6
	.space 0x6 - (. - CableClub_Text_CloseThisMenu)
	.endif

	@ data/text/cable_club.inc:20 CableClub_Text_NeedTwoMonsForDoubleBattle
	.globl CableClub_Text_NeedTwoMonsForDoubleBattle
CableClub_Text_NeedTwoMonsForDoubleBattle: @ 0x08247C1E
	.string "ダブルバトルでは 2ひき いじょうの\nポケモンが ひつようです{EOS}"
	.if (. - CableClub_Text_NeedTwoMonsForDoubleBattle) > 0x20
	.error "CableClub_Text_NeedTwoMonsForDoubleBattle may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_NeedTwoMonsForDoubleBattle) < 0x20
	.space 0x20 - (. - CableClub_Text_NeedTwoMonsForDoubleBattle)
	.endif

	@ data/text/cable_club.inc:23 CableClub_Text_NeedTwoMonsToTrade
	.globl CableClub_Text_NeedTwoMonsToTrade
CableClub_Text_NeedTwoMonsToTrade: @ 0x08247C3E
	.string "こうかんでは 2ひき いじょうの\nてもちが ひつようです{EOS}"
	.if (. - CableClub_Text_NeedTwoMonsToTrade) > 0x1d
	.error "CableClub_Text_NeedTwoMonsToTrade may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_NeedTwoMonsToTrade) < 0x1d
	.space 0x1d - (. - CableClub_Text_NeedTwoMonsToTrade)
	.endif

	@ data/text/cable_club.inc:26 CableClub_Text_CantTradeEnigmaBerry
	.globl CableClub_Text_CantTradeEnigmaBerry
CableClub_Text_CantTradeEnigmaBerry: @ 0x08247C5B
	.string "{STR_VAR_1}のみを もっている\nポケモンは こうかん できません!{EOS}"
	.if (. - CableClub_Text_CantTradeEnigmaBerry) > 0x1e
	.error "CableClub_Text_CantTradeEnigmaBerry may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_CantTradeEnigmaBerry) < 0x1e
	.space 0x1e - (. - CableClub_Text_CantTradeEnigmaBerry)
	.endif
	.globl gText_PleaseWaitForLink

	@ data/text/cable_club.inc:29 gText_PleaseWaitForLink
	.globl gText_PleaseWaitForLink
gText_PleaseWaitForLink: @ 0x08247C79
	.string "しょうしょう おまち ください\n……Bボタンで キャンセル{EOS}"
	.if (. - gText_PleaseWaitForLink) > 0x1e
	.error "gText_PleaseWaitForLink may not grow beyond its original slot"
	.endif
	.if (. - gText_PleaseWaitForLink) < 0x1e
	.space 0x1e - (. - gText_PleaseWaitForLink)
	.endif

	@ data/text/cable_club.inc:32 gText_ConfirmLinkWhenPlayersReady
	.globl gText_ConfirmLinkWhenPlayersReady
gText_ConfirmLinkWhenPlayersReady: @ 0x08247C97
	.string "そろったら Aボタンで すすむ\n……Bボタンで キャンセル{EOS}"
	.if (. - gText_ConfirmLinkWhenPlayersReady) > 0x1e
	.error "gText_ConfirmLinkWhenPlayersReady may not grow beyond its original slot"
	.endif
	.if (. - gText_ConfirmLinkWhenPlayersReady) < 0x1e
	.space 0x1e - (. - gText_ConfirmLinkWhenPlayersReady)
	.endif

	@ data/text/cable_club.inc:35 gText_ConfirmStartLinkWithXPlayers
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_ConfirmStartLinkWithXPlayers
gText_ConfirmStartLinkWithXPlayers: @ 0x08247CB5
	.string "{STR_VAR_1}にんで つうしんを はじめます\nAボタン…けってい Bボタン…もどる{EOS}"
	.if (. - gText_ConfirmStartLinkWithXPlayers) != 0x25
	.error "gText_ConfirmStartLinkWithXPlayers must retain its original byte length"
	.endif
	.globl gText_Rom_247CD6
	.set gText_Rom_247CD6, gText_ConfirmStartLinkWithXPlayers + 0x21

	@ data/text/cable_club.inc:38 gText_AwaitingLinkup
	.globl gText_AwaitingLinkup
gText_AwaitingLinkup: @ 0x08247CDA
	.string "つうしんかいしを まっています\n……Bボタンで キャンセル{EOS}"
	.if (. - gText_AwaitingLinkup) > 0x1e
	.error "gText_AwaitingLinkup may not grow beyond its original slot"
	.endif
	.if (. - gText_AwaitingLinkup) < 0x1e
	.space 0x1e - (. - gText_AwaitingLinkup)
	.endif

	@ data/text/cable_club.inc:42 CableClub_Text_OkayToSaveProgress
	.globl CableClub_Text_OkayToSaveProgress
CableClub_Text_OkayToSaveProgress: @ 0x08247CF8
	.string "はじめる まえに レポートを\nかきますが よろしいですか?{EOS}"
	.if (. - CableClub_Text_OkayToSaveProgress) > 0x1e
	.error "CableClub_Text_OkayToSaveProgress may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_OkayToSaveProgress) < 0x1e
	.space 0x1e - (. - CableClub_Text_OkayToSaveProgress)
	.endif

	@ data/text/cable_club.inc:45 CableClub_Text_PleaseEnter
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl CableClub_Text_PleaseEnter
CableClub_Text_PleaseEnter: @ 0x08247D16
	.string "それでは へやへ どうぞ{EOS}"
	.if (. - CableClub_Text_PleaseEnter) != 0xd
	.error "CableClub_Text_PleaseEnter must retain its original byte length"
	.endif
	.globl gText_Rom_247D1F
	.set gText_Rom_247D1F, CableClub_Text_PleaseEnter + 0x9

	@ data/text/cable_club.inc:48 CableClub_Text_DirectYouToYourRoom
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl CableClub_Text_DirectYouToYourRoom
CableClub_Text_DirectYouToYourRoom: @ 0x08247D23
	.string "それでは\nへやに ごあんないします{EOS}"
	.if (. - CableClub_Text_DirectYouToYourRoom) != 0x12
	.error "CableClub_Text_DirectYouToYourRoom must retain its original byte length"
	.endif
