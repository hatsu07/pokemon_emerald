	@ data/text/match_call.inc:133 MatchCall_SameRouteBattleRequestText2
	.globl gText_Rom_265EE0
gText_Rom_265EE0: @ 0x08265EE0
	.string "{PLAYER}さん こんにちは!\n{STR_VAR_1} でーす\pえ! いま {STR_VAR_2} に いるの?\nじゃあ いまから しょうぶ しない?\lまってるわよ! じゃあね!$"
	.if (. - gText_Rom_265EE0) > 0x44
	.error "gText_Rom_265EE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265EE0) < 0x44
	.space 0x44 - (. - gText_Rom_265EE0)
	.endif
