	@ data/maps/LavaridgeTown/scripts.inc:320 LavaridgeTown_Text_HaveEggWillYouTakeIt
	.globl gText_Rom_1E5B4B
gText_Rom_1E5B4B: @ 0x081E5B4B
	.string "タマゴを かえそうと おもって\nすなぶろに いれて あたためていたが\lそれだけ じゃあ だめらしいの……\pなんでも げんきな ポケモンと いっしょに\nつれてあるいた ほうが いいそうな……\pおまえさん トレーナー じゃろ?\nしかも げんきな ポケモンを つれておる\pどうかね?\nタマゴを かえして みるかね?$"
	.if (. - gText_Rom_1E5B4B) > 0x9b
	.error "gText_Rom_1E5B4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5B4B) < 0x9b
	.space 0x9b - (. - gText_Rom_1E5B4B)
	.endif
