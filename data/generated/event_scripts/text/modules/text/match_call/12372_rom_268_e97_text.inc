	@ data/text/match_call.inc:415 MatchCall_BattleFrontierStreakText4 (+1 aliases)
	.globl gText_Rom_268E97
gText_Rom_268E97: @ 0x08268E97
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だけど げんき かい?\pうわさで きいたんだけど\nきみ {STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんだって?\pぼくも がんばらなきゃな\nじゃあ また"
	.byte EOS
	.if (. - gText_Rom_268E97) > 0x50
	.error "gText_Rom_268E97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268E97) < 0x50
	.space 0x50 - (. - gText_Rom_268E97)
	.endif
