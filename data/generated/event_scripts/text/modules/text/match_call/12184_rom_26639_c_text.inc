	@ data/text/match_call.inc:181 MatchCall_DifferentRouteBattleRequestText4
	.globl gText_Rom_26639C
gText_Rom_26639C: @ 0x0826639C
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\pちょうしは どうだい?\nおれの ポケモンも\lずいぶん つよく なったよ\pそうだ また おれと\nしょうぶ しないかい?\pじゃあ {STR_VAR_2}で あおう$"
	.if (. - gText_Rom_26639C) > 0x54
	.error "gText_Rom_26639C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26639C) < 0x54
	.space 0x54 - (. - gText_Rom_26639C)
	.endif
