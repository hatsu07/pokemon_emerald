	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+22 aliases)
	.globl gText_Rom_25004D
gText_Rom_25004D: @ 0x0825004D
	.string "そして……\p{0xFD}{0x03}に　{0xFD}{0x02}　などを\nめいれい　している　うちに\lきが　つくと　たおしていた　のです……$"
	.if (. - gText_Rom_25004D) > 0x33
	.error "gText_Rom_25004D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25004D) < 0x33
	.space 0x33 - (. - gText_Rom_25004D)
	.endif
