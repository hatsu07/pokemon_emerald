	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gText_Rom_24F99E
gText_Rom_24F99E: @ 0x0824F99E
	.string "ろうじん『{0xFD}{0x02}　{0xFD}{0x03}　は\nミシロから　きた　{0xFD}{0x04}ちゃんが\lおしえて　くれたの　じゃがのう……$"
	.if (. - gText_Rom_24F99E) > 0x2f
	.error "gText_Rom_24F99E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F99E) < 0x2f
	.space 0x2f - (. - gText_Rom_24F99E)
	.endif
