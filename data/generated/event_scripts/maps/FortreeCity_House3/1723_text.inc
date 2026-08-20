	@ data/maps/FortreeCity_House3/scripts.inc:12 FortreeCity_House3_Text_MetStevenHadAmazingPokemon
	.globl gText_Rom_2050E3
gText_Rom_2050E3: @ 0x082050E3
	.string "ポケモンずかんで\nおもいだした ことが あるよ\pめずらしい いしを さがしてるとき\nダイゴって トレーナーと であったけど\lあいつの ポケモン すごいね!\pめずらしい だけでなく\nおそろしいほど きたえられてた!\pもしかしたら この まちの\nジムリーダーよりも つよいかも……{EOS}"
	.if (. - gText_Rom_2050E3) > 0x8b
	.error "gText_Rom_2050E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2050E3) < 0x8b
	.space 0x8b - (. - gText_Rom_2050E3)
	.endif
