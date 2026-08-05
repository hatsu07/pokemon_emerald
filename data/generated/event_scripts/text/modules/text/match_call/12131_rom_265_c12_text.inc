	@ data/text/match_call.inc:106 MatchCall_PositiveBattleText7
	.globl gText_Rom_265C12
gText_Rom_265C12: @ 0x08265C12
	.string "{PLAYER}{KUN}?\n{STR_VAR_1} だけど\pぼくの {STR_VAR_2} つよいわけよ!\nさっきも しょうぶで かったわけよ!\pつぎに きみと しょうぶ するのが\nたのしみだなあ$"
	.if (. - gText_Rom_265C12) > 0x49
	.error "gText_Rom_265C12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265C12) < 0x49
	.space 0x49 - (. - gText_Rom_265C12)
	.endif
