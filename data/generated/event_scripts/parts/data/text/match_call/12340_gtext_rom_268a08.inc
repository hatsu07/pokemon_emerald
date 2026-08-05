	@ data/text/match_call.inc:409 MatchCall_BattleFrontierStreakText2 (+1 aliases)
	.globl gText_Rom_268A08
gText_Rom_268A08: @ 0x08268A08
	.string "こんにちは {STR_VAR_1} でーす\n{STR_VAR_2} で\l{STR_VAR_3}れんしょう したって きいたわよ!\pすっごーい! わたしも がんばろうっと!\nじゃあ またね!$"
	.if (. - gText_Rom_268A08) > 0x44
	.error "gText_Rom_268A08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268A08) < 0x44
	.space 0x44 - (. - gText_Rom_268A08)
	.endif
