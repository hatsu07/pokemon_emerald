	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_2508F1
gText_Rom_2508F1: @ 0x082508F1
	.string "せーの！\n『トレーナー　だいすき　クラブ！！』\pしかい『みんなー　げんきかーい！？\nきょうは　いま　だいにんきの　トレーナー\l{0xFD}{0x02}さんの　ファンに\lあつまって　もらったよ！\pファン『ワアアアアアアアアアーーー！\pファン『{0xFD}{0x02}さまーーーー！\pしかい『みんなー！\n{0xFD}{0x02}さんの　ことは　すきかいー？\pファン『だいすきー！！\pしかい『どんな　ところがー？$"
	.if (. - gText_Rom_2508F1) > 0xae
	.error "gText_Rom_2508F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2508F1) < 0xae
	.space 0xae - (. - gText_Rom_2508F1)
	.endif
