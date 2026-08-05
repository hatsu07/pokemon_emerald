	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:575 LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsBestNoOneWantsToListen
	.globl gText_Rom_208C7A
gText_Rom_208C7A: @ 0x08208C7A
	.string "くそー いまは {STR_VAR_1}が\nいちばん つよいって いってるのに\pだれも きいて くれない……$"
	.if (. - gText_Rom_208C7A) > 0x2d
	.error "gText_Rom_208C7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208C7A) < 0x2d
	.space 0x2d - (. - gText_Rom_208C7A)
	.endif
