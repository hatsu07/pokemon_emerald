	@ data/text/match_call.inc:130 MatchCall_SameRouteBattleRequestText1
	.globl gText_Rom_265E9D
gText_Rom_265E9D: @ 0x08265E9D
	.string "{PLAYER}さん こんにちは!\n{STR_VAR_1} だよ\pえ! いま {STR_VAR_2} に いるの?\nじゃあ いまから しょうぶ しようよ!\lまってるよ! じゃあね!$"
	.if (. - gText_Rom_265E9D) > 0x43
	.error "gText_Rom_265E9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265E9D) < 0x43
	.space 0x43 - (. - gText_Rom_265E9D)
	.endif
