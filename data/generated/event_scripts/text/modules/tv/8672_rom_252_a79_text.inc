	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252A79
gText_Rom_252A79: @ 0x08252A79
	.string "1じしんさで　いちばん　だったのに\n2じしんさの　アピールが　うまくいかず\lぎゃくてん　まけを　してしまいました\pきっと　いまごろ　{0xFD}{0x02}さんは\nアピールに　ついて\lべんきょう　していると　おもいます"
	.byte EOS
	.if (. - gText_Rom_252A79) > 0x64
	.error "gText_Rom_252A79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252A79) < 0x64
	.space 0x64 - (. - gText_Rom_252A79)
	.endif
