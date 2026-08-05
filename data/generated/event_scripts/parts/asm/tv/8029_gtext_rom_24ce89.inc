	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gText_Rom_24CE89
gText_Rom_24CE89: @ 0x0824CE89
	.string "なし$"
	.if (. - gText_Rom_24CE89) > 0x3
	.error "gText_Rom_24CE89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CE89) < 0x3
	.space 0x3 - (. - gText_Rom_24CE89)
	.endif
