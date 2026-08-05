	@ data/text/match_call.inc:160 MatchCall_SameRouteBattleRequestText11
	.globl gText_Rom_26619C
gText_Rom_26619C: @ 0x0826619C
	.string "ああ {PLAYER}{KUN}\n{STR_VAR_1}だけど\pほほう\nいま {STR_VAR_2}に いるんだって?\pじゃあ これから おじさんと\nポケモン しょうぶ しないかい?\pまってるよ じゃあね$"
	.if (. - gText_Rom_26619C) > 0x4c
	.error "gText_Rom_26619C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26619C) < 0x4c
	.space 0x4c - (. - gText_Rom_26619C)
	.endif
