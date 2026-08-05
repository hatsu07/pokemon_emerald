	@ data/text/match_call.inc:592 MatchCall_BattlePyramidText7
	.globl gText_Rom_269B46
gText_Rom_269B46: @ 0x08269B46
	.string "{PLAYER}{KUN}?\nああ {STR_VAR_1} だけど\p{STR_VAR_2}で {STR_VAR_3}だんも\nのぼったんだって?\pへー…… そこに\nめずらしい ポケモン いなかった?\pそうかー いないかー\nじゃあ また"
	.byte EOS
	.if (. - gText_Rom_269B46) > 0x51
	.error "gText_Rom_269B46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269B46) < 0x51
	.space 0x51 - (. - gText_Rom_269B46)
	.endif
