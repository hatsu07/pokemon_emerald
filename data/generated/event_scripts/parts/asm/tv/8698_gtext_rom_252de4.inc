	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+11 aliases)
	.globl gText_Rom_252DE4
gText_Rom_252DE4: @ 0x08252DE4
	.string "バトルは　{0xFD}{0x02}さん　チームの\n{0xFD}{0x03}が　{0xFD}{0x04}を　つかって\lだいかつやく　しました！"
	.byte EOS
	.if (. - gText_Rom_252DE4) > 0x29
	.error "gText_Rom_252DE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252DE4) < 0x29
	.space 0x29 - (. - gText_Rom_252DE4)
	.endif
