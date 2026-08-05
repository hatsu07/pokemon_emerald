	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+11 aliases)
	.globl gText_Rom_252DAB
gText_Rom_252DAB: @ 0x08252DAB
	.string "{0xFD}{0x02}さん　チーム　たい\n{0xFD}{0x03}さん　チームの\lマルチバトルの　けっかは……\p{0xFD}{0x02}さん　チームが\nしょうり　しました"
	.byte EOS
	.if (. - gText_Rom_252DAB) > 0x39
	.error "gText_Rom_252DAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252DAB) < 0x39
	.space 0x39 - (. - gText_Rom_252DAB)
	.endif
