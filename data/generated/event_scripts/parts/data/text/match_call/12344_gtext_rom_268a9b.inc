	@ data/text/match_call.inc:415 MatchCall_BattleFrontierStreakText4 (+1 aliases)
	.globl gText_Rom_268A9B
gText_Rom_268A9B: @ 0x08268A9B
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だけど げんき かい?\pうわさで きいたんだけど\nきみ {STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんだって?\pぼくも がんばらなきゃな\nじゃあ また$"
	.if (. - gText_Rom_268A9B) > 0x50
	.error "gText_Rom_268A9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268A9B) < 0x50
	.space 0x50 - (. - gText_Rom_268A9B)
	.endif
