	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252C41
gText_Rom_252C41: @ 0x08252C41
	.string "それでは　さいごに　みなさんと　ごいっしょに\n{0xFD}{0x02}さんと　{0xFD}{0x03}に\lひとこと　おくりたいと　おもいます\pしかい『みなさん　いいですかー？　せーの\pみんな『{0xFD}{0x02}さん！　{0xFD}{0x03}！\nコンテスト　ゆうしょう　おめでとうー！"
	.byte EOS
	.if (. - gText_Rom_252C41) > 0x6a
	.error "gText_Rom_252C41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252C41) < 0x6a
	.space 0x6a - (. - gText_Rom_252C41)
	.endif
