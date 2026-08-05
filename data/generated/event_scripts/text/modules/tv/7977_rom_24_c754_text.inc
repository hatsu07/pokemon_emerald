	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gText_Rom_24C754
gText_Rom_24C754: @ 0x0824C754
	.string "イヤー！\n『ブラボー　トレーナー』の　じかんだ！\pきょうは　{0xFD}{0x04}クラスの\n{0xFD}{0x03}を　ほこる\l{0xFD}{0x02}さんの　ポケモン！$"
	.if (. - gText_Rom_24C754) > 0x39
	.error "gText_Rom_24C754 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C754) < 0x39
	.space 0x39 - (. - gText_Rom_24C754)
	.endif
