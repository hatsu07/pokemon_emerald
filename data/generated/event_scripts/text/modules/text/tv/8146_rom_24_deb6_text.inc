	@ data/text/tv.inc:196 LilycoveCity_PokemonTrainerFanClub_Text_YouShouldMeetTrainer
	.globl gText_Rom_24DEB6
gText_Rom_24DEB6: @ 0x0824DEB6
	.string "そっか!\nこんど {STR_VAR_1}に あってみてよ!\lきみも きっと ファンに なっちゃうよ!$"
	.if (. - gText_Rom_24DEB6) > 0x2a
	.error "gText_Rom_24DEB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DEB6) < 0x2a
	.space 0x2a - (. - gText_Rom_24DEB6)
	.endif
