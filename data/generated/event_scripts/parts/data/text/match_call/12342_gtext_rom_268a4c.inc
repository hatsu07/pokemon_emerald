	@ data/text/match_call.inc:412 MatchCall_BattleFrontierStreakText3 (+1 aliases)
	.globl gText_Rom_268A4C
gText_Rom_268A4C: @ 0x08268A4C
	.string "おう! {PLAYER}!\n{STR_VAR_1}だぞ!\p{STR_VAR_2} で\nおおあばれ したらしいな!\p{STR_VAR_3}れんしょう って\nすごい きろく なんだろ?\pおれも まけられねーな!\nじゃ またな!$"
	.if (. - gText_Rom_268A4C) > 0x4f
	.error "gText_Rom_268A4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268A4C) < 0x4f
	.space 0x4f - (. - gText_Rom_268A4C)
	.endif
