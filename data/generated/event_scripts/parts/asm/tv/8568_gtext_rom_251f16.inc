	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251F16
gText_Rom_251F16: @ 0x08251F16
	.string "{0xFD}{0x02}さんと　はなしています！\pどうやら　ポケモンバトルを　やるようです\pそして……\pひきわけたー！\pふたりとも　とっても　くやしそうです$"
	.if (. - gText_Rom_251F16) > 0x45
	.error "gText_Rom_251F16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251F16) < 0x45
	.space 0x45 - (. - gText_Rom_251F16)
	.endif
