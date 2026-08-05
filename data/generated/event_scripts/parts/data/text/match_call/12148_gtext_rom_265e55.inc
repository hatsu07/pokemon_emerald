	@ data/text/match_call.inc:127 MatchCall_PositiveBattleText14
	.globl gText_Rom_265E55
gText_Rom_265E55: @ 0x08265E55
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pこのまえ しょうぶ したんだけど\nわたしの {STR_VAR_2}が だいかつやく!\p{PLAYER}{KUN}にも みせたかったな\nじゃあ また$"
	.if (. - gText_Rom_265E55) > 0x48
	.error "gText_Rom_265E55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265E55) < 0x48
	.space 0x48 - (. - gText_Rom_265E55)
	.endif
