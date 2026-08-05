	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+27 aliases)
	.globl gText_Rom_250F51
gText_Rom_250F51: @ 0x08250F51
	.string "とくに　たくましさ　コンテストで　もらった\nパワフルリボンが　おにあい　ざますね\p{0xFD}{0x03}の　たくましさを\nとっても　ひきたたせている　ざますよー\p{0xFD}{0x03}に　パワフルリボン！\nこうかは　ばつぐん　ざます！$"
	.if (. - gText_Rom_250F51) > 0x64
	.error "gText_Rom_250F51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250F51) < 0x64
	.space 0x64 - (. - gText_Rom_250F51)
	.endif
