	@ data/maps/MossdeepCity_Gym/scripts.inc:498 MossdeepCity_Gym_Text_ExplainCalmMind
	.globl gText_Rom_20BFE8
gText_Rom_20BFE8: @ 0x0820BFE8
	.string "フウ『その わざマシン04には\nラン『めいそうが はいってるヨ!\pフウ『ポケモンの とくこうと\nラン『ポケモンの とくぼうを\pフウ『たかめてくれる わざ なんだ!\nラン『エスパーポケモンに ぴったりだヨ!\p…… …… ……$"
	.if (. - gText_Rom_20BFE8) > 0x70
	.error "gText_Rom_20BFE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BFE8) < 0x70
	.space 0x70 - (. - gText_Rom_20BFE8)
	.endif
