	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+11 aliases)
	.globl gText_Rom_252CDF
gText_Rom_252CDF: @ 0x08252CDF
	.string "{0xFD}{0x02}さん　たい\n{0xFD}{0x03}さんの　{0xFD}{0x04}バトルは……\p{0xFD}{0x02}さんが\nしょうり　しました！"
	.byte EOS
	.if (. - gText_Rom_252CDF) > 0x28
	.error "gText_Rom_252CDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252CDF) < 0x28
	.space 0x28 - (. - gText_Rom_252CDF)
	.endif
