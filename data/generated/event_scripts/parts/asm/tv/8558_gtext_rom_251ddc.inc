	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251DDC
gText_Rom_251DDC: @ 0x08251DDC
	.string "{0xFD}{0x02}さんと　はなしています！\pどうやら　ポケモンバトルを　やるようです\pそして……\pかったー！！\pうれしがっています$"
	.if (. - gText_Rom_251DDC) > 0x3b
	.error "gText_Rom_251DDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251DDC) < 0x3b
	.space 0x3b - (. - gText_Rom_251DDC)
	.endif
