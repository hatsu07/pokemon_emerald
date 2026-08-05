	@ data/text/match_call.inc:436 MatchCall_BattleFrontierStreakText11 (+1 aliases)
	.globl gText_Rom_268C94
gText_Rom_268C94: @ 0x08268C94
	.string "やあやあ {PLAYER}{KUN}\n{STR_VAR_1}だ\p{STR_VAR_2}で だいかつやく らしいなあ\n{STR_VAR_3}れんしょう したんだって?\pすげえなあ おれだったら\nなんれんしょう できるのかな$"
	.if (. - gText_Rom_268C94) > 0x4b
	.error "gText_Rom_268C94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268C94) < 0x4b
	.space 0x4b - (. - gText_Rom_268C94)
	.endif
