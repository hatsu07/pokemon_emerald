	@ data/text/tv.inc:181 LilycoveCity_PokemonTrainerFanClub_Text_ThatsWhatYouThink
	.globl gText_Rom_24DE37
gText_Rom_24DE37: @ 0x0824DE37
	.string "なるほどねー\nそんな ふうに おもっているんだね!$"
	.if (. - gText_Rom_24DE37) > 0x1a
	.error "gText_Rom_24DE37 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DE37) < 0x1a
	.space 0x1a - (. - gText_Rom_24DE37)
	.endif
