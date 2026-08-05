	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gText_Rom_24C7C7
gText_Rom_24C7C7: @ 0x0824C7C7
	.string "さーて　この　{0xFD}{0x02}さんが\nポケモンコンテストに　さんか　したとき\pじぶんの　ポケモンに　ついて\nあつく　はなして　くれたぞ！$"
	.if (. - gText_Rom_24C7C7) > 0x3f
	.error "gText_Rom_24C7C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C7C7) < 0x3f
	.space 0x3f - (. - gText_Rom_24C7C7)
	.endif
