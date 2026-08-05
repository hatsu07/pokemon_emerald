	@ data/text/match_call.inc:418 MatchCall_BattleFrontierStreakText5
	.globl gText_Rom_268AEB
gText_Rom_268AEB: @ 0x08268AEB
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} だよ\p{STR_VAR_2}で\n{STR_VAR_3}れんしょうも したんだってね!\lすごいなあ\pぼくも ポケモン そだてなきゃ\nじゃあ また$"
	.if (. - gText_Rom_268AEB) > 0x44
	.error "gText_Rom_268AEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268AEB) < 0x44
	.space 0x44 - (. - gText_Rom_268AEB)
	.endif
