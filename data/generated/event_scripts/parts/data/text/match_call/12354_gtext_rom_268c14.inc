	@ data/text/match_call.inc:430 MatchCall_BattleFrontierStreakText9 (+1 aliases)
	.globl gText_Rom_268C14
gText_Rom_268C14: @ 0x08268C14
	.string "あら {PLAYER}{KUN}!\nこんにちは {STR_VAR_1}です!\pきいたわよ! {STR_VAR_2}で\n{STR_VAR_3}れんしょうも したって!\pすっごいねー\nわたしも がんばらなくちゃ$"
	.if (. - gText_Rom_268C14) > 0x44
	.error "gText_Rom_268C14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268C14) < 0x44
	.space 0x44 - (. - gText_Rom_268C14)
	.endif
