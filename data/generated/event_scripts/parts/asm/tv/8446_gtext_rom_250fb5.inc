	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+27 aliases)
	.globl gText_Rom_250FB5
gText_Rom_250FB5: @ 0x08250FB5
	.string "とくに　バトルタワーで　もらった\nウイニングリボンが　おにあい　ざますね\p{0xFD}{0x03}の　つよさを\nとっても　ひきたたせている　ざますよー\p{0xFD}{0x03}に　ウイニングリボン！\nこうかは　ばつぐん　ざます！$"
	.if (. - gText_Rom_250FB5) > 0x5f
	.error "gText_Rom_250FB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250FB5) < 0x5f
	.space 0x5f - (. - gText_Rom_250FB5)
	.endif
