	@ data/text/match_call.inc:118 MatchCall_PositiveBattleText11
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_265D61
gText_Rom_265D61: @ 0x08265D61
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だよ\pポケモン しょうぶ してるかい?\nおじさん きょうも しょうぶに かってねー\pちょうし いいんだよ がははは\nじゃあ またね$"
	.if (. - gText_Rom_265D61) != 0x4d
	.error "gText_Rom_265D61 must retain its original byte length"
	.endif
