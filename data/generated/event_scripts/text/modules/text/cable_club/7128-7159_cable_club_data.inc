	@ data/text/cable_club.inc:1 CableClub_Text_WelcomeWhichCableClubService
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247B80
gText_Rom_247B80: @ 0x08247B80
	.string "つうしん ケーブル クラブに\nようこそ!\pどちらを ごりよう ですか?{EOS}"
	.if (. - gText_Rom_247B80) != 0x24
	.error "gText_Rom_247B80 must retain its original byte length"
	.endif
	.globl gText_Rom_247B95
	.set gText_Rom_247B95, gText_Rom_247B80 + 0x15

	@ data/text/cable_club.inc:4 CableClub_Text_WhichService
	.globl gText_Rom_247BA4
gText_Rom_247BA4: @ 0x08247BA4
	.string "どちらを ごりよう ですか?{EOS}"
	.if (. - gText_Rom_247BA4) > 0xf
	.error "gText_Rom_247BA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247BA4) < 0xf
	.space 0xf - (. - gText_Rom_247BA4)
	.endif

	@ data/text/cable_club.inc:7 CableClub_Text_TradeUsingLinkCable
	.globl gText_Rom_247BB3
gText_Rom_247BB3: @ 0x08247BB3
	.string "ケーブルで つないだ おともだちと\nポケモン こうかんが できます{EOS}"
	.if (. - gText_Rom_247BB3) > 0x22
	.error "gText_Rom_247BB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247BB3) < 0x22
	.space 0x22 - (. - gText_Rom_247BB3)
	.endif

	@ data/text/cable_club.inc:10 CableClub_Text_BattleUsingLinkCable
	.globl gText_Rom_247BD5
gText_Rom_247BD5: @ 0x08247BD5
	.string "ケーブルで つないだ おともだちと\nポケモン たいせんが できます{EOS}"
	.if (. - gText_Rom_247BD5) > 0x22
	.error "gText_Rom_247BD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247BD5) < 0x22
	.space 0x22 - (. - gText_Rom_247BD5)
	.endif

	@ data/text/cable_club.inc:13 CableClub_Text_RecordCornerUsingLinkCable
	.globl gText_Rom_247BF7
gText_Rom_247BF7: @ 0x08247BF7
	.string "ケーブルで つないだ おともだちと\nレコードコーナーが できます{EOS}"
	.if (. - gText_Rom_247BF7) > 0x21
	.error "gText_Rom_247BF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247BF7) < 0x21
	.space 0x21 - (. - gText_Rom_247BF7)
	.endif

	@ data/text/cable_club.inc:17 CableClub_Text_CloseThisMenu
	.globl gText_Rom_247C18
gText_Rom_247C18: @ 0x08247C18
	.string "おわります{EOS}"
	.if (. - gText_Rom_247C18) > 0x6
	.error "gText_Rom_247C18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C18) < 0x6
	.space 0x6 - (. - gText_Rom_247C18)
	.endif

	@ data/text/cable_club.inc:20 CableClub_Text_NeedTwoMonsForDoubleBattle
	.globl gText_Rom_247C1E
gText_Rom_247C1E: @ 0x08247C1E
	.string "ダブルバトルでは 2ひき いじょうの\nポケモンが ひつようです{EOS}"
	.if (. - gText_Rom_247C1E) > 0x20
	.error "gText_Rom_247C1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C1E) < 0x20
	.space 0x20 - (. - gText_Rom_247C1E)
	.endif

	@ data/text/cable_club.inc:23 CableClub_Text_NeedTwoMonsToTrade
	.globl gText_Rom_247C3E
gText_Rom_247C3E: @ 0x08247C3E
	.string "こうかんでは 2ひき いじょうの\nてもちが ひつようです{EOS}"
	.if (. - gText_Rom_247C3E) > 0x1d
	.error "gText_Rom_247C3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C3E) < 0x1d
	.space 0x1d - (. - gText_Rom_247C3E)
	.endif

	@ data/text/cable_club.inc:26 CableClub_Text_CantTradeEnigmaBerry
	.globl gText_Rom_247C5B
gText_Rom_247C5B: @ 0x08247C5B
	.string "{STR_VAR_1}のみを もっている\nポケモンは こうかん できません!{EOS}"
	.if (. - gText_Rom_247C5B) > 0x1e
	.error "gText_Rom_247C5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C5B) < 0x1e
	.space 0x1e - (. - gText_Rom_247C5B)
	.endif
	.globl gText_Rom_247C79

	@ data/text/cable_club.inc:29 gText_PleaseWaitForLink
	.globl gText_Rom_247C79
gText_Rom_247C79: @ 0x08247C79
	.string "しょうしょう おまち ください\n……Bボタンで キャンセル{EOS}"
	.if (. - gText_Rom_247C79) > 0x1e
	.error "gText_Rom_247C79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C79) < 0x1e
	.space 0x1e - (. - gText_Rom_247C79)
	.endif

	@ data/text/cable_club.inc:32 gText_ConfirmLinkWhenPlayersReady
	.globl gText_Rom_247C97
gText_Rom_247C97: @ 0x08247C97
	.string "そろったら Aボタンで すすむ\n……Bボタンで キャンセル{EOS}"
	.if (. - gText_Rom_247C97) > 0x1e
	.error "gText_Rom_247C97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C97) < 0x1e
	.space 0x1e - (. - gText_Rom_247C97)
	.endif

	@ data/text/cable_club.inc:35 gText_ConfirmStartLinkWithXPlayers
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247CB5
gText_Rom_247CB5: @ 0x08247CB5
	.string "{STR_VAR_1}にんで つうしんを はじめます\nAボタン…けってい Bボタン…もどる{EOS}"
	.if (. - gText_Rom_247CB5) != 0x25
	.error "gText_Rom_247CB5 must retain its original byte length"
	.endif
	.globl gText_Rom_247CD6
	.set gText_Rom_247CD6, gText_Rom_247CB5 + 0x21

	@ data/text/cable_club.inc:38 gText_AwaitingLinkup
	.globl gText_Rom_247CDA
gText_Rom_247CDA: @ 0x08247CDA
	.string "つうしんかいしを まっています\n……Bボタンで キャンセル{EOS}"
	.if (. - gText_Rom_247CDA) > 0x1e
	.error "gText_Rom_247CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247CDA) < 0x1e
	.space 0x1e - (. - gText_Rom_247CDA)
	.endif

	@ data/text/cable_club.inc:42 CableClub_Text_OkayToSaveProgress
	.globl gText_Rom_247CF8
gText_Rom_247CF8: @ 0x08247CF8
	.string "はじめる まえに レポートを\nかきますが よろしいですか?{EOS}"
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
	.string "それでは へやへ どうぞ{EOS}"
	.if (. - gText_Rom_247D16) != 0xd
	.error "gText_Rom_247D16 must retain its original byte length"
	.endif
	.globl gText_Rom_247D1F
	.set gText_Rom_247D1F, gText_Rom_247D16 + 0x9

	@ data/text/cable_club.inc:48 CableClub_Text_DirectYouToYourRoom
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247D23
gText_Rom_247D23: @ 0x08247D23
	.string "それでは\nへやに ごあんないします{EOS}"
	.if (. - gText_Rom_247D23) != 0x12
	.error "gText_Rom_247D23 must retain its original byte length"
	.endif
