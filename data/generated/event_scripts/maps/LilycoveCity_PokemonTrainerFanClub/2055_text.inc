	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:662 LilycoveCity_PokemonTrainerFanClub_Text_YouImpressive
	.globl gText_Rom_2093F5
gText_Rom_2093F5: @ 0x082093F5
	.string "おぬし……\pやるな！$"
	.if (. - gText_Rom_2093F5) > 0xb
	.error "gText_Rom_2093F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2093F5) < 0xb
	.space 0xb - (. - gText_Rom_2093F5)
	.endif
