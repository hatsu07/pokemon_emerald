	@ data/text/match_call.inc:76 MatchCall_NegativeBattleText11
	.globl gText_Rom_265932
gText_Rom_265932: @ 0x08265932
	.string "やあ {PLAYER}{KUN} げんきかい?\n{STR_VAR_1} だよ\lポケモンの ちょうしは どう?\pこっちは また しょうぶに\nまけちゃったよ\pじゃあ また$"
	.if (. - gText_Rom_265932) > 0x42
	.error "gText_Rom_265932 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265932) < 0x42
	.space 0x42 - (. - gText_Rom_265932)
	.endif
