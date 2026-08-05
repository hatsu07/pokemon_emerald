	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CE92
gText_Rom_24CE92: @ 0x0824CE92
	.string "その　ことばは\n「{0xFD}{0x02}！」$"
	.if (. - gText_Rom_24CE92) > 0xe
	.error "gText_Rom_24CE92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CE92) < 0xe
	.space 0xe - (. - gText_Rom_24CE92)
	.endif
