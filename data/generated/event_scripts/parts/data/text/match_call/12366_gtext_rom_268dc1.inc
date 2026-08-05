	@ data/text/match_call.inc:406 MatchCall_BattleFrontierStreakText1 (+1 aliases)
	.globl gText_Rom_268DC1
gText_Rom_268DC1: @ 0x08268DC1
	.string "こんにちは {STR_VAR_1} です!\nきいたよ!\p{STR_VAR_2} で\nすごい かつやく したんだって?\p{STR_VAR_3}れんしょう って すごいなあ\nじゃあ またね!"
	.byte EOS
	.if (. - gText_Rom_268DC1) > 0x43
	.error "gText_Rom_268DC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268DC1) < 0x43
	.space 0x43 - (. - gText_Rom_268DC1)
	.endif
