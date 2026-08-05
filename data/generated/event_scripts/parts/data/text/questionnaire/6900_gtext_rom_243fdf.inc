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
