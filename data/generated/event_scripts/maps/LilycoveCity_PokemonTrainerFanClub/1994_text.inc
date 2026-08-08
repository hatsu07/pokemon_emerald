	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:572 LilycoveCity_PokemonTrainerFanClub_Text_TrainersPowerIsOutOfTheOrdinary
	.globl gText_Rom_208C38
gText_Rom_208C38: @ 0x08208C38
	.string "きみには わるいけど いま いちばん\nちゅうもくの トレーナーは\lまちがいなく {STR_VAR_1} だね！\pあの つよさは\nだたものじゃ ないよ$"
	.if (. - gText_Rom_208C38) > 0x42
	.error "gText_Rom_208C38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208C38) < 0x42
	.space 0x42 - (. - gText_Rom_208C38)
	.endif
