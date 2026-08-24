	@ src/strings.c:90 gText_DexSearchAlphaVWX
	.globl gText_DexSearchAlphaVWX_Copy_Text
gText_DexSearchAlphaVWX_Copy_Text: @ 0x085CBC5C
	.string "らりるれろ{EOS}"
	.if (. - gText_DexSearchAlphaVWX_Copy_Text) > 0x6
	.error "gText_DexSearchAlphaVWX_Copy_Text may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchAlphaVWX_Copy_Text) < 0x6
	.space 0x6 - (. - gText_DexSearchAlphaVWX_Copy_Text)
	.endif

	@ src/strings.c:610 gText_YouCannotQuitHere
	.globl gText_YouCannotQuitHere
gText_YouCannotQuitHere: @ 0x085CBC62
	.string "ここでは とちゅうで{EOS}"
	.if (. - gText_YouCannotQuitHere) > 0xb
	.error "gText_YouCannotQuitHere may not grow beyond its original slot"
	.endif
	.if (. - gText_YouCannotQuitHere) < 0xb
	.space 0xb - (. - gText_YouCannotQuitHere)
	.endif

	@ src/strings.c:611 gText_SectionMustBeCompleted
	.globl gText_SectionMustBeCompleted
gText_SectionMustBeCompleted: @ 0x085CBC6D
	.string "やめることは できません!{EOS}"
	.if (. - gText_SectionMustBeCompleted) > 0xe
	.error "gText_SectionMustBeCompleted may not grow beyond its original slot"
	.endif
	.if (. - gText_SectionMustBeCompleted) < 0xe
	.space 0xe - (. - gText_SectionMustBeCompleted)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085CBC7B: easy_chat.s: sub_0811C5F4
	.globl gEasyChatData_085CBC7B
gEasyChatData_085CBC7B: @ 0x085CBC7B
	@ analyzed canonical ROM range 0x085CBC7B-0x085CBC80
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x6 bytes=6
	.byte 0xF7, 0x00, 0x0B, 0x2E, 0x19, 0x00
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
	@ src/data/text/gift_ribbon_descriptions.h:15 gGiftRibbonDescriptionPart1_PokemonLeague
	.globl gGiftRibbonDescriptionPart1_PokemonLeague_Copy_GiftRibbonDescriptions
gGiftRibbonDescriptionPart1_PokemonLeague_Copy_GiftRibbonDescriptions: @ 0x085CBD00
	.string "ポケモン リーグ{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_PokemonLeague_Copy_GiftRibbonDescriptions) > 0x9
	.error "gGiftRibbonDescriptionPart1_PokemonLeague_Copy_GiftRibbonDescriptions may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_PokemonLeague_Copy_GiftRibbonDescriptions) < 0x9
	.space 0x9 - (. - gGiftRibbonDescriptionPart1_PokemonLeague_Copy_GiftRibbonDescriptions)
	.endif
	@ src/strings.c:624 gText_PokemonCenter
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PokemonCenter
gText_PokemonCenter: @ 0x085CBD09
	.string "ポケモンセンター{EOS}"
	.if (. - gText_PokemonCenter) != 0x9
	.error "gText_PokemonCenter must retain its original byte length"
	.endif

	@ src/use_pokeblock.c:159 sText_GetsAPokeBlockQuestion
	.globl sText_GetsAPokeBlockQuestion
sText_GetsAPokeBlockQuestion: @ 0x085CBD12
	.string "に ポロックを あげますか?{EOS}"
	.if (. - sText_GetsAPokeBlockQuestion) > 0xf
	.error "sText_GetsAPokeBlockQuestion may not grow beyond its original slot"
	.endif
	.if (. - sText_GetsAPokeBlockQuestion) < 0xf
	.space 0xf - (. - sText_GetsAPokeBlockQuestion)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD21
gText_Rom_5CBD21: @ 0x085CBD21
	.string "かっこよさ{EOS}"
	.if (. - gText_Rom_5CBD21) > 0x6
	.error "gText_Rom_5CBD21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD21) < 0x6
	.space 0x6 - (. - gText_Rom_5CBD21)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD27
gText_Rom_5CBD27: @ 0x085CBD27
	.string "うつくしさ{EOS}"
	.if (. - gText_Rom_5CBD27) > 0x6
	.error "gText_Rom_5CBD27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD27) < 0x6
	.space 0x6 - (. - gText_Rom_5CBD27)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD2D
gText_Rom_5CBD2D: @ 0x085CBD2D
	.string "かわいさ{EOS}"
	.if (. - gText_Rom_5CBD2D) > 0x5
	.error "gText_Rom_5CBD2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD2D) < 0x5
	.space 0x5 - (. - gText_Rom_5CBD2D)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD32
gText_Rom_5CBD32: @ 0x085CBD32
	.string "かしこさ{EOS}"
	.if (. - gText_Rom_5CBD32) > 0x5
	.error "gText_Rom_5CBD32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD32) < 0x5
	.space 0x5 - (. - gText_Rom_5CBD32)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD37
gText_Rom_5CBD37: @ 0x085CBD37
	.string "たくましさ{EOS}"
	.if (. - gText_Rom_5CBD37) > 0x6
	.error "gText_Rom_5CBD37 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD37) < 0x6
	.space 0x6 - (. - gText_Rom_5CBD37)
	.endif

	@ asm/use_pokeblock.s:1658 Pokeblock_BufferEnhancedStatText
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBD3D
gText_Rom_5CBD3D: @ 0x085CBD3D
	.string "に　みがきが　かかった！{EOS}"
	.if (. - gText_Rom_5CBD3D) != 0xd
	.error "gText_Rom_5CBD3D must retain its original byte length"
	.endif

	@ src/use_pokeblock.c:161 sText_NothingChanged
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_NothingChanged
sText_NothingChanged: @ 0x085CBD4A
	.string "なにも かわらなかった!{EOS}"
	.if (. - sText_NothingChanged) != 0xd
	.error "sText_NothingChanged must retain its original byte length"
	.endif

	@ src/use_pokeblock.c:162 sText_WontEatAnymore
	.globl sText_WontEatAnymore
sText_WontEatAnymore: @ 0x085CBD57
	.string "もう これいじょう たべない みたい…{EOS}"
	.if (. - sText_WontEatAnymore) > 0x14
	.error "sText_WontEatAnymore may not grow beyond its original slot"
	.endif
	.if (. - sText_WontEatAnymore) < 0x14
	.space 0x14 - (. - sText_WontEatAnymore)
	.endif
