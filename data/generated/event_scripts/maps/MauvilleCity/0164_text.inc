	@ data/maps/MauvilleCity/scripts.inc:473 MauvilleCity_Text_UncleYourePushingIt
	.globl gText_Rom_1DDE96
gText_Rom_1DDE96: @ 0x081DDE96
	.string "おじさん『まあまあ ミツルくん!\pたしかに ポケモンと いっしょに\nくらすように なってから\lきみは ずいぶん げんきに なった!\pだからって いきなり ポケモンジムに\nちょうせん なんて むり してないかい?$"
	.if (. - gText_Rom_1DDE96) > 0x6a
	.error "gText_Rom_1DDE96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DDE96) < 0x6a
	.space 0x6a - (. - gText_Rom_1DDE96)
	.endif
