	@ data/maps/LavaridgeTown/scripts.inc:380 LavaridgeTown_Text_IfPokemonInHotSprings
	.globl gText_Rom_1E5D8B
gText_Rom_1E5D8B: @ 0x081E5D8B
	.string "おんせんに ポケモン いれると\nでんきぶろや あわぶろ はたまた\lようがんぶろに なって すごそうだわ{EOS}"
	.if (. - gText_Rom_1E5D8B) > 0x34
	.error "gText_Rom_1E5D8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5D8B) < 0x34
	.space 0x34 - (. - gText_Rom_1E5D8B)
	.endif
