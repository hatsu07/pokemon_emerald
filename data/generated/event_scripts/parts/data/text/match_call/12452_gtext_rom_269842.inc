	@ data/text/match_call.inc:559 MatchCall_BattlePikeText10
	.globl gText_Rom_269842
gText_Rom_269842: @ 0x08269842
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\p{STR_VAR_2}で\n{STR_VAR_3}へやも とっぱ したんですって?\pすごいわねえ\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - gText_Rom_269842) > 0x3d
	.error "gText_Rom_269842 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269842) < 0x3d
	.space 0x3d - (. - gText_Rom_269842)
	.endif
