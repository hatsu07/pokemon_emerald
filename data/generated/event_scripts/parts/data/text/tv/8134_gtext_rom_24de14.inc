	@ data/text/tv.inc:178 LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer
	.globl gText_Rom_24DE14
gText_Rom_24DE14: @ 0x0824DE14
	.string "やあ!\pボク {STR_VAR_1}の ファン なんだけど\n{STR_VAR_1} って どう おもう?$"
	.if (. - gText_Rom_24DE14) > 0x23
	.error "gText_Rom_24DE14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DE14) < 0x23
	.space 0x23 - (. - gText_Rom_24DE14)
	.endif
