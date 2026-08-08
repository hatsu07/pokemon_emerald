	@ data/maps/BattleFrontier_Lounge1/scripts.inc:153 BattleFrontier_Lounge1_Text_PokemonBreederIntro
	.globl gText_Rom_235736
gText_Rom_235736: @ 0x08235736
	.string "わしは ポケモン そだてて 70ねん!\nでんせつの ポケモントップブリーダーと\lあがめられる おとこ じゃ!\pわしくらいに なると ポケモンの\nのうりょくが ひとめで わかるんじゃぞっ!\pおまえさんも トレーナーなら\nじぶんの ポケモンの のうりょくが\lきになる じゃろ?\pほれ! わしに ポケモンを みせて みいっ!"
	.byte EOS
	.if (. - gText_Rom_235736) > 0xa0
	.error "gText_Rom_235736 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235736) < 0xa0
	.space 0xa0 - (. - gText_Rom_235736)
	.endif
