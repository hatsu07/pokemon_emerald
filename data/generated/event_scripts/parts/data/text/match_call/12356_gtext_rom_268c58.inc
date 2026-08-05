	@ data/text/match_call.inc:433 MatchCall_BattleFrontierStreakText10 (+2 aliases)
	.globl gText_Rom_268C58
gText_Rom_268C58: @ 0x08268C58
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\p{STR_VAR_2}で\n{STR_VAR_3}れんしょうも したんですって?\pすごいわねえ\nわたしも がんばらなくちゃ$"
	.if (. - gText_Rom_268C58) > 0x3c
	.error "gText_Rom_268C58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268C58) < 0x3c
	.space 0x3c - (. - gText_Rom_268C58)
	.endif
