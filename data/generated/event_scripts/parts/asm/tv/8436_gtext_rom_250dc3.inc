	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+27 aliases)
	.globl gText_Rom_250DC3
gText_Rom_250DC3: @ 0x08250DC3
	.string "とくに　かっこよさ　コンテストで　もらった\nクールリボンが　おにあい　ざますね\p{0xFD}{0x03}の　かっこよさを\nとっても　ひきたたせている　ざますよー\p{0xFD}{0x03}に　クールリボン！\nこうかは　ばつぐん　ざます！$"
	.if (. - gText_Rom_250DC3) > 0x62
	.error "gText_Rom_250DC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250DC3) < 0x62
	.space 0x62 - (. - gText_Rom_250DC3)
	.endif
