	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251AB6
gText_Rom_251AB6: @ 0x08251AB6
	.string "{0xFD}{0x03}さんは\n{0xFD}{0x02}さんの　ひみつきちを\lとっても　たのしんだ　ようですね$"
	.if (. - gText_Rom_251AB6) > 0x24
	.error "gText_Rom_251AB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251AB6) < 0x24
	.space 0x24 - (. - gText_Rom_251AB6)
	.endif
