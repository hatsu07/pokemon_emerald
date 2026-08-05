	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+22 aliases)
	.globl gText_Rom_24FF11
gText_Rom_24FF11: @ 0x0824FF11
	.string "レア　{0xFD}{0x03}に　であった\n{0xFD}{0x02}さんは\l{0xFD}{0x04}で　たたかいを　いどみました！\pそして……$"
	.if (. - gText_Rom_24FF11) > 0x2a
	.error "gText_Rom_24FF11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FF11) < 0x2a
	.space 0x2a - (. - gText_Rom_24FF11)
	.endif
