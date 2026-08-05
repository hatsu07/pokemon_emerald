	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_25158B
gText_Rom_25158B: @ 0x0825158B
	.string "{0xFD}{0x02}！\p{0xFD}{0x03}！\p{0xFD}{0x04}！$"
	.if (. - gText_Rom_25158B) > 0xc
	.error "gText_Rom_25158B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25158B) < 0xc
	.space 0xc - (. - gText_Rom_25158B)
	.endif
