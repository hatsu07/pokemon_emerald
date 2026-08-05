	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F811
gText_Rom_24F811: @ 0x0824F811
	.string "{0xFD}{0x02}さんの　ようすは\nみなさんと　くらべて　いかが　でしたか？\pまだまだ　ぼうけんは　つづきます\pトレーナーの　みなさん！\pライバルたちに　まけずに\nがんばって　くださいねー！$"
	.if (. - gText_Rom_24F811) > 0x59
	.error "gText_Rom_24F811 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F811) < 0x59
	.space 0x59 - (. - gText_Rom_24F811)
	.endif
