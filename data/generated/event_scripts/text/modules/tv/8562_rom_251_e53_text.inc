	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251E53
gText_Rom_251E53: @ 0x08251E53
	.string "{0xFD}{0x02}さんと　はなしています！\pどうやら　ポケモンバトルを　やるようです\pそして……\pいや　ことわった！\pたいせんを　ことわりました！\p{0xFD}{0x02}さんの　ことが\nきに　いらなかった　のでしょうか？$"
	.if (. - gText_Rom_251E53) > 0x5f
	.error "gText_Rom_251E53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251E53) < 0x5f
	.space 0x5f - (. - gText_Rom_251E53)
	.endif
