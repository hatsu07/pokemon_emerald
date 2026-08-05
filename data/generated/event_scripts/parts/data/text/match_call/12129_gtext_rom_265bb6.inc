	@ data/text/match_call.inc:103 MatchCall_PositiveBattleText6
	.globl gText_Rom_265BB6
gText_Rom_265BB6: @ 0x08265BB6
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\pげんき かい?\nおれは さいきん ちょうしが よくて\lさっきも しょうぶに かったところだ\pつぎに きみと しょうぶ するときは\nぜったいに まけないからな$"
	.if (. - gText_Rom_265BB6) > 0x5c
	.error "gText_Rom_265BB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265BB6) < 0x5c
	.space 0x5c - (. - gText_Rom_265BB6)
	.endif
