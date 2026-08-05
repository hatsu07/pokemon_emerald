	@ data/text/match_call.inc:598 MatchCall_BattlePyramidText9
	.globl gText_Rom_269BEF
gText_Rom_269BEF: @ 0x08269BEF
	.string "あら {PLAYER}{KUN}!\nこんにちは {STR_VAR_1}です!\p{STR_VAR_2}で {STR_VAR_3}だんも\nかちぬいたんだって?\pすっごいねー\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - gText_Rom_269BEF) > 0x3f
	.error "gText_Rom_269BEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269BEF) < 0x3f
	.space 0x3f - (. - gText_Rom_269BEF)
	.endif
