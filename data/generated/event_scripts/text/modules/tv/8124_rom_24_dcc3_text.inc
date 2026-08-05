	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gText_Rom_24DCC3
gText_Rom_24DCC3: @ 0x0824DCC3
	.string "ゴクリン『グビィ！　グビィ！\pしかい『おお！　とっても　{0xFD}{0x02}くて\n「{0xFD}{0x03}！」と　いってますね\pきっと　これは　{0xFD}{0x04}さんが\nがんばって　まわした　おかげですね！\p{0xFD}{0x04}さん！\nごちそうさま　でした！$"
	.if (. - gText_Rom_24DCC3) > 0x62
	.error "gText_Rom_24DCC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DCC3) < 0x62
	.space 0x62 - (. - gText_Rom_24DCC3)
	.endif
