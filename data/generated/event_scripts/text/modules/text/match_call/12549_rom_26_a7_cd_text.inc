	@ data/text/match_call.inc:700 MatchCall_Text_Juan_PreparingPostGame
	.globl gText_Rom_26A7CD
gText_Rom_26A7CD: @ 0x0826A7CD
	.string "アダン『ふ…… {PLAYER}{KUN}\nついに やりとげた ようですね\pやはり わたくしの ひとを みるめは\nまちがって いなかった……\pつよさを きわめた ユーとは\nぜひ また しょうぶ したい ものです"
	.byte EOS
	.if (. - gText_Rom_26A7CD) > 0x61
	.error "gText_Rom_26A7CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A7CD) < 0x61
	.space 0x61 - (. - gText_Rom_26A7CD)
	.endif
