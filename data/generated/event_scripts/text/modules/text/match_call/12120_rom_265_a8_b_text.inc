	@ data/text/match_call.inc:91 MatchCall_PositiveBattleText2
	.globl gText_Rom_265A8B
gText_Rom_265A8B: @ 0x08265A8B
	.string "こんにちは {PLAYER}{KUN}!\n{STR_VAR_1} です!\pきのう しょうぶ したんだけど\nかったのよ! うれしいー!$"
	.if (. - gText_Rom_265A8B) > 0x31
	.error "gText_Rom_265A8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265A8B) < 0x31
	.space 0x31 - (. - gText_Rom_265A8B)
	.endif
