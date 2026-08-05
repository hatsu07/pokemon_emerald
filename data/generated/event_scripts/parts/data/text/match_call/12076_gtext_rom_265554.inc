	@ data/text/match_call.inc:34 MatchCall_WildBattleText12 (+1 aliases)
	.globl gText_Rom_265554
gText_Rom_265554: @ 0x08265554
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが\lポケモン つかまえとるかな?\pわしも つかまえようと おもったが\nなかなか うまくいかん\pポケモンの みちは\nおくが ふかいのう$"
	.if (. - gText_Rom_265554) > 0x50
	.error "gText_Rom_265554 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265554) < 0x50
	.space 0x50 - (. - gText_Rom_265554)
	.endif
