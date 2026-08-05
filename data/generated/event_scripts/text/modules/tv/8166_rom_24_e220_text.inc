	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E220
gText_Rom_24E220: @ 0x0824E220
	.string "いろいろな　ところで　さいのうを\nはっき　できる　ニックネーム　ですなぁ！\pこんご　いろいろな　ことに\nチャレンジ　すると　よいと　おもいますよ$"
	.if (. - gText_Rom_24E220) > 0x49
	.error "gText_Rom_24E220 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E220) < 0x49
	.space 0x49 - (. - gText_Rom_24E220)
	.endif
