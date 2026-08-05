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
