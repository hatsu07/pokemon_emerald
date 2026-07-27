	@ src/pokenav_ribbons_summary.c:43 gText_RibbonsF700
	.globl gText_Rom_5CB821
gText_Rom_5CB821: @ 0x085CB821
	.string "リボン {DYNAMIC 0}こ$"
	.if (. - gText_Rom_5CB821) > 0x8
	.error "gText_Rom_5CB821 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB821) < 0x8
	.space 0x8 - (. - gText_Rom_5CB821)
	.endif
	.incbin "baserom.gba", 0x5cb829, 0x3e

	@ src/strings.c:542 gText_CombineFourWordsOrPhrases
	.globl gText_Rom_5CB867
gText_Rom_5CB867: @ 0x085CB867
	.string "4つの ことばを くみあわせて$"
	.if (. - gText_Rom_5CB867) > 0x10
	.error "gText_Rom_5CB867 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB867) < 0x10
	.space 0x10 - (. - gText_Rom_5CB867)
	.endif

	@ src/strings.c:543 gText_AndMakeYourProfile
	.globl gText_Rom_5CB877
gText_Rom_5CB877: @ 0x085CB877
	.string "プロフィールを つくろう!$"
	.if (. - gText_Rom_5CB877) > 0xe
	.error "gText_Rom_5CB877 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB877) < 0xe
	.space 0xe - (. - gText_Rom_5CB877)
	.endif
	.incbin "baserom.gba", 0x5cb885, 0x9

	@ src/strings.c:545 gText_AndMakeAMessage (+1 aliases)
	.globl gText_Rom_5CB88E
gText_Rom_5CB88E: @ 0x085CB88E
	.string "メッセージを つくろう!$"
	.if (. - gText_Rom_5CB88E) > 0xd
	.error "gText_Rom_5CB88E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB88E) < 0xd
	.space 0xd - (. - gText_Rom_5CB88E)
	.endif
	.incbin "baserom.gba", 0x5cb89b, 0x16

	@ src/strings.c:546 gText_FindWordsThatDescribeYour
	.globl gText_Rom_5CB8B1
gText_Rom_5CB8B1: @ 0x085CB8B1
	.string "いまの きもちに ぴったりあう$"
	.if (. - gText_Rom_5CB8B1) > 0x10
	.error "gText_Rom_5CB8B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8B1) < 0x10
	.space 0x10 - (. - gText_Rom_5CB8B1)
	.endif

	@ src/strings.c:547 gText_FeelingsRightNow
	.globl gText_Rom_5CB8C1
gText_Rom_5CB8C1: @ 0x085CB8C1
	.string "ことばを みつけよう!$"
	.if (. - gText_Rom_5CB8C1) > 0xc
	.error "gText_Rom_5CB8C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8C1) < 0xc
	.space 0xc - (. - gText_Rom_5CB8C1)
	.endif

	@ src/strings.c:548 gText_WithFourPhrases
	.globl gText_Rom_5CB8CD
gText_Rom_5CB8CD: @ 0x085CB8CD
	.string "4つの ことばで$"
	.if (. - gText_Rom_5CB8CD) > 0x9
	.error "gText_Rom_5CB8CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8CD) < 0x9
	.space 0x9 - (. - gText_Rom_5CB8CD)
	.endif

	@ src/strings.c:549 gText_CombineNineWordsOrPhrases
	.globl gText_Rom_5CB8D6
gText_Rom_5CB8D6: @ 0x085CB8D6
	.string "9つの ことばを くみあわせて$"
	.if (. - gText_Rom_5CB8D6) > 0x10
	.error "gText_Rom_5CB8D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8D6) < 0x10
	.space 0x10 - (. - gText_Rom_5CB8D6)
	.endif

	@ src/strings.c:545 gText_AndMakeAMessage (+1 aliases)
	.globl gText_Rom_5CB8E6
gText_Rom_5CB8E6: @ 0x085CB8E6
	.string "メッセージを つくろう!$"
	.if (. - gText_Rom_5CB8E6) > 0xd
	.error "gText_Rom_5CB8E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8E6) < 0xd
	.space 0xd - (. - gText_Rom_5CB8E6)
	.endif

	@ src/strings.c:551 gText_ChangeJustOneWordOrPhrase
	.globl gText_Rom_5CB8F3
gText_Rom_5CB8F3: @ 0x085CB8F3
	.string "ことばを 1つだけ いれかえて$"
	.if (. - gText_Rom_5CB8F3) > 0x10
	.error "gText_Rom_5CB8F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8F3) < 0x10
	.space 0x10 - (. - gText_Rom_5CB8F3)
	.endif

	@ src/strings.c:552 gText_AndImproveTheBardsSong
	.globl gText_Rom_5CB903
gText_Rom_5CB903: @ 0x085CB903
	.string "オヤジのうたを よくして あげよう!$"
	.if (. - gText_Rom_5CB903) > 0x13
	.error "gText_Rom_5CB903 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB903) < 0x13
	.space 0x13 - (. - gText_Rom_5CB903)
	.endif

	@ src/strings.c:553 gText_YourProfile
	.globl gText_Rom_5CB916
gText_Rom_5CB916: @ 0x085CB916
	.string "プロフィールは$"
	.if (. - gText_Rom_5CB916) > 0x8
	.error "gText_Rom_5CB916 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB916) < 0x8
	.space 0x8 - (. - gText_Rom_5CB916)
	.endif

	@ src/strings.c:554 gText_YourFeelingAtTheBattlesStart
	.globl gText_Rom_5CB91E
gText_Rom_5CB91E: @ 0x085CB91E
	.string "たいせんが はじまるときの きもちは$"
	.if (. - gText_Rom_5CB91E) > 0x13
	.error "gText_Rom_5CB91E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB91E) < 0x13
	.space 0x13 - (. - gText_Rom_5CB91E)
	.endif

	@ src/strings.c:555 gText_WhatYouSayIfYouWin
	.globl gText_Rom_5CB931
gText_Rom_5CB931: @ 0x085CB931
	.string "たいせんに かったときの あいさつは$"
	.if (. - gText_Rom_5CB931) > 0x13
	.error "gText_Rom_5CB931 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB931) < 0x13
	.space 0x13 - (. - gText_Rom_5CB931)
	.endif

	@ src/strings.c:556 gText_WhatYouSayIfYouLose
	.globl gText_Rom_5CB944
gText_Rom_5CB944: @ 0x085CB944
	.string "たいせんに まけたときの あいさつは$"
	.if (. - gText_Rom_5CB944) > 0x13
	.error "gText_Rom_5CB944 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB944) < 0x13
	.space 0x13 - (. - gText_Rom_5CB944)
	.endif

	@ src/strings.c:557 gText_TheAnswer (+1 aliases)
	.globl gText_Rom_5CB957
gText_Rom_5CB957: @ 0x085CB957
	.string "こたえは$"
	.if (. - gText_Rom_5CB957) > 0x5
	.error "gText_Rom_5CB957 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB957) < 0x5
	.space 0x5 - (. - gText_Rom_5CB957)
	.endif

	@ src/strings.c:558 gText_TheMailMessage
	.globl gText_Rom_5CB95C
gText_Rom_5CB95C: @ 0x085CB95C
	.string "メールに のせる メッセージは$"
	.if (. - gText_Rom_5CB95C) > 0x10
	.error "gText_Rom_5CB95C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB95C) < 0x10
	.space 0x10 - (. - gText_Rom_5CB95C)
	.endif

	@ src/strings.c:559 gText_TheMailSalutation
	.globl gText_Rom_5CB96C
gText_Rom_5CB96C: @ 0x085CB96C
	.string "はがきに のせる あいさつは$"
	.if (. - gText_Rom_5CB96C) > 0xf
	.error "gText_Rom_5CB96C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB96C) < 0xf
	.space 0xf - (. - gText_Rom_5CB96C)
	.endif

	@ src/strings.c:560 gText_TheBardsSong2
	.globl gText_Rom_5CB97B
gText_Rom_5CB97B: @ 0x085CB97B
	.string "あたらしい うたは$"
	.if (. - gText_Rom_5CB97B) > 0xa
	.error "gText_Rom_5CB97B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB97B) < 0xa
	.space 0xa - (. - gText_Rom_5CB97B)
	.endif

	@ src/strings.c:561 gText_CombineTwoWordsOrPhrases (+1 aliases)
	.globl gText_Rom_5CB985
gText_Rom_5CB985: @ 0x085CB985
	.string "2つの ことばを くみあわせて$"
	.if (. - gText_Rom_5CB985) > 0x10
	.error "gText_Rom_5CB985 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB985) < 0x10
	.space 0x10 - (. - gText_Rom_5CB985)
	.endif

	@ src/strings.c:562 gText_AndMakeATrendySaying
	.globl gText_Rom_5CB995
gText_Rom_5CB995: @ 0x085CB995
	.string "はやらせたい ことばを つくろう!$"
	.if (. - gText_Rom_5CB995) > 0x12
	.error "gText_Rom_5CB995 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB995) < 0x12
	.space 0x12 - (. - gText_Rom_5CB995)
	.endif

	@ src/strings.c:563 gText_TheTrendySaying
	.globl gText_Rom_5CB9A7
gText_Rom_5CB9A7: @ 0x085CB9A7
	.string "はやらせたい ことばは$"
	.if (. - gText_Rom_5CB9A7) > 0xc
	.error "gText_Rom_5CB9A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9A7) < 0xc
	.space 0xc - (. - gText_Rom_5CB9A7)
	.endif

	@ src/strings.c:564 gText_IsAsShownOkay
	.globl gText_Rom_5CB9B3
gText_Rom_5CB9B3: @ 0x085CB9B3
	.string "これで いいですか?$"
	.if (. - gText_Rom_5CB9B3) > 0xb
	.error "gText_Rom_5CB9B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9B3) < 0xb
	.space 0xb - (. - gText_Rom_5CB9B3)
	.endif

	@ src/strings.c:561 gText_CombineTwoWordsOrPhrases (+1 aliases)
	.globl gText_Rom_5CB9BE
gText_Rom_5CB9BE: @ 0x085CB9BE
	.string "2つの ことばを くみあわせて$"
	.if (. - gText_Rom_5CB9BE) > 0x10
	.error "gText_Rom_5CB9BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9BE) < 0x10
	.space 0x10 - (. - gText_Rom_5CB9BE)
	.endif

	@ src/strings.c:566 gText_ToTeachHerAGoodSaying
	.globl gText_Rom_5CB9CE
gText_Rom_5CB9CE: @ 0x085CB9CE
	.string "いい ことばを おしえてあげよう!$"
	.if (. - gText_Rom_5CB9CE) > 0x12
	.error "gText_Rom_5CB9CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9CE) < 0x12
	.space 0x12 - (. - gText_Rom_5CB9CE)
	.endif

	@ src/strings.c:567 gText_FindWordsWhichFit
	.globl gText_Rom_5CB9E0
gText_Rom_5CB9E0: @ 0x085CB9E0
	.string "トレーナーの イメージに$"
	.if (. - gText_Rom_5CB9E0) > 0xd
	.error "gText_Rom_5CB9E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9E0) < 0xd
	.space 0xd - (. - gText_Rom_5CB9E0)
	.endif

	@ src/strings.c:568 gText_TheTrainersImage
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB9ED
gText_Rom_5CB9ED: @ 0x085CB9ED
	.string "ぴったりの ことばを みつけよう!$"
	.if (. - gText_Rom_5CB9ED) != 0x12
	.error "gText_Rom_5CB9ED must retain its original byte length"
	.endif
	.globl gText_Rom_5CB9F3
	.set gText_Rom_5CB9F3, gText_Rom_5CB9ED + 0x6

	@ src/strings.c:569 gText_TheImage
	.globl gText_Rom_5CB9FF
gText_Rom_5CB9FF: @ 0x085CB9FF
	.string "イメージは$"
	.if (. - gText_Rom_5CB9FF) > 0x6
	.error "gText_Rom_5CB9FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9FF) < 0x6
	.space 0x6 - (. - gText_Rom_5CB9FF)
	.endif

	@ src/strings.c:570 gText_OutOfTheListedChoices
	.globl gText_Rom_5CBA05
gText_Rom_5CBA05: @ 0x085CBA05
	.string "ことばの なかから$"
	.if (. - gText_Rom_5CBA05) > 0xa
	.error "gText_Rom_5CBA05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA05) < 0xa
	.space 0xa - (. - gText_Rom_5CBA05)
	.endif

	@ src/strings.c:571 gText_SelectTheAnswerToTheQuiz
	.globl gText_Rom_5CBA0F
gText_Rom_5CBA0F: @ 0x085CBA0F
	.string "クイズの こたえを えらぼう!$"
	.if (. - gText_Rom_5CBA0F) > 0x10
	.error "gText_Rom_5CBA0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA0F) < 0x10
	.space 0x10 - (. - gText_Rom_5CBA0F)
	.endif

	@ src/strings.c:572 gText_AndCreateAQuiz
	.globl gText_Rom_5CBA1F
gText_Rom_5CBA1F: @ 0x085CBA1F
	.string "クイズを つくろう!$"
	.if (. - gText_Rom_5CBA1F) > 0xb
	.error "gText_Rom_5CBA1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA1F) < 0xb
	.space 0xb - (. - gText_Rom_5CBA1F)
	.endif

	@ src/strings.c:573 gText_PickAWordOrPhraseAnd
	.globl gText_Rom_5CBA2A
gText_Rom_5CBA2A: @ 0x085CBA2A
	.string "ことばの なかから ひとつを えらんで$"
	.if (. - gText_Rom_5CBA2A) > 0x14
	.error "gText_Rom_5CBA2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA2A) < 0x14
	.space 0x14 - (. - gText_Rom_5CBA2A)
	.endif

	@ src/strings.c:574 gText_SetTheQuizAnswer
	.globl gText_Rom_5CBA3E
gText_Rom_5CBA3E: @ 0x085CBA3E
	.string "クイズの こたえを つくろう!$"
	.if (. - gText_Rom_5CBA3E) > 0x10
	.error "gText_Rom_5CBA3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA3E) < 0x10
	.space 0x10 - (. - gText_Rom_5CBA3E)
	.endif

	@ src/strings.c:557 gText_TheAnswer (+1 aliases)
	.globl gText_Rom_5CBA4E
gText_Rom_5CBA4E: @ 0x085CBA4E
	.string "こたえは$"
	.if (. - gText_Rom_5CBA4E) > 0x5
	.error "gText_Rom_5CBA4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA4E) < 0x5
	.space 0x5 - (. - gText_Rom_5CBA4E)
	.endif

	@ src/strings.c:576 gText_TheQuizColon
	.globl gText_Rom_5CBA53
gText_Rom_5CBA53: @ 0x085CBA53
	.string "クイズは$"
	.if (. - gText_Rom_5CBA53) > 0x5
	.error "gText_Rom_5CBA53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA53) < 0x5
	.space 0x5 - (. - gText_Rom_5CBA53)
	.endif

	@ src/strings.c:577 gText_ApprenticePhrase
	.globl gText_Rom_5CBA58
gText_Rom_5CBA58: @ 0x085CBA58
	.string "でしの きめゼリフは$"
	.if (. - gText_Rom_5CBA58) > 0xb
	.error "gText_Rom_5CBA58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA58) < 0xb
	.space 0xb - (. - gText_Rom_5CBA58)
	.endif
	.globl gUnknown_85CBA63
gUnknown_85CBA63: @ 0x085CBA63

	@ src/strings.c:578 gText_QuitEditing (+1 aliases)
	.globl gText_Rom_5CBA63
gText_Rom_5CBA63: @ 0x085CBA63
	.string "へんしゅうを やめますか？$"
	.if (. - gText_Rom_5CBA63) > 0xe
	.error "gText_Rom_5CBA63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA63) < 0xe
	.space 0xe - (. - gText_Rom_5CBA63)
	.endif
	.globl gUnknown_85CBA71
gUnknown_85CBA71: @ 0x085CBA71

	@ src/strings.c:579 gText_StopGivingPkmnMail (+1 aliases)
	.globl gText_Rom_5CBA71
gText_Rom_5CBA71: @ 0x085CBA71
	.string "メールを もたせるのを やめますか?$"
	.if (. - gText_Rom_5CBA71) > 0x13
	.error "gText_Rom_5CBA71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA71) < 0x13
	.space 0x13 - (. - gText_Rom_5CBA71)
	.endif

	@ src/strings.c:580 gText_AndFillOutTheQuestionnaire
	.globl gText_Rom_5CBA84
gText_Rom_5CBA84: @ 0x085CBA84
	.string "ショップの アンケートに こたえよう!$"
	.if (. - gText_Rom_5CBA84) > 0x14
	.error "gText_Rom_5CBA84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA84) < 0x14
	.space 0x14 - (. - gText_Rom_5CBA84)
	.endif

	@ src/strings.c:581 gText_LetsReplyToTheInterview
	.globl gText_Rom_5CBA98
gText_Rom_5CBA98: @ 0x085CBA98
	.string "インタビューに こたえよう！$"
	.if (. - gText_Rom_5CBA98) > 0xf
	.error "gText_Rom_5CBA98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA98) < 0xf
	.space 0xf - (. - gText_Rom_5CBA98)
	.endif
	.globl gUnknown_85CBAA7
gUnknown_85CBAA7: @ 0x085CBAA7

	@ src/strings.c:582 gText_AllTextBeingEditedWill
	.globl gText_Rom_5CBAA7
gText_Rom_5CBAA7: @ 0x085CBAA7
	.string "へんしゅうちゅうの ことばを$"
	.if (. - gText_Rom_5CBAA7) > 0xf
	.error "gText_Rom_5CBAA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAA7) < 0xf
	.space 0xf - (. - gText_Rom_5CBAA7)
	.endif
	.globl gUnknown_85CBAB6
gUnknown_85CBAB6: @ 0x085CBAB6

	@ src/strings.c:583 gText_BeDeletedThatOkay
	.globl gText_Rom_5CBAB6
gText_Rom_5CBAB6: @ 0x085CBAB6
	.string "ぜんぶ けしても いいですか?$"
	.if (. - gText_Rom_5CBAB6) > 0x10
	.error "gText_Rom_5CBAB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAB6) < 0x10
	.space 0x10 - (. - gText_Rom_5CBAB6)
	.endif

	@ src/strings.c:578 gText_QuitEditing (+1 aliases)
	.globl gText_Rom_5CBAC6
gText_Rom_5CBAC6: @ 0x085CBAC6
	.string "へんしゅうを やめますか？$"
	.if (. - gText_Rom_5CBAC6) > 0xe
	.error "gText_Rom_5CBAC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAC6) < 0xe
	.space 0xe - (. - gText_Rom_5CBAC6)
	.endif

	@ src/strings.c:585 gText_EditedTextWillNotBeSaved
	.globl gText_Rom_5CBAD4
gText_Rom_5CBAD4: @ 0x085CBAD4
	.string "へんしゅうした ことばは ほぞん$"
	.if (. - gText_Rom_5CBAD4) > 0x11
	.error "gText_Rom_5CBAD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAD4) < 0x11
	.space 0x11 - (. - gText_Rom_5CBAD4)
	.endif

	@ src/strings.c:586 gText_IsThatOkay
	.globl gText_Rom_5CBAE5
gText_Rom_5CBAE5: @ 0x085CBAE5
	.string "されませんが いいですか?$"
	.if (. - gText_Rom_5CBAE5) > 0xe
	.error "gText_Rom_5CBAE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAE5) < 0xe
	.space 0xe - (. - gText_Rom_5CBAE5)
	.endif

	@ src/strings.c:587 gText_PleaseEnterPhraseOrWord
	.globl gText_Rom_5CBAF3
gText_Rom_5CBAF3: @ 0x085CBAF3
	.string "なにか ことばを いれてください!$"
	.if (. - gText_Rom_5CBAF3) > 0x12
	.error "gText_Rom_5CBAF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAF3) < 0x12
	.space 0x12 - (. - gText_Rom_5CBAF3)
	.endif

	@ src/strings.c:588 gText_EntireTextCantBeDeleted
	.globl gText_Rom_5CBB05
gText_Rom_5CBB05: @ 0x085CBB05
	.string "ことばを ぜんぶ けすことは できません!$"
	.if (. - gText_Rom_5CBB05) > 0x16
	.error "gText_Rom_5CBB05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB05) < 0x16
	.space 0x16 - (. - gText_Rom_5CBB05)
	.endif
	.globl gUnknown_85CBB1B
gUnknown_85CBB1B: @ 0x085CBB1B

	@ src/strings.c:589 gText_OnlyOnePhrase
	.globl gText_Rom_5CBB1B
gText_Rom_5CBB1B: @ 0x085CBB1B
	.string "かえられる ことばは 1つ までです!$"
	.if (. - gText_Rom_5CBB1B) > 0x14
	.error "gText_Rom_5CBB1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB1B) < 0x14
	.space 0x14 - (. - gText_Rom_5CBB1B)
	.endif
	.globl gUnknown_85CBB2F
gUnknown_85CBB2F: @ 0x085CBB2F

	@ src/strings.c:590 gText_OriginalSongWillBeUsed
	.globl gText_Rom_5CBB2F
gText_Rom_5CBB2F: @ 0x085CBB2F
	.string "うたを もとに もどします!$"
	.if (. - gText_Rom_5CBB2F) > 0xf
	.error "gText_Rom_5CBB2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB2F) < 0xf
	.space 0xf - (. - gText_Rom_5CBB2F)
	.endif

	@ src/strings.c:591 gText_ThatsTrendyAlready
	.globl gText_Rom_5CBB3E
gText_Rom_5CBB3E: @ 0x085CBB3E
	.string "それは もう はやっています！$"
	.if (. - gText_Rom_5CBB3E) > 0x10
	.error "gText_Rom_5CBB3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB3E) < 0x10
	.space 0x10 - (. - gText_Rom_5CBB3E)
	.endif
	.globl gUnknown_85CBB4E
gUnknown_85CBB4E: @ 0x085CBB4E

	@ src/strings.c:592 gText_CombineTwoWordsOrPhrases3
	.globl gText_Rom_5CBB4E
gText_Rom_5CBB4E: @ 0x085CBB4E
	.string "2つの ことばを くみあわせてください!$"
	.if (. - gText_Rom_5CBB4E) > 0x15
	.error "gText_Rom_5CBB4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB4E) < 0x15
	.space 0x15 - (. - gText_Rom_5CBB4E)
	.endif

	@ src/strings.c:593 gText_QuitGivingInfo
	.globl gText_Rom_5CBB63
gText_Rom_5CBB63: @ 0x085CBB63
	.string "ことばを おしえるのを やめますか?$"
	.if (. - gText_Rom_5CBB63) > 0x13
	.error "gText_Rom_5CBB63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB63) < 0x13
	.space 0x13 - (. - gText_Rom_5CBB63)
	.endif

	@ src/strings.c:579 gText_StopGivingPkmnMail (+1 aliases)
	.globl gText_Rom_5CBB76
gText_Rom_5CBB76: @ 0x085CBB76
	.string "メールを もたせるのを やめますか?$"
	.if (. - gText_Rom_5CBB76) > 0x13
	.error "gText_Rom_5CBB76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB76) < 0x13
	.space 0x13 - (. - gText_Rom_5CBB76)
	.endif

	@ src/strings.c:595 gText_CreateAQuiz2 (+1 aliases)
	.globl gText_Rom_5CBB89
gText_Rom_5CBB89: @ 0x085CBB89
	.string "もんだいを つくってください!$"
	.if (. - gText_Rom_5CBB89) > 0x10
	.error "gText_Rom_5CBB89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB89) < 0x10
	.space 0x10 - (. - gText_Rom_5CBB89)
	.endif

	@ src/strings.c:596 gText_SetTheAnswer (+1 aliases)
	.globl gText_Rom_5CBB99
gText_Rom_5CBB99: @ 0x085CBB99
	.string "こたえを えらんでください!$"
	.if (. - gText_Rom_5CBB99) > 0xf
	.error "gText_Rom_5CBB99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB99) < 0xf
	.space 0xf - (. - gText_Rom_5CBB99)
	.endif

	@ src/strings.c:597 gText_CancelSelection
	.globl gText_Rom_5CBBA8
gText_Rom_5CBBA8: @ 0x085CBBA8
	.string "もとにもどして いいですか?$"
	.if (. - gText_Rom_5CBBA8) > 0xf
	.error "gText_Rom_5CBBA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBA8) < 0xf
	.space 0xf - (. - gText_Rom_5CBBA8)
	.endif

	@ src/strings.c:598 gText_Profile
	.globl gText_Rom_5CBBB7
gText_Rom_5CBBB7: @ 0x085CBBB7
	.string "プロフィール$"
	.if (. - gText_Rom_5CBBB7) > 0x7
	.error "gText_Rom_5CBBB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBB7) < 0x7
	.space 0x7 - (. - gText_Rom_5CBBB7)
	.endif

	@ src/strings.c:599 gText_AtTheBattlesStart
	.globl gText_Rom_5CBBBE
gText_Rom_5CBBBE: @ 0x085CBBBE
	.string "たいせんが はじまるとき$"
	.if (. - gText_Rom_5CBBBE) > 0xd
	.error "gText_Rom_5CBBBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBBE) < 0xd
	.space 0xd - (. - gText_Rom_5CBBBE)
	.endif

	@ src/strings.c:600 gText_UponWinningABattle
	.globl gText_Rom_5CBBCB
gText_Rom_5CBBCB: @ 0x085CBBCB
	.string "たいせんに かったとき$"
	.if (. - gText_Rom_5CBBCB) > 0xc
	.error "gText_Rom_5CBBCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBCB) < 0xc
	.space 0xc - (. - gText_Rom_5CBBCB)
	.endif

	@ src/strings.c:601 gText_UponLosingABattle
	.globl gText_Rom_5CBBD7
gText_Rom_5CBBD7: @ 0x085CBBD7
	.string "たいせんに まけたとき$"
	.if (. - gText_Rom_5CBBD7) > 0xc
	.error "gText_Rom_5CBBD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBD7) < 0xc
	.space 0xc - (. - gText_Rom_5CBBD7)
	.endif

	@ src/strings.c:602 gText_TheBardsSong
	.globl gText_Rom_5CBBE3
gText_Rom_5CBBE3: @ 0x085CBBE3
	.string "オヤジのうた$"
	.if (. - gText_Rom_5CBBE3) > 0x7
	.error "gText_Rom_5CBBE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBE3) < 0x7
	.space 0x7 - (. - gText_Rom_5CBBE3)
	.endif

	@ src/strings.c:603 gText_WhatsHipAndHappening
	.globl gText_Rom_5CBBEA
gText_Rom_5CBBEA: @ 0x085CBBEA
	.string "はやっている ものは?$"
	.if (. - gText_Rom_5CBBEA) > 0xc
	.error "gText_Rom_5CBBEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBEA) < 0xc
	.space 0xc - (. - gText_Rom_5CBBEA)
	.endif

	@ src/strings.c:604 gText_Interview
	.globl gText_Rom_5CBBF6
gText_Rom_5CBBF6: @ 0x085CBBF6
	.string "インタビュー$"
	.if (. - gText_Rom_5CBBF6) > 0x7
	.error "gText_Rom_5CBBF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBF6) < 0x7
	.space 0x7 - (. - gText_Rom_5CBBF6)
	.endif

	@ src/strings.c:605 gText_GoodSaying
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBBFD
gText_Rom_5CBBFD: @ 0x085CBBFD
	.string "いい ことば$"
	.if (. - gText_Rom_5CBBFD) != 0x7
	.error "gText_Rom_5CBBFD must retain its original byte length"
	.endif
	.globl gText_Rom_5CBC00
	.set gText_Rom_5CBC00, gText_Rom_5CBBFD + 0x3

	@ src/strings.c:606 gText_FansQuestion
	.globl gText_Rom_5CBC04
gText_Rom_5CBC04: @ 0x085CBC04
	.string "ファンのしつもん$"
	.if (. - gText_Rom_5CBC04) > 0x9
	.error "gText_Rom_5CBC04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC04) < 0x9
	.space 0x9 - (. - gText_Rom_5CBC04)
	.endif

	@ src/strings.c:607 gJPText_WhatIsTheQuizAnswer (+1 aliases)
	.globl gText_Rom_5CBC0D
gText_Rom_5CBC0D: @ 0x085CBC0D
	.string "クイズの こたえは？$"
	.if (. - gText_Rom_5CBC0D) > 0xb
	.error "gText_Rom_5CBC0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC0D) < 0xb
	.space 0xb - (. - gText_Rom_5CBC0D)
	.endif

	@ src/strings.c:608 gText_ApprenticesPhrase
	.globl gText_Rom_5CBC18
gText_Rom_5CBC18: @ 0x085CBC18
	.string "でしの きめゼリフ$"
	.if (. - gText_Rom_5CBC18) > 0xa
	.error "gText_Rom_5CBC18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC18) < 0xa
	.space 0xa - (. - gText_Rom_5CBC18)
	.endif

	@ src/strings.c:609 gText_Questionnaire
	.globl gText_Rom_5CBC22
gText_Rom_5CBC22: @ 0x085CBC22
	.string "アンケート$"
	.if (. - gText_Rom_5CBC22) > 0x6
	.error "gText_Rom_5CBC22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC22) < 0x6
	.space 0x6 - (. - gText_Rom_5CBC22)
	.endif
	.incbin "baserom.gba", 0x5cbc28, 0x28

	@ src/strings.c:89 gText_DexSearchAlphaSTU
	.globl gText_Rom_5CBC50
gText_Rom_5CBC50: @ 0x085CBC50
	.string "まみむめも$"
	.if (. - gText_Rom_5CBC50) > 0x6
	.error "gText_Rom_5CBC50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC50) < 0x6
	.space 0x6 - (. - gText_Rom_5CBC50)
	.endif
	.incbin "baserom.gba", 0x5cbc56, 0x6

	@ src/strings.c:90 gText_DexSearchAlphaVWX
	.globl gText_Rom_5CBC5C
gText_Rom_5CBC5C: @ 0x085CBC5C
	.string "らりるれろ$"
	.if (. - gText_Rom_5CBC5C) > 0x6
	.error "gText_Rom_5CBC5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC5C) < 0x6
	.space 0x6 - (. - gText_Rom_5CBC5C)
	.endif
	.globl gUnknown_85CBC62
gUnknown_85CBC62: @ 0x085CBC62

	@ src/strings.c:610 gText_YouCannotQuitHere
	.globl gText_Rom_5CBC62
gText_Rom_5CBC62: @ 0x085CBC62
	.string "ここでは とちゅうで$"
	.if (. - gText_Rom_5CBC62) > 0xb
	.error "gText_Rom_5CBC62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC62) < 0xb
	.space 0xb - (. - gText_Rom_5CBC62)
	.endif
	.globl gUnknown_85CBC6D
gUnknown_85CBC6D: @ 0x085CBC6D

	@ src/strings.c:611 gText_SectionMustBeCompleted
	.globl gText_Rom_5CBC6D
gText_Rom_5CBC6D: @ 0x085CBC6D
	.string "やめることは できません!$"
	.if (. - gText_Rom_5CBC6D) > 0xe
	.error "gText_Rom_5CBC6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC6D) < 0xe
	.space 0xe - (. - gText_Rom_5CBC6D)
	.endif
	.globl gUnknown_85CBC7B
gUnknown_85CBC7B: @ 0x085CBC7B
	.incbin "baserom.gba", 0x5cbc7b, 0x6

	@ src/strings.c:1166 gText_Quiz
	.globl gText_Rom_5CBC81
gText_Rom_5CBC81: @ 0x085CBC81
	.string "クイズ$"
	.if (. - gText_Rom_5CBC81) > 0x4
	.error "gText_Rom_5CBC81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC81) < 0x4
	.space 0x4 - (. - gText_Rom_5CBC81)
	.endif
	.globl gUnknown_85CBC85
gUnknown_85CBC85: @ 0x085CBC85
	.incbin "baserom.gba", 0x5cbc85, 0x4

	@ src/strings.c:614 gText_AfterYouHaveReadTheQuiz
	.globl gText_Rom_5CBC89
gText_Rom_5CBC89: @ 0x085CBC89
	.string "もんだいを よんだら$"
	.if (. - gText_Rom_5CBC89) > 0xb
	.error "gText_Rom_5CBC89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC89) < 0xb
	.space 0xb - (. - gText_Rom_5CBC89)
	.endif

	@ src/strings.c:615 gText_QuestionPressTheAButton
	.globl gText_Rom_5CBC94
gText_Rom_5CBC94: @ 0x085CBC94
	.string "Aボタンを おしてね!$"
	.if (. - gText_Rom_5CBC94) > 0xc
	.error "gText_Rom_5CBC94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC94) < 0xc
	.space 0xc - (. - gText_Rom_5CBC94)
	.endif

	@ src/strings.c:607 gJPText_WhatIsTheQuizAnswer (+1 aliases)
	.globl gText_Rom_5CBCA0
gText_Rom_5CBCA0: @ 0x085CBCA0
	.string "クイズの こたえは？$"
	.if (. - gText_Rom_5CBCA0) > 0xb
	.error "gText_Rom_5CBCA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCA0) < 0xb
	.space 0xb - (. - gText_Rom_5CBCA0)
	.endif
	.globl gUnknown_85CBCAB
gUnknown_85CBCAB: @ 0x085CBCAB

	@ src/strings.c:617 gText_LikeToQuitQuiz
	.globl gText_Rom_5CBCAB
gText_Rom_5CBCAB: @ 0x085CBCAB
	.string "クイズの チャレンジを$"
	.if (. - gText_Rom_5CBCAB) > 0xc
	.error "gText_Rom_5CBCAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCAB) < 0xc
	.space 0xc - (. - gText_Rom_5CBCAB)
	.endif
	.globl gUnknown_85CBCB7
gUnknown_85CBCB7: @ 0x085CBCB7

	@ src/strings.c:618 gText_ChallengeQuestionMark
	.globl gText_Rom_5CBCB7
gText_Rom_5CBCB7: @ 0x085CBCB7
	.string "あきらめますか?$"
	.if (. - gText_Rom_5CBCB7) > 0x9
	.error "gText_Rom_5CBCB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCB7) < 0x9
	.space 0x9 - (. - gText_Rom_5CBCB7)
	.endif

	@ src/strings.c:619 gText_IsThisQuizOK
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBCC0
gText_Rom_5CBCC0: @ 0x085CBCC0
	.string "クイズは これで いいですか?$"
	.if (. - gText_Rom_5CBCC0) != 0x10
	.error "gText_Rom_5CBCC0 must retain its original byte length"
	.endif
	.globl gText_Rom_5CBCC5
	.set gText_Rom_5CBCC5, gText_Rom_5CBCC0 + 0x5
	.globl gUnknown_85CBCD0
gUnknown_85CBCD0: @ 0x085CBCD0

	@ src/strings.c:595 gText_CreateAQuiz2 (+1 aliases)
	.globl gText_Rom_5CBCD0
gText_Rom_5CBCD0: @ 0x085CBCD0
	.string "もんだいを つくってください!$"
	.if (. - gText_Rom_5CBCD0) > 0x10
	.error "gText_Rom_5CBCD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCD0) < 0x10
	.space 0x10 - (. - gText_Rom_5CBCD0)
	.endif
	.globl gUnknown_85CBCE0
gUnknown_85CBCE0: @ 0x085CBCE0

	@ src/strings.c:596 gText_SetTheAnswer (+1 aliases)
	.globl gText_Rom_5CBCE0
gText_Rom_5CBCE0: @ 0x085CBCE0
	.string "こたえを えらんでください!$"
	.if (. - gText_Rom_5CBCE0) > 0xf
	.error "gText_Rom_5CBCE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCE0) < 0xf
	.space 0xf - (. - gText_Rom_5CBCE0)
	.endif
	.globl gUnknown_85CBCEF
gUnknown_85CBCEF: @ 0x085CBCEF

	@ src/strings.c:622 gText_LyricsCantBeDeleted
	.globl gText_Rom_5CBCEF
gText_Rom_5CBCEF: @ 0x085CBCEF
	.string "かしを けすことは できません!$"
	.if (. - gText_Rom_5CBCEF) > 0x11
	.error "gText_Rom_5CBCEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCEF) < 0x11
	.space 0x11 - (. - gText_Rom_5CBCEF)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:15 gGiftRibbonDescriptionPart1_PokemonLeague
	.globl gText_Rom_5CBD00
gText_Rom_5CBD00: @ 0x085CBD00
	.string "ポケモン リーグ$"
	.if (. - gText_Rom_5CBD00) > 0x9
	.error "gText_Rom_5CBD00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD00) < 0x9
	.space 0x9 - (. - gText_Rom_5CBD00)
	.endif

	@ src/strings.c:624 gText_PokemonCenter
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBD09
gText_Rom_5CBD09: @ 0x085CBD09
	.string "ポケモンセンター$"
	.if (. - gText_Rom_5CBD09) != 0x9
	.error "gText_Rom_5CBD09 must retain its original byte length"
	.endif
	.globl gText_Rom_5CBD0D
	.set gText_Rom_5CBD0D, gText_Rom_5CBD09 + 0x4
	.globl gUnknown_85CBD12
gUnknown_85CBD12: @ 0x085CBD12

