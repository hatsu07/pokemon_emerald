	@ data/text/match_call.inc:295 MatchCall_PersonalizedText28
	.globl gText_Rom_267541
gText_Rom_267541: @ 0x08267541
	.string "ポケモン だいすき!\nだいすきクラブの {STR_VAR_1}です!\pきっ きいて くださいよ!\nわたしの ポケモンちゃんが なんと……!\lぐふ ぐふふふ\lこれいじょうは ひみつ!\lもー かわいすぎて くちに できない!\pああっ {STR_VAR_2}ちゃんが\nポロックを おねだりしてるー!\lかわいいぞーーーっ!\pわるいけど きみと\nはなしている ばあいじゃ ないぞ!\lまた こんど つづきを きいてくれ$"
	.if (. - gText_Rom_267541) > 0xba
	.error "gText_Rom_267541 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267541) < 0xba
	.space 0xba - (. - gText_Rom_267541)
	.endif
