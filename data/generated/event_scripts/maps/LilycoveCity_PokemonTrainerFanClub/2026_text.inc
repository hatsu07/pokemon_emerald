	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:620 LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsReallyCoolItsJustMe
	.globl gText_Rom_209039
gText_Rom_209039: @ 0x08209039
	.string "{STR_VAR_1}さん って ほんとうに\nかっこいい よねぇ……\pわたし ひとりに なっても\nずうっと おうえん するんだー！$"
	.if (. - gText_Rom_209039) > 0x39
	.error "gText_Rom_209039 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209039) < 0x39
	.space 0x39 - (. - gText_Rom_209039)
	.endif
