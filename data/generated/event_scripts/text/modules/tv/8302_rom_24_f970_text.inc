	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gText_Rom_24F970
gText_Rom_24F970: @ 0x0824F970
	.string "ろうじん『{0xFD}{0x02}　{0xFD}{0x03}　は\nミシロから　きた　{0xFD}{0x04}くんが\lおしえて　くれたの　じゃがのう……$"
	.if (. - gText_Rom_24F970) > 0x2e
	.error "gText_Rom_24F970 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F970) < 0x2e
	.space 0x2e - (. - gText_Rom_24F970)
	.endif
