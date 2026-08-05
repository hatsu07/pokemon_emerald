	@ data/text/match_call.inc:439 MatchCall_BattleFrontierStreakText12 (+1 aliases)
	.globl gText_Rom_2690EB
gText_Rom_2690EB: @ 0x082690EB
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが げんきかの?\pひとづてに きいたのじゃが\n{STR_VAR_2} とかいう ところで\l{STR_VAR_3}れんしょうも したらしいのう?\pすごい はなし だのう\nでは またの"
	.byte EOS
	.if (. - gText_Rom_2690EB) > 0x56
	.error "gText_Rom_2690EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2690EB) < 0x56
	.space 0x56 - (. - gText_Rom_2690EB)
	.endif
