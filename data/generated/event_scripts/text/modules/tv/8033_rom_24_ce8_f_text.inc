	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gText_Rom_24CE8F
gText_Rom_24CE8F: @ 0x0824CE8F
	.string "なし$"
	.if (. - gText_Rom_24CE8F) > 0x3
	.error "gText_Rom_24CE8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CE8F) < 0x3
	.space 0x3 - (. - gText_Rom_24CE8F)
	.endif
