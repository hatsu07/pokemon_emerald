	.globl gText_Rom_247D31
	.set gText_Rom_247D31, gText_Rom_247D23 + 0xe

	@ data/text/cable_club.inc:51 Text_SomeoneIsNotReadyToLink
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_247D35
gText_Rom_247D35: @ 0x08247D35
	.string "おともだちの じゅんびが\nできて いない ようです\pじゅんびが できましたら\nまた おこしください{EOS}"
	.if (. - gText_Rom_247D35) != 0x32
	.error "gText_Rom_247D35 must retain its original byte length"
	.endif
	.globl gText_Rom_247D4F
	.set gText_Rom_247D4F, gText_Rom_247D35 + 0x1a

	@ data/text/cable_club.inc:54 Text_LinkErrorPleaseReset
	.globl gText_Rom_247D67
gText_Rom_247D67: @ 0x08247D67
	.string "つうしんエラー です\nリセットして やりなおしてください{EOS}"
	.if (. - gText_Rom_247D67) > 0x1d
	.error "gText_Rom_247D67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247D67) < 0x1d
	.space 0x1d - (. - gText_Rom_247D67)
	.endif

	@ data/text/cable_club.inc:57 Text_PlayersMadeDifferentSelections
	.globl gText_Rom_247D84
gText_Rom_247D84: @ 0x08247D84
	.string "おたがいが えらんだ ものが\nちがっている ようです{EOS}"
	.if (. - gText_Rom_247D84) > 0x1b
	.error "gText_Rom_247D84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247D84) < 0x1b
	.space 0x1b - (. - gText_Rom_247D84)
	.endif

	@ data/text/cable_club.inc:60 CableClub_Text_PleaseVisitAgain
	.globl gText_Rom_247D9F
gText_Rom_247D9F: @ 0x08247D9F
	.string "それでは また おこしください{EOS}"
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
	.string "さんかしている にんずうが\nただしく ありません{EOS}"
	.if (. - gText_Rom_247DAF) != 0x19
	.error "gText_Rom_247DAF must retain its original byte length"
	.endif
	.globl gText_Rom_247DC4
	.set gText_Rom_247DC4, gText_Rom_247DAF + 0x15

	@ data/text/cable_club.inc:66 CableClub_Text_CantSingleBattleWithXPlayers
	.globl gText_Rom_247DC8
gText_Rom_247DC8: @ 0x08247DC8
	.string "シングルバトルは {STR_VAR_1}にんで\nあそぶことは できません!{EOS}"
	.if (. - gText_Rom_247DC8) > 0x1d
	.error "gText_Rom_247DC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247DC8) < 0x1d
	.space 0x1d - (. - gText_Rom_247DC8)
	.endif

	@ data/text/cable_club.inc:69 CableClub_Text_CantDoubleBattleWithXPlayers
	.globl gText_Rom_247DE5
gText_Rom_247DE5: @ 0x08247DE5
	.string "ダブルバトルは {STR_VAR_1}にんでは\nあそぶことは できません!{EOS}"
	.if (. - gText_Rom_247DE5) > 0x1d
	.error "gText_Rom_247DE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247DE5) < 0x1d
	.space 0x1d - (. - gText_Rom_247DE5)
	.endif

	@ data/text/cable_club.inc:72 CableClub_Text_NeedFourPlayers
	.globl gText_Rom_247E02
gText_Rom_247E02: @ 0x08247E02
	.string "さんか にんずうが 4にん いないと\nたいせん することが できません!{EOS}"
	.if (. - gText_Rom_247E02) > 0x25
	.error "gText_Rom_247E02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247E02) < 0x25
	.space 0x25 - (. - gText_Rom_247E02)
	.endif

	@ data/text/cable_club.inc:75 CableClub_Text_PleaseConfirmNumberAndRestart
	.globl gText_Rom_247E27
gText_Rom_247E27: @ 0x08247E27
	.string "もういちど にんずうを たしかめて\nはじめから やりなおして ください{EOS}"
	.if (. - gText_Rom_247E27) > 0x24
	.error "gText_Rom_247E27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247E27) < 0x24
	.space 0x24 - (. - gText_Rom_247E27)
	.endif

	@ data/text/cable_club.inc:78 Text_TerminateLinkConfirmation
	.globl gText_Rom_247E4B
gText_Rom_247E4B: @ 0x08247E4B
	.string "へやからでると つうしんが\nおわりますが よろしいですか?{EOS}"
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
	.string "つうしんを しゅうりょう します\nしばらく おまちください{EOS}"
	.if (. - gText_Rom_247E69) != 0x1e
	.error "gText_Rom_247E69 must retain its original byte length"
	.endif
	.globl gText_Rom_247E7A
	.set gText_Rom_247E7A, gText_Rom_247E69 + 0x11

	@ data/text/cable_club.inc:84 CableClub_Text_TooBusyToNotice
	.globl gText_Rom_247E87
gText_Rom_247E87: @ 0x08247E87
	.string "とりこみちゅうの ようだ…{EOS}"
	.if (. - gText_Rom_247E87) > 0xe
	.error "gText_Rom_247E87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247E87) < 0xe
	.space 0xe - (. - gText_Rom_247E87)
	.endif

	@ data/text/cable_club.inc:87 CableClub_Text_GotToLookAtTrainerCard
	.globl gText_Rom_247E95
gText_Rom_247E95: @ 0x08247E95
	.string "{STR_VAR_1}の トレーナーカードを\nみせてもらった!{EOS}"
	.if (. - gText_Rom_247E95) > 0x17
	.error "gText_Rom_247E95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247E95) < 0x17
	.space 0x17 - (. - gText_Rom_247E95)
	.endif

	@ data/text/cable_club.inc:90 CableClub_Text_GotToLookAtColoredTrainerCard
	.globl gText_Rom_247EAC
gText_Rom_247EAC: @ 0x08247EAC
	.string "{STR_VAR_1}の トレーナーカードを\nみせてもらった!\p…{STR_VAR_2}カードだ!{EOS}"
	.if (. - gText_Rom_247EAC) > 0x20
	.error "gText_Rom_247EAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247EAC) < 0x20
	.space 0x20 - (. - gText_Rom_247EAC)
	.endif
