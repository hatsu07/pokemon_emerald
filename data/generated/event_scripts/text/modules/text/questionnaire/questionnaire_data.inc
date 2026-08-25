	@ field-script:0x24423D FieldScriptText_243EB4
	.globl FieldScriptText_243EB4
FieldScriptText_243EB4: @ 0x08243EB4
	.string "ポケモンを　もちきれません！\pボックスも　いっぱいで\nてんそう　できません！{EOS}"
	.if (. - FieldScriptText_243EB4) > 0x27
	.error "FieldScriptText_243EB4 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_243EB4) < 0x27
	.space 0x27 - (. - FieldScriptText_243EB4)
	.endif
	@ data/text/pc_transfer.inc:50 gText_NicknameThisPokemon
	.globl gText_NicknameThisPokemon
gText_NicknameThisPokemon: @ 0x08243EDB
	.string "{STR_VAR_1}に\nニックネームを つけますか?{EOS}"
	.if (. - gText_NicknameThisPokemon) > 0x13
	.error "gText_NicknameThisPokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_NicknameThisPokemon) < 0x13
	.space 0x13 - (. - gText_NicknameThisPokemon)
	.endif
	@ data/text/questionnaire.inc:1 Questionnaire_Text_FillOut
	.globl Questionnaire_Text_FillOut
Questionnaire_Text_FillOut: @ 0x08243EEE
	.string "アンケートようの メモようしが ある\nアンケートに なにか かきますか?{EOS}"
	.if (. - Questionnaire_Text_FillOut) > 0x25
	.error "Questionnaire_Text_FillOut may not grow beyond its original slot"
	.endif
	.if (. - Questionnaire_Text_FillOut) < 0x25
	.space 0x25 - (. - Questionnaire_Text_FillOut)
	.endif

	@ data/text/questionnaire.inc:5 Questionnaire_Text_ThankYou
	.globl Questionnaire_Text_ThankYou
Questionnaire_Text_ThankYou: @ 0x08243F13
	.string "アンケートに ごきょうりょく\nいただき ありがとう ございます!\pこの アンケートは こんごの\nさんこうに させて いただきます!{EOS}"
	.if (. - Questionnaire_Text_ThankYou) > 0x42
	.error "Questionnaire_Text_ThankYou may not grow beyond its original slot"
	.endif
	.if (. - Questionnaire_Text_ThankYou) < 0x42
	.space 0x42 - (. - Questionnaire_Text_ThankYou)
	.endif

	@ data/text/questionnaire.inc:11 Questionnaire_Text_YouKnowThoseWordsGift
	.globl Questionnaire_Text_YouKnowThoseWordsGift
Questionnaire_Text_YouKnowThoseWordsGift: @ 0x08243F55
	.string "…… おきゃくさま!\nそのことばを しってるの ですか!\pということは ふしぎなおくりもの を\nしって いらっしゃるの ですね!\pこれからは あなたにも\nふしぎなおくりもの が\lとどくように なるでしょう!{EOS}"
	.if (. - Questionnaire_Text_YouKnowThoseWordsGift) > 0x68
	.error "Questionnaire_Text_YouKnowThoseWordsGift may not grow beyond its original slot"
	.endif
	.if (. - Questionnaire_Text_YouKnowThoseWordsGift) < 0x68
	.space 0x68 - (. - Questionnaire_Text_YouKnowThoseWordsGift)
	.endif

	@ data/text/questionnaire.inc:20 Questionnaire_Text_YouCanAccessMysteryGift
	.globl Questionnaire_Text_YouCanAccessMysteryGift
Questionnaire_Text_YouCanAccessMysteryGift: @ 0x08243FBD
	.string "レポートをかくと ふしぎなおくりもの が\nつかえるように なります{EOS}"
	.if (. - Questionnaire_Text_YouCanAccessMysteryGift) > 0x22
	.error "Questionnaire_Text_YouCanAccessMysteryGift may not grow beyond its original slot"
	.endif
	.if (. - Questionnaire_Text_YouCanAccessMysteryGift) < 0x22
	.space 0x22 - (. - Questionnaire_Text_YouCanAccessMysteryGift)
	.endif

	@ data/text/questionnaire.inc:24 Questionnaire_Text_YouKnowThoseWordsEvent
	.globl Questionnaire_Text_YouKnowThoseWordsEvent
Questionnaire_Text_YouKnowThoseWordsEvent: @ 0x08243FDF
	.string "…… おきゃくさま!\nそのことばを しってるの ですか!\pということは ふしぎなできごと を\nしって いらっしゃるの ですね!{EOS}"
	.if (. - Questionnaire_Text_YouKnowThoseWordsEvent) > 0x40
	.error "Questionnaire_Text_YouKnowThoseWordsEvent may not grow beyond its original slot"
	.endif
	.if (. - Questionnaire_Text_YouKnowThoseWordsEvent) < 0x40
	.space 0x40 - (. - Questionnaire_Text_YouKnowThoseWordsEvent)
	.endif

	@ data/text/questionnaire.inc:30 Questionnaire_Text_YouCanAccessMysteryEvent
	.globl Questionnaire_Text_YouCanAccessMysteryEvent
Questionnaire_Text_YouCanAccessMysteryEvent: @ 0x0824401F
	.string "レポートをかくと ふしぎなできごと が\nつかえるように なります{EOS}"
	.if (. - Questionnaire_Text_YouCanAccessMysteryEvent) > 0x21
	.error "Questionnaire_Text_YouCanAccessMysteryEvent may not grow beyond its original slot"
	.endif
	.if (. - Questionnaire_Text_YouCanAccessMysteryEvent) < 0x21
	.space 0x21 - (. - Questionnaire_Text_YouCanAccessMysteryEvent)
	.endif

	@ data/text/questionnaire.inc:34 MysteryGift_Text_TheresATicketForYou
	.globl MysteryGift_Text_TheresATicketForYou
MysteryGift_Text_TheresATicketForYou: @ 0x08244040
	.string "ふしぎなできごと を ごりよう\nいただき ありがとう ございます!\l{PLAYER}さま ですね\pあなたさま あてに\nこの チケットが\lおくられて きました{EOS}"
	.if (. - MysteryGift_Text_TheresATicketForYou) > 0x49
	.error "MysteryGift_Text_TheresATicketForYou may not grow beyond its original slot"
	.endif
	.if (. - MysteryGift_Text_TheresATicketForYou) < 0x49
	.space 0x49 - (. - MysteryGift_Text_TheresATicketForYou)
	.endif

	@ data/text/questionnaire.inc:42 MysteryGift_Text_TryUsingItAtLilycovePort
	.globl MysteryGift_Text_TryUsingItAtLilycovePort_Copy_Rom_244089
MysteryGift_Text_TryUsingItAtLilycovePort_Copy_Rom_244089: @ 0x08244089
	.string "ミナモシティの ふなつきば で\nつかえる ようですね\pぜひ ごりよう してみては\nいかがでしょうか?{EOS}"
	.if (. - MysteryGift_Text_TryUsingItAtLilycovePort_Copy_Rom_244089) > 0x33
	.error "MysteryGift_Text_TryUsingItAtLilycovePort_Copy_Rom_244089 may not grow beyond its original slot"
	.endif
	.if (. - MysteryGift_Text_TryUsingItAtLilycovePort_Copy_Rom_244089) < 0x33
	.space 0x33 - (. - MysteryGift_Text_TryUsingItAtLilycovePort_Copy_Rom_244089)
	.endif
