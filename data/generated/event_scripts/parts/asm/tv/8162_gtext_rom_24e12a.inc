	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+12 aliases)
	.globl gText_Rom_24E12A
gText_Rom_24E12A: @ 0x0824E12A
	.string "いやー　なるほど！\p{0xFD}{0x02}さんに　ついて\nあたらしい　はっけんが　ありましたね！\pでは　さいごに　{0xFD}{0x03}さんの\nことばで　おわかれ　しましょう！\p{0xFD}{0x02}　{0xFD}{0x04}！$"
	.if (. - gText_Rom_24E12A) > 0x4e
	.error "gText_Rom_24E12A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E12A) < 0x4e
	.space 0x4e - (. - gText_Rom_24E12A)
	.endif
