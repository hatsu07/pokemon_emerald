	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E5E9
gText_Rom_24E5E9: @ 0x0824E5E9
	.string "まちがっても　ほかの　ポケモンの　なまえ\nたとえば　{0xFD}{0x03}の　なまえを　つけて\p「{0xFD}{0x02}{0xFD}{0x04}」の　ような\nニックネームに　しては　いけませんな$"
	.if (. - gText_Rom_24E5E9) > 0x46
	.error "gText_Rom_24E5E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E5E9) < 0x46
	.space 0x46 - (. - gText_Rom_24E5E9)
	.endif
