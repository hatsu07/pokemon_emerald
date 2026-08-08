	@ data/text/questionnaire.inc:1 Questionnaire_Text_FillOut
	.globl gText_Rom_243EEE
gText_Rom_243EEE: @ 0x08243EEE
	.string "アンケートようの メモようしが ある\nアンケートに なにか かきますか?$"
	.if (. - gText_Rom_243EEE) > 0x25
	.error "gText_Rom_243EEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243EEE) < 0x25
	.space 0x25 - (. - gText_Rom_243EEE)
	.endif

	@ data/text/questionnaire.inc:5 Questionnaire_Text_ThankYou
	.globl gText_Rom_243F13
gText_Rom_243F13: @ 0x08243F13
	.string "アンケートに ごきょうりょく\nいただき ありがとう ございます!\pこの アンケートは こんごの\nさんこうに させて いただきます!$"
	.if (. - gText_Rom_243F13) > 0x42
	.error "gText_Rom_243F13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243F13) < 0x42
	.space 0x42 - (. - gText_Rom_243F13)
	.endif

	@ data/text/questionnaire.inc:11 Questionnaire_Text_YouKnowThoseWordsGift
	.globl gText_Rom_243F55
gText_Rom_243F55: @ 0x08243F55
	.string "…… おきゃくさま!\nそのことばを しってるの ですか!\pということは ふしぎなおくりもの を\nしって いらっしゃるの ですね!\pこれからは あなたにも\nふしぎなおくりもの が\lとどくように なるでしょう!$"
	.if (. - gText_Rom_243F55) > 0x68
	.error "gText_Rom_243F55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243F55) < 0x68
	.space 0x68 - (. - gText_Rom_243F55)
	.endif

	@ data/text/questionnaire.inc:20 Questionnaire_Text_YouCanAccessMysteryGift
	.globl gText_Rom_243FBD
gText_Rom_243FBD: @ 0x08243FBD
	.string "レポートをかくと ふしぎなおくりもの が\nつかえるように なります$"
	.if (. - gText_Rom_243FBD) > 0x22
	.error "gText_Rom_243FBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243FBD) < 0x22
	.space 0x22 - (. - gText_Rom_243FBD)
	.endif

	@ data/text/questionnaire.inc:24 Questionnaire_Text_YouKnowThoseWordsEvent
	.globl gText_Rom_243FDF
gText_Rom_243FDF: @ 0x08243FDF
	.string "…… おきゃくさま!\nそのことばを しってるの ですか!\pということは ふしぎなできごと を\nしって いらっしゃるの ですね!$"
	.if (. - gText_Rom_243FDF) > 0x40
	.error "gText_Rom_243FDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243FDF) < 0x40
	.space 0x40 - (. - gText_Rom_243FDF)
	.endif

	@ data/text/questionnaire.inc:30 Questionnaire_Text_YouCanAccessMysteryEvent
	.globl gText_Rom_24401F
gText_Rom_24401F: @ 0x0824401F
	.string "レポートをかくと ふしぎなできごと が\nつかえるように なります$"
	.if (. - gText_Rom_24401F) > 0x21
	.error "gText_Rom_24401F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24401F) < 0x21
	.space 0x21 - (. - gText_Rom_24401F)
	.endif

	@ data/text/questionnaire.inc:34 MysteryGift_Text_TheresATicketForYou
	.globl gText_Rom_244040
gText_Rom_244040: @ 0x08244040
	.string "ふしぎなできごと を ごりよう\nいただき ありがとう ございます!\l{PLAYER}さま ですね\pあなたさま あてに\nこの チケットが\lおくられて きました$"
	.if (. - gText_Rom_244040) > 0x49
	.error "gText_Rom_244040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244040) < 0x49
	.space 0x49 - (. - gText_Rom_244040)
	.endif

	@ data/text/questionnaire.inc:42 MysteryGift_Text_TryUsingItAtLilycovePort
	.globl gText_Rom_244089
gText_Rom_244089: @ 0x08244089
	.string "ミナモシティの ふなつきば で\nつかえる ようですね\pぜひ ごりよう してみては\nいかがでしょうか?$"
	.if (. - gText_Rom_244089) > 0x33
	.error "gText_Rom_244089 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244089) < 0x33
	.space 0x33 - (. - gText_Rom_244089)
	.endif
