	@ data/text/tv.inc:403 gTVTodaysRivalTrainerText10
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_24F703
gText_Rom_24F703: @ 0x0824F703
	.string "こんかいの トレーナーは\nげんざい れんらくせんに のっている\l{STR_VAR_1}さん です!\p{STR_VAR_1}さんは\nポケモン ずかんを {STR_VAR_2}ひき\lとうろく されていますねー!$$"
	.if (. - gText_Rom_24F703) != 0x4e
	.error "gText_Rom_24F703 must retain its original byte length"
	.endif
