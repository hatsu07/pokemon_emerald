	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+27 aliases)
	.globl gText_Rom_250E8B
gText_Rom_250E8B: @ 0x08250E8B
	.string "とくに　かわいさ　コンテストで　もらった\nキュートリボンが　おにあい　ざますね\p{0xFD}{0x03}の　かわいさを\nとっても　ひきたたせている　ざますよー\p{0xFD}{0x03}に　キュートリボン！\nこうかは　ばつぐん　ざます！$"
	.if (. - gText_Rom_250E8B) > 0x62
	.error "gText_Rom_250E8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250E8B) < 0x62
	.space 0x62 - (. - gText_Rom_250E8B)
	.endif
