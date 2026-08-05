	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251E17
gText_Rom_251E17: @ 0x08251E17
	.string "{0xFD}{0x02}さんと　はなしています！\pどうやら　ポケモンバトルを　やるようです\pそして……\pまけたー！！\pがっかり　しています$"
	.if (. - gText_Rom_251E17) > 0x3c
	.error "gText_Rom_251E17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251E17) < 0x3c
	.space 0x3c - (. - gText_Rom_251E17)
	.endif
