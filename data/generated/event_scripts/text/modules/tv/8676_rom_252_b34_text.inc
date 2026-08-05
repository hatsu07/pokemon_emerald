	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252B34
gText_Rom_252B34: @ 0x08252B34
	.string "{0xFD}{0x02}さんの　{0xFD}{0x03}と\nちょっとの　さで　まけて　しまいました\pあと　すこしで　ゆうしょう　だったのに\nとっても　ざんねんです\pいまごろ　{0xFD}{0x04}さんは\nないていると　おもいます"
	.byte EOS
	.if (. - gText_Rom_252B34) > 0x56
	.error "gText_Rom_252B34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252B34) < 0x56
	.space 0x56 - (. - gText_Rom_252B34)
	.endif
