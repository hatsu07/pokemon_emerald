	@ data/text/match_call.inc:79 MatchCall_NegativeBattleText12
	.globl gText_Rom_265974
gText_Rom_265974: @ 0x08265974
	.string "やあやあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが\lしょうぶ しておるのかな?\pわしのほうは このまえ まけてしまって\nまた ポケモンを\lそだてておる ところじゃよ\pでは またな$"
	.if (. - gText_Rom_265974) > 0x51
	.error "gText_Rom_265974 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265974) < 0x51
	.space 0x51 - (. - gText_Rom_265974)
	.endif
