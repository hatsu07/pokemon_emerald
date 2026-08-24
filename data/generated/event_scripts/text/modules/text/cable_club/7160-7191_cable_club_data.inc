	.globl gText_Rom_247D31
	.set gText_Rom_247D31, CableClub_Text_DirectYouToYourRoom + 0xe

	@ data/text/cable_club.inc:51 Text_SomeoneIsNotReadyToLink
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Text_SomeoneIsNotReadyToLink
Text_SomeoneIsNotReadyToLink: @ 0x08247D35
	.string "おともだちの じゅんびが\nできて いない ようです\pじゅんびが できましたら\nまた おこしください{EOS}"
	.if (. - Text_SomeoneIsNotReadyToLink) != 0x32
	.error "Text_SomeoneIsNotReadyToLink must retain its original byte length"
	.endif
	.globl gText_Rom_247D4F
	.set gText_Rom_247D4F, Text_SomeoneIsNotReadyToLink + 0x1a

	@ data/text/cable_club.inc:54 Text_LinkErrorPleaseReset
	.globl Text_LinkErrorPleaseReset
Text_LinkErrorPleaseReset: @ 0x08247D67
	.string "つうしんエラー です\nリセットして やりなおしてください{EOS}"
	.if (. - Text_LinkErrorPleaseReset) > 0x1d
	.error "Text_LinkErrorPleaseReset may not grow beyond its original slot"
	.endif
	.if (. - Text_LinkErrorPleaseReset) < 0x1d
	.space 0x1d - (. - Text_LinkErrorPleaseReset)
	.endif

	@ data/text/cable_club.inc:57 Text_PlayersMadeDifferentSelections
	.globl Text_PlayersMadeDifferentSelections
Text_PlayersMadeDifferentSelections: @ 0x08247D84
	.string "おたがいが えらんだ ものが\nちがっている ようです{EOS}"
	.if (. - Text_PlayersMadeDifferentSelections) > 0x1b
	.error "Text_PlayersMadeDifferentSelections may not grow beyond its original slot"
	.endif
	.if (. - Text_PlayersMadeDifferentSelections) < 0x1b
	.space 0x1b - (. - Text_PlayersMadeDifferentSelections)
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
	.globl CableClub_Text_IncorrectNumberOfParticipants
CableClub_Text_IncorrectNumberOfParticipants: @ 0x08247DAF
	.string "さんかしている にんずうが\nただしく ありません{EOS}"
	.if (. - CableClub_Text_IncorrectNumberOfParticipants) != 0x19
	.error "CableClub_Text_IncorrectNumberOfParticipants must retain its original byte length"
	.endif
	.globl gText_Rom_247DC4
	.set gText_Rom_247DC4, CableClub_Text_IncorrectNumberOfParticipants + 0x15

	@ data/text/cable_club.inc:66 CableClub_Text_CantSingleBattleWithXPlayers
	.globl CableClub_Text_CantSingleBattleWithXPlayers
CableClub_Text_CantSingleBattleWithXPlayers: @ 0x08247DC8
	.string "シングルバトルは {STR_VAR_1}にんで\nあそぶことは できません!{EOS}"
	.if (. - CableClub_Text_CantSingleBattleWithXPlayers) > 0x1d
	.error "CableClub_Text_CantSingleBattleWithXPlayers may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_CantSingleBattleWithXPlayers) < 0x1d
	.space 0x1d - (. - CableClub_Text_CantSingleBattleWithXPlayers)
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
	.globl Text_TerminateLinkConfirmation
Text_TerminateLinkConfirmation: @ 0x08247E4B
	.string "へやからでると つうしんが\nおわりますが よろしいですか?{EOS}"
	.if (. - Text_TerminateLinkConfirmation) > 0x1e
	.error "Text_TerminateLinkConfirmation may not grow beyond its original slot"
	.endif
	.if (. - Text_TerminateLinkConfirmation) < 0x1e
	.space 0x1e - (. - Text_TerminateLinkConfirmation)
	.endif

	@ data/text/cable_club.inc:81 Text_TerminateLinkPleaseWait
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Text_TerminateLinkPleaseWait
Text_TerminateLinkPleaseWait: @ 0x08247E69
	.string "つうしんを しゅうりょう します\nしばらく おまちください{EOS}"
	.if (. - Text_TerminateLinkPleaseWait) != 0x1e
	.error "Text_TerminateLinkPleaseWait must retain its original byte length"
	.endif
	.globl gText_Rom_247E7A
	.set gText_Rom_247E7A, Text_TerminateLinkPleaseWait + 0x11

	@ data/text/cable_club.inc:84 CableClub_Text_TooBusyToNotice
	.globl CableClub_Text_TooBusyToNotice
CableClub_Text_TooBusyToNotice: @ 0x08247E87
	.string "とりこみちゅうの ようだ…{EOS}"
	.if (. - CableClub_Text_TooBusyToNotice) > 0xe
	.error "CableClub_Text_TooBusyToNotice may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_TooBusyToNotice) < 0xe
	.space 0xe - (. - CableClub_Text_TooBusyToNotice)
	.endif

	@ data/text/cable_club.inc:87 CableClub_Text_GotToLookAtTrainerCard
	.globl CableClub_Text_GotToLookAtTrainerCard
CableClub_Text_GotToLookAtTrainerCard: @ 0x08247E95
	.string "{STR_VAR_1}の トレーナーカードを\nみせてもらった!{EOS}"
	.if (. - CableClub_Text_GotToLookAtTrainerCard) > 0x17
	.error "CableClub_Text_GotToLookAtTrainerCard may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_GotToLookAtTrainerCard) < 0x17
	.space 0x17 - (. - CableClub_Text_GotToLookAtTrainerCard)
	.endif

	@ data/text/cable_club.inc:90 CableClub_Text_GotToLookAtColoredTrainerCard
	.globl CableClub_Text_GotToLookAtColoredTrainerCard
CableClub_Text_GotToLookAtColoredTrainerCard: @ 0x08247EAC
	.string "{STR_VAR_1}の トレーナーカードを\nみせてもらった!\p…{STR_VAR_2}カードだ!{EOS}"
	.if (. - CableClub_Text_GotToLookAtColoredTrainerCard) > 0x20
	.error "CableClub_Text_GotToLookAtColoredTrainerCard may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_GotToLookAtColoredTrainerCard) < 0x20
	.space 0x20 - (. - CableClub_Text_GotToLookAtColoredTrainerCard)
	.endif
