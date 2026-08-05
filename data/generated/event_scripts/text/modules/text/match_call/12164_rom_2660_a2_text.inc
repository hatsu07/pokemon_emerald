	@ data/text/match_call.inc:151 MatchCall_SameRouteBattleRequestText8 (+1 aliases)
	.globl gText_Rom_2660A2
gText_Rom_2660A2: @ 0x082660A2
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pげんき ですか?\nあら いま {STR_VAR_2}に いるのね\pじゃあ これから\nわたしと しょうぶ しない?\pまってるわよ じゃあね!$"
	.if (. - gText_Rom_2660A2) > 0x50
	.error "gText_Rom_2660A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2660A2) < 0x50
	.space 0x50 - (. - gText_Rom_2660A2)
	.endif
