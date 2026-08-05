	@ data/text/match_call.inc:25 MatchCall_WildBattleText9
	.globl gText_Rom_265473
gText_Rom_265473: @ 0x08265473
	.string "あ {PLAYER}{KUN} こんにちはー!\n{STR_VAR_1} です!\pどう? ポケモン あつまってる?\nわたしは にげられて ばっかりで\pぜんぜん うまく いかないの\nじゃあ またね!$"
	.if (. - gText_Rom_265473) > 0x50
	.error "gText_Rom_265473 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265473) < 0x50
	.space 0x50 - (. - gText_Rom_265473)
	.endif
