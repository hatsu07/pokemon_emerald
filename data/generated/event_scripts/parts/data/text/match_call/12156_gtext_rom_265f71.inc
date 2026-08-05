	@ data/text/match_call.inc:139 MatchCall_SameRouteBattleRequestText4
	.globl gText_Rom_265F71
gText_Rom_265F71: @ 0x08265F71
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\pいま どこに いるんだい?\nえ {STR_VAR_2}?\pじゃあ これから しょうぶ しないか?\nまってるよ じゃあね$"
	.if (. - gText_Rom_265F71) > 0x40
	.error "gText_Rom_265F71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265F71) < 0x40
	.space 0x40 - (. - gText_Rom_265F71)
	.endif
