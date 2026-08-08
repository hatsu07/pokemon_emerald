	@ data/maps/LilycoveCity_ContestHall/scripts.inc:349 LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers
	.globl gText_Rom_207DB4
gText_Rom_207DB4: @ 0x08207DB4
	.string "トレーナーより ポケモンの ほうが\nあたま よさそうに みえるなあ$"
	.if (. - gText_Rom_207DB4) > 0x22
	.error "gText_Rom_207DB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207DB4) < 0x22
	.space 0x22 - (. - gText_Rom_207DB4)
	.endif
