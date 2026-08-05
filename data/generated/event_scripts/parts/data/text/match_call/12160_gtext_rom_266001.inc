	@ data/text/match_call.inc:145 MatchCall_SameRouteBattleRequestText6
	.globl gText_Rom_266001
gText_Rom_266001: @ 0x08266001
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\pポケモンの ちょうしは どうだい?\nへえ いま {STR_VAR_2}に いるのか\pじゃあ これから おれと\nしょうぶ しよう\pまってるよ じゃあね$"
	.if (. - gText_Rom_266001) > 0x4f
	.error "gText_Rom_266001 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266001) < 0x4f
	.space 0x4f - (. - gText_Rom_266001)
	.endif
