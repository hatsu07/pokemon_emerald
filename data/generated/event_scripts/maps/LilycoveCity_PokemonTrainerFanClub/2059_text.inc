	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:668 LilycoveCity_PokemonTrainerFanClub_Text_HaventRealizedPotential
	.globl gText_Rom_20943E
gText_Rom_20943E: @ 0x0820943E
	.string "うむ おぬし なかなかの\nめを しておるな\pじゃが！\p……うーむ\nまだまだの ようじゃな{EOS}"
	.if (. - gText_Rom_20943E) > 0x2d
	.error "gText_Rom_20943E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20943E) < 0x2d
	.space 0x2d - (. - gText_Rom_20943E)
	.endif
