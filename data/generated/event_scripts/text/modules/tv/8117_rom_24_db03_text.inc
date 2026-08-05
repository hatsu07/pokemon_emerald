	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gText_Rom_24DB03
gText_Rom_24DB03: @ 0x0824DB03
	.string "{0xFD}{0x02}さんは　とても　いい\nおはなしを　きかせて　くれましたね\pこれで　あなたの　こころにも\n{0xFD}{0x02}さん　という　ストーリーが\lきざみ　こまれましたよ\pそれでは　また　じかいの\nほうそうで　おあいしましょう$"
	.if (. - gText_Rom_24DB03) > 0x66
	.error "gText_Rom_24DB03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DB03) < 0x66
	.space 0x66 - (. - gText_Rom_24DB03)
	.endif
