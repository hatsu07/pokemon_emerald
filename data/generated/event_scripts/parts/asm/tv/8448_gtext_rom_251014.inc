	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+27 aliases)
	.globl gText_Rom_251014
gText_Rom_251014: @ 0x08251014
	.string "とくに　バトルタワーで　もらった\nビクトリーリボンが　おにあい　ざますね\p{0xFD}{0x03}の　ものすごい　つよさを\nとっても　ひきたたせている　ざますよー\p{0xFD}{0x03}に　ビクトリーリボン！\nこうかは　ばつぐん　ざます！$"
	.if (. - gText_Rom_251014) > 0x65
	.error "gText_Rom_251014 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251014) < 0x65
	.space 0x65 - (. - gText_Rom_251014)
	.endif
