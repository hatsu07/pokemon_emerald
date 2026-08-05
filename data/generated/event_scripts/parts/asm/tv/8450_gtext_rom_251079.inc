	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+27 aliases)
	.globl gText_Rom_251079
gText_Rom_251079: @ 0x08251079
	.string "とくに　えかきさん　から　もらった\nプロマイドリボンが　おにあい　ざますね\p{0xFD}{0x03}の　アイドルらしさを\nとっても　ひきたたせている　ざますよー\p{0xFD}{0x03}に　プロマイドリボン！\nこうかは　ばつぐん　ざます！$"
	.if (. - gText_Rom_251079) > 0x64
	.error "gText_Rom_251079 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251079) < 0x64
	.space 0x64 - (. - gText_Rom_251079)
	.endif
