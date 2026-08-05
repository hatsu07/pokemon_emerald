	@ data/text/match_call.inc:4 MatchCall_WildBattleText2
	.globl gText_Rom_265228
gText_Rom_265228: @ 0x08265228
	.string "こんにちは {PLAYER}{KUN}!\n{STR_VAR_1} です\pこのまえ {STR_VAR_2} を\nつかまえようと したんだけど\pにげられちゃったの\nざんねん だったなあ\pじゃあ またね!$"
	.if (. - gText_Rom_265228) > 0x49
	.error "gText_Rom_265228 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265228) < 0x49
	.space 0x49 - (. - gText_Rom_265228)
	.endif
