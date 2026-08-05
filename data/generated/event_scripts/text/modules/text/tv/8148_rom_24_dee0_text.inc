	@ data/text/tv.inc:199 LilycoveCity_PokemonTrainerFanClub_Text_ThankYouIllShareThisInfo
	.globl gText_Rom_24DEE0
gText_Rom_24DEE0: @ 0x0824DEE0
	.string "そうなんだー!\pありがとう!\nとっても さんこうに なったよ!\pさっそく {STR_VAR_1}の ファン みんなで\nこの ことに ついて はなしあって みるよ!$"
	.if (. - gText_Rom_24DEE0) > 0x49
	.error "gText_Rom_24DEE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DEE0) < 0x49
	.space 0x49 - (. - gText_Rom_24DEE0)
	.endif
