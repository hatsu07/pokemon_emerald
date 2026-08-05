	@ data/text/tv.inc:187 LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer2
	.globl gText_Rom_24DE64
gText_Rom_24DE64: @ 0x0824DE64
	.string "ボク {STR_VAR_1}の ファン なんだけど\n{STR_VAR_1} って どうおもう?$"
	.if (. - gText_Rom_24DE64) > 0x1e
	.error "gText_Rom_24DE64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DE64) < 0x1e
	.space 0x1e - (. - gText_Rom_24DE64)
	.endif
