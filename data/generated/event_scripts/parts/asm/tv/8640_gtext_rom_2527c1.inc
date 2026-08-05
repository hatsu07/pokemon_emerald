	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_2527C1
gText_Rom_2527C1: @ 0x082527C1
	.string "{0xFD}{0x03}\nうつくしかった　よー！$"
	.if (. - gText_Rom_2527C1) > 0xf
	.error "gText_Rom_2527C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2527C1) < 0xf
	.space 0xf - (. - gText_Rom_2527C1)
	.endif
