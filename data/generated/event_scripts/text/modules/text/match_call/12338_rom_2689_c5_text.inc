	@ data/text/match_call.inc:406 MatchCall_BattleFrontierStreakText1 (+1 aliases)
	.globl gText_Rom_2689C5
gText_Rom_2689C5: @ 0x082689C5
	.string "こんにちは {STR_VAR_1} です!\nきいたよ!\p{STR_VAR_2} で\nすごい かつやく したんだって?\p{STR_VAR_3}れんしょう って すごいなあ\nじゃあ またね!$"
	.if (. - gText_Rom_2689C5) > 0x43
	.error "gText_Rom_2689C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2689C5) < 0x43
	.space 0x43 - (. - gText_Rom_2689C5)
	.endif
