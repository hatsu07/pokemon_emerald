	@ data/text/match_call.inc:112 MatchCall_PositiveBattleText9
	.globl gText_Rom_265CA7
gText_Rom_265CA7: @ 0x08265CA7
	.string "こんにちは {PLAYER}{KUN}!\n{STR_VAR_1} でーす!\pポケモンの ちょうしは どう?\nわたしのほうは さっき しょうぶして\lかった ところよ!\pわたしの {STR_VAR_2} が\nすごい かつやく だったのよ\pみせたかったなー\nじゃあ またね!$"
	.if (. - gText_Rom_265CA7) > 0x6c
	.error "gText_Rom_265CA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265CA7) < 0x6c
	.space 0x6c - (. - gText_Rom_265CA7)
	.endif
