	@ data/text/match_call.inc:154 MatchCall_SameRouteBattleRequestText9
	.globl gText_Rom_2660F2
gText_Rom_2660F2: @ 0x082660F2
	.string "あ {PLAYER}{KUN} こんにちはー!\n{STR_VAR_1} です!\pげんきに してる?\nあら いま {STR_VAR_2}に いるの?\pそっかー じゃあ これから\nわたしと しょうぶ してみない?\pじゃあね まってるわよ$"
	.if (. - gText_Rom_2660F2) > 0x5a
	.error "gText_Rom_2660F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2660F2) < 0x5a
	.space 0x5a - (. - gText_Rom_2660F2)
	.endif
