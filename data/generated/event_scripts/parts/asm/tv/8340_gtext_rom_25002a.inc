	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+22 aliases)
	.globl gText_Rom_25002A
gText_Rom_25002A: @ 0x0825002A
	.string "レア　{0xFD}{0x03}に　であった\n{0xFD}{0x02}さんは\l{0xFD}{0x04}で　たたかいを　いどみました$"
	.if (. - gText_Rom_25002A) > 0x23
	.error "gText_Rom_25002A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25002A) < 0x23
	.space 0x23 - (. - gText_Rom_25002A)
	.endif
