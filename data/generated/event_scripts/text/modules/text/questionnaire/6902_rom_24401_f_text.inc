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
