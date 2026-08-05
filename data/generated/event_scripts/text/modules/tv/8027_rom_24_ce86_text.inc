	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gText_Rom_24CE86
gText_Rom_24CE86: @ 0x0824CE86
	.string "なし$"
	.if (. - gText_Rom_24CE86) > 0x3
	.error "gText_Rom_24CE86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CE86) < 0x3
	.space 0x3 - (. - gText_Rom_24CE86)
	.endif
