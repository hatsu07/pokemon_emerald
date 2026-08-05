	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+11 aliases)
	.globl gText_Rom_252D07
gText_Rom_252D07: @ 0x08252D07
	.string "バトルは　{0xFD}{0x02}さんの\n{0xFD}{0x03}が　{0xFD}{0x04}を　つかって\lだいかつやく　しました！"
	.byte EOS
	.if (. - gText_Rom_252D07) > 0x25
	.error "gText_Rom_252D07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252D07) < 0x25
	.space 0x25 - (. - gText_Rom_252D07)
	.endif
