	@ src/strings.c:546 gText_FindWordsThatDescribeYour
	.globl gText_FindWordsThatDescribeYour
gText_FindWordsThatDescribeYour: @ 0x085CB8B1
	.string "いまの きもちに ぴったりあう{EOS}"
	.if (. - gText_FindWordsThatDescribeYour) > 0x10
	.error "gText_FindWordsThatDescribeYour may not grow beyond its original slot"
	.endif
	.if (. - gText_FindWordsThatDescribeYour) < 0x10
	.space 0x10 - (. - gText_FindWordsThatDescribeYour)
	.endif
	@ src/strings.c:547 gText_FeelingsRightNow
	.globl gText_FeelingsRightNow
gText_FeelingsRightNow: @ 0x085CB8C1
	.string "ことばを みつけよう!{EOS}"
	.if (. - gText_FeelingsRightNow) > 0xc
	.error "gText_FeelingsRightNow may not grow beyond its original slot"
	.endif
	.if (. - gText_FeelingsRightNow) < 0xc
	.space 0xc - (. - gText_FeelingsRightNow)
	.endif
	@ src/strings.c:548 gText_WithFourPhrases
	.globl gText_WithFourPhrases
gText_WithFourPhrases: @ 0x085CB8CD
	.string "4つの ことばで{EOS}"
	.if (. - gText_WithFourPhrases) > 0x9
	.error "gText_WithFourPhrases may not grow beyond its original slot"
	.endif
	.if (. - gText_WithFourPhrases) < 0x9
	.space 0x9 - (. - gText_WithFourPhrases)
	.endif
	@ src/strings.c:549 gText_CombineNineWordsOrPhrases
	.globl gText_CombineNineWordsOrPhrases
gText_CombineNineWordsOrPhrases: @ 0x085CB8D6
	.string "9つの ことばを くみあわせて{EOS}"
	.if (. - gText_CombineNineWordsOrPhrases) > 0x10
	.error "gText_CombineNineWordsOrPhrases may not grow beyond its original slot"
	.endif
	.if (. - gText_CombineNineWordsOrPhrases) < 0x10
	.space 0x10 - (. - gText_CombineNineWordsOrPhrases)
	.endif
	@ src/strings.c:545 gText_AndMakeAMessage (+1 aliases)
	.globl gText_Rom_5CB8E6
gText_Rom_5CB8E6: @ 0x085CB8E6
	.string "メッセージを つくろう!{EOS}"
	.if (. - gText_Rom_5CB8E6) > 0xd
	.error "gText_Rom_5CB8E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8E6) < 0xd
	.space 0xd - (. - gText_Rom_5CB8E6)
	.endif
	@ src/strings.c:551 gText_ChangeJustOneWordOrPhrase
	.globl gText_ChangeJustOneWordOrPhrase
gText_ChangeJustOneWordOrPhrase: @ 0x085CB8F3
	.string "ことばを 1つだけ いれかえて{EOS}"
	.if (. - gText_ChangeJustOneWordOrPhrase) > 0x10
	.error "gText_ChangeJustOneWordOrPhrase may not grow beyond its original slot"
	.endif
	.if (. - gText_ChangeJustOneWordOrPhrase) < 0x10
	.space 0x10 - (. - gText_ChangeJustOneWordOrPhrase)
	.endif
	@ src/strings.c:552 gText_AndImproveTheBardsSong
	.globl gText_AndImproveTheBardsSong
gText_AndImproveTheBardsSong: @ 0x085CB903
	.string "オヤジのうたを よくして あげよう!{EOS}"
	.if (. - gText_AndImproveTheBardsSong) > 0x13
	.error "gText_AndImproveTheBardsSong may not grow beyond its original slot"
	.endif
	.if (. - gText_AndImproveTheBardsSong) < 0x13
	.space 0x13 - (. - gText_AndImproveTheBardsSong)
	.endif
	@ src/strings.c:553 gText_YourProfile
	.globl gText_YourProfile
gText_YourProfile: @ 0x085CB916
	.string "プロフィールは{EOS}"
	.if (. - gText_YourProfile) > 0x8
	.error "gText_YourProfile may not grow beyond its original slot"
	.endif
	.if (. - gText_YourProfile) < 0x8
	.space 0x8 - (. - gText_YourProfile)
	.endif
	@ src/strings.c:554 gText_YourFeelingAtTheBattlesStart
	.globl gText_YourFeelingAtTheBattlesStart
gText_YourFeelingAtTheBattlesStart: @ 0x085CB91E
	.string "たいせんが はじまるときの きもちは{EOS}"
	.if (. - gText_YourFeelingAtTheBattlesStart) > 0x13
	.error "gText_YourFeelingAtTheBattlesStart may not grow beyond its original slot"
	.endif
	.if (. - gText_YourFeelingAtTheBattlesStart) < 0x13
	.space 0x13 - (. - gText_YourFeelingAtTheBattlesStart)
	.endif
	@ src/strings.c:555 gText_WhatYouSayIfYouWin
	.globl gText_WhatYouSayIfYouWin
gText_WhatYouSayIfYouWin: @ 0x085CB931
	.string "たいせんに かったときの あいさつは{EOS}"
	.if (. - gText_WhatYouSayIfYouWin) > 0x13
	.error "gText_WhatYouSayIfYouWin may not grow beyond its original slot"
	.endif
	.if (. - gText_WhatYouSayIfYouWin) < 0x13
	.space 0x13 - (. - gText_WhatYouSayIfYouWin)
	.endif
	@ src/strings.c:556 gText_WhatYouSayIfYouLose
	.globl gText_WhatYouSayIfYouLose
gText_WhatYouSayIfYouLose: @ 0x085CB944
	.string "たいせんに まけたときの あいさつは{EOS}"
	.if (. - gText_WhatYouSayIfYouLose) > 0x13
	.error "gText_WhatYouSayIfYouLose may not grow beyond its original slot"
	.endif
	.if (. - gText_WhatYouSayIfYouLose) < 0x13
	.space 0x13 - (. - gText_WhatYouSayIfYouLose)
	.endif
	@ src/strings.c:557 gText_TheAnswer (+1 aliases)
	.globl gText_TheAnswer
gText_TheAnswer: @ 0x085CB957
	.string "こたえは{EOS}"
	.if (. - gText_TheAnswer) > 0x5
	.error "gText_TheAnswer may not grow beyond its original slot"
	.endif
	.if (. - gText_TheAnswer) < 0x5
	.space 0x5 - (. - gText_TheAnswer)
	.endif
	@ src/strings.c:558 gText_TheMailMessage
	.globl gText_TheMailMessage
gText_TheMailMessage: @ 0x085CB95C
	.string "メールに のせる メッセージは{EOS}"
	.if (. - gText_TheMailMessage) > 0x10
	.error "gText_TheMailMessage may not grow beyond its original slot"
	.endif
	.if (. - gText_TheMailMessage) < 0x10
	.space 0x10 - (. - gText_TheMailMessage)
	.endif
	@ src/strings.c:559 gText_TheMailSalutation
	.globl gText_TheMailSalutation
gText_TheMailSalutation: @ 0x085CB96C
	.string "はがきに のせる あいさつは{EOS}"
	.if (. - gText_TheMailSalutation) > 0xf
	.error "gText_TheMailSalutation may not grow beyond its original slot"
	.endif
	.if (. - gText_TheMailSalutation) < 0xf
	.space 0xf - (. - gText_TheMailSalutation)
	.endif
	@ src/strings.c:560 gText_TheBardsSong2
	.globl gText_TheBardsSong2
gText_TheBardsSong2: @ 0x085CB97B
	.string "あたらしい うたは{EOS}"
	.if (. - gText_TheBardsSong2) > 0xa
	.error "gText_TheBardsSong2 may not grow beyond its original slot"
	.endif
	.if (. - gText_TheBardsSong2) < 0xa
	.space 0xa - (. - gText_TheBardsSong2)
	.endif
	@ src/strings.c:561 gText_CombineTwoWordsOrPhrases (+1 aliases)
	.globl gText_CombineTwoWordsOrPhrases
gText_CombineTwoWordsOrPhrases: @ 0x085CB985
	.string "2つの ことばを くみあわせて{EOS}"
	.if (. - gText_CombineTwoWordsOrPhrases) > 0x10
	.error "gText_CombineTwoWordsOrPhrases may not grow beyond its original slot"
	.endif
	.if (. - gText_CombineTwoWordsOrPhrases) < 0x10
	.space 0x10 - (. - gText_CombineTwoWordsOrPhrases)
	.endif
	@ src/strings.c:562 gText_AndMakeATrendySaying
	.globl gText_AndMakeATrendySaying
gText_AndMakeATrendySaying: @ 0x085CB995
	.string "はやらせたい ことばを つくろう!{EOS}"
	.if (. - gText_AndMakeATrendySaying) > 0x12
	.error "gText_AndMakeATrendySaying may not grow beyond its original slot"
	.endif
	.if (. - gText_AndMakeATrendySaying) < 0x12
	.space 0x12 - (. - gText_AndMakeATrendySaying)
	.endif
	@ src/strings.c:563 gText_TheTrendySaying
	.globl gText_TheTrendySaying
gText_TheTrendySaying: @ 0x085CB9A7
	.string "はやらせたい ことばは{EOS}"
	.if (. - gText_TheTrendySaying) > 0xc
	.error "gText_TheTrendySaying may not grow beyond its original slot"
	.endif
	.if (. - gText_TheTrendySaying) < 0xc
	.space 0xc - (. - gText_TheTrendySaying)
	.endif
	@ src/strings.c:564 gText_IsAsShownOkay
	.globl gText_IsAsShownOkay
gText_IsAsShownOkay: @ 0x085CB9B3
	.string "これで いいですか?{EOS}"
	.if (. - gText_IsAsShownOkay) > 0xb
	.error "gText_IsAsShownOkay may not grow beyond its original slot"
	.endif
	.if (. - gText_IsAsShownOkay) < 0xb
	.space 0xb - (. - gText_IsAsShownOkay)
	.endif
	@ src/strings.c:561 gText_CombineTwoWordsOrPhrases (+1 aliases)
	@ SEMANTIC_ROLE: gText_CombineTwoWordsOrPhrases2 (EASY_CHAT_GOOD_SAYING_INSTRUCTIONS1; duplicate provenance gText_CombineTwoWordsOrPhrases)
	.globl gText_CombineTwoWordsOrPhrases2
gText_CombineTwoWordsOrPhrases2: @ 0x085CB9BE
	.string "2つの ことばを くみあわせて{EOS}"
	.if (. - gText_CombineTwoWordsOrPhrases2) > 0x10
	.error "gText_CombineTwoWordsOrPhrases2 may not grow beyond its original slot"
	.endif
	.if (. - gText_CombineTwoWordsOrPhrases2) < 0x10
	.space 0x10 - (. - gText_CombineTwoWordsOrPhrases2)
	.endif
	@ src/strings.c:566 gText_ToTeachHerAGoodSaying
	.globl gText_ToTeachHerAGoodSaying
gText_ToTeachHerAGoodSaying: @ 0x085CB9CE
	.string "いい ことばを おしえてあげよう!{EOS}"
	.if (. - gText_ToTeachHerAGoodSaying) > 0x12
	.error "gText_ToTeachHerAGoodSaying may not grow beyond its original slot"
	.endif
	.if (. - gText_ToTeachHerAGoodSaying) < 0x12
	.space 0x12 - (. - gText_ToTeachHerAGoodSaying)
	.endif
	@ src/strings.c:567 gText_FindWordsWhichFit
	.globl gText_FindWordsWhichFit
gText_FindWordsWhichFit: @ 0x085CB9E0
	.string "トレーナーの イメージに{EOS}"
	.if (. - gText_FindWordsWhichFit) > 0xd
	.error "gText_FindWordsWhichFit may not grow beyond its original slot"
	.endif
	.if (. - gText_FindWordsWhichFit) < 0xd
	.space 0xd - (. - gText_FindWordsWhichFit)
	.endif
	@ src/strings.c:568 gText_TheTrainersImage
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_TheTrainersImage
gText_TheTrainersImage: @ 0x085CB9ED
	.string "ぴったりの ことばを みつけよう!{EOS}"
	.if (. - gText_TheTrainersImage) != 0x12
	.error "gText_TheTrainersImage must retain its original byte length"
	.endif
	.globl gText_Rom_5CB9F3
	.set gText_Rom_5CB9F3, gText_TheTrainersImage + 0x6
	@ src/strings.c:569 gText_TheImage
	.globl gText_TheImage
gText_TheImage: @ 0x085CB9FF
	.string "イメージは{EOS}"
	.if (. - gText_TheImage) > 0x6
	.error "gText_TheImage may not grow beyond its original slot"
	.endif
	.if (. - gText_TheImage) < 0x6
	.space 0x6 - (. - gText_TheImage)
	.endif
	@ src/strings.c:570 gText_OutOfTheListedChoices
	.globl gText_OutOfTheListedChoices
gText_OutOfTheListedChoices: @ 0x085CBA05
	.string "ことばの なかから{EOS}"
	.if (. - gText_OutOfTheListedChoices) > 0xa
	.error "gText_OutOfTheListedChoices may not grow beyond its original slot"
	.endif
	.if (. - gText_OutOfTheListedChoices) < 0xa
	.space 0xa - (. - gText_OutOfTheListedChoices)
	.endif
	@ src/strings.c:571 gText_SelectTheAnswerToTheQuiz
	.globl gText_SelectTheAnswerToTheQuiz
gText_SelectTheAnswerToTheQuiz: @ 0x085CBA0F
	.string "クイズの こたえを えらぼう!{EOS}"
	.if (. - gText_SelectTheAnswerToTheQuiz) > 0x10
	.error "gText_SelectTheAnswerToTheQuiz may not grow beyond its original slot"
	.endif
	.if (. - gText_SelectTheAnswerToTheQuiz) < 0x10
	.space 0x10 - (. - gText_SelectTheAnswerToTheQuiz)
	.endif
	@ src/strings.c:572 gText_AndCreateAQuiz
	.globl gText_AndCreateAQuiz
gText_AndCreateAQuiz: @ 0x085CBA1F
	.string "クイズを つくろう!{EOS}"
	.if (. - gText_AndCreateAQuiz) > 0xb
	.error "gText_AndCreateAQuiz may not grow beyond its original slot"
	.endif
	.if (. - gText_AndCreateAQuiz) < 0xb
	.space 0xb - (. - gText_AndCreateAQuiz)
	.endif
	@ src/strings.c:573 gText_PickAWordOrPhraseAnd
	.globl gText_PickAWordOrPhraseAnd
gText_PickAWordOrPhraseAnd: @ 0x085CBA2A
	.string "ことばの なかから ひとつを えらんで{EOS}"
	.if (. - gText_PickAWordOrPhraseAnd) > 0x14
	.error "gText_PickAWordOrPhraseAnd may not grow beyond its original slot"
	.endif
	.if (. - gText_PickAWordOrPhraseAnd) < 0x14
	.space 0x14 - (. - gText_PickAWordOrPhraseAnd)
	.endif
	@ src/strings.c:574 gText_SetTheQuizAnswer
	.globl gText_SetTheQuizAnswer
gText_SetTheQuizAnswer: @ 0x085CBA3E
	.string "クイズの こたえを つくろう!{EOS}"
	.if (. - gText_SetTheQuizAnswer) > 0x10
	.error "gText_SetTheQuizAnswer may not grow beyond its original slot"
	.endif
	.if (. - gText_SetTheQuizAnswer) < 0x10
	.space 0x10 - (. - gText_SetTheQuizAnswer)
	.endif
	@ src/strings.c:557 gText_TheAnswer (+1 aliases)
	@ SEMANTIC_ROLE: gText_TheAnswerColon (EASY_CHAT_QUIZ_ANSWER_CONFIRM_FIELD; duplicate provenance gText_TheAnswer)
	.globl gText_TheAnswerColon
gText_TheAnswerColon: @ 0x085CBA4E
	.string "こたえは{EOS}"
	.if (. - gText_TheAnswerColon) > 0x5
	.error "gText_TheAnswerColon may not grow beyond its original slot"
	.endif
	.if (. - gText_TheAnswerColon) < 0x5
	.space 0x5 - (. - gText_TheAnswerColon)
	.endif
	@ src/strings.c:576 gText_TheQuizColon
	.globl gText_TheQuizColon
gText_TheQuizColon: @ 0x085CBA53
	.string "クイズは{EOS}"
	.if (. - gText_TheQuizColon) > 0x5
	.error "gText_TheQuizColon may not grow beyond its original slot"
	.endif
	.if (. - gText_TheQuizColon) < 0x5
	.space 0x5 - (. - gText_TheQuizColon)
	.endif
	@ src/strings.c:577 gText_ApprenticePhrase
	.globl gText_ApprenticePhrase
gText_ApprenticePhrase: @ 0x085CBA58
	.string "でしの きめゼリフは{EOS}"
	.if (. - gText_ApprenticePhrase) > 0xb
	.error "gText_ApprenticePhrase may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePhrase) < 0xb
	.space 0xb - (. - gText_ApprenticePhrase)
	.endif
	.globl gText_QuitEditing

	@ src/strings.c:578 gText_QuitEditing (+1 aliases)
	.globl gText_QuitEditing
gText_QuitEditing: @ 0x085CBA63
	.string "へんしゅうを やめますか？{EOS}"
	.if (. - gText_QuitEditing) > 0xe
	.error "gText_QuitEditing may not grow beyond its original slot"
	.endif
	.if (. - gText_QuitEditing) < 0xe
	.space 0xe - (. - gText_QuitEditing)
	.endif
	.globl gText_StopGivingPkmnMail

	@ src/strings.c:579 gText_StopGivingPkmnMail (+1 aliases)
	.globl gText_StopGivingPkmnMail
gText_StopGivingPkmnMail: @ 0x085CBA71
	.string "メールを もたせるのを やめますか?{EOS}"
	.if (. - gText_StopGivingPkmnMail) > 0x13
	.error "gText_StopGivingPkmnMail may not grow beyond its original slot"
	.endif
	.if (. - gText_StopGivingPkmnMail) < 0x13
	.space 0x13 - (. - gText_StopGivingPkmnMail)
	.endif
	@ src/strings.c:580 gText_AndFillOutTheQuestionnaire
	.globl gText_AndFillOutTheQuestionnaire
gText_AndFillOutTheQuestionnaire: @ 0x085CBA84
	.string "ショップの アンケートに こたえよう!{EOS}"
	.if (. - gText_AndFillOutTheQuestionnaire) > 0x14
	.error "gText_AndFillOutTheQuestionnaire may not grow beyond its original slot"
	.endif
	.if (. - gText_AndFillOutTheQuestionnaire) < 0x14
	.space 0x14 - (. - gText_AndFillOutTheQuestionnaire)
	.endif
	@ src/strings.c:581 gText_LetsReplyToTheInterview
	.globl gText_LetsReplyToTheInterview
gText_LetsReplyToTheInterview: @ 0x085CBA98
	.string "インタビューに こたえよう！{EOS}"
	.if (. - gText_LetsReplyToTheInterview) > 0xf
	.error "gText_LetsReplyToTheInterview may not grow beyond its original slot"
	.endif
	.if (. - gText_LetsReplyToTheInterview) < 0xf
	.space 0xf - (. - gText_LetsReplyToTheInterview)
	.endif
	.globl gText_AllTextBeingEditedWill

	@ src/strings.c:582 gText_AllTextBeingEditedWill
	.globl gText_AllTextBeingEditedWill
gText_AllTextBeingEditedWill: @ 0x085CBAA7
	.string "へんしゅうちゅうの ことばを{EOS}"
	.if (. - gText_AllTextBeingEditedWill) > 0xf
	.error "gText_AllTextBeingEditedWill may not grow beyond its original slot"
	.endif
	.if (. - gText_AllTextBeingEditedWill) < 0xf
	.space 0xf - (. - gText_AllTextBeingEditedWill)
	.endif
	.globl gText_BeDeletedThatOkay

	@ src/strings.c:583 gText_BeDeletedThatOkay
	.globl gText_BeDeletedThatOkay
gText_BeDeletedThatOkay: @ 0x085CBAB6
	.string "ぜんぶ けしても いいですか?{EOS}"
	.if (. - gText_BeDeletedThatOkay) > 0x10
	.error "gText_BeDeletedThatOkay may not grow beyond its original slot"
	.endif
	.if (. - gText_BeDeletedThatOkay) < 0x10
	.space 0x10 - (. - gText_BeDeletedThatOkay)
	.endif
	@ src/strings.c:578 gText_QuitEditing (+1 aliases)
	.globl gText_Rom_5CBAC6
gText_Rom_5CBAC6: @ 0x085CBAC6
	.string "へんしゅうを やめますか？{EOS}"
	.if (. - gText_Rom_5CBAC6) > 0xe
	.error "gText_Rom_5CBAC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAC6) < 0xe
	.space 0xe - (. - gText_Rom_5CBAC6)
	.endif
	@ src/strings.c:585 gText_EditedTextWillNotBeSaved
	.globl gText_EditedTextWillNotBeSaved
gText_EditedTextWillNotBeSaved: @ 0x085CBAD4
	.string "へんしゅうした ことばは ほぞん{EOS}"
	.if (. - gText_EditedTextWillNotBeSaved) > 0x11
	.error "gText_EditedTextWillNotBeSaved may not grow beyond its original slot"
	.endif
	.if (. - gText_EditedTextWillNotBeSaved) < 0x11
	.space 0x11 - (. - gText_EditedTextWillNotBeSaved)
	.endif
	@ src/strings.c:586 gText_IsThatOkay
	.globl gText_IsThatOkay
gText_IsThatOkay: @ 0x085CBAE5
	.string "されませんが いいですか?{EOS}"
	.if (. - gText_IsThatOkay) > 0xe
	.error "gText_IsThatOkay may not grow beyond its original slot"
	.endif
	.if (. - gText_IsThatOkay) < 0xe
	.space 0xe - (. - gText_IsThatOkay)
	.endif
	@ src/strings.c:587 gText_PleaseEnterPhraseOrWord
	.globl gText_PleaseEnterPhraseOrWord
gText_PleaseEnterPhraseOrWord: @ 0x085CBAF3
	.string "なにか ことばを いれてください!{EOS}"
	.if (. - gText_PleaseEnterPhraseOrWord) > 0x12
	.error "gText_PleaseEnterPhraseOrWord may not grow beyond its original slot"
	.endif
	.if (. - gText_PleaseEnterPhraseOrWord) < 0x12
	.space 0x12 - (. - gText_PleaseEnterPhraseOrWord)
	.endif
	@ src/strings.c:588 gText_EntireTextCantBeDeleted
	.globl gText_EntireTextCantBeDeleted
gText_EntireTextCantBeDeleted: @ 0x085CBB05
	.string "ことばを ぜんぶ けすことは できません!{EOS}"
	.if (. - gText_EntireTextCantBeDeleted) > 0x16
	.error "gText_EntireTextCantBeDeleted may not grow beyond its original slot"
	.endif
	.if (. - gText_EntireTextCantBeDeleted) < 0x16
	.space 0x16 - (. - gText_EntireTextCantBeDeleted)
	.endif
	.globl gText_OnlyOnePhrase

	@ src/strings.c:589 gText_OnlyOnePhrase
	.globl gText_OnlyOnePhrase
gText_OnlyOnePhrase: @ 0x085CBB1B
	.string "かえられる ことばは 1つ までです!{EOS}"
	.if (. - gText_OnlyOnePhrase) > 0x14
	.error "gText_OnlyOnePhrase may not grow beyond its original slot"
	.endif
	.if (. - gText_OnlyOnePhrase) < 0x14
	.space 0x14 - (. - gText_OnlyOnePhrase)
	.endif
	.globl gText_OriginalSongWillBeUsed

	@ src/strings.c:590 gText_OriginalSongWillBeUsed
	.globl gText_OriginalSongWillBeUsed
gText_OriginalSongWillBeUsed: @ 0x085CBB2F
	.string "うたを もとに もどします!{EOS}"
	.if (. - gText_OriginalSongWillBeUsed) > 0xf
	.error "gText_OriginalSongWillBeUsed may not grow beyond its original slot"
	.endif
	.if (. - gText_OriginalSongWillBeUsed) < 0xf
	.space 0xf - (. - gText_OriginalSongWillBeUsed)
	.endif
	@ src/strings.c:591 gText_ThatsTrendyAlready
	.globl gText_ThatsTrendyAlready
gText_ThatsTrendyAlready: @ 0x085CBB3E
	.string "それは もう はやっています！{EOS}"
	.if (. - gText_ThatsTrendyAlready) > 0x10
	.error "gText_ThatsTrendyAlready may not grow beyond its original slot"
	.endif
	.if (. - gText_ThatsTrendyAlready) < 0x10
	.space 0x10 - (. - gText_ThatsTrendyAlready)
	.endif
	.globl gText_CombineTwoWordsOrPhrases3

	@ src/strings.c:592 gText_CombineTwoWordsOrPhrases3
	.globl gText_CombineTwoWordsOrPhrases3
gText_CombineTwoWordsOrPhrases3: @ 0x085CBB4E
	.string "2つの ことばを くみあわせてください!{EOS}"
	.if (. - gText_CombineTwoWordsOrPhrases3) > 0x15
	.error "gText_CombineTwoWordsOrPhrases3 may not grow beyond its original slot"
	.endif
	.if (. - gText_CombineTwoWordsOrPhrases3) < 0x15
	.space 0x15 - (. - gText_CombineTwoWordsOrPhrases3)
	.endif
	@ src/strings.c:593 gText_QuitGivingInfo
	.globl gText_QuitGivingInfo
gText_QuitGivingInfo: @ 0x085CBB63
	.string "ことばを おしえるのを やめますか?{EOS}"
	.if (. - gText_QuitGivingInfo) > 0x13
	.error "gText_QuitGivingInfo may not grow beyond its original slot"
	.endif
	.if (. - gText_QuitGivingInfo) < 0x13
	.space 0x13 - (. - gText_QuitGivingInfo)
	.endif
	@ src/strings.c:579 gText_StopGivingPkmnMail (+1 aliases)
	.globl gText_Rom_5CBB76
gText_Rom_5CBB76: @ 0x085CBB76
	.string "メールを もたせるのを やめますか?{EOS}"
	.if (. - gText_Rom_5CBB76) > 0x13
	.error "gText_Rom_5CBB76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB76) < 0x13
	.space 0x13 - (. - gText_Rom_5CBB76)
	.endif
	@ src/strings.c:595 gText_CreateAQuiz2 (+1 aliases)
	.globl gText_Rom_5CBB89
gText_Rom_5CBB89: @ 0x085CBB89
	.string "もんだいを つくってください!{EOS}"
	.if (. - gText_Rom_5CBB89) > 0x10
	.error "gText_Rom_5CBB89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB89) < 0x10
	.space 0x10 - (. - gText_Rom_5CBB89)
	.endif
	@ src/strings.c:596 gText_SetTheAnswer (+1 aliases)
	.globl gText_Rom_5CBB99
gText_Rom_5CBB99: @ 0x085CBB99
	.string "こたえを えらんでください!{EOS}"
	.if (. - gText_Rom_5CBB99) > 0xf
	.error "gText_Rom_5CBB99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB99) < 0xf
	.space 0xf - (. - gText_Rom_5CBB99)
	.endif
	@ src/strings.c:597 gText_CancelSelection
	.globl gText_CancelSelection
gText_CancelSelection: @ 0x085CBBA8
	.string "もとにもどして いいですか?{EOS}"
	.if (. - gText_CancelSelection) > 0xf
	.error "gText_CancelSelection may not grow beyond its original slot"
	.endif
	.if (. - gText_CancelSelection) < 0xf
	.space 0xf - (. - gText_CancelSelection)
	.endif
	@ src/strings.c:598 gText_Profile
	.globl gText_Profile
gText_Profile: @ 0x085CBBB7
	.string "プロフィール{EOS}"
	.if (. - gText_Profile) > 0x7
	.error "gText_Profile may not grow beyond its original slot"
	.endif
	.if (. - gText_Profile) < 0x7
	.space 0x7 - (. - gText_Profile)
	.endif
	@ src/strings.c:599 gText_AtTheBattlesStart
	.globl gText_AtTheBattlesStart
gText_AtTheBattlesStart: @ 0x085CBBBE
	.string "たいせんが はじまるとき{EOS}"
	.if (. - gText_AtTheBattlesStart) > 0xd
	.error "gText_AtTheBattlesStart may not grow beyond its original slot"
	.endif
	.if (. - gText_AtTheBattlesStart) < 0xd
	.space 0xd - (. - gText_AtTheBattlesStart)
	.endif
	@ src/strings.c:600 gText_UponWinningABattle
	.globl gText_UponWinningABattle
gText_UponWinningABattle: @ 0x085CBBCB
	.string "たいせんに かったとき{EOS}"
	.if (. - gText_UponWinningABattle) > 0xc
	.error "gText_UponWinningABattle may not grow beyond its original slot"
	.endif
	.if (. - gText_UponWinningABattle) < 0xc
	.space 0xc - (. - gText_UponWinningABattle)
	.endif
	@ src/strings.c:601 gText_UponLosingABattle
	.globl gText_UponLosingABattle
gText_UponLosingABattle: @ 0x085CBBD7
	.string "たいせんに まけたとき{EOS}"
	.if (. - gText_UponLosingABattle) > 0xc
	.error "gText_UponLosingABattle may not grow beyond its original slot"
	.endif
	.if (. - gText_UponLosingABattle) < 0xc
	.space 0xc - (. - gText_UponLosingABattle)
	.endif
	@ src/strings.c:602 gText_TheBardsSong
	.globl gText_TheBardsSong
gText_TheBardsSong: @ 0x085CBBE3
	.string "オヤジのうた{EOS}"
	.if (. - gText_TheBardsSong) > 0x7
	.error "gText_TheBardsSong may not grow beyond its original slot"
	.endif
	.if (. - gText_TheBardsSong) < 0x7
	.space 0x7 - (. - gText_TheBardsSong)
	.endif
	@ src/strings.c:603 gText_WhatsHipAndHappening
	.globl gText_WhatsHipAndHappening
gText_WhatsHipAndHappening: @ 0x085CBBEA
	.string "はやっている ものは?{EOS}"
	.if (. - gText_WhatsHipAndHappening) > 0xc
	.error "gText_WhatsHipAndHappening may not grow beyond its original slot"
	.endif
	.if (. - gText_WhatsHipAndHappening) < 0xc
	.space 0xc - (. - gText_WhatsHipAndHappening)
	.endif
	@ src/strings.c:604 gText_Interview
	.globl gText_Interview
gText_Interview: @ 0x085CBBF6
	.string "インタビュー{EOS}"
	.if (. - gText_Interview) > 0x7
	.error "gText_Interview may not grow beyond its original slot"
	.endif
	.if (. - gText_Interview) < 0x7
	.space 0x7 - (. - gText_Interview)
	.endif
	@ src/strings.c:605 gText_GoodSaying
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_GoodSaying
gText_GoodSaying: @ 0x085CBBFD
	.string "いい ことば{EOS}"
	.if (. - gText_GoodSaying) != 0x7
	.error "gText_GoodSaying must retain its original byte length"
	.endif
	.globl gText_Rom_5CBC00
	.set gText_Rom_5CBC00, gText_GoodSaying + 0x3
	@ src/strings.c:606 gText_FansQuestion
	.globl gText_FansQuestion
gText_FansQuestion: @ 0x085CBC04
	.string "ファンのしつもん{EOS}"
	.if (. - gText_FansQuestion) > 0x9
	.error "gText_FansQuestion may not grow beyond its original slot"
	.endif
	.if (. - gText_FansQuestion) < 0x9
	.space 0x9 - (. - gText_FansQuestion)
	.endif
	@ src/strings.c:607 gJPText_WhatIsTheQuizAnswer (+1 aliases)
	.globl gText_Rom_5CBC0D
gText_Rom_5CBC0D: @ 0x085CBC0D
	.string "クイズの こたえは？{EOS}"
	.if (. - gText_Rom_5CBC0D) > 0xb
	.error "gText_Rom_5CBC0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC0D) < 0xb
	.space 0xb - (. - gText_Rom_5CBC0D)
	.endif
	@ src/strings.c:608 gText_ApprenticesPhrase
	.globl gText_ApprenticesPhrase
gText_ApprenticesPhrase: @ 0x085CBC18
	.string "でしの きめゼリフ{EOS}"
	.if (. - gText_ApprenticesPhrase) > 0xa
	.error "gText_ApprenticesPhrase may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticesPhrase) < 0xa
	.space 0xa - (. - gText_ApprenticesPhrase)
	.endif
	@ src/strings.c:609 gText_Questionnaire
	.globl gText_Questionnaire
gText_Questionnaire: @ 0x085CBC22
	.string "アンケート{EOS}"
	.if (. - gText_Questionnaire) > 0x6
	.error "gText_Questionnaire may not grow beyond its original slot"
	.endif
	.if (. - gText_Questionnaire) < 0x6
	.space 0x6 - (. - gText_Questionnaire)
	.endif
	@ analyzed canonical ROM range 0x085CBC28-0x085CBC4F
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0201, 0x0403, 0x0005, 0x1615, 0x1817, 0x0019, 0x2524, 0x0026
	.2byte 0xFF2C, 0x0706, 0x0908, 0x000A, 0x1B1A, 0x1D1C, 0x001E, 0x190F
	.2byte 0xFF10, 0x0C0B, 0x0E0D, 0x000F
