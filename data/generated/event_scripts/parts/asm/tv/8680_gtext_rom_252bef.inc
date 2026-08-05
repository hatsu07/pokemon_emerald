	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252BEF
gText_Rom_252BEF: @ 0x08252BEF
	.string "{0xFD}{0x02}さん　なりに　がんばって\nいたのですが……\pけっかてきに　ビリに　なってしまいました\p{0xFD}{0x02}さんには　まけた　りゆうを\nかんがえて　つぎに　つなげて　ほしいです"
	.byte EOS
	.if (. - gText_Rom_252BEF) > 0x52
	.error "gText_Rom_252BEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252BEF) < 0x52
	.space 0x52 - (. - gText_Rom_252BEF)
	.endif
