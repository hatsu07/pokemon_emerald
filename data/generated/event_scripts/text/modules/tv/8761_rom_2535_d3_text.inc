	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gText_Rom_2535D3
gText_Rom_2535D3: @ 0x082535D3
	.string "……わたくし　じしんを\nなくして　しまいました\pいっかいも　こうげきする　ひまもなく\nすぐに　まけて　しまいました\lああ　グスン……\pでも　{0xFD}{0x01}さんの　たたかいは\nいっけんのかち　あり　です！\pじしんの　ある　トレーナーは　いちど\nたたかって　みることを　おすすめ　しますよ！"
	.byte EOS
	.if (. - gText_Rom_2535D3) > 0x8b
	.error "gText_Rom_2535D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2535D3) < 0x8b
	.space 0x8b - (. - gText_Rom_2535D3)
	.endif
