	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_2527DE
gText_Rom_2527DE: @ 0x082527DE
	.string "{0xFD}{0x03}！\nかしこかった　よー！$"
	.if (. - gText_Rom_2527DE) > 0xf
	.error "gText_Rom_2527DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2527DE) < 0xf
	.space 0xf - (. - gText_Rom_2527DE)
	.endif
