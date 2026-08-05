	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_2527D0
gText_Rom_2527D0: @ 0x082527D0
	.string "{0xFD}{0x03}\nかわいかった　よー！$"
	.if (. - gText_Rom_2527D0) > 0xe
	.error "gText_Rom_2527D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2527D0) < 0xe
	.space 0xe - (. - gText_Rom_2527D0)
	.endif
