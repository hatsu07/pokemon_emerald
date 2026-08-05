	@ data/text/cable_club.inc:228 MossdeepCity_GameCorner_1F_Text_ShortJumpingPokemonAllowed
	.globl gText_Rom_248406
gText_Rom_248406: @ 0x08248406
	.string "「ミニポケモンでジャンプ」に\nさんか できる ポケモンは\lたかさ 70センチくらい までだよ\pじめんに もぐったり\nうかんでいる ポケモンは\lジャンプ できないから\lでられないんだよ$"
	.if (. - gText_Rom_248406) > 0x5c
	.error "gText_Rom_248406 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248406) < 0x5c
	.space 0x5c - (. - gText_Rom_248406)
	.endif
