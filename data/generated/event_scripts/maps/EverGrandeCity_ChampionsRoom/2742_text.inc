	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:243 EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex
	.globl gText_Rom_210E3F
gText_Rom_210E3F: @ 0x08210E3F
	.string "オダマキ『ほれみろ {RIVAL}!\p{PLAYER}{KUN}なら しんぱい いらんと\nわたしが いったとおり だろう!\p…… …… ……\n{PLAYER}{KUN} とうとう やりとげたな\pきみが トウカ ジムの おとうさんに\nかちぬいたと きいた ときに\lもしや…… とは おもったが\pまさか ほんとうに チャンピオンに\nなってしまうとは な!\p……おお そうだ!\pきみの ポケモンずかんは どうなった?\nわたしに みせて ごらん!{EOS}"
	.if (. - gText_Rom_210E3F) > 0xc5
	.error "gText_Rom_210E3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210E3F) < 0xc5
	.space 0xc5 - (. - gText_Rom_210E3F)
	.endif
