	@ data/text/match_call.inc:421 MatchCall_BattleFrontierStreakText6
	.globl gText_Rom_268B2F
gText_Rom_268B2F: @ 0x08268B2F
	.string "{PLAYER}{KUN} かい?\nこんにちは {STR_VAR_1} だ\pそういえば きみ\n{STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんだってね\pおれも がんばって\nポケモンを そだてるよ$"
	.if (. - gText_Rom_268B2F) > 0x48
	.error "gText_Rom_268B2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268B2F) < 0x48
	.space 0x48 - (. - gText_Rom_268B2F)
	.endif
