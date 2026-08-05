	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+17 aliases)
	.globl gText_Rom_24F46B
gText_Rom_24F46B: @ 0x0824F46B
	.string "『めいじんの　せかい』\pみなさん　こんにちは\pみなさんは　{0xFD}{0x02}さん　という\nトレーナーを　しってますか？\p{0xFD}{0x02}さんは　ポケモンを　つかまえる\nめいじん　として　ゆうめい　なんです\p{0xFD}{0x02}さんの　ポケモンさがしは\nあるきまわる　ところから　はじまります\pこのまえは　ポケモンを　さがすために\n1にちで　{0xFD}{0x03}ほ　いじょうも　あるき\pつかまえた　ポケモンの　かずは\nなんと　{0xFD}{0x04}　ひきにも　なったとか！$"
	.if (. - gText_Rom_24F46B) > 0xc6
	.error "gText_Rom_24F46B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F46B) < 0xc6
	.space 0xc6 - (. - gText_Rom_24F46B)
	.endif
