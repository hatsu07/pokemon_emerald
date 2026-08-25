.if .L__inc_fragment_select_b29255c2087d == 1
	@ src/strings.c:1102 gText_PlayersBattleResults
	.globl gText_PlayersBattleResults
gText_PlayersBattleResults: @ 0x085937E0
	.string "{PLAYER} の たいせん せいせき{EOS}"
	.if (. - gText_PlayersBattleResults) > 0xf
	.error "gText_PlayersBattleResults may not grow beyond its original slot"
	.endif
	.if (. - gText_PlayersBattleResults) < 0xf
	.space 0xf - (. - gText_PlayersBattleResults)
	.endif

	@ src/strings.c:1103 gText_TotalRecordWLD
	.globl gText_TotalRecordWLD
gText_TotalRecordWLD: @ 0x085937EF
	.string "{STR_VAR_1}しょう {STR_VAR_2}はい {STR_VAR_3}ひきわけ{EOS}"
	.if (. - gText_TotalRecordWLD) > 0x12
	.error "gText_TotalRecordWLD may not grow beyond its original slot"
	.endif
	.if (. - gText_TotalRecordWLD) < 0x12
	.space 0x12 - (. - gText_TotalRecordWLD)
	.endif
.elseif .L__inc_fragment_select_b29255c2087d == 2
	@ src/strings.c:510 gText_BattlePokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BattlePokemon
sScriptMenuText_BattlePokemon: @ 0x085CAFE6
	.string "でてくるポケモン{EOS}"
	.if (. - sScriptMenuText_BattlePokemon) != 0x9
	.error "sScriptMenuText_BattlePokemon must retain its original byte length"
	.endif

	@ src/strings.c:511 gText_BattleTrainers
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BattleTrainers
sScriptMenuText_BattleTrainers: @ 0x085CAFEF
	.string "たたかう トレーナー{EOS}"
	.if (. - sScriptMenuText_BattleTrainers) != 0xb
	.error "sScriptMenuText_BattleTrainers must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_b29255c2087d == 3

	@ asm/frontier_util.s:2944 PrintHallRecords
	.globl gText_Rom_5CCEB9
gText_Rom_5CCEB9: @ 0x085CCEB9
	.string "1い{EOS}"
	.if (. - gText_Rom_5CCEB9) > 0x3
	.error "gText_Rom_5CCEB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEB9) < 0x3
	.space 0x3 - (. - gText_Rom_5CCEB9)
	.endif

	@ src/strings.c:855 gText_2nd
	.globl gText_2nd
gText_2nd: @ 0x085CCEBC
	.string "2い{EOS}"
	.if (. - gText_2nd) > 0x3
	.error "gText_2nd may not grow beyond its original slot"
	.endif
	.if (. - gText_2nd) < 0x3
	.space 0x3 - (. - gText_2nd)
	.endif

	@ src/strings.c:856 gText_3rd
	.globl gText_3rd
gText_3rd: @ 0x085CCEBF
	.string "3い{EOS}"
	.if (. - gText_3rd) > 0x3
	.error "gText_3rd may not grow beyond its original slot"
	.endif
	.if (. - gText_3rd) < 0x3
	.space 0x3 - (. - gText_3rd)
	.endif

	@ src/strings.c:857 gText_4th
	.globl gText_4th
gText_4th: @ 0x085CCEC2
	.string "4い{EOS}"
	.if (. - gText_4th) > 0x3
	.error "gText_4th may not grow beyond its original slot"
	.endif
	.if (. - gText_4th) < 0x3
	.space 0x3 - (. - gText_4th)
	.endif
.elseif .L__inc_fragment_select_b29255c2087d == 4

	@ asm/mauville_old_man.s:1144 StorytellerDisplayStory
	.globl gText_Rom_5CCEC5
gText_Rom_5CCEC5: @ 0x085CCEC5
	.string "someone{EOS}"
	.if (. - gText_Rom_5CCEC5) > 0x8
	.error "gText_Rom_5CCEC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEC5) < 0x8
	.space 0x8 - (. - gText_Rom_5CCEC5)
	.endif

	@ asm/record_mixing.s:3855 SanitizeEmeraldBattleTowerRecord
	.globl gText_Rom_5CCECD
gText_Rom_5CCECD: @ 0x085CCECD
	.string "pokemon{EOS}"
	.if (. - gText_Rom_5CCECD) > 0x8
	.error "gText_Rom_5CCECD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCECD) < 0x8
	.space 0x8 - (. - gText_Rom_5CCECD)
	.endif

	@ src/strings.c:860 gJPText_MysteryGift
	.globl gJPText_MysteryGift
gJPText_MysteryGift: @ 0x085CCED5
	.string "ふしぎなもらいもの{EOS}"
	.if (. - gJPText_MysteryGift) > 0xa
	.error "gJPText_MysteryGift may not grow beyond its original slot"
	.endif
	.if (. - gJPText_MysteryGift) < 0xa
	.space 0xa - (. - gJPText_MysteryGift)
	.endif

	@ src/strings.c:861 gJPText_DecideStop
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gJPText_DecideStop
gJPText_DecideStop: @ 0x085CCEDF
	.string "{A_BUTTON}けってい {B_BUTTON}やめる{EOS}"
	.if (. - gJPText_DecideStop) != 0xd
	.error "gJPText_DecideStop must retain its original byte length"
	.endif

	@ src/strings.c:862 gJPText_ReceiveMysteryGiftWithEReader
	.globl gJPText_ReceiveMysteryGiftWithEReader
gJPText_ReceiveMysteryGiftWithEReader: @ 0x085CCEEC
	.string "カードeリーダー{PLUS} で\nふしぎなもらいものを よみこみます{EOS}"
	.if (. - gJPText_ReceiveMysteryGiftWithEReader) > 0x1f
	.error "gJPText_ReceiveMysteryGiftWithEReader may not grow beyond its original slot"
	.endif
	.if (. - gJPText_ReceiveMysteryGiftWithEReader) < 0x1f
	.space 0x1f - (. - gJPText_ReceiveMysteryGiftWithEReader)
	.endif
.elseif .L__inc_fragment_select_b29255c2087d == 5

	@ src/strings.c:866 gJPText_LinkIsIncorrect
	.globl gJPText_LinkIsIncorrect
gJPText_LinkIsIncorrect: @ 0x085CCF72
	.string "せつぞくが まちがっています{EOS}"
	.if (. - gJPText_LinkIsIncorrect) > 0xf
	.error "gJPText_LinkIsIncorrect may not grow beyond its original slot"
	.endif
	.if (. - gJPText_LinkIsIncorrect) < 0xf
	.space 0xf - (. - gJPText_LinkIsIncorrect)
	.endif

	@ src/strings.c:867 gJPText_CardReadingHasBeenHalted
	.globl gJPText_CardReadingHasBeenHalted
gJPText_CardReadingHasBeenHalted: @ 0x085CCF81
	.string "カードの よみこみを\nちゅうし しました{EOS}"
	.if (. - gJPText_CardReadingHasBeenHalted) > 0x15
	.error "gJPText_CardReadingHasBeenHalted may not grow beyond its original slot"
	.endif
	.if (. - gJPText_CardReadingHasBeenHalted) < 0x15
	.space 0x15 - (. - gJPText_CardReadingHasBeenHalted)
	.endif

	@ src/strings.c:868 gJPText_UnableConnectWithEReader
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gJPText_UnableConnectWithEReader
gJPText_UnableConnectWithEReader: @ 0x085CCF96
	.string "カードeリーダー{PLUS}と\nつうしん できません{EOS}"
	.if (. - gJPText_UnableConnectWithEReader) != 0x17
	.error "gJPText_UnableConnectWithEReader must retain its original byte length"
	.endif

	@ src/strings.c:869 gJPText_Connecting
	.globl gJPText_Connecting
gJPText_Connecting: @ 0x085CCFAD
	.string "つうしん ちゅう です{EOS}"
	.if (. - gJPText_Connecting) > 0xc
	.error "gJPText_Connecting may not grow beyond its original slot"
	.endif
	.if (. - gJPText_Connecting) < 0xc
	.space 0xc - (. - gJPText_Connecting)
	.endif

	@ src/strings.c:870 gJPText_ConnectionErrorCheckLink
	.globl gJPText_ConnectionErrorCheckLink
gJPText_ConnectionErrorCheckLink: @ 0x085CCFB9
	.string "つうしん エラーです\nせつぞくを たしかめて ください{EOS}"
	.if (. - gJPText_ConnectionErrorCheckLink) > 0x1c
	.error "gJPText_ConnectionErrorCheckLink may not grow beyond its original slot"
	.endif
	.if (. - gJPText_ConnectionErrorCheckLink) < 0x1c
	.space 0x1c - (. - gJPText_ConnectionErrorCheckLink)
	.endif

	@ src/strings.c:871 gJPText_ConnectionErrorTryAgain
	.globl gJPText_ConnectionErrorTryAgain
gJPText_ConnectionErrorTryAgain: @ 0x085CCFD5
	.string "つうしん エラーです\nはじめから やりなおして ください{EOS}"
	.if (. - gJPText_ConnectionErrorTryAgain) > 0x1d
	.error "gJPText_ConnectionErrorTryAgain may not grow beyond its original slot"
	.endif
	.if (. - gJPText_ConnectionErrorTryAgain) < 0x1d
	.space 0x1d - (. - gJPText_ConnectionErrorTryAgain)
	.endif

	@ src/strings.c:872 gJPText_AllowEReaderToLoadCard
	.globl gJPText_AllowEReaderToLoadCard
gJPText_AllowEReaderToLoadCard: @ 0x085CCFF2
	.string "カードeリーダー{PLUS} に\nカードを よみこませて ください{EOS}"
	.if (. - gJPText_AllowEReaderToLoadCard) > 0x1e
	.error "gJPText_AllowEReaderToLoadCard may not grow beyond its original slot"
	.endif
	.if (. - gJPText_AllowEReaderToLoadCard) < 0x1e
	.space 0x1e - (. - gJPText_AllowEReaderToLoadCard)
	.endif
.elseif .L__inc_fragment_select_b29255c2087d == 6

	@ asm/ereader_screen.s:807 sub_081D4704
	.globl gText_Rom_5CD010
gText_Rom_5CD010: @ 0x085CD010
	.string "つうしん　しゅうりょう！{EOS}"
	.if (. - gText_Rom_5CD010) > 0xd
	.error "gText_Rom_5CD010 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD010) < 0xd
	.space 0xd - (. - gText_Rom_5CD010)
	.endif

	@ src/strings.c:874 gJPText_NewTrainerHasComeToHoenn
	.globl gJPText_NewTrainerHasComeToHoenn
gJPText_NewTrainerHasComeToHoenn: @ 0x085CD01D
	.string "あらたな トレーナーが\nホウエンに やってきた!{EOS}"
	.if (. - gJPText_NewTrainerHasComeToHoenn) > 0x19
	.error "gJPText_NewTrainerHasComeToHoenn may not grow beyond its original slot"
	.endif
	.if (. - gJPText_NewTrainerHasComeToHoenn) < 0x19
	.space 0x19 - (. - gJPText_NewTrainerHasComeToHoenn)
	.endif

	@ src/strings.c:875 gJPText_PleaseWaitAMoment
	.globl gJPText_PleaseWaitAMoment
gJPText_PleaseWaitAMoment: @ 0x085CD036
	.string "しばらく おまちください{EOS}"
	.if (. - gJPText_PleaseWaitAMoment) > 0xd
	.error "gJPText_PleaseWaitAMoment may not grow beyond its original slot"
	.endif
	.if (. - gJPText_PleaseWaitAMoment) < 0xd
	.space 0xd - (. - gJPText_PleaseWaitAMoment)
	.endif

	@ src/strings.c:876 gJPText_WriteErrorUnableToSaveData
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gJPText_WriteErrorUnableToSaveData
gJPText_WriteErrorUnableToSaveData: @ 0x085CD043
	.string "かきこみ エラー です\nデータが ほぞん できませんでした{EOS}"
	.if (. - gJPText_WriteErrorUnableToSaveData) != 0x1e
	.error "gJPText_WriteErrorUnableToSaveData must retain its original byte length"
	.endif
.endif
