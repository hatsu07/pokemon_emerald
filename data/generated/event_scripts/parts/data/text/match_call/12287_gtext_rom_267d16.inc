	@ data/text/match_call.inc:331 MatchCall_PersonalizedText40
	.globl gText_Rom_267D16
gText_Rom_267D16: @ 0x08267D16
	.string "トライアスロンの なかでも\nすいえいが だいすきな {STR_VAR_1} です\pでも あんまり ながいこと\nうみに いると\lからだが ふやけちゃわないかなあ\pやっぱり トライアスロンは\nかこくな レースよね!\lじゃ またね!$"
	.if (. - gText_Rom_267D16) > 0x69
	.error "gText_Rom_267D16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267D16) < 0x69
	.space 0x69 - (. - gText_Rom_267D16)
	.endif
