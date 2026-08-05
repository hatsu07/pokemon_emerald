	@ data/text/match_call.inc:433 MatchCall_BattleFrontierStreakText10 (+2 aliases)
	.globl gText_Rom_26946D
gText_Rom_26946D: @ 0x0826946D
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\p{STR_VAR_2}で\n{STR_VAR_3}れんしょうも したんですって?\pすごいわねえ\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - gText_Rom_26946D) > 0x3c
	.error "gText_Rom_26946D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26946D) < 0x3c
	.space 0x3c - (. - gText_Rom_26946D)
	.endif
