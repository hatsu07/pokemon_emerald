	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:590 LilycoveCity_PokemonTrainerFanClub_Text_NobodyUnderstandsBrawly
	.globl gText_Rom_208D67
gText_Rom_208D67: @ 0x08208D67
	.string "だれも トウキさまの\nみりょくを わかって くれないの……\pいいわ！\pわたし ひとりでも トウキさまの ことを\nおうえん しつづけるから！{EOS}"
	.if (. - gText_Rom_208D67) > 0x46
	.error "gText_Rom_208D67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208D67) < 0x46
	.space 0x46 - (. - gText_Rom_208D67)
	.endif
