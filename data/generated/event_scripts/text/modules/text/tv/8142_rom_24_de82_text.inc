	@ data/text/tv.inc:190 LilycoveCity_PokemonTrainerFanClub_Text_HowStrongRateTrainer
	.globl gText_Rom_24DE82
gText_Rom_24DE82: @ 0x0824DE82
	.string "じゃあ こんどは\n{STR_VAR_1}の つよさを\lてんすうで おしえてくれる?$"
	.if (. - gText_Rom_24DE82) > 0x21
	.error "gText_Rom_24DE82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DE82) < 0x21
	.space 0x21 - (. - gText_Rom_24DE82)
	.endif
