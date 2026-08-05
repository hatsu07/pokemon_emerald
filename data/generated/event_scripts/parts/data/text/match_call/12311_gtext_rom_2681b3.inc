	@ data/text/match_call.inc:367 MatchCall_PersonalizedText52
	.globl gText_Rom_2681B3
gText_Rom_2681B3: @ 0x082681B3
	.string "{STR_VAR_1}です\nわたしの {STR_VAR_2}に\pポロック あげたんですよ\nとても よろこんでた みたい\pポケモンに よって\nポロックの すききらいが あるみたいなの\pおもしろい ですよね\nでは ごきげんよう$"
	.if (. - gText_Rom_2681B3) > 0x5e
	.error "gText_Rom_2681B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2681B3) < 0x5e
	.space 0x5e - (. - gText_Rom_2681B3)
	.endif
