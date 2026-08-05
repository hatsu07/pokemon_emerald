	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251ADA
gText_Rom_251ADA: @ 0x08251ADA
	.string "{0xFD}{0x03}さんは\n{0xFD}{0x02}さんの　ひみつきちマニアに\lなった　ようですね$"
	.if (. - gText_Rom_251ADA) > 0x20
	.error "gText_Rom_251ADA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251ADA) < 0x20
	.space 0x20 - (. - gText_Rom_251ADA)
	.endif
