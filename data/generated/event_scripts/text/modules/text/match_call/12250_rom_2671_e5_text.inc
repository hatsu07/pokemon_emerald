	@ data/text/match_call.inc:277 MatchCall_PersonalizedText22
	.globl gText_Rom_2671E5
gText_Rom_2671E5: @ 0x082671E5
	.string "{STR_VAR_1}だよ… きょうは\nきみと はなす きが してたんだ\pきみに かちたい きもちは\nひましに つよくなる ばかりだよ\lきみ にも そんな あいてが いるだろ?\lそれが ぼくなら いいのにな\pきいて くれて ありがと またな!$"
	.if (. - gText_Rom_2671E5) > 0x71
	.error "gText_Rom_2671E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2671E5) < 0x71
	.space 0x71 - (. - gText_Rom_2671E5)
	.endif
