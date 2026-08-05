	@ data/text/match_call.inc:109 MatchCall_PositiveBattleText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_265C5B
gText_Rom_265C5B: @ 0x08265C5B
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pげんき かしら?\nわたしね さっき しょうぶ して かったの\p{STR_VAR_2} が とっても がんばったのよ\nじゃあ またね$"
	.if (. - gText_Rom_265C5B) != 0x4c
	.error "gText_Rom_265C5B must retain its original byte length"
	.endif
