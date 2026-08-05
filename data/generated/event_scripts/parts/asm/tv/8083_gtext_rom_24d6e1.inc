	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gText_Rom_24D6E1
gText_Rom_24D6E1: @ 0x0824D6E1
	.string "きにいったから　もういちど！$"
	.if (. - gText_Rom_24D6E1) > 0xf
	.error "gText_Rom_24D6E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D6E1) < 0xf
	.space 0xf - (. - gText_Rom_24D6E1)
	.endif
