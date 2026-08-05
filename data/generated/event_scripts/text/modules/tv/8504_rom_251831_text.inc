	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+29 aliases)
	.globl gText_Rom_251831
gText_Rom_251831: @ 0x08251831
	.string "{0xFD}{0x02}さんは　きのみを\nいちにちで　{0xFD}{0x03}　こ　うえました！\p{0xFD}{0x02}さんの\nふくは　まっくろに　なりましたが……\pきのみを　うえた　ところには\nきれいな　はなが　たくさん　さきほこり\lみる　ひとの　こころを\lなごませている　そうですよ！$"
	.if (. - gText_Rom_251831) > 0x74
	.error "gText_Rom_251831 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251831) < 0x74
	.space 0x74 - (. - gText_Rom_251831)
	.endif
