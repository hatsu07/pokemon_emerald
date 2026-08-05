	@ data/text/match_call.inc:556 MatchCall_BattlePikeText9
	.globl gText_Rom_269802
gText_Rom_269802: @ 0x08269802
	.string "あら {PLAYER}{KUN}!\nこんにちは {STR_VAR_1}です!\p{STR_VAR_2}で {STR_VAR_3}へやも\nとっぱ したんだって?\pすっごいねー\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - gText_Rom_269802) > 0x40
	.error "gText_Rom_269802 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269802) < 0x40
	.space 0x40 - (. - gText_Rom_269802)
	.endif
