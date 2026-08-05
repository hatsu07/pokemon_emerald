	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gText_Rom_250830
gText_Rom_250830: @ 0x08250830
	.string "{0xFD}{0x02}は　そのほかに……$"
	.if (. - gText_Rom_250830) > 0xc
	.error "gText_Rom_250830 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250830) < 0xc
	.space 0xc - (. - gText_Rom_250830)
	.endif
