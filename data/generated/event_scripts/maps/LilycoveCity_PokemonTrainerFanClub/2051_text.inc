	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:656 LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsStandout
	.globl gText_Rom_209340
gText_Rom_209340: @ 0x08209340
	.string "さいきんの トレーナーは\nやっぱり {STR_VAR_1}よね！\lあの つよさは ただもの じゃないわ\pあなたも いいせん いってるけど\n{STR_VAR_1}に くらべたら まだまだねー$"
	.if (. - gText_Rom_209340) > 0x4d
	.error "gText_Rom_209340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209340) < 0x4d
	.space 0x4d - (. - gText_Rom_209340)
	.endif
