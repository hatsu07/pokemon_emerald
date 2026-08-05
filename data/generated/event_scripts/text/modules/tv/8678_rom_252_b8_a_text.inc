	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252B8A
gText_Rom_252B8A: @ 0x08252B8A
	.string "おなじ　アピールを　つづけて　しんさいんに\nがっかりされて　しまいました\pコンテストで　やっては　いけない\nミスを　したのが　いたかったですね\pいまごろ　{0xFD}{0x02}さんは\nじぶんを　せめていると　おもいます"
	.byte EOS
	.if (. - gText_Rom_252B8A) > 0x65
	.error "gText_Rom_252B8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252B8A) < 0x65
	.space 0x65 - (. - gText_Rom_252B8A)
	.endif
