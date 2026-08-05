	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gText_Rom_24DD25
gText_Rom_24DD25: @ 0x0824DD25
	.string "こんかい　いまいち　だった\n{0xFD}{0x02}さんが\lもっと　じょうずに　まわすことが　できれば\lさらに　おいしく　なるかも　しれませんよ！$"
	.if (. - gText_Rom_24DD25) > 0x40
	.error "gText_Rom_24DD25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DD25) < 0x40
	.space 0x40 - (. - gText_Rom_24DD25)
	.endif
