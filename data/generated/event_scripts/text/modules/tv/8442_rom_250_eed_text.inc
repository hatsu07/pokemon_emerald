	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+27 aliases)
	.globl gText_Rom_250EED
gText_Rom_250EED: @ 0x08250EED
	.string "とくに　かしこさ　コンテストで　もらった\nジーニアスリボンが　おにあい　ざますね\p{0xFD}{0x03}の　かしこさを\nとっても　ひきたたせている　ざますよー\p{0xFD}{0x03}に　ジーニアスリボン！\nこうかは　ばつぐん　ざます！$"
	.if (. - gText_Rom_250EED) > 0x64
	.error "gText_Rom_250EED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250EED) < 0x64
	.space 0x64 - (. - gText_Rom_250EED)
	.endif
