	@ data/text/match_call.inc:493 MatchCall_BattleDomeText2
	.globl gText_Rom_26921C
gText_Rom_26921C: @ 0x0826921C
	.string "こんにちは {STR_VAR_1} でーす!\nきいたわよ!\p{STR_VAR_2} で\n{STR_VAR_3}かい も\lゆうしょう したんですって?\pすごいわねー\nわたしも ゆうしょう できるのかな?"
	.byte EOS
	.if (. - gText_Rom_26921C) > 0x4a
	.error "gText_Rom_26921C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26921C) < 0x4a
	.space 0x4a - (. - gText_Rom_26921C)
	.endif
