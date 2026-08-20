	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:608 LilycoveCity_PokemonTrainerFanClub_Text_WeDiscussStrongestTrainers
	.globl gText_Rom_208F49
gText_Rom_208F49: @ 0x08208F49
	.string "ここにいる みんなは\nポケモンしょうぶが だいすきでね\pだれが いちばん つよい トレーナーか\nはなしを して いるんだ！\pきみも ゆうめいに なれば\nみんな ファンに なるかもな！{EOS}"
	.if (. - gText_Rom_208F49) > 0x5c
	.error "gText_Rom_208F49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208F49) < 0x5c
	.space 0x5c - (. - gText_Rom_208F49)
	.endif
