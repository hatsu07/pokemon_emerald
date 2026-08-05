	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E3B7
gText_Rom_24E3B7: @ 0x0824E3B7
	.string "とても　かつどうてきな　ポケモンに\nなる　よい　ニックネーム　ですなぁ！\pポケモンしょうぶ　では\nおおいに　かつやく　すると　おもいますよ$"
	.if (. - gText_Rom_24E3B7) > 0x46
	.error "gText_Rom_24E3B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E3B7) < 0x46
	.space 0x46 - (. - gText_Rom_24E3B7)
	.endif
