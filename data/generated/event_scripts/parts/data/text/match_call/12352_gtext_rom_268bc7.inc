	@ data/text/match_call.inc:427 MatchCall_BattleFrontierStreakText8
	.globl gText_Rom_268BC7
gText_Rom_268BC7: @ 0x08268BC7
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pちょうしは どうですか?\nそういえば {STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんですって?\pすごいですね!\nつぎも がんばってね$"
	.if (. - gText_Rom_268BC7) > 0x4d
	.error "gText_Rom_268BC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268BC7) < 0x4d
	.space 0x4d - (. - gText_Rom_268BC7)
	.endif
