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
