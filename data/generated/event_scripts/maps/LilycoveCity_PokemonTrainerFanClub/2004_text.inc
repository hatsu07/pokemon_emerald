	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:587 LilycoveCity_PokemonTrainerFanClub_Text_ICantHelpLikingBrawly
	.globl gText_Rom_208D47
gText_Rom_208D47: @ 0x08208D47
	.string "やっぱり わたしは トウキさま しか\nすきに なれないのよねー{EOS}"
	.if (. - gText_Rom_208D47) > 0x20
	.error "gText_Rom_208D47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208D47) < 0x20
	.space 0x20 - (. - gText_Rom_208D47)
	.endif
