	@ data/text/match_call.inc:202 MatchCall_DifferentRouteBattleRequestText11
	.globl gText_Rom_266653
gText_Rom_266653: @ 0x08266653
	.string "ああ {PLAYER}{KUN}\n{STR_VAR_1}だけど\lいま どこに いるのかな?\pわしの ポケモンは とても げんき だぞ\n{PLAYER}{KUN}の ポケモンと あうのを\lたのしみに しているみたいだ\p{STR_VAR_2}に いるから\nぜひ あいに きてくれよ$"
	.if (. - gText_Rom_266653) > 0x67
	.error "gText_Rom_266653 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266653) < 0x67
	.space 0x67 - (. - gText_Rom_266653)
	.endif
