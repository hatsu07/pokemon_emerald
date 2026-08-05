	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+11 aliases)
	.globl gText_Rom_252D2C
gText_Rom_252D2C: @ 0x08252D2C
	.string "{0xFD}{0x02}さんに　とっては\n{0xFD}{0x03}が　ブレーキ　だったのが\lいたかった　ようです"
	.byte EOS
	.if (. - gText_Rom_252D2C) > 0x25
	.error "gText_Rom_252D2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252D2C) < 0x25
	.space 0x25 - (. - gText_Rom_252D2C)
	.endif
