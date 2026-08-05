	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:188 LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon
	.globl gText_Rom_205F22
gText_Rom_205F22: @ 0x08205F22
	.string "むかしの ひとが そうぞうで かいた\nでんせつの ポケモンの えだ!$"
	.if (. - gText_Rom_205F22) > 0x23
	.error "gText_Rom_205F22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205F22) < 0x23
	.space 0x23 - (. - gText_Rom_205F22)
	.endif
