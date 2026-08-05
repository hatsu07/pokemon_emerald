	@ data/text/match_call.inc:142 MatchCall_SameRouteBattleRequestText5
	.globl gText_Rom_265FB1
gText_Rom_265FB1: @ 0x08265FB1
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だよ\pちょうしは どうだい?\nえ? いま {STR_VAR_2}に いるの?\pそれなら これから おれと\nしょうぶ してみないかい?\pまってるよ じゃあね$"
	.if (. - gText_Rom_265FB1) > 0x50
	.error "gText_Rom_265FB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265FB1) < 0x50
	.space 0x50 - (. - gText_Rom_265FB1)
	.endif
