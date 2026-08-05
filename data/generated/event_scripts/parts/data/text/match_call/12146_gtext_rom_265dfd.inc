	@ data/text/match_call.inc:124 MatchCall_PositiveBattleText13
	.globl gText_Rom_265DFD
gText_Rom_265DFD: @ 0x08265DFD
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃよ\pげんきに してるかのう?\nわしは げんき じゃぞ\pさっきも しょうぶに かった ところじゃ\nわかいもんには まだまだ まけんぞ\pじゃあ またのう$"
	.if (. - gText_Rom_265DFD) > 0x58
	.error "gText_Rom_265DFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265DFD) < 0x58
	.space 0x58 - (. - gText_Rom_265DFD)
	.endif
