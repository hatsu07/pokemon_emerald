	@ data/text/match_call.inc:778 MatchCall_Text_Brendan2
	.globl gText_Rom_26B236
gText_Rom_26B236: @ 0x0826B236
	.string "ユウキ『やあ {PLAYER}!\pトウカや ムロみたいな\nちいさい まちに ジムが あるのに\pおおきな みなとまちの カイナには\nなぜか ジムが ないんだよな\pいつか ジムが できたら オレ\nジムリーダーに りっこうほ しようかな"
	.byte EOS
	.if (. - gText_Rom_26B236) > 0x6e
	.error "gText_Rom_26B236 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B236) < 0x6e
	.space 0x6e - (. - gText_Rom_26B236)
	.endif
