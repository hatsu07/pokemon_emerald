	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+27 aliases)
	.globl gText_Rom_250D5F
gText_Rom_250D5F: @ 0x08250D5F
	.string "とくに　でんどういりの　きねんで　もらった\nチャンプリボンが　おにあい　ざますね\p{0xFD}{0x03}の　ゆうかんさを\nとっても　ひきたたせている　ざますよー\p{0xFD}{0x03}に　チャンプリボン！\nこうかは　ばつぐん　ざます！$"
	.if (. - gText_Rom_250D5F) > 0x64
	.error "gText_Rom_250D5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250D5F) < 0x64
	.space 0x64 - (. - gText_Rom_250D5F)
	.endif
