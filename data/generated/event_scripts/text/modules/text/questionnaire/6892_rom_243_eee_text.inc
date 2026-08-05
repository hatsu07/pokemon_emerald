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
