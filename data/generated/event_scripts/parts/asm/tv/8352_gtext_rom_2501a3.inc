	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+22 aliases)
	.globl gText_Rom_2501A3
gText_Rom_2501A3: @ 0x082501A3
	.string "いやー　{0xFD}{0x02}さん！\nざんねん　でした……\lわたしも　いっしょに　さけびたいです\p……いじょう\nかなしみ　いっぱいの　げんばより\lおつたえ　しました……！$"
	.if (. - gText_Rom_2501A3) > 0x4d
	.error "gText_Rom_2501A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2501A3) < 0x4d
	.space 0x4d - (. - gText_Rom_2501A3)
	.endif
