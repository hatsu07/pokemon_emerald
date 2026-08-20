	@ data/maps/RustboroCity_Gym/scripts.inc:186 RustboroCity_Gym_Text_RoxanneDefeat (+1 aliases)
	.globl gText_Rom_2027A3
gText_Rom_2027A3: @ 0x082027A3
	.string "わたくし まけたのね……\pもっと おおくの ことを\nまなぶ ひつようが あるみたい……\pわかりましたわ\pポケモンリーグの きまりでは\nジムリーダーに かった トレーナーに\lこれを わたすことに なっています\pどうぞ ポケモンリーグ こうにんの\nストーンバッジ うけとって ください{EOS}"
	.if (. - gText_Rom_2027A3) > 0x8d
	.error "gText_Rom_2027A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2027A3) < 0x8d
	.space 0x8d - (. - gText_Rom_2027A3)
	.endif
