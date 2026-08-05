	@ data/text/match_call.inc:409 MatchCall_BattleFrontierStreakText2 (+1 aliases)
	.globl gText_Rom_268E04
gText_Rom_268E04: @ 0x08268E04
	.string "こんにちは {STR_VAR_1} でーす\n{STR_VAR_2} で\l{STR_VAR_3}れんしょう したって きいたわよ!\pすっごーい! わたしも がんばろうっと!\nじゃあ またね!"
	.byte EOS
	.if (. - gText_Rom_268E04) > 0x44
	.error "gText_Rom_268E04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268E04) < 0x44
	.space 0x44 - (. - gText_Rom_268E04)
	.endif
