	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+27 aliases)
	.globl gText_Rom_2510DD
gText_Rom_2510DD: @ 0x082510DD
	.string "とくに　がんばりやで　もらった\nがんばリボンが　おにあい　ざますね\p{0xFD}{0x03}の　がんばりぶりを\nとっても　ひきたたせている　ざますよー\p{0xFD}{0x03}に　がんばリボン！\nこうかは　ばつぐん　ざます！$"
	.if (. - gText_Rom_2510DD) > 0x5d
	.error "gText_Rom_2510DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2510DD) < 0x5d
	.space 0x5d - (. - gText_Rom_2510DD)
	.endif
