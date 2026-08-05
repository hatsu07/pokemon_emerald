	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E5A9
gText_Rom_24E5A9: @ 0x0824E5A9
	.string "もとの　ポケモンの　なまえ\n{0xFD}{0x03}から　すこし　もらって\p「{0xFD}{0x02}{0xFD}{0x04}」や$"
	.if (. - gText_Rom_24E5A9) > 0x24
	.error "gText_Rom_24E5A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E5A9) < 0x24
	.space 0x24 - (. - gText_Rom_24E5A9)
	.endif
