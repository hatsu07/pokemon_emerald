	@ src/strings.c:1166 gText_Quiz
	.globl gText_Quiz
gText_Quiz: @ 0x085CBC81
	.string "クイズ{EOS}"
	.if (. - gText_Quiz) > 0x4
	.error "gText_Quiz may not grow beyond its original slot"
	.endif
	.if (. - gText_Quiz) < 0x4
	.space 0x4 - (. - gText_Quiz)
	.endif
	.globl gText_Rom_5CBC85
gText_Rom_5CBC85: @ 0x085CBC85
	@ Decoded text from ROM range: offset=0x5CBC85, size=0x4
	.string "おねえ{EOS}"

	@ src/strings.c:614 gText_AfterYouHaveReadTheQuiz
	.globl gText_AfterYouHaveReadTheQuiz
gText_AfterYouHaveReadTheQuiz: @ 0x085CBC89
	.string "もんだいを よんだら{EOS}"
	.if (. - gText_AfterYouHaveReadTheQuiz) > 0xb
	.error "gText_AfterYouHaveReadTheQuiz may not grow beyond its original slot"
	.endif
	.if (. - gText_AfterYouHaveReadTheQuiz) < 0xb
	.space 0xb - (. - gText_AfterYouHaveReadTheQuiz)
	.endif
	@ src/strings.c:615 gText_QuestionPressTheAButton
	.globl gText_QuestionPressTheAButton
gText_QuestionPressTheAButton: @ 0x085CBC94
	.string "Aボタンを おしてね!{EOS}"
	.if (. - gText_QuestionPressTheAButton) > 0xc
	.error "gText_QuestionPressTheAButton may not grow beyond its original slot"
	.endif
	.if (. - gText_QuestionPressTheAButton) < 0xc
	.space 0xc - (. - gText_QuestionPressTheAButton)
	.endif
	@ src/strings.c:607 gJPText_WhatIsTheQuizAnswer (+1 aliases)
	.globl gJPText_WhatIsTheQuizAnswer
gJPText_WhatIsTheQuizAnswer: @ 0x085CBCA0
	.string "クイズの こたえは？{EOS}"
	.if (. - gJPText_WhatIsTheQuizAnswer) > 0xb
	.error "gJPText_WhatIsTheQuizAnswer may not grow beyond its original slot"
	.endif
	.if (. - gJPText_WhatIsTheQuizAnswer) < 0xb
	.space 0xb - (. - gJPText_WhatIsTheQuizAnswer)
	.endif

	@ src/strings.c:617 gText_LikeToQuitQuiz
	.globl gText_LikeToQuitQuiz
gText_LikeToQuitQuiz: @ 0x085CBCAB
	.string "クイズの チャレンジを{EOS}"
	.if (. - gText_LikeToQuitQuiz) > 0xc
	.error "gText_LikeToQuitQuiz may not grow beyond its original slot"
	.endif
	.if (. - gText_LikeToQuitQuiz) < 0xc
	.space 0xc - (. - gText_LikeToQuitQuiz)
	.endif

	@ src/strings.c:618 gText_ChallengeQuestionMark
	.globl gText_ChallengeQuestionMark
gText_ChallengeQuestionMark: @ 0x085CBCB7
	.string "あきらめますか?{EOS}"
	.if (. - gText_ChallengeQuestionMark) > 0x9
	.error "gText_ChallengeQuestionMark may not grow beyond its original slot"
	.endif
	.if (. - gText_ChallengeQuestionMark) < 0x9
	.space 0x9 - (. - gText_ChallengeQuestionMark)
	.endif
	@ src/strings.c:619 gText_IsThisQuizOK
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_IsThisQuizOK
gText_IsThisQuizOK: @ 0x085CBCC0
	.string "クイズは これで いいですか?{EOS}"
	.if (. - gText_IsThisQuizOK) != 0x10
	.error "gText_IsThisQuizOK must retain its original byte length"
	.endif

	@ src/strings.c:595 gText_CreateAQuiz2 (+1 aliases)
	.globl gText_CreateAQuiz2
gText_CreateAQuiz2: @ 0x085CBCD0
	.string "もんだいを つくってください!{EOS}"
	.if (. - gText_CreateAQuiz2) > 0x10
	.error "gText_CreateAQuiz2 may not grow beyond its original slot"
	.endif
	.if (. - gText_CreateAQuiz2) < 0x10
	.space 0x10 - (. - gText_CreateAQuiz2)
	.endif

	@ src/strings.c:596 gText_SetTheAnswer (+1 aliases)
	.globl gText_SetTheAnswer
gText_SetTheAnswer: @ 0x085CBCE0
	.string "こたえを えらんでください!{EOS}"
	.if (. - gText_SetTheAnswer) > 0xf
	.error "gText_SetTheAnswer may not grow beyond its original slot"
	.endif
	.if (. - gText_SetTheAnswer) < 0xf
	.space 0xf - (. - gText_SetTheAnswer)
	.endif

	@ src/strings.c:622 gText_LyricsCantBeDeleted
	.globl gText_LyricsCantBeDeleted
gText_LyricsCantBeDeleted: @ 0x085CBCEF
	.string "かしを けすことは できません!{EOS}"
	.if (. - gText_LyricsCantBeDeleted) > 0x11
	.error "gText_LyricsCantBeDeleted may not grow beyond its original slot"
	.endif
	.if (. - gText_LyricsCantBeDeleted) < 0x11
	.space 0x11 - (. - gText_LyricsCantBeDeleted)
	.endif
