	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:566 LilycoveCity_PokemonTrainerFanClub_Text_YoureOneWeWantToWin
	.globl gText_Rom_208BEC
gText_Rom_208BEC: @ 0x08208BEC
	.string "おう {PLAYER}！！\nおうえん してるぞ！！$"
	.if (. - gText_Rom_208BEC) > 0x14
	.error "gText_Rom_208BEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208BEC) < 0x14
	.space 0x14 - (. - gText_Rom_208BEC)
	.endif
