	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CBE0
gText_Rom_24CBE0: @ 0x0824CBE0
	.string "イヤー！\n『ブラボー　トレーナー』の　じかんだ！\pきょうは　バトルタワーに　ちょうせんした\n{0xFD}{0x02}さんの　しょうかいだー！\p{0xFD}{0x02}さんは　{0xFD}{0x03}を\nつかった　たたかいをして$"
	.if (. - gText_Rom_24CBE0) > 0x54
	.error "gText_Rom_24CBE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CBE0) < 0x54
	.space 0x54 - (. - gText_Rom_24CBE0)
	.endif
