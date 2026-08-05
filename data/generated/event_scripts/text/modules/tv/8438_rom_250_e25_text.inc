	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+27 aliases)
	.globl gText_Rom_250E25
gText_Rom_250E25: @ 0x08250E25
	.string "とくに　うつくしさ　コンテストで　もらった\nビューティリボンが　おにあい　ざますね\p{0xFD}{0x03}の　うつくしさを\nとっても　ひきたたせている　ざますよー\p{0xFD}{0x03}に　ビューティリボン！\nこうかは　ばつぐん　ざます！$"
	.if (. - gText_Rom_250E25) > 0x66
	.error "gText_Rom_250E25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250E25) < 0x66
	.space 0x66 - (. - gText_Rom_250E25)
	.endif
