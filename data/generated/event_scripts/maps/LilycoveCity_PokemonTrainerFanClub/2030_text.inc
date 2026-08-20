	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:626 LilycoveCity_PokemonTrainerFanClub_Text_WantToBeStrongLikeYou
	.globl gText_Rom_2090AC
gText_Rom_2090AC: @ 0x082090AC
	.string "あ！ {PLAYER}だー！\nすげー！\pぼくも おおきく なったら\n{PLAYER} みたいに つよく なりたいよ！{EOS}"
	.if (. - gText_Rom_2090AC) > 0x2f
	.error "gText_Rom_2090AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2090AC) < 0x2f
	.space 0x2f - (. - gText_Rom_2090AC)
	.endif
