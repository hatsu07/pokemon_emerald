	@ data/text/match_call.inc:439 MatchCall_BattleFrontierStreakText12 (+1 aliases)
	.globl gText_Rom_268CDF
gText_Rom_268CDF: @ 0x08268CDF
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが げんきかの?\pひとづてに きいたのじゃが\n{STR_VAR_2} とかいう ところで\l{STR_VAR_3}れんしょうも したらしいのう?\pすごい はなし だのう\nでは またの$"
	.if (. - gText_Rom_268CDF) > 0x56
	.error "gText_Rom_268CDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268CDF) < 0x56
	.space 0x56 - (. - gText_Rom_268CDF)
	.endif
