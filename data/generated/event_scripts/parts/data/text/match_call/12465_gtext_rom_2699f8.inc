	@ data/text/match_call.inc:577 MatchCall_BattlePyramidText2
	.globl gText_Rom_2699F8
gText_Rom_2699F8: @ 0x082699F8
	.string "こんにちは {STR_VAR_1} でーす!\nきいたわよ!\p{STR_VAR_2} で\n{STR_VAR_3}だん も\lかちぬいたんですって?\pすごーい! わたしの ポケモンも\nがんばって そだてなくちゃ"
	.byte EOS
	.if (. - gText_Rom_2699F8) > 0x4c
	.error "gText_Rom_2699F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2699F8) < 0x4c
	.space 0x4c - (. - gText_Rom_2699F8)
	.endif
