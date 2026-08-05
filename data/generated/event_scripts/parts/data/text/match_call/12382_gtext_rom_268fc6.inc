	@ data/text/match_call.inc:469 MatchCall_BattleFrontierRecordStreakText8
	.globl gText_Rom_268FC6
gText_Rom_268FC6: @ 0x08268FC6
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pちょうしは どうですか?\nそういえば {STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんですって?\pすごいですね! わたしも がんばって\nポケモンを そだてなきゃ"
	.byte EOS
	.if (. - gText_Rom_268FC6) > 0x5a
	.error "gText_Rom_268FC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268FC6) < 0x5a
	.space 0x5a - (. - gText_Rom_268FC6)
	.endif
