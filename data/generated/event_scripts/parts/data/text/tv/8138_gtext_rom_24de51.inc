	@ data/text/tv.inc:184 LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer (+1 aliases)
	.globl gText_Rom_24DE51
gText_Rom_24DE51: @ 0x0824DE51
	.string "{STR_VAR_1}の こと\nわすれちゃったの……?$"
	.if (. - gText_Rom_24DE51) > 0x13
	.error "gText_Rom_24DE51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DE51) < 0x13
	.space 0x13 - (. - gText_Rom_24DE51)
	.endif
