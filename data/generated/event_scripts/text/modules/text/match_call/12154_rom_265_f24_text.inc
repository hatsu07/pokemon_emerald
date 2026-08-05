	@ data/text/match_call.inc:136 MatchCall_SameRouteBattleRequestText3
	.globl gText_Rom_265F24
gText_Rom_265F24: @ 0x08265F24
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だ!\pお いま {STR_VAR_2}にいるのか?\nじゃあ これから しょうぶ しないか?\pこんどこそ まけない からな!\nまってるぞー じゃあな$"
	.if (. - gText_Rom_265F24) > 0x4d
	.error "gText_Rom_265F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265F24) < 0x4d
	.space 0x4d - (. - gText_Rom_265F24)
	.endif
