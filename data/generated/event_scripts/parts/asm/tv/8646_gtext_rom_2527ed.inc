	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_2527ED
gText_Rom_2527ED: @ 0x082527ED
	.string "{0xFD}{0x03}！\nたくましかった　よー！$"
	.if (. - gText_Rom_2527ED) > 0x10
	.error "gText_Rom_2527ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2527ED) < 0x10
	.space 0x10 - (. - gText_Rom_2527ED)
	.endif
