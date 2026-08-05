	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_2527B1
gText_Rom_2527B1: @ 0x082527B1
	.string "{0xFD}{0x03}！\nかっこよかった　よー！$"
	.if (. - gText_Rom_2527B1) > 0x10
	.error "gText_Rom_2527B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2527B1) < 0x10
	.space 0x10 - (. - gText_Rom_2527B1)
	.endif
