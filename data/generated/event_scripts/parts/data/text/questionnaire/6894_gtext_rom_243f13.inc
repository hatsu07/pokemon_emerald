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
