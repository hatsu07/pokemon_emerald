	@ data/text/match_call.inc:220 MatchCall_PersonalizedText3
	.globl gText_Rom_2668E4
gText_Rom_2668E4: @ 0x082668E4
	.string "こんにちは! {STR_VAR_1}よ\nこの あたりは ほんとうに\lいいかおりが して きもちがいいわ\pだれかが きのみを うめて\nはなを さかせて くれたのかしら? うふふ\pそれじゃ またね!$"
	.if (. - gText_Rom_2668E4) > 0x59
	.error "gText_Rom_2668E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2668E4) < 0x59
	.space 0x59 - (. - gText_Rom_2668E4)
	.endif
