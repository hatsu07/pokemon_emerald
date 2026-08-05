	@ data/text/match_call.inc:193 MatchCall_DifferentRouteBattleRequestText8
	.globl gText_Rom_2664FE
gText_Rom_2664FE: @ 0x082664FE
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pちょうしは どうですか?\nわたしの ポケモンは とても げんきですよ\pこんど こちらに いらしたら\nまた わたしと\lしょうぶ してくださいね\p{STR_VAR_2}で まってます\nでは また$"
	.if (. - gText_Rom_2664FE) > 0x6a
	.error "gText_Rom_2664FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2664FE) < 0x6a
	.space 0x6a - (. - gText_Rom_2664FE)
	.endif
