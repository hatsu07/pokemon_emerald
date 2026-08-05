	@ data/text/match_call.inc:601 MatchCall_BattlePyramidText10
	.globl gText_Rom_269C2E
gText_Rom_269C2E: @ 0x08269C2E
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\p{STR_VAR_2}で\n{STR_VAR_3}だんも のぼったんですって?\pすごいわねえ\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - gText_Rom_269C2E) > 0x3b
	.error "gText_Rom_269C2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269C2E) < 0x3b
	.space 0x3b - (. - gText_Rom_269C2E)
	.endif
