	@ data/text/match_call.inc:34 MatchCall_WildBattleText12 (+1 aliases)
	.globl gText_Rom_2655A4
gText_Rom_2655A4: @ 0x082655A4
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが\lポケモン つかまえとるかな?\pわしも つかまえようと おもったが\nなかなか うまくいかん\pポケモンの みちは\nおくが ふかいのう$"
	.if (. - gText_Rom_2655A4) > 0x50
	.error "gText_Rom_2655A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2655A4) < 0x50
	.space 0x50 - (. - gText_Rom_2655A4)
	.endif
