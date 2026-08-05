	@ data/text/match_call.inc:121 MatchCall_PositiveBattleText12
	.globl gText_Rom_265DAE
gText_Rom_265DAE: @ 0x08265DAE
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃよ\pげんきに してるかのう?\nわしは げんき じゃぞ\pさっきも しょうぶに かった ところじゃ\nわかいもんには まだまだ まけんぞ$"
	.if (. - gText_Rom_265DAE) > 0x4f
	.error "gText_Rom_265DAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265DAE) < 0x4f
	.space 0x4f - (. - gText_Rom_265DAE)
	.endif
