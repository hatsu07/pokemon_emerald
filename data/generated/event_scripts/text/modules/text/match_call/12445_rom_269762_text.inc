	@ data/text/match_call.inc:550 MatchCall_BattlePikeText7
	.globl gText_Rom_269762
gText_Rom_269762: @ 0x08269762
	.string "{PLAYER}{KUN}?\nああ {STR_VAR_1} だけど\p{STR_VAR_2}で {STR_VAR_3}へやも\nとっぱ したんだって?\pすごいねえ\nあ めずらしいポケモンを みつけたから\pじゃあ また"
	.byte EOS
	.if (. - gText_Rom_269762) > 0x47
	.error "gText_Rom_269762 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269762) < 0x47
	.space 0x47 - (. - gText_Rom_269762)
	.endif
